int *__fastcall hal_chain_i2c_dev(int a1)
{
  int v1; // r0

  if ( !dword_16D6D4 )
    return 0;
  if ( a1 == dword_164C08[0] )
  {
    v1 = 2;
    return &dword_164C08[v1];
  }
  if ( a1 != dword_164C90 )
    return 0;
  v1 = 36;
  return &dword_164C08[v1];
}
