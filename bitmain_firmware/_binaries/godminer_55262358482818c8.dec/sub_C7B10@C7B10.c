int sub_C7B10()
{
  char v1[2048]; // [sp+10h] [bp-1800h] BYREF
  char v2[4096]; // [sp+810h] [bp-1000h] BYREF

  pthread_mutex_lock(&power_mutex);
  strcpy(v1, "bitmain power close ===========");
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    176,
    "bitmain_power_close",
    19,
    657,
    40,
    v2);
  iic_uninit(dword_1B36F0);
  dword_1B36F4 = 0;
  dword_1B36F8 = 0;
  memset(&unk_1B3708, 0, 0xC0u);
  return pthread_mutex_unlock(&power_mutex);
}
