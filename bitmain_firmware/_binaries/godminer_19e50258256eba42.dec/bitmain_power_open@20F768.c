int bitmain_power_open()
{
  char v2[2048]; // [sp+14h] [bp-1810h] BYREF
  _BYTE v3[16]; // [sp+814h] [bp-1010h] BYREF
  int v4; // [sp+1814h] [bp-10h] BYREF
  __int16 v5; // [sp+1818h] [bp-Ch]
  char v6; // [sp+181Ah] [bp-Ah]
  char v7; // [sp+181Bh] [bp-9h]
  int v8; // [sp+181Ch] [bp-8h]

  v8 = 0;
  if ( dword_C25FB8 && dword_C25FBC )
    return dword_C25FB8;
  v4 = 0;
  v5 = 1;
  v6 = 2;
  v7 = 0;
  pthread_mutex_lock(&power_mutex);
  v8 = iic_init((int)&v4);
  pthread_mutex_unlock(&power_mutex);
  if ( v8 < 0 )
    return v8;
  dword_C25FB8 = v8;
  dword_C25FBC = 1;
  memset(dword_C25FD0, 0, 0xC0u);
  v8 = bitmain_power_version();
  if ( v8 >= 0 )
  {
    dword_C25FC0 = v8;
    snprintf(v2, 0x800u, "power open power_version = 0x%x", v8);
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_power_open",
      18,
      654,
      40,
      v3);
    return 0;
  }
  else
  {
    strcpy(v2, "power open power_version < 0 will close power");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_power_open",
      18,
      649,
      40,
      v3);
    bitmain_power_close();
    return v8;
  }
}
