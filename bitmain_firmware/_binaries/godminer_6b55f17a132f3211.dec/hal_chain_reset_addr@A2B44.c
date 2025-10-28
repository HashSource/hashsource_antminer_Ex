int __fastcall hal_chain_reset_addr(int a1)
{
  int v1; // r2

  if ( !dword_17746C )
    return -1;
  if ( a1 == dword_163A30[0] )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 != dword_163ABC )
      return -2;
    v1 = 1;
  }
  return dword_163A30[35 * v1 + 2];
}
