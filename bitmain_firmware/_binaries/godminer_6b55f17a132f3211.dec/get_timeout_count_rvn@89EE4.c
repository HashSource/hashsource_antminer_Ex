int __fastcall get_timeout_count_rvn(int a1)
{
  int v2; // r0
  int v3; // r4
  _BYTE v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  v3 = 69;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    170,
    "get_timeout_count_rvn",
    21,
    248,
    20,
    v5);
  do
  {
    sub_87BF4(a1, 255, v3++, 0);
    usleep(0x2710u);
  }
  while ( v3 != 75 );
  return 0;
}
