void *__fastcall ethash_quick_hash(void *a1, const void *a2, __int64 a3, void *a4)
{
  __int64 v4; // r2
  _BYTE s[100]; // [sp+24h] [bp-128h] BYREF
  int v10; // [sp+88h] [bp-C4h]
  int v11; // [sp+8Ch] [bp-C0h]
  _DWORD v12[8]; // [sp+90h] [bp-BCh]
  _BYTE dest[32]; // [sp+B0h] [bp-9Ch] BYREF
  int v14; // [sp+D0h] [bp-7Ch]
  int v15; // [sp+D4h] [bp-78h]
  _BYTE v16[32]; // [sp+F0h] [bp-5Ch] BYREF
  int m; // [sp+110h] [bp-3Ch]
  int k; // [sp+114h] [bp-38h]
  int j; // [sp+118h] [bp-34h]
  int i; // [sp+11Ch] [bp-30h]
  __int64 v21; // [sp+120h] [bp-2Ch]
  __int64 v22; // [sp+128h] [bp-24h]

  v22 = 0;
  v21 = 0;
  memcpy(dest, a2, sizeof(dest));
  for ( i = 0; i <= 31; ++i )
    *((_BYTE *)v12 + i) = *((_BYTE *)a2 + i);
  LOBYTE(v10) = HIBYTE(a3);
  BYTE1(v10) = BYTE6(a3);
  BYTE2(v10) = BYTE5(a3);
  HIBYTE(v10) = BYTE4(a3);
  LOBYTE(v11) = BYTE3(a3);
  BYTE1(v11) = BYTE2(a3);
  BYTE2(v11) = BYTE1(a3);
  HIBYTE(v11) = a3;
  v14 = v10;
  v15 = v11;
  HIDWORD(v4) = ((unsigned int)v21 | HIBYTE(a3)) << 24;
  LODWORD(v4) = 0;
  v21 = v4;
  for ( j = 1; j <= 6; ++j )
  {
    v22 |= *((unsigned __int8 *)&v10 + j);
    v21 |= v22 << (8 * (7 - (unsigned __int8)j));
    v22 = 0;
  }
  v21 |= HIBYTE(v11);
  memcpy(v16, a4, sizeof(v16));
  memset(s, 0, sizeof(s));
  *(_DWORD *)s = v12[0];
  *(_DWORD *)&s[4] = v12[1];
  *(_DWORD *)&s[8] = v12[2];
  *(_DWORD *)&s[12] = v12[3];
  *(_DWORD *)&s[16] = v12[4];
  *(_DWORD *)&s[20] = v12[5];
  *(_DWORD *)&s[24] = v12[6];
  *(_DWORD *)&s[28] = v12[7];
  *(_QWORD *)&s[32] = v21;
  for ( k = 10; k <= 24; ++k )
    *(_DWORD *)&s[4 * k] = *(_DWORD *)&aR_9[4 * k - 40];
  ethash_keccakf800((int *)s);
  memcpy(&s[32], a4, 0x20u);
  for ( m = 16; m <= 24; ++m )
    *(_DWORD *)&s[4 * m] = *(_DWORD *)&aR_9[4 * m - 64];
  ethash_keccakf800((int *)s);
  return memcpy(a1, s, 0x20u);
}
