int __fastcall i2c_write(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+1Ch] [bp-1818h] BYREF
  char v8[2048]; // [sp+20h] [bp-1814h] BYREF
  _BYTE v9[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  int v12; // [sp+1828h] [bp-Ch]
  _DWORD *v13; // [sp+182Ch] [bp-8h]

  v7 = a1;
  i = 0;
  if ( pthread_mutex_lock(&stru_C268DC) )
  {
    strcpy(v8, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, v8);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_write",
      9,
      383,
      100,
      v9);
    return -1;
  }
  else
  {
    v12 = 0;
    ptr = 0;
    if ( find_c_map((int *)dword_C2696C, (int)&v7, &ptr) == 1 )
    {
      v13 = ptr;
      snprintf(v8, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_write",
        9,
        390,
        20,
        v9);
      for ( i = 0; i < a3; ++i )
      {
        v12 = (*v13 << 26) | *(unsigned __int8 *)(a2 + i) | 0x400000;
        if ( !sub_221024() )
        {
          free(ptr);
          strcpy(v8, "iic not ready 4 write");
          V_LOCK();
          logfmt_raw(v9, 0x1000u, 0, v8);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
            177,
            "i2c_write",
            9,
            407,
            100,
            v9);
          pthread_mutex_unlock(&stru_C268DC);
          return -2;
        }
        fpga_write(1336, v12);
      }
      free(ptr);
      pthread_mutex_unlock(&stru_C268DC);
      return a3;
    }
    else
    {
      snprintf(v8, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write", v7);
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_write",
        9,
        417,
        100,
        v9);
      pthread_mutex_unlock(&stru_C268DC);
      return -2;
    }
  }
}
