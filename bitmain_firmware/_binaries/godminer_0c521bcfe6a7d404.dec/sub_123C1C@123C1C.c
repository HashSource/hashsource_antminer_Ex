unsigned int __fastcall sub_123C1C(_DWORD *s, char a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v9; // r8
  char *v11; // r6
  unsigned int v12; // r3
  unsigned __int8 *v13; // r0
  int v14; // r12
  char *v15; // r4
  char *v16; // r6
  int v17; // r2
  int v18; // r3
  int v19; // r3
  unsigned int v20; // t1
  unsigned int result; // r0

  v6 = s[16];
  v9 = v6 | a3;
  if ( v6 | a3 )
  {
    memset((char *)s + v6, 0, 64 - v6);
    *((_BYTE *)s + s[16]) = a2 & (-1 << (8 - a3));
    sub_11F138((unsigned __int8 *)s, 0);
    v9 = s[16];
  }
  v11 = (char *)&s[a5];
  memset(s, 0, 0x40u);
  v12 = s[33];
  v13 = (unsigned __int8 *)s;
  v14 = s[34];
  v15 = (char *)(s + 17);
  v16 = v11 + 68;
  v12 <<= 9;
  v17 = a3 + v12 + 8 * v9;
  v18 = (v12 >> 23) + (v14 << 9);
  *(v15 - 68) = v17;
  *(v15 - 64) = v18;
  *(v15 - 67) = BYTE1(v17);
  *(v15 - 61) = HIBYTE(v18);
  *(v15 - 66) = BYTE2(v17);
  *(v15 - 65) = HIBYTE(v17);
  *(v15 - 63) = BYTE1(v18);
  *(v15 - 62) = BYTE2(v18);
  sub_11F138(v13, 1);
  v19 = a4;
  do
  {
    v20 = *(_DWORD *)v15;
    v15 += 4;
    v19 += 4;
    *(_DWORD *)(v19 - 4) = v20;
    result = v20 >> 8;
  }
  while ( v16 != v15 );
  return result;
}
