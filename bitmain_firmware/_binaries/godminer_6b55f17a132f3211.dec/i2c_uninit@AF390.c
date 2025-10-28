int __fastcall i2c_uninit(int a1)
{
  int v1; // r0
  int v2; // r0
  _DWORD *v3; // r4
  int v5; // r0
  int *v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // [sp+14h] [bp-1810h] BYREF
  int v11; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v13[4100]; // [sp+820h] [bp-1004h] BYREF

  v10 = a1;
  if ( pthread_mutex_lock(&stru_177E0C) )
  {
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v5 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v5);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
             170,
             "i2c_uninit",
             10,
             150,
             100,
             v13);
  }
  else
  {
    if ( exists_c_map((_DWORD *)dword_177E28) == (_DWORD *)1 )
    {
      find_c_map((_DWORD *)dword_177E28, (int)&v10, (int)&v11);
      v6 = (int *)v11;
      if ( !strcmp("power-api", (const char *)(v11 + 16)) )
      {
        close(v6[3]);
        v6 = (int *)v11;
      }
      free(v6);
      v7 = snprintf(s, 0x800u, "i2c ctx %d has been removed", v10);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        170,
        "i2c_uninit",
        10,
        163,
        40,
        v13);
      remove_c_map((_DWORD *)dword_177E28);
    }
    else
    {
      v1 = snprintf(s, 0x800u, "i2c ctx %d is not initialized", v10);
      V_LOCK(v1);
      v2 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        170,
        "i2c_uninit",
        10,
        168,
        80,
        v13);
    }
    v3 = new_iterator_c_map(dword_177E28);
    if ( ((int (*)(void))*v3)() )
    {
      while ( ((int (__fastcall *)(_DWORD *))*v3)(v3) )
        ;
      delete_iterator_c_map(v3);
    }
    else
    {
      delete_iterator_c_map(v3);
      dword_177E24 = 0;
      dword_177E28 = 0;
      delete_c_map(0);
      strcpy(s, "all i2c ctx have been removed");
      V_LOCK(*(_DWORD *)" been removed");
      v9 = logfmt_raw((int)v13, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        170,
        "i2c_uninit",
        10,
        186,
        40,
        v13);
    }
    return pthread_mutex_unlock(&stru_177E0C);
  }
}
