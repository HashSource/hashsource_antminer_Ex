int __fastcall i2c_read_e11(int a1, int a2, unsigned int a3, int a4)
{
  int v9; // [sp+1Ch] [bp-1818h] BYREF
  char v10[2048]; // [sp+20h] [bp-1814h] BYREF
  _BYTE v11[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  int v14; // [sp+1828h] [bp-Ch]
  _DWORD *v15; // [sp+182Ch] [bp-8h]

  v9 = a1;
  i = 0;
  if ( pthread_mutex_lock(&stru_C268F4[a4]) )
  {
    strcpy(v10, "failed to i2c lock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_read_e11",
      12,
      308,
      100,
      v11);
    return -1;
  }
  else
  {
    v14 = 0;
    ptr = 0;
    if ( find_c_map((int *)dword_C2696C, (int)&v9, &ptr) == 1 )
    {
      v15 = ptr;
      snprintf(v10, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_read_e11",
        12,
        315,
        20,
        v11);
      v14 = (*v15 << 26) | 0x2400000;
      for ( i = 0; i < a3; ++i )
      {
        if ( !sub_221098(a4) )
        {
          free(ptr);
          strcpy(v10, "iic not ready 4 read1");
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, v10);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
            177,
            "i2c_read_e11",
            12,
            334,
            100,
            v11);
          pthread_mutex_unlock(&stru_C268F4[a4]);
          return -2;
        }
        if ( a4 == 4 )
        {
          fpga_write(48, v14);
        }
        else if ( a4 )
        {
          if ( a4 == 1 )
            fpga_write(1316, v14);
          else
            fpga_write(1336, v14);
        }
        else
        {
          fpga_write(1296, v14);
        }
        if ( !sub_2212C4((_BYTE *)(a2 + i), a4) )
        {
          free(ptr);
          strcpy(v10, "iic not ready 4 read2");
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, v10);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
            177,
            "i2c_read_e11",
            12,
            355,
            100,
            v11);
          pthread_mutex_unlock(&stru_C268F4[a4]);
          return -3;
        }
      }
      free(ptr);
      pthread_mutex_unlock(&stru_C268F4[a4]);
      return a3;
    }
    else
    {
      snprintf(v10, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read_e11", v9);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_read_e11",
        12,
        362,
        100,
        v11);
      pthread_mutex_unlock(&stru_C268F4[a4]);
      return -2;
    }
  }
}
