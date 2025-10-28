int *__fastcall hal_chain_i2c_dev(int a1)
{
  int v1; // r0

  if ( !dword_1B3624 )
    return 0;
  if ( a1 == dword_1934BC[0] )
  {
    v1 = 3;
    return &dword_1934BC[v1];
  }
  if ( a1 != dword_193548 )
    return 0;
  v1 = 38;
  return &dword_1934BC[v1];
}
