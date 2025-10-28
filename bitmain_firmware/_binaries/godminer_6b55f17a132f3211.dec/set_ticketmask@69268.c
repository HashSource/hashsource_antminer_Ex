int __fastcall set_ticketmask(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[32]; // [sp+30h] [bp-1024h] BYREF
  _BYTE v7[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v6, "chain");
  v4 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "set_ticketmask",
    14,
    114,
    40,
    v7);
  sub_69224(a1, 10, a2);
  *(_DWORD *)(a1 + 392) = a2;
  usleep(0x2710u);
  return 0;
}
