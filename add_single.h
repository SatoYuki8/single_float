declare add_half{
  input a<32>, b<32>;
  output sum<32>;
  instrin do;

  instr_arg do(a, b);
}
