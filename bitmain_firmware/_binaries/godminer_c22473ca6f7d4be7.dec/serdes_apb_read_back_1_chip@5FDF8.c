int __fastcall serdes_apb_read_back_1_chip(int a1, char a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // r6
  _DWORD *v7; // r11
  int v8; // r5
  int v9; // r10
  char *v10; // r7
  int v11; // r3
  int v12; // r0
  char *v13; // r4
  char *v14; // r5
  int v15; // r12
  int v16; // r2
  int v17; // r1
  int v18; // r0
  int v19; // r2
  char *v20; // r3
  char v21; // lr
  char v22; // r12
  unsigned int v23; // t1
  unsigned int v27; // [sp+24h] [bp-1018h]
  int v29; // [sp+2Ch] [bp-1010h]
  unsigned int v30; // [sp+30h] [bp-100Ch]
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF

  LOWORD(v6) = 0;
  v27 = a4 >> 12;
  LOWORD(v7) = -14512;
  LOWORD(v8) = -25268;
  sub_5C158(a1, a3, 145, a4);
  v9 = 0;
  v10 = (char *)malloc(0x600u);
  if ( a3 == 255 )
    v11 = 16;
  else
    v11 = 1;
  HIWORD(v8) = (unsigned int)"e" >> 16;
  v30 = v11;
  v29 = v8;
  do
  {
    if ( a3 != 255 )
      LOWORD(v6) = a3;
    v12 = sub_5C5E4(a1, a2, (unsigned __int16)v6, 145, v10);
    if ( v12 > 0 )
    {
      v13 = v10;
      v14 = &v10[12 * v12];
      do
      {
        while ( (*(_DWORD *)v13 & 0x20) == 0 )
        {
          v13 += 12;
          if ( v14 == v13 )
            goto LABEL_12;
        }
        V_LOCK();
        v15 = (unsigned __int8)v13[4];
        v16 = *(_DWORD *)v13;
        v13 += 12;
        logfmt_raw(var1004, 0x1000u, 0, v29, v27, v15, (unsigned __int8)*(v13 - 4), a4, v16);
        V_UNLOCK();
        LOWORD(v17) = -25512;
        HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
        HIWORD(v17) = (unsigned int)"one" >> 16;
        zlog(*v7, v17, 154, "serdes_apb_read_back_1_chip", 27, 895, 20, var1004);
      }
      while ( v14 != v13 );
    }
LABEL_12:
    v18 = sub_5C5E4(a1, a2, (unsigned __int16)v6, 146, v10);
    if ( v18 > 0 )
    {
      v19 = a5 + 8 * v9;
      v20 = v10;
      do
      {
        v21 = v20[4];
        v19 += 8;
        v22 = v20[8];
        v23 = *(_DWORD *)v20;
        v20 += 12;
        *(_BYTE *)(v19 - 8) = v21;
        *(_BYTE *)(v19 - 7) = v22;
        *(_DWORD *)(v19 - 4) = bswap32(v23);
      }
      while ( v20 != &v10[12 * v18] );
      v9 += v18;
    }
    v6 = (unsigned __int8)(v6 + 1);
  }
  while ( v30 > v6 );
  free(v10);
  return v9;
}
