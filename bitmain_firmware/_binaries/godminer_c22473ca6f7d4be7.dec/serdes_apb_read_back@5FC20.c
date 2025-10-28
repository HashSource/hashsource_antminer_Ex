int __fastcall serdes_apb_read_back(int a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v7; // r6
  _DWORD *v8; // r11
  int v9; // r10
  char *v10; // r0
  int v11; // r3
  char *v12; // r7
  int v13; // r2
  int v14; // r0
  char *v15; // r4
  char *v16; // r5
  int v17; // r12
  int v18; // r2
  int v19; // r1
  int v20; // r0
  int v21; // r2
  char *v22; // r3
  char v23; // lr
  char v24; // r12
  unsigned int v25; // t1
  unsigned int v28; // [sp+1Ch] [bp-1018h]
  int v30; // [sp+24h] [bp-1010h]
  unsigned int v31; // [sp+28h] [bp-100Ch]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  LOWORD(v7) = 0;
  LOWORD(v8) = -14512;
  sub_5C158(a1, a3, 145, a4);
  v9 = 0;
  v28 = a4 >> 12;
  v10 = (char *)malloc(0x600u);
  LOWORD(v11) = -25268;
  v12 = v10;
  if ( a3 == 255 )
    v13 = 16;
  else
    v13 = 1;
  HIWORD(v11) = (unsigned int)"e" >> 16;
  v31 = v13;
  v30 = v11;
  do
  {
    if ( a3 != 255 )
      LOWORD(v7) = a3;
    v14 = sub_5C3C4(a1, (unsigned __int16)v7, 145, v12);
    if ( v14 > 0 )
    {
      v15 = v12;
      v16 = &v12[12 * v14];
      do
      {
        while ( (*(_DWORD *)v15 & 0x20) == 0 )
        {
          v15 += 12;
          if ( v16 == v15 )
            goto LABEL_12;
        }
        V_LOCK();
        v17 = (unsigned __int8)v15[4];
        v18 = *(_DWORD *)v15;
        v15 += 12;
        logfmt_raw(var1004, 0x1000u, 0, v30, v28, v17, (unsigned __int8)*(v15 - 4), a4, v18);
        V_UNLOCK();
        LOWORD(v19) = -25512;
        HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
        HIWORD(v19) = (unsigned int)"one" >> 16;
        zlog(*v8, v19, 154, "serdes_apb_read_back", 20, 852, 20, var1004);
      }
      while ( v16 != v15 );
    }
LABEL_12:
    v20 = sub_5C3C4(a1, (unsigned __int16)v7, 146, v12);
    if ( v20 > 0 )
    {
      v21 = a5 + 8 * v9;
      v22 = v12;
      do
      {
        v23 = v22[4];
        v21 += 8;
        v24 = v22[8];
        v25 = *(_DWORD *)v22;
        v22 += 12;
        *(_BYTE *)(v21 - 8) = v23;
        *(_BYTE *)(v21 - 7) = v24;
        *(_DWORD *)(v21 - 4) = bswap32(v25);
      }
      while ( v22 != &v12[12 * v20] );
      v9 += v20;
    }
    v7 = (unsigned __int8)(v7 + 1);
  }
  while ( v31 > v7 );
  free(v12);
  return v9;
}
