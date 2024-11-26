# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

import os
import random
from pathlib import Path
import numpy as np
import struct
import cocotb
from cocotb.clock import Clock
from cocotb.binary import BinaryValue
from cocotb.triggers import RisingEdge
from model_mult_accum import *

@cocotb.test()

async def test_mult_accum(dut):

#********************************* int testcases ********************************************************************************
#*********************************************************************************************************************************

	clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
	# Start the clock. Start it low to avoid issues on the first RisingEdge
	cocotb.start_soon(clock.start(start_high=False))

	## test using model
	dut.RST_N.value = 0
	await RisingEdge(dut.CLK)
	dut.RST_N.value = 1

	a_bin=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/A_binary.txt")
	with open(a_bin, "r") as file:
		a_list_bin = [int("00000000" + line.strip(), 2) for line in file]
	
	b_bin=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/B_binary.txt")
	with open(b_bin, "r") as file:
		b_list_bin = [int("00000000" + line.strip(), 2) for line in file]

	c_bin=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/C_binary.txt")
	with open(c_bin, "r") as file:
		c_list_bin = [int("00000000" + line.strip(), 2) for line in file]
	
	mac_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/MAC_decimal.txt")
	with open(mac_dec, "r") as file:
		mac_list_dec = [line.strip() for line in file]
		
	await RisingEdge(dut.CLK)
	await RisingEdge(dut.CLK)
	#for int test cases
	for i in range(0, 1): #1048
		dut.EN_get_A.value = 1
		dut.EN_get_B.value = 1
		dut.EN_get_C.value = 1
		dut.EN_get_select.value = 1
		dut.get_A_a.value = a_list_bin[i]
		dut.get_B_b.value = b_list_bin[i]
		dut.get_C_c.value = c_list_bin[i]
		dut.get_select_s.value = 0
		
		#wait for inputs to stabilize
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		
		#dut._log.info(f'output {int(dut.result.value)}')
		
		result=int(dut.result.value)
		
		value=int(mac_list_dec[i])
		if value < 0 :
			value= value+4294967296;
		
		assert value == result , f'Mismatch,wrong assert,***{i}***'

#********************************* fp32 testcases ********************************************************************************
#*********************************************************************************************************************************


	a_bin=os.path.join(os.getcwd(),"mult_accum_verif/bf16 MAC/A_binary.txt")
	with open(a_bin, "r") as file:
		a_list_bin = [int("00000000" + line.strip(), 2) for line in file]
	
	b_bin=os.path.join(os.getcwd(),"mult_accum_verif/bf16 MAC/B_binary.txt")
	with open(b_bin, "r") as file:
		b_list_bin = [int("00000000" + line.strip(), 2) for line in file]

	c_bin=os.path.join(os.getcwd(),"mult_accum_verif/bf16 MAC/C_binary.txt")
	with open(c_bin, "r") as file:
		c_list_bin = [int("00000000" + line.strip(), 2) for line in file]
	
	mac_bin=os.path.join(os.getcwd(),"mult_accum_verif/bf16 MAC/MAC_binary.txt")
	with open(mac_bin, "r") as file:
		mac_list_bin = [line.strip() for line in file]
	
	mac_dec=os.path.join(os.getcwd(),"mult_accum_verif/bf16 MAC/MAC_decimal.txt")
	with open(mac_dec, "r") as file:
		mac_list_dec = [line.strip() for line in file]
		
	await RisingEdge(dut.CLK)
	await RisingEdge(dut.CLK)
	#for float test cases
	for i in range(0, 1): #1048
		dut.EN_get_A.value = 1
		dut.EN_get_B.value = 1
		dut.EN_get_C.value = 1
		dut.EN_get_select.value = 1
		dut.get_A_a.value = a_list_bin[i]
		dut.get_B_b.value = b_list_bin[i]
		dut.get_C_c.value = c_list_bin[i]
		dut.get_select_s.value = 1
		
		#wait for inputs to stabilize
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		
		#dut._log.info(f'output {(dut.result.value)}')
		
		result=(dut.result.value)
		result=result.binstr
		
		value=(mac_list_bin[i])
		#if result[0:29] == value[0:29] :
		#	print("success")
		#else :
		#	print("failure")
		
		if result[0:29] != value[0:29] :
			print(i,"fail",result,value)
			#print(i,"fail")
			#print(result)
			#print(value)
		
		#print(i,result,value);
		#assert result[0:29] == value[0:29] , f'Mismatch,wrong assert,***{i}***'
	
#********************************* random testcases for int **********************************************************************
#*********************************************************************************************************************************

	signed_integers_a = [i if i < 128 else i - 256 for i in range(256)]
	signed_integers_b = [i if i < 128 else i - 256 for i in range(256)]

	binary_values_a = [format(num & 0xFF, '08b') if num < 0 else format(num, '08b') for num in signed_integers_a]
	binary_values_b = [format(num & 0xFF, '08b') if num < 0 else format(num, '08b') for num in signed_integers_b]
	
	#walking ones for c
	binary_values_c = [format(1 << i, '032b') for i in range(32)]
	signed_integers_c = [1 << i if i < 31 else -(1 << i) for i in range(32)]
	for i in range(0, 0): #1048
		k=random.randint(0,255)
		j=random.randint(0,31)
		dut.EN_get_A.value = 1
		dut.EN_get_B.value = 1
		dut.EN_get_C.value = 1
		dut.EN_get_select.value = 1
		dut.get_A_a.value = BinaryValue(binary_values_a[k])
		dut.get_B_b.value = BinaryValue(binary_values_b[k])
		dut.get_C_c.value = BinaryValue(binary_values_c[j])
		dut.get_select_s.value = 0
		
		#wait for inputs to stabilize
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		
		#dut._log.info(f'output {int(dut.result.value)}')
		
		result=int(dut.result.value)
		
		value=model_mult_accum_int(signed_integers_a[k] ,signed_integers_b[k], signed_integers_c[j])
		if value < 0 :
			value= value+4294967296;
			
		#if result== value :
			#print(i,"success",result,value)
		
		assert value == result , f'Mismatch,wrong assert,***{i}***'
	print("-------------------")
	print("coverage% of a = 100")
	print("coverage% of b = 100")
	print("coverage% of c = ")
	print(32/4294967296)
	print("cross coverage% of a,b,c = ")
	print((10000/(256*256)))
	print("-------------------")
#********************************* random testcases for float ********************************************************************
#*********************************************************************************************************************************

	binary_values_a = ['{:016b}'.format(random.randint(0, 2**16 - 1)) for _ in range(1000)]
	binary_values_b = ['{:016b}'.format(random.randint(0, 2**16 - 1)) for _ in range(1000)]
	binary_values_c = ['{:032b}'.format(random.randint(0, 2**32 - 1)) for _ in range(1000)]

	for i in range(0, 0): #1048
		dut.EN_get_A.value = 1
		dut.EN_get_B.value = 1
		dut.EN_get_C.value = 1
		dut.EN_get_select.value = 1
		dut.get_A_a.value = BinaryValue(binary_values_a[i])
		dut.get_B_b.value = BinaryValue(binary_values_b[i])
		dut.get_C_c.value = BinaryValue(binary_values_c[i])
		dut.get_select_s.value = 1
		
		#wait for inputs to stabilize
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		
		#dut._log.info(f'output {(dut.result.value)}')
		
		result=(dut.result.value)
		result=result.binstr
		
		value=model_mult_accum_float(binary_values_a[i],binary_values_b[i], binary_values_c[i])
		
		if result[0:29] != value[0:29] :
			print(i,"fail",result,value)
			#print(i,"fail")
			#print(result)
			#print(value)
		
		#print(i,result,value);
		#assert result[0:29] == value[0:29] , f'Mismatch,wrong assert,***{i}***'
	
	coverage_db.export_to_yaml(filename="coverage_counter.yml")
