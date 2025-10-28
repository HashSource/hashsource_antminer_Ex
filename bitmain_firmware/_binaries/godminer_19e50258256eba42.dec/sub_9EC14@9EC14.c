int __fastcall sub_9EC14(int a1, int a2)
{
  int v2; // r3
  _DWORD v4[2]; // [sp+8h] [bp-24h]
  _DWORD v5[2]; // [sp+10h] [bp-1Ch]
  int v6; // [sp+18h] [bp-14h]
  int v7; // [sp+1Ch] [bp-10h]
  int i; // [sp+20h] [bp-Ch]
  int v9; // [sp+24h] [bp-8h]

  v5[0] = -20;
  v5[1] = 45;
  v4[0] = 0;
  v4[1] = 0;
  v9 = 0;
  v7 = a2 - *(_DWORD *)(a1 + 88);
  v6 = 2;
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
