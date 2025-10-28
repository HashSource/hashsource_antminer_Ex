int __fastcall serdes_apb_read(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  unsigned __int16 v4; // r7
  _DWORD *v6; // r11
  int v7; // r9
  char *v8; // r8
  _BYTE *v9; // r12
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  _BYTE *v15; // r3
  int v16; // r0
  char *v17; // r4
  char *v18; // r5
  int v19; // r12
  int v20; // r2
  int v21; // r1
  int v26; // [sp+2Ch] [bp-1018h]
  _BYTE v27[16]; // [sp+30h] [bp-1014h] BYREF
  char v28[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v6) = -14512;
  v7 = 0;
  sub_5C158(a1, (unsigned __int8)a3, 145, a4);
  v8 = (char *)malloc(0x600u);
  if ( a3 == (_BYTE *)255 )
  {
    v10 = (int)&unk_138130;
    v26 = 14;
    v9 = v27;
  }
  else
  {
    v10 = 1;
    v26 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v11 = *(_DWORD *)v10;
    v12 = *(_DWORD *)(v10 + 4);
    v13 = *(_DWORD *)(v10 + 8);
    v14 = *(_DWORD *)(v10 + 12);
    *(_DWORD *)v9 = v11;
    *((_DWORD *)v9 + 1) = v12;
    *((_DWORD *)v9 + 2) = v13;
    *((_WORD *)v9 + 6) = v14;
  }
  do
  {
    v15 = a3;
    if ( a3 == (_BYTE *)255 )
      v15 = v27;
    else
      v4 = (unsigned __int16)a3;
    if ( a3 == (_BYTE *)255 )
      v4 = (unsigned __int8)v15[v7];
    v16 = sub_5C3C4(a1, v4, 145, v8);
    if ( v16 > 0 )
    {
      v17 = v8;
      v18 = &v8[12 * v16];
      do
      {
        while ( (*(_DWORD *)v17 & 0x20) == 0 )
        {
          v17 += 12;
          if ( v18 == v17 )
            goto LABEL_16;
        }
        V_LOCK();
        v19 = (unsigned __int8)v17[4];
        v20 = *(_DWORD *)v17;
        v17 += 12;
        logfmt_raw(
          v28,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          a4 >> 12,
          v19,
          (unsigned __int8)*(v17 - 4),
          a4,
          v20);
        V_UNLOCK();
        LOWORD(v21) = -25512;
        HIWORD(v6) = (unsigned int)&unk_16B55C >> 16;
        HIWORD(v21) = (unsigned int)"one" >> 16;
        zlog(*v6, v21, 154, "serdes_apb_read", 15, 818, 100, v28);
      }
      while ( v18 != v17 );
    }
LABEL_16:
    sub_5C3C4(a1, v4, 146, v8);
    ++v7;
  }
  while ( v26 != v7 );
  free(v8);
  return 0;
}
