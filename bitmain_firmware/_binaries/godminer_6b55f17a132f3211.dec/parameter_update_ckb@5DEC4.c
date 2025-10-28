int __fastcall parameter_update_ckb(int a1, char a2, int a3, char a4, int a5)
{
  unsigned int v7; // r2
  int v9; // r1
  int result; // r0
  int v11; // r3
  int v12; // r7
  double v13; // r0

  if ( *(_BYTE *)(a1 + 216) )
    return 0;
  v7 = a3 - 50;
  if ( v7 <= 0x2EE )
    v9 = a2 & 1;
  else
    v9 = 0;
  if ( v9 )
  {
    v12 = a1 + 944;
    v13 = sub_122004(*(_DWORD *)(a1 + 936), *(_DWORD *)(a1 + 940), v7, 750) / (double)a3 * *(float *)(a1 + 916);
    *(_QWORD *)(v12 - 8) = sub_122390(LODWORD(v13), HIDWORD(v13));
    *(float *)(a1 + 916) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v11 = a4 & 1;
  else
    v11 = 0;
  if ( v11 )
    *(_DWORD *)(a1 + 920) = a5;
  return result;
}
