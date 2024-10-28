# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

import os
import random
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from model_mult_accum import *
"""
@cocotb.test()

async def test_counter(dut):

    
    #Test the Multiply and Accumulate (MAC) function using different test inputs.
    
    
    clock = Clock(dut.clk, 10, units="us")
	cocotb.start_soon(clock.start(start_high=False))
	
    # Test case 1: Multiply A and B, accumulate with C, selection s = 1 (Multiply and Accumulate)
    await set_inputs_and_check_result(dut, a=0000000100000000, b=0000001100000000, c=00000000000000000000000000000000, s=0, expected=00000000000000000000000000000011)

    # Test case 2: Add A and B, with C, selection s = 0 (Simple Addition)
    #await set_inputs_and_check_result(dut, a=15, b=10, c=100, s=0, expected=125)



async def set_inputs_and_check_result(dut, a, b, c, s, expected):
    
    #Helper function to set inputs and check the result.
    
    # Apply input values
    
    a = int(dut.EN_get_A.value)
    b = int(dut.EN_get_B.value)
    c = int(dut.EN_get_C.value)
    s = int(dut.EN_get_select.value)

    # Wait for one clock cycle
    for i in range(5):
	    await RisingEdge(dut.clk)

    # Retrieve the result
    result = dut.result.value

    # Check if the result is as expected
    assert result == expected, f"Test failed: expected {expected}, got {result}"

    cocotb.log.info(f"Test passed with A={a}, B={b}, C={c}, s={s}: result={result}")
 
    
    coverage_db.export_to_yaml(filename="coverage_counter.yml")
"""

@cocotb.test()
async def test_mult_accum(dut):

    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    
    ## test using model
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    
    dut.EN_get_A.value = 1
    dut.EN_get_B.value = 1
    dut.EN_get_C.value =1
    dut.EN_get_select.value = 1
    dut.get_A_a.value = 2
    dut.get_B_b.value = 4
    dut.get_C_c.value = 1
    dut.get_select_s.value = 0
    #dut._log.info('int')
    
    await RisingEdge(dut.CLK)
    await RisingEdge(dut.CLK)
    await RisingEdge(dut.CLK)
    await RisingEdge(dut.CLK)
    await RisingEdge(dut.CLK)
    
    for i in range(0, 10):
        EN_get_A = int(dut.EN_get_A.value)
        EN_get_B = int(dut.EN_get_B.value)
        EN_get_C = int(dut.EN_get_C.value)
        EN_get_select = int(dut.EN_get_select.value)
        get_A_a = int(dut.get_A_a.value)
        get_B_b = int(dut.get_B_b.value)
        get_C_c = int(dut.get_C_c.value)
        get_select_s = int(dut.get_select_s.value)

        await RisingEdge(dut.CLK)
        dut._log.info(f'output {int(dut.result.value)}')
        
        mac_out = model_mult_accum(get_A_a,EN_get_A,get_B_b,EN_get_B,get_C_c,EN_get_C,get_select_s,EN_get_select)
        assert int(mac_out) == int(dut.result.value), f'Counter Output Mismatch, Expected = {mac_out} DUT = {int(dut.result.value)}'
    
    coverage_db.export_to_yaml(filename="coverage_counter.yml")
