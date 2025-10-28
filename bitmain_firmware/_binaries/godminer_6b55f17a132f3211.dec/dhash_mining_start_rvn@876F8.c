int __fastcall dhash_mining_start_rvn(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "dhash_mining_start_rvn",
    22,
    2301,
    40,
    v4);
  sub_87604(a1, 28, 2);
  usleep(0x2710u);
  sub_87604(a1, 15, 3);
  usleep(0x2710u);
  sub_87604(a1, 207, 1);
  usleep(0x2710u);
  sub_87604(a1, 0, 3);
  usleep(0x2710u);
  sub_87604(a1, 28, 0);
  usleep(0x2710u);
  sub_87604(a1, 34, 20);
  usleep(0x2710u);
  sub_87604(a1, 33, 1);
  usleep(0x2710u);
  sub_87604(a1, 35, 0);
  usleep(0x2710u);
  sub_87604(a1, 36, 10);
  usleep(0x2710u);
  sub_87604(a1, 38, 0);
  usleep(0x2710u);
  sub_87604(a1, 31, 0);
  usleep(0x2710u);
  sub_87604(a1, 73, 1);
  usleep(0x2710u);
  sub_87604(a1, 72, 1);
  usleep(0x2710u);
  sub_87604(a1, 72, 0);
  usleep(0x2710u);
  *(_BYTE *)(a1 + 218) = 1;
  return 0;
}
