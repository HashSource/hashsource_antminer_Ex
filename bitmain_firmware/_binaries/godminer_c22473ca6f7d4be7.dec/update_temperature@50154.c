int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r12
  int v4; // r7
  int v8; // r4
  int v9; // r1
  int v10; // r3
  int v11; // r0
  int v12; // r2
  bool v13; // nf
  int v14; // r9
  int v15; // r0
  _DWORD *v16; // r2
  int v17; // r0
  int v18; // r3
  int v19; // r2
  char *v20; // r1
  int v21; // r12
  int v22; // r5
  _DWORD *v23; // r3
  int v24; // r1
  int v26; // r12
  bool v27; // zf
  int v28; // r2
  char *v29; // r1
  int v30; // r12
  _DWORD *v31; // r3
  _DWORD *v32; // r3
  int v33; // r1
  int v34; // r1
  char *v35; // r1
  _DWORD *v36; // r3
  int v37; // r1
  char *v38; // r1
  int v39; // lr
  _DWORD *v40; // r3
  char *v41; // r1
  int v42; // r12
  _DWORD *v43; // r3
  int v44; // [sp+34h] [bp-10E0h] BYREF
  int v45; // [sp+38h] [bp-10DCh] BYREF
  int v46; // [sp+3Ch] [bp-10D8h] BYREF
  int v47; // [sp+40h] [bp-10D4h] BYREF
  int v48; // [sp+44h] [bp-10D0h] BYREF
  int v49; // [sp+48h] [bp-10CCh] BYREF
  unsigned int v50; // [sp+4Ch] [bp-10C8h] BYREF
  _DWORD v51[7]; // [sp+50h] [bp-10C4h] BYREF
  int v52; // [sp+6Ch] [bp-10A8h]
  _DWORD v53[7]; // [sp+70h] [bp-10A4h] BYREF
  int v54; // [sp+8Ch] [bp-1088h]
  _DWORD v55[7]; // [sp+90h] [bp-1084h] BYREF
  int v56; // [sp+ACh] [bp-1068h]
  _DWORD v57[7]; // [sp+B0h] [bp-1064h] BYREF
  int v58; // [sp+CCh] [bp-1048h]
  _DWORD v59[7]; // [sp+D0h] [bp-1044h] BYREF
  int v60; // [sp+ECh] [bp-1028h]
  _DWORD v61[7]; // [sp+F0h] [bp-1024h] BYREF
  int v62; // [sp+10Ch] [bp-1008h]
  char v63[4100]; // [sp+110h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 146);
  v4 = a3 + 16;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  if ( !v3 )
    return v4;
  if ( read_temperature(a1, a2, &v44, &v45, &v46, &v47, &v48, &v49, &v50) )
  {
    V_LOCK();
    V_INT((int)v51, "chain", *(int *)(a1 + 140));
    logfmt_raw(
      v63,
      0x1000u,
      0,
      v52,
      v51[0],
      v51[1],
      v51[2],
      v51[3],
      v51[4],
      v51[5],
      v51[6],
      v52,
      "read temp error! pcb temp count %d chip temp count %d uneffective value count %d",
      v48,
      v49,
      v50);
    V_UNLOCK();
    LOWORD(v32) = -14512;
    HIWORD(v32) = (unsigned int)&unk_16C65C >> 16;
    LOWORD(v33) = 21816;
    HIWORD(v33) = (unsigned int)&unk_135DDC >> 16;
    zlog(*v32, v33, 186, "update_temperature", 18, 269, 100, v63);
    *(_DWORD *)(a3 + 16) |= 1u;
  }
  LOWORD(v8) = -22608;
  v9 = *(_DWORD *)(a1 + 136);
  if ( v48 )
  {
    v14 = v49;
    v10 = 4 * v9;
    HIWORD(v8) = (unsigned int)&unk_16A6A0 >> 16;
    v26 = v45;
    v27 = v49 == 0;
    *(_DWORD *)(v8 + 4 * v9) = v44;
    a2[5] = v26;
    *(_DWORD *)(v8 + 4 * v9 + 16) = 0;
    if ( !v27 )
    {
LABEL_8:
      v15 = v46;
      *(_DWORD *)(v8 + v10 + 32) = 0;
      a2[4] = v15;
      goto LABEL_9;
    }
  }
  else
  {
    v10 = 4 * v9;
    HIWORD(v8) = (unsigned int)&unk_16A6A0 >> 16;
    v11 = v8 + 4 * v9;
    v12 = *(_DWORD *)(v11 + 16) + 1;
    v13 = *(_DWORD *)(v11 + 16) - 1 < 0;
    *(_DWORD *)(v11 + 16) = v12;
    if ( !(v13 ^ __OFSUB__(v12, 2) | (v12 == 2)) )
    {
      V_LOCK();
      LOWORD(v41) = -7948;
      HIWORD(v41) = (unsigned int)"al_handler" >> 16;
      V_INT((int)v53, v41, *(int *)(a1 + 140));
      LOWORD(v42) = 22088;
      HIWORD(v42) = (unsigned int)&unk_135EEC >> 16;
      logfmt_raw(
        v63,
        0x1000u,
        0,
        v54,
        v53[0],
        v53[1],
        v53[2],
        v53[3],
        v53[4],
        v53[5],
        v53[6],
        v54,
        v42,
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 136) + 16));
      V_UNLOCK();
      LOWORD(v43) = -14512;
      HIWORD(v43) = (unsigned int)&unk_16C65C >> 16;
      zlog(
        *v43,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        281,
        100,
        v63);
      v9 = *(_DWORD *)(a1 + 136);
      v10 = 4 * v9;
      *(_DWORD *)(a3 + 16) |= 8u;
    }
    v14 = v49;
    if ( v49 )
      goto LABEL_8;
  }
  v28 = *(_DWORD *)(v8 + v10 + 32) + 1;
  v13 = *(_DWORD *)(v8 + v10 + 32) - 1 < 0;
  *(_DWORD *)(v8 + v10 + 32) = v28;
  if ( !(v13 ^ __OFSUB__(v28, 2) | (v28 == 2)) )
  {
    V_LOCK();
    LOWORD(v29) = -7948;
    HIWORD(v29) = (unsigned int)"al_handler" >> 16;
    V_INT((int)v55, v29, *(int *)(a1 + 140));
    LOWORD(v30) = 22132;
    HIWORD(v30) = (unsigned int)&unk_135F18 >> 16;
    logfmt_raw(
      v63,
      0x1000u,
      v14,
      v56,
      v55[0],
      v55[1],
      v55[2],
      v55[3],
      v55[4],
      v55[5],
      v55[6],
      v56,
      v30,
      *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 136) + 32));
    V_UNLOCK();
    LOWORD(v31) = -14512;
    HIWORD(v31) = (unsigned int)&unk_16C65C >> 16;
    zlog(
      *v31,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      186,
      "update_temperature",
      18,
      294,
      100,
      v63);
    v9 = *(_DWORD *)(a1 + 136);
    v10 = 4 * v9;
    *(_DWORD *)(a3 + 16) |= 8u;
  }
LABEL_9:
  v16 = *(_DWORD **)(a1 + 212);
  if ( v16[5] >= v50 )
  {
    *(_DWORD *)(v8 + v10 + 48) = 0;
  }
  else
  {
    v17 = *(_DWORD *)(v8 + v10 + 48) + 1;
    v13 = *(_DWORD *)(v8 + v10 + 48) - 5 < 0;
    *(_DWORD *)(v8 + v10 + 48) = v17;
    if ( !(v13 ^ __OFSUB__(v17, 6) | (v17 == 6)) )
    {
      V_LOCK();
      LOWORD(v38) = -7948;
      HIWORD(v38) = (unsigned int)"al_handler" >> 16;
      V_INT((int)v57, v38, *(int *)(a1 + 140));
      LOWORD(v39) = 22176;
      HIWORD(v39) = (unsigned int)&unk_135F44 >> 16;
      logfmt_raw(
        v63,
        0x1000u,
        0,
        v58,
        v57[0],
        v57[1],
        v57[2],
        v57[3],
        v57[4],
        v57[5],
        v57[6],
        v58,
        v39,
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 136) + 48),
        v50);
      V_UNLOCK();
      LOWORD(v40) = -14512;
      HIWORD(v40) = (unsigned int)&unk_16C65C >> 16;
      zlog(
        *v40,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        303,
        100,
        v63);
      v9 = *(_DWORD *)(a1 + 136);
      v16 = *(_DWORD **)(a1 + 212);
      *(_DWORD *)(a3 + 16) |= 0x10u;
      v10 = 4 * v9;
    }
  }
  if ( a2[4] > v16[2] || *(_DWORD *)(v8 + 4 * v9) > v16[3] )
  {
    v34 = *(_DWORD *)(v8 + v10 + 64) + 1;
    v13 = *(_DWORD *)(v8 + v10 + 64) - 1 < 0;
    *(_DWORD *)(v8 + v10 + 64) = v34;
    if ( !(v13 ^ __OFSUB__(v34, 2) | (v34 == 2)) )
    {
      V_LOCK();
      LOWORD(v35) = -7948;
      HIWORD(v35) = (unsigned int)"al_handler" >> 16;
      V_INT((int)v59, v35, *(int *)(a1 + 140));
      logfmt_raw(
        v63,
        0x1000u,
        0,
        v60,
        v59[0],
        v59[1],
        v59[2],
        v59[3],
        v59[4],
        v59[5],
        v59[6],
        v60,
        "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!",
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 136) + 64),
        a2[4],
        *(_DWORD *)(v8 + 4 * *(_DWORD *)(a1 + 136)));
      V_UNLOCK();
      LOWORD(v36) = -14512;
      HIWORD(v36) = (unsigned int)&unk_16C65C >> 16;
      zlog(
        *v36,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        186,
        "update_temperature",
        18,
        314,
        100,
        v63);
      v37 = *(_DWORD *)(a1 + 136);
      v16 = *(_DWORD **)(a1 + 212);
      *(_DWORD *)(a3 + 16) |= 2u;
      v10 = 4 * v37;
    }
  }
  else
  {
    *(_DWORD *)(v8 + v10 + 64) = 0;
  }
  if ( a2[5] <= v16[4] )
  {
    v18 = v8 + v10;
    v19 = *(_DWORD *)(v18 + 80) + 1;
    v13 = *(_DWORD *)(v18 + 80) - 1 < 0;
    *(_DWORD *)(v18 + 80) = v19;
    if ( !(v13 ^ __OFSUB__(v19, 2) | (v19 == 2)) )
    {
      V_LOCK();
      LOWORD(v20) = -7948;
      HIWORD(v20) = (unsigned int)"al_handler" >> 16;
      V_INT((int)v61, v20, *(int *)(a1 + 140));
      v21 = *(_DWORD *)(a1 + 136);
      LOWORD(v22) = 22312;
      HIWORD(v22) = (unsigned int)"enkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/chip_setting.c" >> 16;
      logfmt_raw(
        v63,
        0x1000u,
        0,
        v62,
        v61[0],
        v61[1],
        v61[2],
        v61[3],
        v61[4],
        v61[5],
        v61[6],
        v62,
        v22,
        *(_DWORD *)(v8 + 4 * v21 + 80),
        a2[5]);
      V_UNLOCK();
      LOWORD(v23) = -14512;
      HIWORD(v23) = (unsigned int)&unk_16C65C >> 16;
      LOWORD(v24) = 21816;
      HIWORD(v24) = (unsigned int)&unk_135DDC >> 16;
      zlog(*v23, v24, 186, "update_temperature", 18, 325, 100, v63);
      *(_DWORD *)(a3 + 16) |= 4u;
    }
    return v4;
  }
  *(_DWORD *)(v8 + v10 + 80) = 0;
  return v4;
}
