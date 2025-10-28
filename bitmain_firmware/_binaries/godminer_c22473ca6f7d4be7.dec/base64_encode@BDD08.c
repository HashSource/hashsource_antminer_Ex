int __fastcall base64_encode(int result, int a2, int a3)
{
  int v3; // lr
  int v4; // r12
  int v5; // r3
  int v6; // r5
  bool v7; // cc
  int v8; // r7
  int v9; // r6
  unsigned int v10; // r3
  int v11; // r5
  int v12; // r5
  char v13; // r5
  char v14; // r6
  char v15; // r3
  int v16; // r2
  int v17; // r3

  if ( a3 > 0 )
  {
    v3 = result;
    v4 = 0;
    do
    {
      v5 = *(unsigned __int8 *)(a2 + v4);
      v6 = v4 + 1;
      v7 = a3 <= v4 + 1;
      v8 = v4 + 2;
      LOBYTE(v9) = 65;
      v4 += 3;
      if ( v7 )
        v4 = v6;
      v10 = v5 << 16;
      if ( !v7 )
      {
        v11 = *(unsigned __int8 *)(a2 + v6);
        if ( a3 <= v8 )
        {
          v4 = v8;
          v9 = (unsigned __int8)aAbcdefghijklmn[0];
        }
        else
        {
          v9 = *(unsigned __int8 *)(a2 + v8);
        }
        v12 = v11 << 8;
        v10 += a3 <= v8 ? v12 : v9 + v12;
        if ( a3 > v8 )
          LOBYTE(v9) = aAbcdefghijklmn[v10 & 0x3F];
      }
      *(_BYTE *)(v3 + 3) = v9;
      v13 = aAbcdefghijklmn[(v10 >> 6) & 0x3F];
      v14 = aAbcdefghijklmn[(v10 >> 12) & 0x3F];
      v15 = aAbcdefghijklmn[v10 >> 18];
      v3 += 4;
      *(_BYTE *)(v3 - 2) = v13;
      *(_BYTE *)(v3 - 3) = v14;
      *(_BYTE *)(v3 - 4) = v15;
    }
    while ( v4 < a3 );
  }
  v16 = 8 * a3;
  v17 = v16 / 6;
  if ( v16 != 6 * (v16 / 6) )
    ++v17;
  *(_BYTE *)(result + v17) = 61;
  return result;
}
