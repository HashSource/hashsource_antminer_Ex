int __fastcall work_2_packet_ckb(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r5
  int v9; // r0
  int v10; // r12
  _DWORD *v11; // r2
  int v12; // r7
  int v13; // lr
  int v14; // r12
  int v15; // r7
  int v16; // lr
  int v17; // r12
  int *v18; // r2
  int v19; // r4
  int v20; // lr
  int v21; // r12
  int v22; // r1
  int v23; // r3
  char v24; // r2
  _BYTE *v25; // r1
  char *v26; // r3
  int v27; // r12
  int v28; // r0
  int v29; // r2
  int v30; // r4
  char *v31; // r3
  _DWORD *v32; // r2
  int v33; // r12
  int v34; // r0
  int v35; // r1
  int v36; // r0
  int v37; // r3
  int v38; // r0
  int v40; // r0
  int v41; // r5
  int v42; // r6
  int v43; // t1
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  char *s2; // [sp+10h] [bp-201Ch]
  char *v49; // [sp+18h] [bp-2014h]
  char v51[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v52[1025]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 784);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = v6 + 12288;
  if ( *(_DWORD *)(a1 + 460) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 15872);
  v10 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 4 * (v9 + 2816)) = v10;
  v11 = (_DWORD *)(v6 + 32 * (v9 + 368));
  v12 = *(_DWORD *)(a2 + 96);
  v13 = *(_DWORD *)(a2 + 100);
  v14 = *(_DWORD *)(a2 + 104);
  *v11 = *(_DWORD *)(a2 + 92);
  v11[1] = v12;
  v11[2] = v13;
  v11[3] = v14;
  v15 = *(_DWORD *)(a2 + 112);
  v16 = *(_DWORD *)(a2 + 116);
  v17 = *(_DWORD *)(a2 + 120);
  v11[4] = *(_DWORD *)(a2 + 108);
  v11[5] = v15;
  v11[6] = v16;
  v11[7] = v17;
  s2 = (char *)(a2 + 40);
  strcpy((char *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 15872) + 32)), (const char *)(a2 + 8));
  v18 = (int *)(a2 + 40);
  v19 = v6 + 48 * *(unsigned __int8 *)(v6 + 15872) + 5120;
  do
  {
    v20 = *v18;
    v18 += 4;
    v21 = *(v18 - 3);
    v19 += 16;
    v22 = *(v18 - 2);
    v23 = *(v18 - 1);
    *(_DWORD *)(v19 - 16) = v20;
    *(_DWORD *)(v19 - 12) = v21;
    *(_DWORD *)(v19 - 8) = v22;
    *(_DWORD *)(v19 - 4) = v23;
  }
  while ( v18 != (int *)(a2 + 88) );
  v24 = *(_BYTE *)(v7 + 3584);
  v25 = a3 + 4;
  a3[3] = v24;
  v26 = s2;
  *(_BYTE *)(v7 + 3584) = (v24 + 1) & 0x7F;
  v49 = s2 + 48;
  do
  {
    v26 += 16;
    v25 += 16;
    v27 = *((_DWORD *)v26 - 3);
    v28 = *((_DWORD *)v26 - 2);
    v29 = *((_DWORD *)v26 - 1);
    *((_DWORD *)v25 - 4) = *((_DWORD *)v26 - 4);
    *((_DWORD *)v25 - 3) = v27;
    *((_DWORD *)v25 - 2) = v28;
    *((_DWORD *)v25 - 1) = v29;
  }
  while ( v26 != v49 );
  v30 = memcmp(&last_header_ckb, s2, 0x30u);
  if ( !v30 )
  {
    V_LOCK(0);
    v40 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v40);
    v41 = a2 + 39;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      174,
      "work_2_packet_ckb",
      17,
      119,
      80,
      v52);
    v42 = a2 + 87;
    do
    {
      v43 = *(unsigned __int8 *)++v41;
      v44 = snprintf(&v51[v30], 4096 - v30, "%02x ", v43);
      v30 += 3;
    }
    while ( v41 != v42 );
    V_LOCK(v44);
    v45 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v45);
    v46 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
            174,
            "dump_work_ckb",
            13,
            86,
            20,
            v52);
    V_LOCK(v46);
    v47 = logfmt_raw((int)v52, 0x1000u);
    V_UNLOCK(v47);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      174,
      "dump_work_ckb",
      13,
      87,
      20,
      v52);
  }
  v31 = s2;
  v32 = &last_header_ckb;
  do
  {
    v31 += 16;
    v32 += 4;
    v33 = *((_DWORD *)v31 - 3);
    v34 = *((_DWORD *)v31 - 2);
    v35 = *((_DWORD *)v31 - 1);
    *(v32 - 4) = *((_DWORD *)v31 - 4);
    *(v32 - 3) = v33;
    *(v32 - 2) = v34;
    *(v32 - 1) = v35;
  }
  while ( v31 != v49 );
  v36 = BM_CRC16(a3 + 2, 50);
  a3[53] = v36;
  a3[52] = BYTE1(v36);
  v37 = *(unsigned __int8 *)(a1 + 229);
  *a4 = 54;
  if ( v37 && *(_BYTE *)(a1 + 230) )
  {
    memset(*(void **)(a1 + 424), 0, 48 * *(_DWORD *)(a1 + 304));
    v36 = sub_61404((_DWORD *)a1, 39);
    *(_BYTE *)(a1 + 229) = 0;
  }
  V_LOCK(v36);
  v38 = logfmt_raw((int)v52, 0x1000u);
  V_UNLOCK(v38);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_bridge_reset_CKB_2042",
    33,
    112,
    20,
    v52);
  v52[1] = 0;
  v52[2] = 4456449;
  v52[3] = 0;
  v52[0] = 2;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v52);
  usleep(0x64u);
  return 0;
}
