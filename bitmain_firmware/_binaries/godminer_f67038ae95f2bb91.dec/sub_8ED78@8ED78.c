int __fastcall sub_8ED78(int a1, int a2)
{
  int v3; // r4
  _DWORD v5[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v6[7]; // [sp+38h] [bp-1024h] BYREF
  int v7; // [sp+54h] [bp-1008h]
  char v8[4100]; // [sp+58h] [bp-1004h] BYREF

  v5[0] = a2;
  v5[2] = 2883585;
  v5[3] = 0;
  v5[1] = 0;
  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 248));
  logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "set io cfg value %08x", v5[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_io_cfg_HNS_2130",
    27,
    339,
    40,
    v8);
  v3 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v5);
  usleep(0x2710u);
  return v3;
}
