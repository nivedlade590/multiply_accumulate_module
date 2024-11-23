# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

import os
import random
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from model_mult_accum import *

@cocotb.test()

async def test_mult_accum(dut):

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
	
	mac_bin=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/MAC_binary.txt")
	with open(mac_bin, "r") as file:
		mac_list_bin = [line.strip() for line in file]
	
	#a_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/A_decimal.txt")
	#with open(a_dec, "r") as file:
	#	a_list_dec = [line.strip() for line in file]

	#b_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/B_decimal.txt")
	#with open(b_dec, "r") as file:
	#	b_list_dec = [line.strip() for line in file]

	#c_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/C_decimal.txt")
	#with open(c_dec, "r") as file:
	#	c_list_dec = [line.strip() for line in file]

	mac_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/MAC_decimal.txt")
	with open(mac_dec, "r") as file:
		mac_list_dec = [line.strip() for line in file]
		
	await RisingEdge(dut.CLK)
	await RisingEdge(dut.CLK)
	#for int test cases
	for i in range(0, 10): #1048
		dut.EN_get_A.value = 1
		dut.EN_get_B.value = 1
		dut.EN_get_C.value = 1
		dut.EN_get_select.value = 1
		
		if a_list_bin[i] > 128 : 
			dut.get_A_a.value = 256+128-a_list_bin[i]
		else : 
			dut.get_A_a.value = a_list_bin[i]
		
		if b_list_bin[i] > 128 : 
			dut.get_B_b.value = 256+128-b_list_bin[i]
		else : 
			dut.get_B_b.value = b_list_bin[i]
			
		if c_list_bin[i] > 2147483648 : 
			dut.get_C_c.value = 2147483648+4294967296-c_list_bin[i]
		else : 
			dut.get_C_c.value = c_list_bin[i]
		
		dut.get_select_s.value = 0
		
		#dut._log.info(f'output {(dut.get_A_a.value)}')
		#print((c_list_bin[i]))
		
		#wait for inputs to stabilize
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		await RisingEdge(dut.CLK)
		
		dut._log.info(f'output {int(dut.result.value),dut.result.value}')
		
		result=int(dut.result.value)
		#if result > 2147483648 : 
		#	result = 2147483648+4294967296-result
			
		#print(mac_list_dec[i],"hello",result);
		
		value=int(mac_list_dec[i])
		if value < 0 :
			value= value+4294967296;
		if value > 2147483648 : 
			value = 2147483648+4294967296-value
		#print(value,"hello",result);
		
		if value == result :
			print(i);
			print("success")
		else :
			print(i);
			print("failure")
		#assert int(mac_out) == int(dut.result.value), f'Counter Output Mismatch, Expected = {mac_out} DUT = {int(dut.result.value)}'

	coverage_db.export_to_yaml(filename="coverage_counter.yml")
