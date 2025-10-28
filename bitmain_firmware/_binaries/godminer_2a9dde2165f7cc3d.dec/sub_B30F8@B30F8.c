int sub_B30F8()
{
  int v0; // r0
  _BYTE v2[4096]; // [sp+810h] [bp-1000h] BYREF

  pthread_mutex_lock(&power_mutex);
  V_LOCK(*(_DWORD *)"ose ===========");
  v0 = logfmt_raw((int)v2, 0x1000u);
  V_UNLOCK(v0);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    176,
    "bitmain_power_close",
    19,
    656,
    40,
    v2);
  iic_uninit(dword_18D948);
  dword_18D94C = 0;
  dword_18D950 = 0;
  memset(&unk_18D960, 0, 0xC0u);
  return pthread_mutex_unlock(&power_mutex);
}
