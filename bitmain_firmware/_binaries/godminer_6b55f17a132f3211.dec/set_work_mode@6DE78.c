int __fastcall set_work_mode(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "set_work_mode",
    13,
    753,
    20,
    v6);
  sub_69224(a1, 12, a2);
  usleep(0x2710u);
  return 0;
}
