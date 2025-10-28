int __fastcall eeprom_dump_fixture(unsigned __int8 *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v50[4100]; // [sp+820h] [bp-1004h] BYREF

  v2 = snprintf(s, 0x800u, "%-30s : 0x%04x", "key_version", *a1 & 0xF);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    377,
    100,
    v50);
  v4 = snprintf(s, 0x800u, "%-30s : 0x%04x", "algorithm_code", *a1 >> 4);
  V_LOCK(v4);
  v5 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    378,
    100,
    v50);
  v6 = snprintf(s, 0x800u, "%-30s : 0x%04x", "fixture_info_len", a1[1]);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    379,
    100,
    v50);
  v8 = snprintf(s, 0x800u, "%-30s : 0x%04x", "fixture_standard", a1[45]);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    380,
    100,
    v50);
  v10 = snprintf(s, 0x800u, "%-30s : 0x%04x", "test_standard", a1[46]);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    381,
    100,
    v50);
  v12 = snprintf(s, 0x800u, "%-30s : %s", "chip_technology", *(const char **)(a1 + 31));
  V_LOCK(v12);
  v13 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    382,
    100,
    v50);
  v14 = snprintf(s, 0x800u, "%-30s : 0x%02x", "fixture_fmt_version", a1[2]);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    383,
    100,
    v50);
  v16 = snprintf(s, 0x800u, "%-30s : %s", "SN", *(const char **)(a1 + 3));
  V_LOCK(v16);
  v17 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v17);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    385,
    100,
    v50);
  v18 = snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pcb", a1[27], a1[28]);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    386,
    100,
    v50);
  v20 = snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "bom", a1[29], a1[30]);
  V_LOCK(v20);
  v21 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    387,
    100,
    v50);
  v22 = snprintf(s, 0x800u, "%-30s : %u", "hash_board_voltage", *(unsigned __int16 *)(a1 + 35));
  V_LOCK(v22);
  v23 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    388,
    100,
    v50);
  v24 = snprintf(s, 0x800u, "%-30s : %u", "hash_board_freq", *(unsigned __int16 *)(a1 + 37));
  V_LOCK(v24);
  v25 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    389,
    100,
    v50);
  v26 = snprintf(s, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 39));
  V_LOCK(v26);
  v27 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v27);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    390,
    100,
    v50);
  v28 = snprintf(s, 0x800u, "%-30s : %u", "inlet_temperature", a1[43]);
  V_LOCK(v28);
  v29 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v29);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    391,
    100,
    v50);
  v30 = snprintf(s, 0x800u, "%-30s : %u", "outlet_temperature", a1[44]);
  V_LOCK(v30);
  v31 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v31);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    392,
    100,
    v50);
  v32 = snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "asic sensor", a1[20] >> 7, a1[20] & 0x7F);
  V_LOCK(v32);
  v33 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v33);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    393,
    100,
    v50);
  v34 = snprintf(
          s,
          0x800u,
          "%-30s : 0x%02x-%02x-%02x-%02x",
          "asic sensor addr",
          **(unsigned __int8 **)(a1 + 21),
          *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 1),
          *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 2),
          *(unsigned __int8 *)(*(_DWORD *)(a1 + 21) + 3));
  V_LOCK(v34);
  v35 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v35);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    394,
    100,
    v50);
  v36 = snprintf(s, 0x800u, "%-30s : 0x%02x-%02x", "pic sensor", a1[25] >> 7, a1[25] & 0x7F);
  V_LOCK(v36);
  v37 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    395,
    100,
    v50);
  v38 = snprintf(s, 0x800u, "%-30s : 0x%02x", "pic sensor addr", a1[26]);
  V_LOCK(v38);
  v39 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v39);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    396,
    100,
    v50);
  v40 = snprintf(s, 0x800u, "%-30s : bin%d", "chip_bin", a1[15]);
  V_LOCK(v40);
  v41 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v41);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    397,
    100,
    v50);
  v42 = snprintf(s, 0x800u, "%-30s : %s", "FT", *((const char **)a1 + 4));
  V_LOCK(v42);
  v43 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v43);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    398,
    100,
    v50);
  v44 = snprintf(s, 0x800u, "%-30s : %s", "chip_die", *(const char **)(a1 + 7));
  V_LOCK(v44);
  v45 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v45);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/eeprom/bitmain_eeprom.c",
    163,
    "eeprom_dump_fixture",
    19,
    399,
    100,
    v50);
  v46 = snprintf(s, 0x800u, "%-30s : %s", "chip_marking", *(const char **)(a1 + 11));
  V_LOCK(v46);
  v47 = logfmt_raw((int)v50, 0x1000u);
  V_UNLOCK(v47);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
           163,
           "eeprom_dump_fixture",
           19,
           400,
           100,
           v50);
}
