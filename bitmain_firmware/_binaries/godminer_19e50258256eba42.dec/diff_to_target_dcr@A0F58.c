void *__fastcall diff_to_target_dcr(void *a1)
{
  double v1; // d0
  double v3; // [sp+0h] [bp-24h]
  unsigned __int64 v5; // [sp+10h] [bp-14h]
  int i; // [sp+1Ch] [bp-8h]

  v3 = v1;
  for ( i = 6; i > 0 && v3 > 1.0; --i )
    v3 = v3 / 4294967300.0;
  v5 = (unsigned __int64)(4294901760.0 / v3);
  if ( !v5 && i == 6 )
    return memset(a1, 255, 0x20u);
  memset(a1, 0, 0x20u);
  *((_DWORD *)a1 + i) = v5;
  *((_DWORD *)a1 + i + 1) = HIDWORD(v5);
  return a1;
}
