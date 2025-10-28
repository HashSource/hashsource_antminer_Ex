int __fastcall hal_chain_plug_addr(int a1)
{
  int v1; // r1

  if ( !dword_16C6BC )
    return -1;
  if ( a1 == dword_163BF8[0] )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 != dword_163C80 )
      return -2;
    v1 = 1;
  }
  return dword_163BF8[34 * v1 + 1];
}
