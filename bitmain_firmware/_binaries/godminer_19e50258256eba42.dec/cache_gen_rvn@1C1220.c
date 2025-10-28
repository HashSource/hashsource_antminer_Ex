int __fastcall cache_gen_rvn(int a1)
{
  int v3; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "cache_gen_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "cache_gen_rvn",
    13,
    2717,
    40,
    &v3);
  sub_1B4A74(a1, 15, 3);
  usleep(0x2710u);
  sub_1B4A74(a1, 0, 2);
  usleep(0x2710u);
  sub_1B4A74(a1, 28, 1);
  usleep(0x2710u);
  sub_1B4A74(a1, 207, 1);
  usleep(0x2710u);
  sub_1B4A74(a1, 167, 0);
  usleep(0x2710u);
  sub_1B4A74(a1, 168, 2099200);
  usleep(0x2710u);
  sub_1B4A74(a1, 169, (int)&unk_401000);
  usleep(0x2710u);
  sub_1B4A74(a1, 170, (int)&unk_601800);
  usleep(0x2710u);
  sub_1B4A74(a1, 171, 58720256);
  usleep(0x2710u);
  sub_1B4A74(a1, 163, 1310719);
  usleep(0x2710u);
  sub_1B4A74(a1, 16, -797724831);
  usleep(0x2710u);
  sub_1B4A74(a1, 17, 19609895);
  usleep(0x2710u);
  sub_1B4A74(a1, 18, -227465223);
  usleep(0x2710u);
  sub_1B4A74(a1, 19, 1512262728);
  usleep(0x2710u);
  sub_1B4A74(a1, 20, 1604516950);
  usleep(0x2710u);
  sub_1B4A74(a1, 21, -1358223715);
  usleep(0x2710u);
  sub_1B4A74(a1, 22, -1806736547);
  usleep(0x2710u);
  sub_1B4A74(a1, 23, 836938960);
  usleep(0x2710u);
  sub_1B4A74(a1, 192, 66);
  usleep(0x2710u);
  sub_1B4A74(a1, 179, 0);
  usleep(0x2710u);
  sub_1B4A74(a1, 178, 3000);
  sleep(0xAu);
  sub_1B4A74(a1, 164, 61);
  sleep(0xAu);
  cache_dag_done_check_rvn(a1, 0xA0u, 1);
  sleep(1u);
  return 0;
}
