int __fastcall setup_count_sync(int a1, int a2)
{
  int v4; // r0
  _BYTE v6[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v4 = logfmt_raw((int)v6, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_count_sync",
    16,
    319,
    20,
    v6);
  sub_5C968(a1, a2, 202, 0);
  sub_5C968(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_5C968(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
