int __fastcall parameter_update_ckb(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r3
  int v11; // r0
  int v12; // s14

  if ( *(_BYTE *)(a1 + 144) )
    return 0;
  if ( (unsigned int)(a3 - 500) <= 0x12C )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = sub_12C9E0(*(_DWORD *)(a1 + 772));
    v12 = (int)*(float *)(a1 + 760);
    *(float *)(a1 + 760) = (float)a3;
    *(_DWORD *)(a1 + 772) = v12 * v11;
  }
  result = 0;
  if ( (unsigned int)(a5 - 800) <= 0x32 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 764) = a5;
  return result;
}
