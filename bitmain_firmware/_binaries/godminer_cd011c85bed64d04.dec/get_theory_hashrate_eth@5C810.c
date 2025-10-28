int __fastcall get_theory_hashrate_eth(int a1, __int64 *a2)
{
  __int64 v2; // r2

  if ( *(_BYTE *)(a1 + 276) )
    v2 = *(_QWORD *)(a1 + 288);
  else
    v2 = 0x41D25FC66B0BD872LL;
  *a2 = v2;
  return 0;
}
