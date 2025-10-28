int __fastcall i2c_uninit(int a1)
{
  int (**v1)(void); // r4
  int *v3; // r4
  _DWORD v4[2]; // [sp+14h] [bp-1810h] BYREF
  int v5; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v7[4100]; // [sp+820h] [bp-1004h] BYREF

  v4[0] = a1;
  if ( pthread_mutex_lock(&stru_1B402C) )
  {
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, s);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
             174,
             "i2c_uninit",
             10,
             151,
             100,
             v7);
  }
  else
  {
    if ( exists_c_map((int *)dword_1B4048, (int)v4) == (int *)1 )
    {
      find_c_map((int *)dword_1B4048, (int)v4, &v5);
      v3 = (int *)v5;
      if ( !strcmp("power-api", (const char *)(v5 + 16)) )
      {
        close(v3[3]);
        v3 = (int *)v5;
      }
      free(v3);
      snprintf(s, 0x800u, "i2c ctx %d has been removed", v4[0]);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_uninit",
        10,
        164,
        40,
        v7);
      remove_c_map((int *)dword_1B4048, (int)v4);
    }
    else
    {
      snprintf(s, 0x800u, "i2c ctx %d is not initialized", v4[0]);
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_uninit",
        10,
        169,
        80,
        v7);
    }
    v1 = (int (**)(void))new_iterator_c_map(dword_1B4048);
    if ( (*v1)() )
    {
      while ( ((int (__fastcall *)(int (**)(void)))*v1)(v1) )
        ;
      delete_iterator_c_map(v1);
    }
    else
    {
      delete_iterator_c_map(v1);
      dword_1B4044 = 0;
      dword_1B4048 = 0;
      delete_c_map(0);
      strcpy(s, "all i2c ctx have been removed");
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_uninit",
        10,
        187,
        40,
        v7);
    }
    return pthread_mutex_unlock(&stru_1B402C);
  }
}
