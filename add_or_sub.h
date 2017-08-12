declare add_or_sub{
  input a<26>;
  input b<26>;
  output result<26>;
  output cout;
  instrin add;
  instrin sub;

  instr_arg add(a, b);
  instr_arg sub(a, b);
}
