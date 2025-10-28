__int64 __fastcall eeprom_dump_fixture(int a1)
{
  char v3[4]; // [sp+18h] [bp-1804h] BYREF
  int v4; // [sp+818h] [bp-1004h] BYREF

  snprintf(v3, 0x800u, "%-30s : 0x%04x", "key_version", *(_BYTE *)a1 & 0xF);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    532,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "algorithm_code", *(_BYTE *)a1 >> 4);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    533,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "fixture_info_len", *(unsigned __int8 *)(a1 + 1));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    534,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "fixture_standard", *(unsigned __int8 *)(a1 + 49));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    535,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%04x", "test_standard", *(unsigned __int8 *)(a1 + 50));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    536,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %s", "chip_technology", *(const char **)(a1 + 35));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    537,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x", "fixture_fmt_version", *(unsigned __int8 *)(a1 + 2));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    538,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %s", "SN", *(const char **)(a1 + 3));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    540,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "pcb", *(unsigned __int8 *)(a1 + 31), *(unsigned __int8 *)(a1 + 32));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    541,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "bom", *(unsigned __int8 *)(a1 + 33), *(unsigned __int8 *)(a1 + 34));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    542,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %u", "hash_board_voltage", *(unsigned __int16 *)(a1 + 39));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    543,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %u", "hash_board_freq", *(unsigned __int16 *)(a1 + 41));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    544,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %.2f", "nonce_response_rate", *(float *)(a1 + 43));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    545,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %u", "inlet_temperature", *(unsigned __int8 *)(a1 + 47));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    546,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %u", "outlet_temperature", *(unsigned __int8 *)(a1 + 48));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    547,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "asic sensor", *(_BYTE *)(a1 + 24) >> 7, *(_BYTE *)(a1 + 24) & 0x7F);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    548,
    100,
    &v4);
  snprintf(
    v3,
    0x800u,
    "%-30s : 0x%02x-%02x-%02x-%02x",
    "asic sensor addr",
    **(unsigned __int8 **)(a1 + 25),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 1),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 2),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 25) + 3));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    549,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x-%02x", "pic sensor", *(_BYTE *)(a1 + 29) >> 7, *(_BYTE *)(a1 + 29) & 0x7F);
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    550,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : 0x%02x", "pic sensor addr", *(unsigned __int8 *)(a1 + 30));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    551,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : bin%d", "chip_bin", *(unsigned __int8 *)(a1 + 15));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    552,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %s", "FT", *(const char **)(a1 + 16));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    553,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %s", "chip_die", *(const char **)(a1 + 7));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    554,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : %s", "chip_marking", *(const char **)(a1 + 11));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
    170,
    "eeprom_dump_fixture",
    19,
    555,
    100,
    &v4);
  snprintf(v3, 0x800u, "%-30s : P%d", "phy_seq_level", *(unsigned __int8 *)(a1 + 55));
  V_LOCK();
  logfmt_raw(&v4, 0x1000u, 0, v3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
           170,
           "eeprom_dump_fixture",
           19,
           556,
           100,
           &v4);
}
