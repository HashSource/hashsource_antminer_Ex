int __fastcall hal_chain_reset_addr(int a1)
{
  int v1; // r2

  if ( !dword_18D87C )
    return -1;
  if ( a1 == dword_171CF4[0] )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 != dword_171D80 )
      return -2;
    v1 = 1;
  }
  return dword_171CF4[35 * v1 + 2];
}
