int __fastcall get_timeout_count(int a1)
{
  int v2; // r0
  int v3; // r4
  _BYTE v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  v3 = 23;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    174,
    "get_timeout_count",
    17,
    184,
    0x14u,
    v5);
  do
  {
    sub_6FFF0(a1, 255, v3++, 0);
    usleep(0x2710u);
  }
  while ( v3 != 29 );
  return 0;
}
