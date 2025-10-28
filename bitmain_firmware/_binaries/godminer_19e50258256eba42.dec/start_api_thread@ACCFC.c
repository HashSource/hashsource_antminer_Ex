int start_api_thread()
{
  _BYTE v2[12]; // [sp+10h] [bp-100Ch] BYREF
  int *v4; // [sp+1014h] [bp-8h]

  v4 = &dword_C26B78;
  dword_C26B78 = 3;
  if ( !sub_AC6B0((int)&dword_C26B78, (void *(*)(void *))sub_ACAB4) )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, "api thread create failed");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_pool.c",
    151,
    "start_api_thread",
    16,
    139,
    100,
    v2);
  return 5;
}
