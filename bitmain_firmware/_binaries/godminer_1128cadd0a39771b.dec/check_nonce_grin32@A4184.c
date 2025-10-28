int __fastcall check_nonce_grin32(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r11
  int v6; // r10
  int v7; // r7
  int v8; // r6
  int *v9; // r10
  int *v10; // r6
  int v11; // r0
  int v12; // t1
  int v13; // r9
  int v14; // r0
  int *v15; // r0
  int *v16; // r10
  int v17; // r9
  int v18; // r2
  int v19; // r11
  int v20; // r2
  int v21; // r3
  int v22; // t1
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r7
  int v29; // lr
  int v30; // r3
  unsigned int v31; // r12
  unsigned int v32; // r1
  _BYTE *v33; // r0
  char v34; // r2
  bool v35; // zf
  int v37; // r0
  int v38; // r0
  int v39; // [sp+44h] [bp-11F8h]
  unsigned __int64 v40; // [sp+50h] [bp-11ECh]
  _DWORD s[8]; // [sp+58h] [bp-11E4h] BYREF
  struct timeval tv; // [sp+78h] [bp-11C4h] BYREF
  struct timeval v43[21]; // [sp+98h] [bp-11A4h] BYREF
  _BYTE v44[248]; // [sp+140h] [bp-10FCh] BYREF
  _BYTE v45[4100]; // [sp+238h] [bp-1004h] BYREF

  v39 = *(_DWORD *)(a1 + 632);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v44, (const void *)(v39 + 246 * *(unsigned __int8 *)(a2 + 16) + 4096), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = new_graph32(32, 25);
  (*(void (__fastcall **)(_DWORD, _BYTE *, int, _DWORD, int, int, int, _DWORD))(*(_DWORD *)(v7 + 92) + 72))(
    *(_DWORD *)(v7 + 92),
    v44,
    246,
    *(_DWORD *)(*(_DWORD *)(v7 + 92) + 72),
    v5,
    v6,
    21,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(a2 + 35);
    do
    {
      v11 = (*(int (__fastcall **)(int, int, _DWORD))(v7 + 116))(v7, *v10, 0);
      v12 = *v10++;
      v13 = v11;
      v14 = (*(int (__fastcall **)(int, int, int))(v7 + 116))(v7, v12, 1);
      (*(void (__fastcall **)(int, int, int))(v7 + 108))(v7, v14, v13);
    }
    while ( v10 != v9 );
  }
  v15 = (int *)(*(int (__fastcall **)(int))(v7 + 112))(v7);
  v16 = v15;
  if ( v15 )
  {
    v17 = 0;
    if ( *v15 > 0 )
    {
      v18 = v15[1];
      v19 = 0;
      while ( 1 )
      {
        v20 = v18 + v17;
        v21 = a2 + 31;
        do
        {
          v22 = *(_DWORD *)(v20 + 4);
          v20 += 4;
          *(_DWORD *)(v21 + 4) = v3[v22];
          v21 += 4;
        }
        while ( a2 + 199 != v21 );
        qsort(v3, 0x2Au, 4u, (__compar_fn_t)sub_A3838);
        ++v19;
        v18 = v16[1];
        if ( v19 >= *v16 )
          break;
        v17 += 172;
      }
      v17 = *(unsigned __int8 *)(v18 + v17);
    }
  }
  else
  {
    v17 = 0;
  }
  free_graph32(v7);
  v23 = gettimeofday(v43, 0);
  V_LOCK(v23);
  v24 = logfmt_raw((int)v45, 0x1000u);
  V_UNLOCK(v24);
  v25 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_grin32/backend_grin32.c",
          160,
          "findcycle_grin32",
          16,
          378,
          20,
          v45);
  V_LOCK(v25);
  V_INT((int)&tv, "chain");
  v26 = logfmt_raw((int)v45, 0x1000u);
  V_UNLOCK(v26);
  v27 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_grin32/backend_grin32.c",
          160,
          "check_nonce_grin32",
          18,
          392,
          0x14u,
          v45);
  if ( v17 == 42 )
  {
    v28 = 0;
    memset(s, 0, sizeof(s));
    memset(v43, 0, sizeof(v43));
    do
    {
      v29 = 32 * v28;
      v30 = 0;
      v31 = *(_DWORD *)(a2 + 4 * (v28 + 8) + 3);
      do
      {
        v32 = v31 >> v30;
        v33 = &v45[(unsigned int)(v29 + v30) >> 3];
        v34 = (v29 + v30) & 7;
        v35 = ((v31 >> v30) & 1) == 0;
        if ( ((v31 >> v30) & 1) != 0 )
          LOBYTE(v32) = *(v33 - 416);
        ++v30;
        if ( !v35 )
          *(v33 - 416) = v32 | (1 << v34);
      }
      while ( v30 != 32 );
      ++v28;
    }
    while ( v28 != 42 );
    blake2b(s, v43, 168);
    HIBYTE(v40) = s[0];
    BYTE3(v40) = s[1];
    BYTE4(v40) = HIBYTE(s[0]);
    BYTE5(v40) = BYTE2(s[0]);
    LOBYTE(v40) = HIBYTE(s[1]);
    BYTE1(v40) = BYTE2(s[1]);
    BYTE2(v40) = BYTE1(s[1]);
    BYTE6(v40) = BYTE1(s[0]);
    if ( v40 > *(_QWORD *)(v39 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384)) )
    {
      V_LOCK(s[1] >> 8);
      v37 = logfmt_raw((int)v45, 0x1000u);
      V_UNLOCK(v37);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_grin32/backend_grin32.c",
        160,
        "check_nonce_grin32",
        18,
        420,
        20,
        v45);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK(v27);
    V_INT((int)v43, "chain");
    v38 = logfmt_raw((int)v45, 0x1000u);
    V_UNLOCK(v38);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin32/backend_grin32.c",
      160,
      "check_nonce_grin32",
      18,
      394,
      0x14u,
      v45);
    return 2;
  }
}
