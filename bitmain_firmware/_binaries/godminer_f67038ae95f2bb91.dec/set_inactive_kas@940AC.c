int __fastcall set_inactive_kas(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "set_inactive_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "set_inactive_kas",
    16,
    181,
    40,
    v3);
  (*(void (__fastcall **)(int))(a1 + 260))(a1);
  usleep(0x2710u);
  return 0;
}
