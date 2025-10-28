int __fastcall check_nonce_ae(int a1, int a2)
{
  int v3; // r8
  int v5; // r10
  int v6; // r4
  int v7; // r9
  int *v8; // r11
  int *v9; // r8
  unsigned int v10; // r10
  int v11; // t1
  unsigned int v12; // r0
  int sols_ae; // r0
  int v14; // r10
  int v15; // r0
  int v16; // r0
  int v17; // r0
  _BYTE *v18; // r2
  int v19; // r1
  int v20; // r3
  int v21; // r3
  unsigned __int64 v22; // r0
  int v24; // r0
  int v25; // r0
  _DWORD *v26; // r3
  int v27; // r2
  int v28; // t1
  int v29; // r0
  int v30; // [sp+3Ch] [bp-1178h]
  unsigned __int64 v31; // [sp+48h] [bp-116Ch]
  struct timeval tv; // [sp+5Ch] [bp-1158h] BYREF
  struct timeval v33; // [sp+64h] [bp-1150h] BYREF
  _DWORD v34[3]; // [sp+6Ch] [bp-1148h] BYREF
  _WORD s[16]; // [sp+78h] [bp-113Ch] BYREF
  _DWORD v36[8]; // [sp+98h] [bp-111Ch] BYREF
  _DWORD v37[20]; // [sp+B8h] [bp-10FCh] BYREF
  _BYTE v38[168]; // [sp+108h] [bp-10ACh] BYREF
  _BYTE v39[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 624);
  v30 = v3;
  v5 = a2 + 87;
  memset(s, 0, sizeof(s));
  memcpy(v37, (const void *)(v3 + 80 * *(unsigned __int8 *)(a2 + 48) + 11520), sizeof(v37));
  base64_encode(v34);
  v6 = *(unsigned __int16 *)(a2 + 85);
  v7 = *(_DWORD *)(a1 + 136);
  v37[11] = v34[0];
  v37[12] = v34[1];
  v37[13] = v34[2];
  memset(v38, 0, sizeof(v38));
  gettimeofday(&tv, 0);
  memset(v36, 0, sizeof(v36));
  generate_sipkeys_ae(v37, 80, v36);
  graph_init_ae(v7);
  if ( v6 >> 2 )
  {
    v8 = (int *)(v5 + 4 * (v6 >> 2));
    v9 = (int *)(a2 + 87);
    do
    {
      v10 = sip_node_ae(v7, v36[7], v36[0], v36[1], v36[2], v36[3], v36[4], v36[5], v36[6], v36[7], *v9, 0);
      v11 = *v9++;
      v12 = sip_node_ae(v7, v36[7], v36[0], v36[1], v36[2], v36[3], v36[4], v36[5], v36[6], v36[7], v11, 1);
      graph_add_edge_ae(v7, v10 >> 1, v12 >> 1);
    }
    while ( v9 != v8 );
  }
  sols_ae = get_sols_ae(
              v7,
              v36[7],
              v36[0],
              v36[1],
              v36[2],
              v36[3],
              v36[4],
              v36[5],
              v36[6],
              v36[7],
              v38,
              a2 + 87,
              v6 >> 2);
  v14 = sols_ae;
  if ( sols_ae )
  {
    V_LOCK(sols_ae);
    v25 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ae/backend_ae.c",
      152,
      "findcycle_ae",
      12,
      311,
      20,
      v39);
    qsort(v38, 0x2Au, 4u, (__compar_fn_t)sub_52E20);
    v26 = &v37[19];
    v27 = a2 + 83;
    do
    {
      v28 = v26[1];
      ++v26;
      *(_DWORD *)(v27 + 4) = v28;
      v27 += 4;
    }
    while ( v26 != (_DWORD *)&v38[164] );
  }
  graph_exit_ae(v7);
  v15 = gettimeofday(&v33, 0);
  V_LOCK(v15);
  v16 = logfmt_raw((int)v39, 0x1000u);
  V_UNLOCK(v16);
  v17 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_ae/backend_ae.c",
          152,
          "findcycle_ae",
          12,
          320,
          20,
          v39);
  if ( v14 )
  {
    memset(s, 0, sizeof(s));
    v18 = v38;
    v19 = 0;
    do
    {
      v20 = v19 + 20;
      ++v19;
      v21 = *(_DWORD *)(a2 + 4 * v20 + 7);
      v18[3] = v21;
      v18[2] = BYTE1(v21);
      v18[1] = BYTE2(v21);
      *v18 = HIBYTE(v21);
      v18 += 4;
    }
    while ( v19 != 42 );
    blake2b(s, v38, 168);
    HIBYTE(v31) = s[0];
    BYTE3(v31) = s[2];
    BYTE6(v31) = HIBYTE(s[0]);
    BYTE4(v31) = HIBYTE(s[1]);
    BYTE5(v31) = s[1];
    BYTE2(v31) = HIBYTE(s[2]);
    LOBYTE(v31) = HIBYTE(s[3]);
    BYTE1(v31) = s[3];
    v22 = *(_QWORD *)(v30 + 8 * (*(unsigned __int8 *)(a2 + 48) + 768));
    if ( v22 < v31 )
    {
      V_LOCK(v22);
      v24 = logfmt_raw((int)v39, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ae/backend_ae.c",
        152,
        "check_nonce_ae",
        14,
        410,
        20,
        v39);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    V_LOCK(v17);
    V_INT((int)v38, "chain");
    v29 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ae/backend_ae.c",
      152,
      "check_nonce_ae",
      14,
      398,
      20,
      v39);
    return 2;
  }
}
