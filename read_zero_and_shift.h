declare read_zero_and_shift{
      input frac<26>;
      input exp<8>;
      output shifted_frac<26>;
      output sub_exp<8>;
      instrin do;
      
      instr_arg do(frac, exp);
}
