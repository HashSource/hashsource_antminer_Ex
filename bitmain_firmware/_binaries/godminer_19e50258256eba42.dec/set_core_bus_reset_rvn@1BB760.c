int __fastcall set_core_bus_reset_rvn(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  unsigned __int8 i; // [sp+1057h] [bp-Dh]

  V_LOCK();
  sub_1A9DE8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "%s...", "set_core_bus_reset_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "set_core_bus_reset_rvn",
    22,
    1117,
    60,
    v3);
  for ( i = 0; i <= 0x3Fu; ++i )
  {
    sub_1B4CC0(a1, i, 2, 0);
    usleep((__useconds_t)&stru_186A0);
    sub_1B4CC0(a1, i, 2, 1);
    usleep((__useconds_t)&stru_186A0);
  }
  return 0;
}
