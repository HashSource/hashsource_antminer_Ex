int __fastcall check_nonce_grin29(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r6
  int v5; // r10
  int v6; // r9
  int v7; // r7
  int v8; // r6
  int *v9; // r8
  int *v10; // r6
  __int64 v11; // r0
  int v12; // t1
  int *v13; // r0
  int *v14; // r10
  int v15; // r2
  int v16; // r8
  int v17; // r9
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r9
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // lr
  int i; // r7
  int v29; // r3
  unsigned int v30; // r12
  unsigned int v31; // r1
  _BYTE *v32; // r0
  char v33; // r2
  bool v34; // zf
  int v36; // r0
  int v37; // r0
  int v38; // [sp+48h] [bp-11ECh]
  unsigned __int64 v39; // [sp+50h] [bp-11E4h]
  _DWORD s[8]; // [sp+58h] [bp-11DCh] BYREF
  struct timeval tv; // [sp+78h] [bp-11BCh] BYREF
  struct timeval v42[20]; // [sp+98h] [bp-119Ch] BYREF
  _BYTE v43[248]; // [sp+138h] [bp-10FCh] BYREF
  _BYTE v44[4100]; // [sp+230h] [bp-1004h] BYREF

  v38 = *(_DWORD *)(a1 + 632);
  v3 = (_DWORD *)(a2 + 35);
  memcpy(v43, (const void *)(v38 + 246 * *(unsigned __int8 *)(a2 + 16) + 4352), 0xF6u);
  v4 = *(unsigned __int16 *)(a2 + 33);
  v5 = *(_DWORD *)(a2 + 25);
  v6 = *(_DWORD *)(a2 + 29);
  gettimeofday(&tv, 0);
  v7 = new_graph29(29, 21);
  (*(void (__fastcall **)(_DWORD, _BYTE *, int, _DWORD, int, int, int, _DWORD))(*(_DWORD *)(v7 + 92) + 72))(
    *(_DWORD *)(v7 + 92),
    v43,
    246,
    *(_DWORD *)(*(_DWORD *)(v7 + 92) + 72),
    v5,
    v6,
    25,
    0);
  v8 = v4 >> 2;
  if ( v8 )
  {
    v9 = &v3[v8];
    v10 = (int *)(a2 + 35);
    do
    {
      v11 = ((__int64 (__fastcall *)(int, int))*(_DWORD *)(v7 + 116))(v7, *v10);
      v12 = *v10++;
      (*(void (__fastcall **)(int, _DWORD, int))(v7 + 108))(
        v7,
        (2 * v11) & 0x1FFFFFFE | v12 & 1,
        (2 * HIDWORD(v11)) & 0x1FFFFFFE | v12 & 1);
    }
    while ( v10 != v9 );
  }
  v13 = (int *)(*(int (__fastcall **)(int))(v7 + 112))(v7);
  v14 = v13;
  if ( v13 )
  {
    if ( *v13 <= 0 )
    {
      v21 = 0;
    }
    else
    {
      v15 = v13[1];
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = v15 + v16;
        v19 = a2 + 31;
        do
        {
          v20 = *(_DWORD *)(v18 + 4);
          v18 += 4;
          *(_DWORD *)(v19 + 4) = v3[v20];
          v19 += 4;
        }
        while ( a2 + 199 != v19 );
        qsort(v3, 0x2Au, 4u, (__compar_fn_t)sub_A1E00);
        ++v17;
        v15 = v14[1];
        if ( v17 >= *v14 )
          break;
        v16 += 172;
      }
      v21 = *(unsigned __int8 *)(v15 + v16);
    }
  }
  else
  {
    v21 = 0;
  }
  free_graph29(v7);
  v22 = gettimeofday(v42, 0);
  V_LOCK(v22);
  v23 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_grin29/backend_grin29.c",
          160,
          "findcycle_grin29",
          16,
          408,
          20,
          v44);
  V_LOCK(v24);
  V_INT((int)&tv, "chain");
  v25 = logfmt_raw((int)v44, 0x1000u);
  V_UNLOCK(v25);
  v26 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_grin29/backend_grin29.c",
          160,
          "check_nonce_grin29",
          18,
          434,
          0x14u,
          v44);
  if ( v21 == 42 )
  {
    memset(s, 0, sizeof(s));
    memset(v42, 0, 0x99u);
    v27 = 0;
    for ( i = 0; i != 42; ++i )
    {
      v29 = 0;
      v30 = *(_DWORD *)(a2 + 4 * (i + 8) + 3) & 0x1FFFFFFF;
      do
      {
        v31 = v30 >> v29;
        v32 = &v44[(unsigned int)(v27 + v29) >> 3];
        v33 = (v27 + v29) & 7;
        v34 = ((v30 >> v29) & 1) == 0;
        if ( ((v30 >> v29) & 1) != 0 )
          LOBYTE(v31) = *(v32 - 408);
        ++v29;
        if ( !v34 )
          *(v32 - 408) = v31 | (1 << v33);
      }
      while ( v29 != 29 );
      v27 += 29;
    }
    blake2b(s, v42, 153);
    HIBYTE(v39) = s[0];
    BYTE3(v39) = s[1];
    BYTE6(v39) = BYTE1(s[0]);
    BYTE1(v39) = BYTE2(s[1]);
    BYTE4(v39) = HIBYTE(s[0]);
    BYTE5(v39) = BYTE2(s[0]);
    BYTE2(v39) = BYTE1(s[1]);
    LOBYTE(v39) = HIBYTE(s[1]);
    if ( v39 > *(_QWORD *)(v38 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384)) )
    {
      V_LOCK(HIWORD(s[1]));
      v37 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v37);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_grin29/backend_grin29.c",
        160,
        "check_nonce_grin29",
        18,
        462,
        20,
        v44);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK(v26);
    V_INT((int)v42, "chain");
    v36 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v36);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_grin29/backend_grin29.c",
      160,
      "check_nonce_grin29",
      18,
      436,
      0x14u,
      v44);
    return 2;
  }
}
