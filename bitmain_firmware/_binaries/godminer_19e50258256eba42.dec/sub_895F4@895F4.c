int __fastcall sub_895F4(int a1, int a2)
{
  int v2; // r3
  _DWORD v4[7]; // [sp+Ch] [bp-50h]
  _DWORD v5[7]; // [sp+28h] [bp-34h]
  int v6; // [sp+44h] [bp-18h]
  int v7; // [sp+48h] [bp-14h]
  int i; // [sp+4Ch] [bp-10h]
  int v9; // [sp+50h] [bp-Ch]
  int v10; // [sp+54h] [bp-8h]

  v5[0] = 17;
  v5[1] = 12;
  v5[2] = 7;
  v5[3] = -3;
  v5[4] = -8;
  v5[5] = -13;
  v5[6] = -18;
  v4[0] = 20;
  v4[1] = 40;
  v4[2] = 50;
  v4[3] = 60;
  v4[4] = 80;
  v4[5] = 100;
  v4[6] = 120;
  v10 = 0;
  v7 = a2 - *(_DWORD *)(a1 + 88);
  v9 = 0;
  v6 = 7;
  if ( a2 >= dword_5991B4 )
    v9 = 3;
  if ( a2 == dword_5991B4 )
    return dword_5AD328;
  for ( i = 0; i < v6 - 1; ++i )
  {
    if ( v7 > v5[i + 1] + v9 && v7 <= v5[i] + v9 )
    {
      v10 = v4[i];
      break;
    }
  }
  if ( v7 > v5[0] + v9 )
    v10 = 0;
  if ( v7 <= v5[v6 - 1] + v9 )
    v10 = v4[v6 - 1];
  if ( v10 < dword_5AD328 && a2 <= dword_5991B4 )
    v10 = dword_5AD328;
  if ( v10 > dword_5AD328 && a2 >= dword_5991B4 )
    v10 = dword_5AD328;
  if ( a2 != dword_5991B4 )
    dword_5991B4 = a2;
  if ( v10 != dword_5AD328 )
    dword_5AD328 = v10;
  if ( v10 <= 0 )
    return 0;
  v2 = v10;
  if ( v10 >= 120 )
    return 120;
  return v2;
}
