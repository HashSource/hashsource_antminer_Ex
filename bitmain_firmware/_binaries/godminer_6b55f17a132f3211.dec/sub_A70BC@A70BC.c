int sub_A70BC()
{
  int v0; // r0
  _BYTE v2[4100]; // [sp+810h] [bp-1004h] BYREF

  pthread_mutex_lock(&power_mutex);
  V_LOCK(*(_DWORD *)"ose ===========");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    172,
    "bitmain_power_close",
    19,
    628,
    40,
    v2);
  iic_uninit(dword_177550);
  dword_177554 = 0;
  dword_177558 = 0;
  memset(&byte_177560, 0, 0x68u);
  return pthread_mutex_unlock(&power_mutex);
}
