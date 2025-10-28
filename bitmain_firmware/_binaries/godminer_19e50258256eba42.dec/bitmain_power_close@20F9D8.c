int bitmain_power_close()
{
  char v1[2048]; // [sp+10h] [bp-1804h] BYREF
  int v2; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_C25FB8 || !dword_C25FBC )
  {
    pthread_mutex_lock(&power_mutex);
    strcpy(v1, "bitmain power close ===========");
    V_LOCK();
    logfmt_raw(&v2, 0x1000u, 0, v1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_power_close",
      19,
      666,
      40,
      &v2);
    iic_uninit(dword_C25FB8);
    dword_C25FBC = 0;
    dword_C25FC0 = 0;
    memset(dword_C25FD0, 0, 0xC0u);
    pthread_mutex_unlock(&power_mutex);
  }
  return 0;
}
