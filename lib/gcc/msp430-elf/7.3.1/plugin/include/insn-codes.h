/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_push = 1,
  CODE_FOR_pusha = 2,
  CODE_FOR_pushm = 3,
  CODE_FOR_pop = 4,
  CODE_FOR_popa = 5,
  CODE_FOR_popm = 6,
  CODE_FOR_grow_and_swap = 7,
  CODE_FOR_swap_and_shrink = 8,
  CODE_FOR_movqihi = 9,
  CODE_FOR_movqi_topbyte = 10,
  CODE_FOR_movqi = 11,
  CODE_FOR_movhi = 12,
  CODE_FOR_movsi_s = 13,
  CODE_FOR_movsi_x = 14,
  CODE_FOR_movpsi = 15,
  CODE_FOR_movsipsi2 = 16,
  CODE_FOR_addpsi3 = 18,
  CODE_FOR_addqi3 = 19,
  CODE_FOR_addhi3 = 20,
  CODE_FOR_addsipsi3 = 21,
  CODE_FOR_addsi3 = 22,
  CODE_FOR_addhi3_cy = 23,
  CODE_FOR_addhi3_cy_i = 24,
  CODE_FOR_addchi4_cy = 25,
  CODE_FOR_subpsi3 = 26,
  CODE_FOR_subqi3 = 27,
  CODE_FOR_subhi3 = 28,
  CODE_FOR_subsi3 = 29,
  CODE_FOR_bicqi3 = 33,
  CODE_FOR_bichi3 = 34,
  CODE_FOR_bicpsi3 = 35,
  CODE_FOR_andqi3 = 36,
  CODE_FOR_andhi3 = 37,
  CODE_FOR_andpsi3 = 38,
  CODE_FOR_iorqi3 = 39,
  CODE_FOR_iorhi3 = 40,
  CODE_FOR_iorpsi3 = 41,
  CODE_FOR_xorqi3 = 42,
  CODE_FOR_xorhi3 = 43,
  CODE_FOR_xorpsi3 = 44,
  CODE_FOR_one_cmplqi2 = 45,
  CODE_FOR_one_cmplhi2 = 46,
  CODE_FOR_one_cmplpsi2 = 47,
  CODE_FOR_extendqihi2 = 48,
  CODE_FOR_zero_extendqihi2 = 49,
  CODE_FOR_zero_extendhipsi2 = 50,
  CODE_FOR_truncpsihi2 = 51,
  CODE_FOR_extendhisi2 = 52,
  CODE_FOR_extendhipsi2 = 53,
  CODE_FOR_zero_extendqisi2 = 54,
  CODE_FOR_zero_extendhisi2 = 55,
  CODE_FOR_zero_extendhisipsi2 = 56,
  CODE_FOR_extend_and_shift1_hipsi2 = 57,
  CODE_FOR_extend_and_shift2_hipsi2 = 58,
  CODE_FOR_zero_extendpsisi2 = 59,
  CODE_FOR_extendpsisi2 = 60,
  CODE_FOR_truncsipsi2 = 61,
  CODE_FOR_slli_1 = 62,
  CODE_FOR_430x_shift_left = 63,
  CODE_FOR_slll_1 = 64,
  CODE_FOR_slll_2 = 65,
  CODE_FOR_srai_1 = 66,
  CODE_FOR_430x_arithmetic_shift_right = 67,
  CODE_FOR_srap_1 = 68,
  CODE_FOR_srap_2 = 69,
  CODE_FOR_sral_1 = 70,
  CODE_FOR_sral_2 = 71,
  CODE_FOR_srli_1 = 72,
  CODE_FOR_430x_logical_shift_right = 73,
  CODE_FOR_srlp_1 = 74,
  CODE_FOR_srll_1 = 75,
  CODE_FOR_srll_2x = 76,
  CODE_FOR_epilogue_helper = 77,
  CODE_FOR_prologue_start_marker = 78,
  CODE_FOR_prologue_end_marker = 79,
  CODE_FOR_epilogue_start_marker = 80,
  CODE_FOR_msp430_refsym_need_exit = 81,
  CODE_FOR_call_internal = 82,
  CODE_FOR_call_value_internal = 83,
  CODE_FOR_msp_return = 84,
  CODE_FOR_msp430_eh_epilogue = 85,
  CODE_FOR_jump = 86,
  CODE_FOR_indirect_jump = 87,
  CODE_FOR_cbranchpsi4_real = 88,
  CODE_FOR_cbranchqi4_real = 89,
  CODE_FOR_cbranchhi4_real = 90,
  CODE_FOR_cbranchpsi4_reversed = 91,
  CODE_FOR_cbranchqi4_reversed = 92,
  CODE_FOR_cbranchhi4_reversed = 93,
  CODE_FOR_nop = 118,
  CODE_FOR_disable_interrupts = 119,
  CODE_FOR_enable_interrupts = 120,
  CODE_FOR_push_intr_state = 121,
  CODE_FOR_pop_intr_state = 122,
  CODE_FOR_bic_SR = 123,
  CODE_FOR_bis_SR = 124,
  CODE_FOR_andneghi3 = 125,
  CODE_FOR_delay_cycles_start = 126,
  CODE_FOR_delay_cycles_end = 127,
  CODE_FOR_delay_cycles_32 = 128,
  CODE_FOR_delay_cycles_32x = 129,
  CODE_FOR_delay_cycles_16 = 130,
  CODE_FOR_delay_cycles_16x = 131,
  CODE_FOR_delay_cycles_2 = 132,
  CODE_FOR_delay_cycles_1 = 133,
  CODE_FOR_mulhisi3 = 134,
  CODE_FOR_umulhisi3 = 135,
  CODE_FOR_mulsidi3 = 136,
  CODE_FOR_umulsidi3 = 137,
  CODE_FOR_movsi = 138,
  CODE_FOR_ashlhi3 = 139,
  CODE_FOR_ashlsi3 = 140,
  CODE_FOR_ashrhi3 = 141,
  CODE_FOR_ashrsi3 = 142,
  CODE_FOR_lshrhi3 = 143,
  CODE_FOR_lshrsi3 = 144,
  CODE_FOR_prologue = 145,
  CODE_FOR_epilogue = 146,
  CODE_FOR_call = 147,
  CODE_FOR_call_value = 148,
  CODE_FOR_eh_return = 149,
  CODE_FOR_cbranchqi4 = 150,
  CODE_FOR_cbranchhi4 = 151,
  CODE_FOR_cbranchpsi4 = 152
};

const unsigned int NUM_INSN_CODES = 153;
#endif /* GCC_INSN_CODES_H */