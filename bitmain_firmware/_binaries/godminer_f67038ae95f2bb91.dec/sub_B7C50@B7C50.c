int __fastcall sub_B7C50(int a1, int a2)
{
  _DWORD v4[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v5[7]; // [sp+38h] [bp-1024h] BYREF
  int v6; // [sp+54h] [bp-1008h]
  char v7[4100]; // [sp+58h] [bp-1004h] BYREF

  v4[0] = a2;
  v4[2] = 4194305;
  v4[3] = 0;
  v4[1] = 0;
  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 248));
  logfmt_raw(v7, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "set analog value %08x", v4[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_analog_mux_ZEC_1746",
    31,
    997,
    40,
    v7);
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v4);
}
