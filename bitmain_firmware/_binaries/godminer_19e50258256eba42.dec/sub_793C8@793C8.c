int __fastcall sub_793C8(int a1, int a2)
{
  int v2; // r3
  _DWORD v4[3]; // [sp+Ch] [bp-28h]
  _DWORD v5[3]; // [sp+18h] [bp-1Ch]
  int v6; // [sp+24h] [bp-10h]
  int i; // [sp+28h] [bp-Ch]
  int v8; // [sp+2Ch] [bp-8h]

  v5[0] = *(_DWORD *)"A";
  v5[1] = *(_DWORD *)"7";
  v5[2] = *(_DWORD *)"-";
  v4[0] = *(_DWORD *)"\n";
  v4[1] = 20;
  v4[2] = 30;
  v8 = 0;
  v6 = 3;
  for ( i = 0; i < v6; ++i )
  {
    if ( a2 <= v5[i] )
      v8 = v4[i];
  }
  if ( v8 <= 0 )
    return 0;
  v2 = v8;
  if ( v8 >= 40 )
    return 40;
  return v2;
}
