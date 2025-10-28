int __fastcall base64_encode_nonce(unsigned __int64 a1, int a2)
{
  _BYTE *v2; // r3
  int v3; // r4
  int v4; // lr
  int v5; // r1
  bool v6; // zf
  int v7; // r3
  int v8; // r12
  _BYTE *v9; // r7
  _BYTE *v10; // r6
  int v11; // r0
  unsigned int v12; // r3
  int v13; // r1
  char v14; // r1
  int result; // r0
  char v16; // r3
  _BYTE v17[7]; // [sp+0h] [bp-Ch] BYREF
  _BYTE v18[5]; // [sp+7h] [bp-5h] BYREF

  v2 = &v17[-1];
  do
  {
    *++v2 = a1;
    a1 >>= 8;
  }
  while ( v18 != v2 );
  v3 = a2;
  v4 = 0;
  do
  {
    v5 = v4 + 1;
    v6 = v4 == 7;
    v7 = (unsigned __int8)v17[v4];
    v8 = v4 + 2;
    v9 = &v18[v4 + 2];
    v10 = &v18[v4 + 3];
    v4 += 3;
    LOBYTE(v11) = 65;
    if ( v6 )
      v4 = v5;
    v12 = v7 << 16;
    if ( !v6 )
    {
      if ( v8 == 8 )
      {
        v4 = 8;
        v11 = (unsigned __int8)aAbcdefghijklmn[0];
      }
      else
      {
        v11 = (unsigned __int8)*(v10 - 8);
      }
      v13 = (unsigned __int8)*(v9 - 8) << 8;
      if ( v8 == 8 )
        v12 += v13;
      else
        v12 += v11 + v13;
      if ( v8 != 8 )
        LOBYTE(v11) = aAbcdefghijklmn[v12 & 0x3F];
    }
    *(_BYTE *)(v3 + 3) = v11;
    v14 = aAbcdefghijklmn[(v12 >> 6) & 0x3F];
    result = (unsigned __int8)aAbcdefghijklmn[(v12 >> 12) & 0x3F];
    v16 = aAbcdefghijklmn[v12 >> 18];
    v3 += 4;
    *(_BYTE *)(v3 - 2) = v14;
    *(_BYTE *)(v3 - 3) = result;
    *(_BYTE *)(v3 - 4) = v16;
  }
  while ( v4 != 8 );
  *(_BYTE *)(a2 + 11) = 61;
  return result;
}
