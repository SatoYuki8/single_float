declare sub_shift{
  input exp_a<8>;
  input exp_b<8>;
  input frac_b<26>;
  output shifted_frac_b<26>;
  output sticky; 
  instrin do;

  instr_arg do(exp_a, exp_b, frac_b);
}
