void *__fastcall read_pm_test_eth_2282(int a1)
{
  void *v1; // r3
  _BYTE v4[20]; // [sp+18h] [bp-1014h] BYREF
  int v5; // [sp+1018h] [bp-14h]
  void *ptr; // [sp+101Ch] [bp-10h]
  int j; // [sp+1020h] [bp-Ch]
  int i; // [sp+1024h] [bp-8h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "read pm start");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "read_pm_test_eth_2282",
    21,
    8432,
    40,
    v4);
  ptr = malloc(0x48u);
  for ( i = 0; i <= 2; ++i )
  {
    for ( j = 0; j <= 71; ++j )
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "check core %d pm_type %d", j, i);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "read_pm_test_eth_2282",
        21,
        8440,
        60,
        v4);
      v5 = (i << 16) & 0x30000 | 0x40000;
      sub_106CA8(a1, 3, v5, j, 0);
      usleep(0x2710u);
      sub_1075C0(a1, j, 3, ptr);
    }
  }
  v1 = ptr;
  if ( ptr )
    free(ptr);
  return v1;
}
