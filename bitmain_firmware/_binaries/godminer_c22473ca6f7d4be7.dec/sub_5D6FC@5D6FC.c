int __fastcall sub_5D6FC(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned __int16 v3; // r7
  int v5; // r9
  char *v6; // r8
  _BYTE *v7; // r12
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _BYTE *v13; // r3
  int v14; // r0
  char *v15; // r4
  char *v16; // r5
  int v17; // r12
  int v18; // r2
  int v23; // [sp+2Ch] [bp-1018h]
  _BYTE v24[16]; // [sp+30h] [bp-1014h] BYREF
  char v25[4100]; // [sp+40h] [bp-1004h] BYREF

  v5 = 0;
  sub_5C158(a1, (unsigned __int8)a2, 145, a3);
  v6 = (char *)malloc(0x600u);
  if ( a2 == (_BYTE *)255 )
  {
    v8 = (int)&unk_138130;
    v23 = 14;
    v7 = v24;
  }
  else
  {
    v8 = 1;
    v23 = 1;
  }
  if ( a2 == (_BYTE *)255 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD *)(v8 + 4);
    v11 = *(_DWORD *)(v8 + 8);
    v12 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)v7 = v9;
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    *((_WORD *)v7 + 6) = v12;
  }
  do
  {
    v13 = a2;
    if ( a2 == (_BYTE *)255 )
      v13 = v24;
    else
      v3 = (unsigned __int16)a2;
    if ( a2 == (_BYTE *)255 )
      v3 = (unsigned __int8)v13[v5];
    v14 = sub_5C3C4(a1, v3, 145, v6);
    if ( v14 > 0 )
    {
      v15 = v6;
      v16 = &v6[12 * v14];
      do
      {
        while ( (*(_DWORD *)v15 & 0x20) == 0 )
        {
          v15 += 12;
          if ( v16 == v15 )
            goto LABEL_16;
        }
        V_LOCK();
        v17 = (unsigned __int8)v15[4];
        v18 = *(_DWORD *)v15;
        v15 += 12;
        logfmt_raw(
          v25,
          0x1000u,
          0,
          "[PHY READ] channel %1x chip %02x core %02x apb_addr %04x apb_adata %08x, pslerr is 1",
          a3 >> 12,
          v17,
          (unsigned __int8)*(v15 - 4),
          a3,
          v18);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "serdes_apb_read",
          15,
          818,
          100,
          v25);
      }
      while ( v16 != v15 );
    }
LABEL_16:
    sub_5C3C4(a1, v3, 146, v6);
    ++v5;
  }
  while ( v5 != v23 );
  free(v6);
  return 0;
}
