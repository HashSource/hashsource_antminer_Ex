int __fastcall hs_hex_encode(int a1, int a2, int a3)
{
  int v7; // [sp+14h] [bp-18h]
  char v8; // [sp+1Fh] [bp-Dh]
  int v9; // [sp+20h] [bp-Ch]
  int v10; // [sp+24h] [bp-8h]

  if ( !a1 && a2 )
    return 0;
  if ( !a3 )
    return 0;
  v9 = 0;
  v10 = 0;
  v7 = 2 * a2;
  while ( v10 < v7 )
  {
    if ( (v10 & 1) != 0 )
      v8 = sub_25A5F0(*(_BYTE *)(a1 + v9++) & 0xF);
    else
      v8 = sub_25A5F0(*(_BYTE *)(a1 + v9) >> 4);
    *(_BYTE *)(a3 + v10++) = v8;
  }
  *(_BYTE *)(a3 + v10) = 0;
  return 1;
}
