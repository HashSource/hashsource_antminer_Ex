int __fastcall set_core_bus_reset_rvn(int a1)
{
  int v2; // r4
  int v3; // r0
  unsigned __int8 v4; // r1
  _BYTE v6[32]; // [sp+28h] [bp-20h] BYREF
  _BYTE v7[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v6, "chain");
  v2 = 0;
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "set_core_bus_reset_rvn",
    22,
    871,
    60,
    v7);
  do
  {
    sub_92D44(a1, v2, 2, 0);
    usleep((__useconds_t)&stru_1869C.st_value);
    v4 = v2++;
    sub_92D44(a1, v4, 2, 1);
    usleep((__useconds_t)&stru_1869C.st_value);
  }
  while ( v2 != 8 );
  return 0;
}
