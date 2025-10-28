int __fastcall set_misc_control_kas(int a1)
{
  _DWORD v3[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "%s...", "set_misc_control_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "set_misc_control_kas",
    20,
    163,
    40,
    v3);
  v3[2] = 1835009;
  v3[3] = 0;
  v3[1] = 0;
  v3[0] = -1068359920;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v3);
  usleep(0x2710u);
  return 0;
}
