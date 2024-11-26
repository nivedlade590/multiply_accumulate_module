# model for increment alone
import random
import cocotb
import numpy as np
from cocotb_coverage.coverage import *
from cocotb.binary import BinaryValue
"""
counter_coverage = coverage_section(
    CoverPoint('top.increment_di', vname='increment_di', bins = list(range(0,16))),
    CoverPoint('top.EN_increment', vname='EN_increment', bins = list(range(0,2))),
    CoverCross('top.cross_cover', items = ['top.increment_di', 'top.EN_increment'])
)
@counter_coverage

counter_coverage = coverage_section(
    CoverPoint('top.a', vname='a', bins = binary_values_a),
    CoverPoint('top.b', vname='b', bins = binary_values_b),
    CoverCross('top.cross_cover', items = ['top.a', 'top.b'])
)
@counter_coverage
"""
"""
def model_mult_accum_float(get_A_a,get_B_b, get_C_c):
	return (np.float32(np.float16(np.float16(get_A_a)*np.float16(get_B_b)))+get_C_c)
"""
def model_mult_accum_int(get_A_a ,get_B_b, get_C_c):
	return (get_A_a*get_B_b)+get_C_c

def model_mult_accum_float(a,b,c):
	# Extract components of a and b
	sign1, exp1, mant1 = (a >> 15) & 0x1, (a >> 7) & 0xFF, a & 0x7F
	sign2, exp2, mant2 = (b >> 15) & 0x1, (b >> 7) & 0xFF, b & 0x7F

	# Compute the result's sign (XOR of the signs)
	result_sign = sign1 ^ sign2

	# Compute the significands (add implicit leading 1)
	significand1 = 1 + (mant1 / 128)
	significand2 = 1 + (mant2 / 128)

	# Multiply the significands
	significand_result = significand1 * significand2

	# Compute the result exponent (adding exponents, subtracting bias)
	result_exponent = exp1 + exp2 - 127

	# Normalize the result (if significand_result >= 2, shift right and increase exponent)
	if significand_result >= 2:
		significand_result /= 2
		result_exponent += 1

	# Round the significand to 7 bits using round-to-nearest
	rounded_mantissa = round((significand_result - 1) * 128)

	# Handle overflow in mantissa rounding
	if rounded_mantissa == 128:
		rounded_mantissa = 0
		result_exponent += 1

	# Handle exponent overflow or underflow
	if result_exponent >= 255:  # Overflow (Infinity)
		result_exponent = 255
		rounded_mantissa = 0
	elif result_exponent <= 0:  # Underflow (Denormalized or zero)
		result_exponent = 0
		rounded_mantissa = 0

	# Encode the result back to bf16 format
	result_bf16 = (result_sign << 15) | (result_exponent << 7) | (rounded_mantissa & 0x7F)

	# Convert bf16 result to fp32 by appending 16 zeroes
	result_fp32 = result_bf16 << 16

	# Add fp32 number c to the result
	final_result = result_fp32 + c

	return f"{final_result:032b}"

