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
	
	#mac_bin=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/MAC_bianry.txt")
	#with open(mac_bin, "r") as file:
	#	mac_list_bin = [line.strip() for line in file]
	
	a_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/A_decimal.txt")
	with open(a_dec, "r") as file:
		a_list_dec = [line.strip() for line in file]

	b_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/B_decimal.txt")
	with open(b_dec, "r") as file:
		b_list_dec = [line.strip() for line in file]

	c_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/C_decimal.txt")
	with open(c_dec, "r") as file:
		c_list_dec = [line.strip() for line in file]

	#mac_dec=os.path.join(os.getcwd(),"mult_accum_verif/int8 MAC/MAC_decimal.txt")
	#with open(mac_dec, "r") as file:
	#	mac_list_dec = [line.strip() for line in file]
  
	#for int test cases
	for i in range(0, 200): #1048
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

		EN_get_A = 1
		EN_get_B = 1
		EN_get_C = 1
		EN_get_select = 1
		get_A_a = int(a_list_dec[i])
		get_B_b = int(b_list_dec[i])
		get_C_c = int(c_list_dec[i])
		get_select_s = 0

		await RisingEdge(dut.CLK)
		dut._log.info(f'output {int(dut.result.value)}')

		mac_out = model_mult_accum(get_A_a,EN_get_A,get_B_b,EN_get_B,get_C_c,EN_get_C,get_select_s,EN_get_select)
		if int(mac_out) == int(dut.result.value) :
			print("success")
		else :
			print("failure")
		#assert int(mac_out) == int(dut.result.value), f'Counter Output Mismatch, Expected = {mac_out} DUT = {int(dut.result.value)}'

	coverage_db.export_to_yaml(filename="coverage_counter.yml")
