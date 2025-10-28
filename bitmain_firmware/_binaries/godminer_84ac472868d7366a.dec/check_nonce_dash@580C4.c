int __fastcall check_nonce_dash(int a1, int a2)
{
  int v4; // r0
  int v5; // r10
  int v6; // r4
  unsigned int v7; // r9
  int v8; // r3
  _BYTE *v9; // r2
  char *v10; // r3
  char v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r3
  _DWORD *v14; // r3
  int v15; // r10
  int v16; // r2
  unsigned int v17; // t1
  unsigned int v18; // t1
  bool v19; // cc
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // [sp+30h] [bp-1094h] BYREF
  _BYTE v26[32]; // [sp+50h] [bp-1074h] BYREF
  _DWORD v27[20]; // [sp+70h] [bp-1054h] BYREF
  _BYTE v28[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v25, "chain");
  v4 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "check_nonce_dash",
    16,
    617,
    20,
    v28);
  v5 = *(_DWORD *)(a1 + 624);
  v6 = *(unsigned __int8 *)(a2 + 53);
  v7 = *(_DWORD *)(v5 + 4 * (v6 + 3840));
  v8 = *(_DWORD *)(v5 + 12 * v6 + 19972);
  *(_DWORD *)(a2 + 54) = *(_DWORD *)(v5 + 12 * v6 + 19968);
  *(_DWORD *)(a2 + 58) = v8;
  memcpy(v27, (const void *)(v5 + 80 * v6 + 5120), sizeof(v27));
  v9 = v27;
  v10 = (char *)(v5 + 80 * v6 + 5120);
  do
  {
    v11 = *v10;
    v10 += 4;
    v9[3] = v11;
    v9[2] = *(v10 - 3);
    v9[1] = *(v10 - 2);
    *v9 = *(v10 - 1);
    v9 += 4;
  }
  while ( v9 != v28 );
  v27[19] = *(_DWORD *)(a2 + 48);
  Xhash(v26, v27);
  v12 = target_to_diff_dash(v26);
  if ( v12 <= 0x22 )
  {
    V_LOCK(v12);
    v22 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "check_nonce_dash",
      16,
      638,
      20,
      v28);
    v23 = (unsigned __int8)(*(_BYTE *)(a1 + 308) + 1);
    *(_BYTE *)(a1 + 308) = v23;
    if ( v23 )
      return 6;
    else
      return 2;
  }
  else
  {
    v13 = *(unsigned __int8 *)(a2 + 52);
    if ( v13 == v12 )
    {
      if ( v7 > v13 )
      {
LABEL_16:
        V_LOCK(v12);
        v24 = logfmt_raw((int)v28, 0x1000u);
        V_UNLOCK(v24);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_dash/backend_dash.c",
          156,
          "check_nonce_dash",
          16,
          661,
          20,
          v28);
        return 1;
      }
      else
      {
        v14 = v27;
        v15 = v5 + 32 * (*(unsigned __int8 *)(a2 + 53) + 496);
        v16 = v15 + 32;
        do
        {
          v17 = *--v14;
          v12 = v17;
          v18 = *(_DWORD *)(v16 - 4);
          v16 -= 4;
          v19 = v12 > v18;
          if ( v12 < v18 )
            break;
          if ( v19 )
            goto LABEL_16;
        }
        while ( v16 != v15 );
        return 0;
      }
    }
    else
    {
      V_LOCK(v12);
      v21 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "check_nonce_dash",
        16,
        647,
        20,
        v28);
      return 3;
    }
  }
}
