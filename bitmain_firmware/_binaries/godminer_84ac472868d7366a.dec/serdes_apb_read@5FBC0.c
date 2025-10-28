int __fastcall serdes_apb_read(int a1, int a2, _BYTE *a3, int a4)
{
  unsigned __int16 v4; // r7
  int v6; // r9
  char *v7; // r8
  _BYTE *v8; // r12
  int v9; // r3
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _BYTE *v14; // r3
  int v15; // r0
  int v16; // r0
  char *v17; // r4
  char *v18; // r5
  int v19; // r0
  int v23; // [sp+2Ch] [bp-1018h]
  _BYTE v24[16]; // [sp+30h] [bp-1014h] BYREF
  _BYTE v25[4100]; // [sp+40h] [bp-1004h] BYREF

  v6 = 0;
  sub_5C2A0(a1, (unsigned __int8)a3, 145, a4);
  v7 = (char *)malloc(0x600u);
  if ( a3 == (_BYTE *)255 )
  {
    v9 = (int)&unk_1384C0;
    v23 = 14;
    v8 = v24;
  }
  else
  {
    v9 = 1;
    v23 = 1;
  }
  if ( a3 == (_BYTE *)255 )
  {
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(v9 + 4);
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_DWORD *)(v9 + 12);
    *(_DWORD *)v8 = v10;
    *((_DWORD *)v8 + 1) = v11;
    *((_DWORD *)v8 + 2) = v12;
    *((_WORD *)v8 + 6) = v13;
  }
  do
  {
    v14 = a3;
    if ( a3 == (_BYTE *)255 )
      v14 = v24;
    else
      v4 = (unsigned __int16)a3;
    if ( a3 == (_BYTE *)255 )
      v4 = (unsigned __int8)v14[v6];
    v15 = sub_5C50C(a1, v4, 145, v7);
    if ( v15 > 0 )
    {
      v16 = 3 * v15;
      v17 = v7;
      v18 = &v7[4 * v16];
      do
      {
        while ( (*(_DWORD *)v17 & 0x20) == 0 )
        {
          v17 += 12;
          if ( v18 == v17 )
            goto LABEL_16;
        }
        V_LOCK(v16);
        v17 += 12;
        v19 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v19);
        v16 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/backend/backend_eth/backend_eth.c",
                154,
                "serdes_apb_read",
                15,
                818,
                100,
                v25);
      }
      while ( v18 != v17 );
    }
LABEL_16:
    sub_5C50C(a1, v4, 146, v7);
    ++v6;
  }
  while ( v23 != v6 );
  free(v7);
  return 0;
}
