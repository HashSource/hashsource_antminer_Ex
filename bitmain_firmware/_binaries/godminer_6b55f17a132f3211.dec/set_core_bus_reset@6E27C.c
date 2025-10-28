int __fastcall set_core_bus_reset(int a1)
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
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "set_core_bus_reset",
    18,
    815,
    60,
    v7);
  do
  {
    sub_69350(a1, v2, 201, 0);
    usleep((__useconds_t)&stru_186A0);
    v4 = v2++;
    sub_69350(a1, v4, 201, 1);
    usleep((__useconds_t)&stru_186A0);
  }
  while ( v2 != 16 );
  return 0;
}
