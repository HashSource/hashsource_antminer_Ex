int __fastcall get_theory_hashrate_rvn(int a1, _QWORD *a2)
{
  if ( *(_BYTE *)(a1 + 500) )
    *a2 = *(_QWORD *)(a1 + 512);
  else
    *a2 = 0x41DC03A180000000LL;
  return 0;
}
