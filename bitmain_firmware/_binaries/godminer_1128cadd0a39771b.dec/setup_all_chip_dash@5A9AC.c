int __fastcall setup_all_chip_dash(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // s15
  float v6; // s0
  float v7; // s15
  float v8; // s0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  char *v12; // r0
  char v13; // r8
  char *v14; // r5
  char v15; // r0
  int v16; // r0
  int v17; // r0
  int result; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r9
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  unsigned __int8 v26; // [sp+16h] [bp-1006h] BYREF
  unsigned __int8 v27; // [sp+17h] [bp-1005h] BYREF
  _BYTE v28[4100]; // [sp+18h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v28, 0x1000u);
  v3 = 25;
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    319,
    60,
    v28);
  v26 = 0;
  v27 = 0;
  do
  {
    sub_5A254(a1);
    v4 = usleep(0x61A8u);
    v5 = v3;
    v3 += 25;
    v6 = (float)v5;
    v7 = *(float *)(a1 + 768);
    v8 = v6 + 50.0;
  }
  while ( v8 <= v7 );
  if ( v7 > (float)(v8 - 25.0) )
  {
    sub_5A254(a1);
    v4 = usleep(0x61A8u);
  }
  V_LOCK(v4);
  v9 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "set_working_freq_by_steps",
    25,
    313,
    60,
    v28);
  sub_58640(a1);
  usleep(0x4E20u);
  v10 = eeprom_read(*(_DWORD *)(a1 + 148), 195, &v26, 1);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    354,
    60,
    v28);
  if ( v26 == 165 )
  {
    *(_BYTE *)(a1 + 318) = 1;
    v19 = eeprom_read(*(_DWORD *)(a1 + 148), 196, &v27, 1);
    V_LOCK(v19);
    v20 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      358,
      20,
      v28);
    v21 = v27;
    v22 = eeprom_read(*(_DWORD *)(a1 + 148), 197, &v27, 1);
    V_LOCK(v22);
    v23 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v23);
    v24 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/backend_dash/backend_dash.c",
            156,
            "setup_all_chip_dash",
            19,
            361,
            20,
            v28);
    *(double *)(a1 + 320) = (double)(v27 | (v21 << 8)) * 1000.0 * 1000.0 * 1000.0;
    V_LOCK(v24);
    v25 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_dash/backend_dash.c",
      156,
      "setup_all_chip_dash",
      19,
      364,
      20,
      v28);
  }
  set_ticket_mask_dash(a1, 255);
  v12 = (char *)calloc(1u, 0xB0u);
  v13 = *(_BYTE *)(a1 + 144);
  v14 = v12;
  v15 = rand();
  memset(v14 + 40, (unsigned __int8)(v13 + v15), 0x50u);
  push_work_base(a1, v14);
  free(v14);
  V_LOCK(v16);
  v17 = logfmt_raw((int)v28, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dash/backend_dash.c",
    156,
    "setup_all_chip_dash",
    19,
    375,
    60,
    v28);
  sub_59B28(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 276) )
    *(_DWORD *)(a1 + 280) = (int)*(float *)(a1 + 768);
  return result;
}
