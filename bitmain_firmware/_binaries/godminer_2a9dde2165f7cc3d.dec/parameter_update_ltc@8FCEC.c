int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r4

  if ( *(_BYTE *)(a1 + 228) )
    return 0;
  if ( (unsigned int)(a3 - 900) <= 0x3E8 )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    *(_QWORD *)(a1 + 944) = sub_12E934(*(_DWORD *)(a1 + 944), *(_DWORD *)(a1 + 948), a3, a3 >> 31)
                          * (int)*(float *)(a1 + 924);
    *(float *)(a1 + 924) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 928) = a5;
  return result;
}
