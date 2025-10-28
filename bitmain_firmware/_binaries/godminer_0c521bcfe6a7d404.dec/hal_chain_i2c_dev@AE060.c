int *__fastcall hal_chain_i2c_dev(int a1)
{
  int v1; // r0

  if ( !dword_18D87C )
    return 0;
  if ( a1 == dword_171CF4[0] )
  {
    v1 = 3;
    return &dword_171CF4[v1];
  }
  if ( a1 != dword_171D80 )
    return 0;
  v1 = 38;
  return &dword_171CF4[v1];
}
