int __fastcall BM_CRC5(_BYTE *a1, unsigned int a2)
{
  _BYTE v4[5]; // [sp+Ch] [bp-20h]
  int v5; // [sp+14h] [bp-18h]
  char v6; // [sp+18h] [bp-14h]
  bool v7; // [sp+1Ah] [bp-12h]
  unsigned __int8 v8; // [sp+1Bh] [bp-11h]
  int v9; // [sp+1Ch] [bp-10h]
  unsigned int v10; // [sp+20h] [bp-Ch]
  unsigned int i; // [sp+24h] [bp-8h]

  v5 = 16843009;
  v6 = 1;
  v10 = 128;
  v9 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v7 = (v10 & *a1) != 0;
    v4[0] = v7 ^ v6;
    v4[1] = v5;
    v4[2] = v7 ^ v6 ^ BYTE1(v5);
    *(_WORD *)&v4[3] = HIWORD(v5);
    v10 >>= 1;
    if ( ++v9 == 8 )
    {
      v10 = 128;
      v9 = 0;
      ++a1;
    }
    v5 = *(_DWORD *)v4;
    v6 = v4[4];
  }
  v8 = 0;
  if ( v6 )
    v8 = 16;
  if ( HIBYTE(v5) )
    v8 |= 8u;
  if ( BYTE2(v5) )
    v8 |= 4u;
  if ( BYTE1(v5) )
    v8 |= 2u;
  if ( (_BYTE)v5 )
    v8 |= 1u;
  return v8;
}
