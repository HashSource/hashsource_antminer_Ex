int __fastcall set_misc_control_kas(int a1)
{
  int v2; // r0
  _DWORD v4[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "set_misc_control_kas",
    20,
    161,
    40,
    v4);
  v4[2] = 1835009;
  v4[3] = 0;
  v4[1] = 0;
  v4[0] = -1068359920;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v4);
  usleep(0x2710u);
  return 0;
}
