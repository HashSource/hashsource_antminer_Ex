int __fastcall sub_77D5C(int a1, int a2)
{
  int v2; // r3
  _DWORD v4[7]; // [sp+8h] [bp-4Ch]
  _DWORD v5[7]; // [sp+24h] [bp-30h]
  int v6; // [sp+40h] [bp-14h]
  int v7; // [sp+44h] [bp-10h]
  int i; // [sp+48h] [bp-Ch]
  int v9; // [sp+4Ch] [bp-8h]

  v5[0] = 17;
  v5[1] = 12;
  v5[2] = 7;
  v5[3] = -3;
  v5[4] = -8;
  v5[5] = -13;
  v5[6] = -18;
  v4[0] = 20;
  v4[1] = 30;
  v4[2] = 40;
  v4[3] = 60;
  v4[4] = 70;
  v4[5] = 80;
  v4[6] = 100;
  v9 = 0;
  v7 = a2 - *(_DWORD *)(a1 + 88);
  v6 = 7;
  for ( i = 0; i < v6; ++i )
  {
    if ( v7 > v5[i + 1] && v7 <= v5[i] )
    {
      v9 = v4[i];
      break;
    }
  }
  if ( v7 > v5[0] )
    v9 = 0;
  if ( v7 <= v5[v6 - 1] )
    v9 = v4[v6 - 1];
  if ( v9 <= 0 )
    return 0;
  v2 = v9;
  if ( v9 >= 100 )
    return 100;
  return v2;
}
