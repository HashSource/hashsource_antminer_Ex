int *__fastcall hal_chain_i2c_dev(int a1)
{
  int v1; // r0

  if ( !dword_17746C )
    return 0;
  if ( a1 == dword_163A30[0] )
  {
    v1 = 3;
    return &dword_163A30[v1];
  }
  if ( a1 != dword_163ABC )
    return 0;
  v1 = 38;
  return &dword_163A30[v1];
}
