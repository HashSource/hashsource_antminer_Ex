unsigned int __fastcall sub_25853C(unsigned int result, unsigned int a2, unsigned int a3)
{
  __int64 *v3; // r3
  __int64 v4; // r2
  _QWORD *v5; // r1
  _BYTE *v6; // r3
  unsigned int v9; // [sp+18h] [bp-14h]
  unsigned int i; // [sp+1Ch] [bp-10h]
  unsigned int v11; // [sp+20h] [bp-Ch]
  unsigned int v12; // [sp+24h] [bp-8h]

  if ( (((unsigned __int8)(result | a2) | (unsigned __int8)a3) & 7) != 0 )
  {
    v9 = result;
    for ( i = 0; i < a3; ++i )
    {
      v6 = (_BYTE *)v9++;
      *v6 = *(_BYTE *)(a2 + (i ^ 7));
    }
  }
  else
  {
    v12 = a2;
    v11 = result;
    while ( v12 < a2 + a3 )
    {
      v3 = (__int64 *)v12;
      v12 += 8;
      v4 = *v3;
      v5 = (_QWORD *)v11;
      v11 += 8;
      result = bswap32(v4);
      *v5 = __PAIR64__(result, bswap32(HIDWORD(v4)));
    }
  }
  return result;
}
