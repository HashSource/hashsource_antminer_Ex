int __fastcall sub_933B8(int a1)
{
  int v2; // r4
  _DWORD v4[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v5[7]; // [sp+38h] [bp-1024h] BYREF
  int v6; // [sp+54h] [bp-1008h]
  char v7[4100]; // [sp+58h] [bp-1004h] BYREF

  v4[0] = (char *)&dword_10110 + 1;
  v4[2] = 3145729;
  v4[3] = 0;
  v4[1] = 0;
  V_LOCK();
  V_INT((int)v5, "chain", *(int *)(a1 + 248));
  logfmt_raw(
    v7,
    0x1000u,
    0,
    v6,
    v5[0],
    v5[1],
    v5[2],
    v5[3],
    v5[4],
    v5[5],
    v5[6],
    v6,
    "set io drive strenth %08x",
    (char *)&dword_10110 + 1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_io_drive_strenth_all_KAS_2380",
    41,
    273,
    40,
    v7);
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v4);
  usleep(0x2710u);
  return v2;
}
