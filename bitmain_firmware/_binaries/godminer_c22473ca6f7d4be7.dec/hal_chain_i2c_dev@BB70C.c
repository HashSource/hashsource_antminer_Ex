int *__fastcall hal_chain_i2c_dev(int a1)
{
  int v1; // r0

  if ( !dword_16C6BC )
    return 0;
  if ( a1 == dword_163BF8[0] )
  {
    v1 = 2;
    return &dword_163BF8[v1];
  }
  if ( a1 != dword_163C80 )
    return 0;
  v1 = 36;
  return &dword_163BF8[v1];
}
