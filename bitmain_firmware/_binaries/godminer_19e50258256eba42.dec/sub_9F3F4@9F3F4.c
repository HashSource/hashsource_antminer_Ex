unsigned int __fastcall sub_9F3F4(int a1, int a2)
{
  unsigned int v2; // r3
  int v4; // [sp+0h] [bp-5Ch]
  _DWORD v5[8]; // [sp+Ch] [bp-50h]
  _DWORD v6[8]; // [sp+2Ch] [bp-30h]
  int v7; // [sp+4Ch] [bp-10h]
  int i; // [sp+50h] [bp-Ch]
  unsigned int v9; // [sp+54h] [bp-8h]

  v4 = a2;
  v6[0] = *(_DWORD *)"&";
  v6[1] = *(_DWORD *)"\"";
  v6[2] = 30;
  v6[3] = 27;
  v6[4] = 24;
  v6[5] = 22;
  v6[6] = 20;
  v6[7] = 18;
  v5[0] = 10;
  v5[1] = 20;
  v5[2] = 30;
  v5[3] = 40;
  v5[4] = 60;
  v5[5] = 80;
  v5[6] = 100;
  v5[7] = 120;
  v9 = 0;
  v7 = 8;
  if ( a2 >= dword_5999FC )
  {
    if ( a2 > dword_5999FC )
      v4 = a2 - 1;
  }
  else
  {
    v4 = a2 + 1;
  }
  dword_5999FC = v4;
  for ( i = 0; i < v7; ++i )
  {
    if ( v4 <= v6[i] )
      v9 = v5[i];
  }
  if ( !v9 )
    return 0;
  v2 = v9;
  if ( v9 >= 0x78 )
    return 120;
  return v2;
}
