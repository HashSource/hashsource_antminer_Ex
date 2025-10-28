int __fastcall set_nonce_len_kas(int a1)
{
  int v3; // [sp+18h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(&v3, 0x1000u, 0, "%s...", "set_nonce_len_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_nonce_len_kas",
    17,
    147,
    40,
    &v3);
  sub_16CB44(a1, 84, 7);
  usleep(0x2710u);
  return 0;
}
