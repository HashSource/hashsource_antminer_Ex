int __fastcall work_2_packet_kda(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  _WORD *v7; // r10
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r12
  _DWORD *v12; // r0
  int v13; // t1
  int v14; // r9
  int v15; // lr
  int v16; // r12
  int v17; // r9
  int v18; // lr
  int v19; // r12
  char *v20; // r6
  int v21; // r3
  char v22; // r1
  char v23; // r12
  char v24; // r1
  char *v25; // r3
  _BYTE *v26; // r2
  char v27; // t1
  int v28; // r4
  __int16 v29; // r0
  int v30; // r3
  int v32; // r0
  _BYTE *v33; // r7
  int v34; // t1
  int v35; // r0
  int v36; // r0
  int v37; // r7
  int v38; // r5
  int v39; // r4
  int v40; // t1
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  char v47[4056]; // [sp+28h] [bp-2004h] BYREF
  _BYTE v48[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 632);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v7 = (_WORD *)(a2 + 396);
  if ( *(_DWORD *)(a1 + 312) == 1 )
    a3[2] = 48;
  v8 = (_DWORD *)a2;
  v9 = *(unsigned __int8 *)(v5 + 50816);
  v10 = a2 + 8;
  v11 = *(_DWORD *)(v10 + 352);
  *(_QWORD *)(v5 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 4 * (v9 + 11552)) = v11;
  v12 = (_DWORD *)(v5 + 32 * (v9 + 1460));
  v13 = v8[91];
  v8 += 91;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v8[5];
  v18 = v8[6];
  v19 = v8[7];
  v12[4] = v8[4];
  v20 = (char *)(a2 + 72);
  v12[6] = v18;
  v12[7] = v19;
  v12[5] = v17;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 50816) + 16) << 6)), (const char *)v10);
  memcpy((void *)(v5 + 286 * *(unsigned __int8 *)(v5 + 50816) + 9216), (const void *)(a2 + 72), 0x11Eu);
  v21 = 3 * *(unsigned __int8 *)(v5 + 50816) + 45824;
  v22 = *(_BYTE *)(a2 + 398);
  *(_WORD *)(v5 + v21) = *v7;
  *(_BYTE *)(v5 + v21 + 2) = v22;
  v23 = *(_BYTE *)(v5 + 50816);
  a3[3] = v23;
  *(_BYTE *)(v5 + 50816) = (v23 + 1) & 0x7F;
  memset(a3 + 4, 0, 0x11Eu);
  v24 = *(_BYTE *)(a2 + 398);
  v25 = (char *)(a2 + 350);
  v26 = a3 + 6;
  *((_WORD *)a3 + 2) = *v7;
  a3[6] = v24;
  do
  {
    v27 = *--v25;
    *++v26 = v27;
  }
  while ( v25 != v20 );
  v28 = memcmp(&last_header_kda, (const void *)(a2 + 72), 0x11Eu);
  if ( !v28 )
  {
    V_LOCK(0);
    v32 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v32);
    v33 = a3 - 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "work_2_packet_kda",
      17,
      130,
      80,
      v48);
    do
    {
      v34 = (unsigned __int8)*++v33;
      v35 = snprintf(&v47[v28], 4096 - v28, "%02x", v34);
      v28 += 2;
    }
    while ( v33 != a3 + 291 );
    V_LOCK(v35);
    v36 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v36);
    v37 = a2 + 357;
    v38 = a2 + 71;
    v39 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "dump_work_kda",
      13,
      86,
      60,
      v48);
    do
    {
      v40 = *(unsigned __int8 *)++v38;
      v41 = snprintf(&v47[v39], 4096 - v39, "%02x", v40);
      v39 += 2;
    }
    while ( v37 != v38 );
    V_LOCK(v41);
    v42 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v42);
    v43 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_kda/backend_kda.c",
            154,
            "dump_work_kda",
            13,
            92,
            60,
            v48);
    V_LOCK(v43);
    v44 = logfmt_raw((int)v48, 0x1000u);
    V_UNLOCK(v44);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_kda/backend_kda.c",
      154,
      "dump_work_kda",
      13,
      93,
      60,
      v48);
  }
  memcpy(&last_header_kda, v20, 0x11Eu);
  v29 = BM_CRC16(a3 + 2, 288);
  a3[291] = v29;
  a3[290] = HIBYTE(v29);
  v30 = *(unsigned __int8 *)(a1 + 153);
  *a4 = 292;
  if ( !v30 || !*(_BYTE *)(a1 + 154) )
    return 0;
  memset(*(void **)(a1 + 272), 0, 48 * *(_DWORD *)(a1 + 204));
  chip_setting_ticket_value_kda(a1, 26);
  *(_BYTE *)(a1 + 153) = 0;
  return 0;
}
