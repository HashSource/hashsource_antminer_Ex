int __fastcall set_misc_control_ks5(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "%s...", "set_misc_control_ks5");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
    174,
    "set_misc_control_ks5",
    20,
    163,
    40,
    v3);
  v3[2] = 1835009;
  v3[3] = 0;
  v3[1] = 0;
  v3[0] = -1059971312;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 264))(a1, v3);
  usleep(0x2710u);
  return 0;
}
