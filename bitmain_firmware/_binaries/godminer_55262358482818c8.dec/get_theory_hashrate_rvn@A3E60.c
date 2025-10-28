int __fastcall get_theory_hashrate_rvn(int a1, __int64 *a2, __int64 a3)
{
  bool v3; // zf

  HIDWORD(a3) = *(unsigned __int8 *)(a1 + 460);
  v3 = HIDWORD(a3) == 0;
  if ( *(_BYTE *)(a1 + 460) )
    a3 = *(_QWORD *)(a1 + 472);
  if ( v3 )
    a3 = 0x41DC03A180000000LL;
  *a2 = a3;
  return 0;
}
