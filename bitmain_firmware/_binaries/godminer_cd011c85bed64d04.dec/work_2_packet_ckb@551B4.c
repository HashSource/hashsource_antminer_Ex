int __fastcall work_2_packet_ckb(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r5
  char *v7; // r9
  int v8; // r4
  int v9; // r3
  _DWORD *v11; // r1
  int v12; // r12
  int v13; // r7
  _DWORD *v14; // r3
  _DWORD *v15; // r0
  int v16; // t1
  int v17; // r7
  int v18; // lr
  int v19; // r2
  int v20; // r8
  int v21; // r7
  int v22; // lr
  char *v23; // r2
  int v24; // r3
  int v25; // r5
  int v26; // lr
  int v27; // r12
  int v28; // r1
  char v29; // r1
  char *v30; // r3
  _BYTE *v31; // r2
  int v32; // r12
  int v33; // r0
  int v34; // r1
  int v35; // r4
  _DWORD *v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r2
  __int16 v40; // r0
  int v42; // r0
  char *v43; // r5
  char *v44; // r6
  int v45; // t1
  int v46; // r0
  int v47; // r0
  int v48; // r0
  int v49; // r0
  char *v50; // [sp+10h] [bp-2014h]
  char v52[4064]; // [sp+20h] [bp-2004h] BYREF
  _BYTE v53[4100]; // [sp+1020h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 632);
  *a3 = 85;
  a3[2] = 32;
  v7 = (char *)(a2 + 10);
  a3[1] = -86;
  v8 = v5 + 28672;
  v9 = *(_DWORD *)(a1 + 312);
  v11 = a2 + 2;
  if ( v9 == 1 )
    a3[2] = 48;
  v12 = *(unsigned __int8 *)(v5 + 31744);
  v13 = v11[20];
  *(_QWORD *)(v5 + 8 * v12) = *((_QWORD *)v11 - 1);
  v14 = (_DWORD *)(v5 + 32 * (v12 + 736));
  *(_DWORD *)(v5 + 4 * (v12 + 5632)) = v13;
  v16 = a2[23];
  v15 = a2 + 23;
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[4];
  v21 = v15[5];
  v22 = v15[6];
  v14[7] = v15[7];
  v14[4] = v20;
  v14[5] = v21;
  v14[6] = v22;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 31744) + 64)), (const char *)v11);
  v23 = v7;
  v24 = v5 + 48 * *(unsigned __int8 *)(v5 + 31744) + 10240;
  do
  {
    v25 = *(_DWORD *)v23;
    v23 += 16;
    v26 = *((_DWORD *)v23 - 3);
    v24 += 16;
    v27 = *((_DWORD *)v23 - 2);
    v28 = *((_DWORD *)v23 - 1);
    *(_DWORD *)(v24 - 16) = v25;
    *(_DWORD *)(v24 - 12) = v26;
    *(_DWORD *)(v24 - 8) = v27;
    *(_DWORD *)(v24 - 4) = v28;
  }
  while ( v23 != (char *)(a2 + 22) );
  v29 = *(_BYTE *)(v8 + 3072);
  v30 = v7;
  v31 = a3 + 4;
  v50 = v7 + 48;
  a3[3] = v29;
  *(_BYTE *)(v8 + 3072) = v29 + 1;
  do
  {
    v30 += 16;
    v31 += 16;
    v32 = *((_DWORD *)v30 - 3);
    v33 = *((_DWORD *)v30 - 2);
    v34 = *((_DWORD *)v30 - 1);
    *((_DWORD *)v31 - 4) = *((_DWORD *)v30 - 4);
    *((_DWORD *)v31 - 3) = v32;
    *((_DWORD *)v31 - 2) = v33;
    *((_DWORD *)v31 - 1) = v34;
  }
  while ( v30 != v50 );
  v35 = memcmp(&last_header_ckb, v7, 0x30u);
  if ( !v35 )
  {
    V_LOCK(0);
    v42 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v42);
    v43 = (char *)a2 + 39;
    v44 = (char *)a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "work_2_packet_ckb",
      17,
      142,
      80,
      v53);
    do
    {
      v45 = (unsigned __int8)*++v43;
      v46 = snprintf(&v52[v35], 4096 - v35, "%02x ", v45);
      v35 += 3;
    }
    while ( v43 != v44 );
    V_LOCK(v46);
    v47 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v47);
    v48 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_ckb/backend_ckb.c",
            154,
            "dump_work_ckb",
            13,
            106,
            20,
            v53);
    V_LOCK(v48);
    v49 = logfmt_raw((int)v53, 0x1000u);
    V_UNLOCK(v49);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb/backend_ckb.c",
      154,
      "dump_work_ckb",
      13,
      107,
      20,
      v53);
  }
  v36 = &last_header_ckb;
  do
  {
    v7 += 16;
    v36 += 4;
    v37 = *((_DWORD *)v7 - 3);
    v38 = *((_DWORD *)v7 - 2);
    v39 = *((_DWORD *)v7 - 1);
    *(v36 - 4) = *((_DWORD *)v7 - 4);
    *(v36 - 3) = v37;
    *(v36 - 2) = v38;
    *(v36 - 1) = v39;
  }
  while ( v7 != v50 );
  v40 = BM_CRC16(a3 + 2, 50);
  a3[53] = v40;
  a3[52] = HIBYTE(v40);
  *a4 = 54;
  return 0;
}
