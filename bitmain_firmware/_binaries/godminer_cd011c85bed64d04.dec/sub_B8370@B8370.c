int sub_B8370()
{
  int v0; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  pthread_mutex_lock(&power_mutex);
  V_LOCK(*(_DWORD *)"ose ===========\n");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/power/bitmain_power_APW9.c",
    166,
    "bitmain_power_close",
    19,
    430,
    40,
    v2);
  iic_uninit(dword_16D658);
  dword_16D65C = 0;
  dword_16D660 = 0;
  memset(&byte_16D668, 0, 0x68u);
  return pthread_mutex_unlock(&power_mutex);
}
