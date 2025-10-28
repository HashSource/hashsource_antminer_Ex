int __fastcall hal_chain_plug_addr(int a1)
{
  int v1; // r2

  if ( !dword_1B3624 )
    return -1;
  if ( a1 == dword_1934BC[0] )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 != dword_193548 )
      return -2;
    v1 = 1;
  }
  return dword_1934BC[35 * v1 + 1];
}
