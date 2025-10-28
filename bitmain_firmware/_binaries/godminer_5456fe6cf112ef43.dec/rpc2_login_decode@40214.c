int __fastcall rpc2_login_decode(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  _BYTE *v6; // r0
  _DWORD *v7; // r0
  int *v8; // r0
  int *v9; // r3
  int v10; // r1
  int *v11; // r2
  int v12; // r4
  int v13; // lr
  int v14; // r12
  int v15; // r0
  int v16; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r0
  _BYTE v28[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = (_DWORD *)json_object_get(a1, "result");
  v5 = v4;
  if ( !v4 )
  {
    V_LOCK(0);
    v18 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v18);
    v19 = g_zc;
    v20 = 96;
    goto LABEL_12;
  }
  v6 = json_string_value(v4);
  if ( v6 )
  {
    if ( *v6 == 111 && v6[1] == 107 && !v6[2] )
      goto LABEL_6;
    V_LOCK(v6);
    v23 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v23);
    v19 = g_zc;
    v20 = 107;
LABEL_12:
    v21 = zlog(
            v19,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin29/frontend_grin29.c",
            163,
            "rpc2_login_decode",
            17,
            v20,
            100,
            v28);
    V_LOCK(v21);
    v22 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "rpc2_login_decode",
      17,
      148,
      80,
      v28);
    return 0;
  }
  v25 = json_true();
  if ( v5 != v25 )
  {
    V_LOCK(v25);
    v26 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v26);
    v19 = g_zc;
    v20 = 102;
    goto LABEL_12;
  }
LABEL_6:
  v7 = (_DWORD *)json_object_get(a1, "id");
  if ( !v7 )
  {
    V_LOCK(0);
    v24 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v24);
    v19 = g_zc;
    v20 = 115;
    goto LABEL_12;
  }
  v8 = json_string_value(v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v27);
    v19 = g_zc;
    v20 = 120;
    goto LABEL_12;
  }
  v9 = v8;
  v10 = a2 + 1852;
  v11 = v8 + 16;
  do
  {
    v12 = *v9;
    v9 += 4;
    v13 = *(v9 - 3);
    v10 += 16;
    v14 = *(v9 - 2);
    v15 = *(v9 - 1);
    *(_DWORD *)(v10 - 16) = v12;
    *(_DWORD *)(v10 - 12) = v13;
    *(_DWORD *)(v10 - 8) = v14;
    *(_DWORD *)(v10 - 4) = v15;
  }
  while ( v9 != v11 );
  V_LOCK(v15);
  v16 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v16);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin29/frontend_grin29.c",
    163,
    "rpc2_login_decode",
    17,
    126,
    20,
    v28);
  return 1;
}
