declare exp_inc_right_shift{
  input exp<8>;
  input frac<26>;
  output inc_exp<8>;
  output shifted_frac<26>;
  instrin do;

  instr_arg do(exp, frac);
}
