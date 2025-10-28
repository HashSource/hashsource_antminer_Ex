int __fastcall hal_chain_plug_addr(int a1)
{
  int v1; // r1

  if ( !dword_16D6D4 )
    return -1;
  if ( a1 == dword_164C08[0] )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 != dword_164C90 )
      return -2;
    v1 = 1;
  }
  return dword_164C08[34 * v1 + 1];
}
