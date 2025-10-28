int __fastcall get_timeout_count_rvn(int a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  unsigned __int8 i; // [sp+101Fh] [bp-5h]

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "get_timeout_count_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "get_timeout_count_rvn",
    21,
    254,
    20,
    v3);
  for ( i = 0; i <= 5u; ++i )
  {
    sub_1B51AC(a1, 255, i + 69, 0);
    usleep(0x2710u);
  }
  return 0;
}
