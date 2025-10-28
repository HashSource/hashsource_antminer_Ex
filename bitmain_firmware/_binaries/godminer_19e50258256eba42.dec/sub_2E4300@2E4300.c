int __fastcall sub_2E4300(int a1, int a2)
{
  __int64 v3; // r6
  unsigned int i; // [sp+Ch] [bp-20h]

  *(_DWORD *)(a1 + 64) = 0;
  for ( i = 0; i <= 6; ++i )
    *(_QWORD *)(a1 + 8 * (i + 9)) = 0;
  LODWORD(v3) = 0;
  HIDWORD(v3) = (a2 << 24) | (a2 << 8) & 0xFF0000;
  *(_QWORD *)(a1 + 128) = v3;
  *(_QWORD *)(a1 + 136) = 0;
  return 0;
}
