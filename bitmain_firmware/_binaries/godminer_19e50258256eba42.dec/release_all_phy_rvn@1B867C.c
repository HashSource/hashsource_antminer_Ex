int __fastcall release_all_phy_rvn(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  __useconds_t useconds; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_1A9DE8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "%s...", "release_all_phy_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "release_all_phy_rvn",
    19,
    388,
    60,
    v3);
  useconds = (__useconds_t)&stru_186A0;
  sub_1B4A74(a1, 80, 0);
  usleep(useconds);
  return 0;
}
