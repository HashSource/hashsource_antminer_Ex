int __fastcall lzo_crc32(int a1, char *a2, unsigned int a3)
{
  unsigned int v3; // r0
  unsigned int v4; // r7
  char *v5; // r3
  char v6; // lr
  int v7; // r9
  unsigned int v8; // r9
  unsigned int v9; // r9
  unsigned int v10; // r9
  unsigned int v11; // r9
  unsigned int v12; // r9
  unsigned int v13; // r9
  unsigned int v14; // r9
  unsigned int v15; // r9
  unsigned int v16; // r9
  int v17; // r10
  unsigned int v18; // r8
  unsigned int v19; // r9
  unsigned int v20; // r9
  unsigned int v21; // r0
  char *v22; // r2
  char v23; // t1

  if ( !a2 )
    return 0;
  v3 = ~a1;
  if ( a3 > 0xF )
  {
    v4 = (a3 - 16) >> 4;
    v5 = a2 + 16;
    do
    {
      v6 = *(v5 - 16);
      v5 += 16;
      v7 = dword_32270[(unsigned __int8)(v6 ^ v3)];
      v8 = dword_32270[(unsigned __int8)(*(v5 - 31) ^ v7 ^ BYTE1(v3))] ^ ((v7 ^ (v3 >> 8)) >> 8);
      v9 = dword_32270[(unsigned __int8)(*(v5 - 30) ^ v8)] ^ (v8 >> 8);
      v10 = dword_32270[(unsigned __int8)(*(v5 - 29) ^ v9)] ^ (v9 >> 8);
      v11 = dword_32270[(unsigned __int8)(*(v5 - 28) ^ v10)] ^ (v10 >> 8);
      v12 = dword_32270[(unsigned __int8)(*(v5 - 27) ^ v11)] ^ (v11 >> 8);
      v13 = dword_32270[(unsigned __int8)(*(v5 - 26) ^ v12)] ^ (v12 >> 8);
      v14 = dword_32270[(unsigned __int8)(*(v5 - 25) ^ v13)] ^ (v13 >> 8);
      v15 = dword_32270[(unsigned __int8)(*(v5 - 24) ^ v14)] ^ (v14 >> 8);
      v16 = dword_32270[(unsigned __int8)(*(v5 - 23) ^ v15)] ^ (v15 >> 8);
      v17 = dword_32270[(unsigned __int8)(*(v5 - 22) ^ v16)];
      v18 = dword_32270[(unsigned __int8)(*(v5 - 21) ^ v17 ^ BYTE1(v16))] ^ ((v17 ^ (v16 >> 8)) >> 8);
      v19 = dword_32270[(unsigned __int8)(*(v5 - 20) ^ v18)] ^ (v18 >> 8);
      v20 = dword_32270[(unsigned __int8)(*(v5 - 19) ^ v19)] ^ (v19 >> 8);
      v21 = dword_32270[(unsigned __int8)(*(v5 - 18) ^ v20)] ^ (v20 >> 8);
      v3 = dword_32270[(unsigned __int8)(*(v5 - 17) ^ v21)] ^ (v21 >> 8);
    }
    while ( &a2[16 * v4 + 32] != v5 );
    a2 += 16 * v4 + 16;
    a3 &= 0xFu;
  }
  if ( a3 )
  {
    v22 = &a2[a3];
    do
    {
      v23 = *a2++;
      v3 = dword_32270[(unsigned __int8)(v23 ^ v3)] ^ (v3 >> 8);
    }
    while ( a2 != v22 );
  }
  return ~v3;
}
