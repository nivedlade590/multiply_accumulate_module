# model for increment alone

import cocotb
from cocotb_coverage.coverage import *
"""
counter_coverage = coverage_section(
    CoverPoint('top.increment_di', vname='increment_di', bins = list(range(0,16))),
    CoverPoint('top.EN_increment', vname='EN_increment', bins = list(range(0,2))),
    CoverCross('top.cross_cover', items = ['top.increment_di', 'top.EN_increment'])
)
@counter_coverage
"""
"""
def model_counter(current_state, EN_increment: int, increment_di: int) -> int:
    if(EN_increment):
        return current_state + increment_di
    return 0
    
"""

#@counter_coverage
def model_mult_accum(get_A_a , EN_get_A: int,get_B_b, EN_get_B: int, get_C_c, EN_get_C: int, get_select_s, EN_get_select: int):
    if(get_select_s==0):
    	if(EN_get_A==1 and EN_get_B==1 and EN_get_C==1):
	        return (get_A_a*get_B_b)+get_C_c
    return 0.0
