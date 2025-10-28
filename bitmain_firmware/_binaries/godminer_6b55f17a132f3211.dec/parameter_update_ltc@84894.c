int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r4

  if ( *(_BYTE *)(a1 + 216) )
    return 0;
  if ( (unsigned int)(a3 - 900) <= 0x3E8 )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 936) = sub_12232C(*(_DWORD *)(a1 + 936), *(_DWORD *)(a1 + 940), a3, a3 >> 31)
                          * (int)*(float *)(a1 + 916);
    *(float *)(a1 + 916) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 920) = a5;
  return result;
}
