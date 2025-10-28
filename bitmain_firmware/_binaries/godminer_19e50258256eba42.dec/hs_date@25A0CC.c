int __fastcall hs_date(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int *a6, int *a7, int *a8)
{
  __int64 v9; // r0
  int v10; // r3
  int v11; // r2
  unsigned int v15; // [sp+18h] [bp-24h]
  unsigned int v16; // [sp+24h] [bp-18h]
  unsigned int v17; // [sp+28h] [bp-14h]
  int v18; // [sp+30h] [bp-Ch]

  v9 = -1037155065LL * a1;
  v18 = ((a1 + HIDWORD(v9)) >> 16) - (a1 >> 31) + 719468;
  if ( v18 >= 0 )
  {
    v10 = v18 / 146097;
  }
  else
  {
    LODWORD(v9) = 963315389 * (((a1 + HIDWORD(v9)) >> 16) - (a1 >> 31) + 573372);
    v10 = (((a1 + HIDWORD(v9)) >> 16) - (a1 >> 31) + 573372) / 146097;
  }
  v17 = -146097 * v10 + v18;
  v16 = (v17 - v17 / 0x5B4 + v17 / 0x8EAC - v17 / 0x23AB0) / 0x16D;
  v15 = (5 * (v17 + v16 / 0x64 - (365 * v16 + (v16 >> 2))) + 2) / 0x99;
  if ( v15 > 9 )
    v11 = -9;
  else
    v11 = 3;
  if ( a3 )
    *a3 = 400 * v10 + v16 + (v11 + v15 <= 2);
  if ( a4 )
    *a4 = v11 + v15;
  if ( a5 )
    *a5 = v17 + v16 / 0x64 - (365 * v16 + (v16 >> 2)) - (153 * v15 + 2) / 5 + 1;
  if ( a6 )
  {
    LODWORD(v9) = 715827883 * (a1 / 3600);
    *a6 = a1 / 3600 % 24;
  }
  if ( a7 )
  {
    LODWORD(v9) = -2004318071 * (a1 / 60);
    *a7 = a1 / 60 % 60;
  }
  if ( a8 )
  {
    *a8 = a1 % 60;
    LODWORD(v9) = -2004318071 * a1;
  }
  return v9;
}
