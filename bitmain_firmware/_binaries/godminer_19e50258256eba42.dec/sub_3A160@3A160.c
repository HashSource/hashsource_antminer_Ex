int sub_3A160()
{
  _BYTE v1[16]; // [sp+14h] [bp-1010h] BYREF
  int v2; // [sp+1014h] [bp-10h]
  int hardware_version; // [sp+1018h] [bp-Ch]
  int v4; // [sp+101Ch] [bp-8h]

  hardware_version = get_hardware_version();
  v4 = BYTE2(hardware_version);
  v2 = (unsigned __int8)hardware_version;
  V_LOCK();
  logfmt_raw(
    v1,
    0x1000u,
    0,
    "godminer Version = 0x%04X %s",
    (unsigned __int16)hardware_version,
    "2.0.0_release_clean_master_3c182d4dde27a12e3e461f9dc982988236ed1a73_Apr 22 2025 12:10:15");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "init_miner_version",
    18,
    525,
    40,
    v1);
  return sprintf(g_miner_version, "%d.%d-%s", v2, v4, "2.0.0");
}
