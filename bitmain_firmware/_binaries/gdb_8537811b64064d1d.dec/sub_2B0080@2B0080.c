int __fastcall sub_2B0080(int a1)
{
  _DWORD *v2; // r0

  if ( !dword_48FC08 )
  {
    dword_48FC08 = 1;
    nullsub_126();
  }
  v2 = (_DWORD *)sub_2ACC1C(a1, 24);
  if ( !v2 )
    return 0;
  *(_DWORD *)(a1 + 160) = v2;
  v2[2] = 1;
  *v2 = 0;
  v2[1] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  return 1;
}
