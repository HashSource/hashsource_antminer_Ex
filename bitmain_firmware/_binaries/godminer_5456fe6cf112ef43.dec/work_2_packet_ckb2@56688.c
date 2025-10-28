int __fastcall work_2_packet_ckb2(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r5
  int v9; // r0
  int v10; // r12
  int v11; // r9
  _DWORD *v12; // r2
  int v13; // r7
  int v14; // lr
  int v15; // r12
  int v16; // r7
  int v17; // lr
  int v18; // r12
  int *v19; // r2
  int v20; // r4
  int v21; // lr
  int v22; // r12
  int v23; // r1
  int v24; // r3
  char v25; // r2
  int v26; // r3
  _BYTE *v27; // r1
  int v28; // r12
  int v29; // r0
  int v30; // r2
  int v31; // r4
  _DWORD *v32; // r3
  int v33; // r0
  int v34; // r1
  int v35; // r2
  __int16 v36; // r0
  int v37; // r3
  int v39; // r0
  int v40; // r5
  int v41; // r6
  int v42; // t1
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // [sp+14h] [bp-2018h]
  char v49[4056]; // [sp+28h] [bp-2004h] BYREF
  _BYTE v50[4100]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 624);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = v6 + 12288;
  if ( *(_DWORD *)(a1 + 304) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 15872);
  v10 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  v11 = a2 + 40;
  *(_DWORD *)(v6 + 4 * (v9 + 2816)) = v10;
  v12 = (_DWORD *)(v6 + 32 * (v9 + 368));
  v13 = *(_DWORD *)(a2 + 96);
  v14 = *(_DWORD *)(a2 + 100);
  v15 = *(_DWORD *)(a2 + 104);
  *v12 = *(_DWORD *)(a2 + 92);
  v12[1] = v13;
  v12[2] = v14;
  v12[3] = v15;
  v16 = *(_DWORD *)(a2 + 112);
  v17 = *(_DWORD *)(a2 + 116);
  v18 = *(_DWORD *)(a2 + 120);
  v12[4] = *(_DWORD *)(a2 + 108);
  v12[5] = v16;
  v12[6] = v17;
  v12[7] = v18;
  strcpy((char *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 15872) + 32)), (const char *)(a2 + 8));
  v19 = (int *)(a2 + 40);
  v20 = v6 + 48 * *(unsigned __int8 *)(v6 + 15872) + 5120;
  do
  {
    v21 = *v19;
    v19 += 4;
    v22 = *(v19 - 3);
    v20 += 16;
    v23 = *(v19 - 2);
    v24 = *(v19 - 1);
    *(_DWORD *)(v20 - 16) = v21;
    *(_DWORD *)(v20 - 12) = v22;
    *(_DWORD *)(v20 - 8) = v23;
    *(_DWORD *)(v20 - 4) = v24;
  }
  while ( v19 != (int *)(a2 + 88) );
  v25 = *(_BYTE *)(v7 + 3584);
  v26 = a2 + 40;
  v27 = a3 + 4;
  v47 = a2 + 88;
  a3[3] = v25;
  *(_BYTE *)(v7 + 3584) = (v25 + 1) & 0x7F;
  do
  {
    v26 += 16;
    v27 += 16;
    v28 = *(_DWORD *)(v26 - 12);
    v29 = *(_DWORD *)(v26 - 8);
    v30 = *(_DWORD *)(v26 - 4);
    *((_DWORD *)v27 - 4) = *(_DWORD *)(v26 - 16);
    *((_DWORD *)v27 - 3) = v28;
    *((_DWORD *)v27 - 2) = v29;
    *((_DWORD *)v27 - 1) = v30;
  }
  while ( v26 != v47 );
  v31 = memcmp(&last_header_ckb2, (const void *)(a2 + 40), 0x30u);
  if ( !v31 )
  {
    V_LOCK(0);
    v39 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v39);
    v40 = a2 + 39;
    v41 = a2 + 87;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb2/backend_ckb2.c",
      156,
      "work_2_packet_ckb2",
      18,
      117,
      80,
      v50);
    do
    {
      v42 = *(unsigned __int8 *)++v40;
      v43 = snprintf(&v49[v31], 4096 - v31, "%02x ", v42);
      v31 += 3;
    }
    while ( v40 != v41 );
    V_LOCK(v43);
    v44 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v44);
    v45 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_ckb2/backend_ckb2.c",
            156,
            "dump_work_ckb2",
            14,
            84,
            20,
            v50);
    V_LOCK(v45);
    v46 = logfmt_raw((int)v50, 0x1000u);
    V_UNLOCK(v46);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ckb2/backend_ckb2.c",
      156,
      "dump_work_ckb2",
      14,
      85,
      20,
      v50);
  }
  v32 = &last_header_ckb2;
  do
  {
    v11 += 16;
    v32 += 4;
    v33 = *(_DWORD *)(v11 - 12);
    v34 = *(_DWORD *)(v11 - 8);
    v35 = *(_DWORD *)(v11 - 4);
    *(v32 - 4) = *(_DWORD *)(v11 - 16);
    *(v32 - 3) = v33;
    *(v32 - 2) = v34;
    *(v32 - 1) = v35;
  }
  while ( v11 != v47 );
  v36 = BM_CRC16(a3 + 2, 50);
  a3[53] = v36;
  a3[52] = HIBYTE(v36);
  v37 = *(unsigned __int8 *)(a1 + 145);
  *a4 = 54;
  if ( v37 && *(_BYTE *)(a1 + 146) )
  {
    memset(*(void **)(a1 + 264), 0, 48 * *(_DWORD *)(a1 + 196));
    chip_setting_ticket_value_ckb2(a1, 25);
    *(_BYTE *)(a1 + 145) = 0;
  }
  return 0;
}
