int __fastcall i2c_write_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  int v9; // [sp+1Ch] [bp-1818h] BYREF
  char v10[2048]; // [sp+20h] [bp-1814h] BYREF
  _BYTE v11[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  unsigned int v14; // [sp+1828h] [bp-Ch]
  _DWORD *v15; // [sp+182Ch] [bp-8h]

  v9 = a1;
  i = 0;
  if ( a3 == 1 )
  {
    if ( pthread_mutex_lock(&stru_C268DC) )
    {
      strcpy(v10, "failed to i2c lock");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_write_reg",
        13,
        654,
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
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_write_reg",
          13,
          661,
          20,
          v11);
        for ( i = 0; i < a5; ++i )
        {
          v14 = (*v15 << 26) | ((*a2 + i) << 8) | *(unsigned __int8 *)(a4 + i) | 0x1A10000;
          if ( !sub_221024() )
          {
            strcpy(v10, "iic not ready 4 write");
            V_LOCK();
            logfmt_raw(v11, 0x1000u, 0, v10);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
              177,
              "i2c_write_reg",
              13,
              678,
              100,
              v11);
            free(ptr);
            pthread_mutex_unlock(&stru_C268DC);
            return -2;
          }
          fpga_write(1336, v14);
        }
        free(ptr);
        pthread_mutex_unlock(&stru_C268DC);
        return a5;
      }
      else
      {
        snprintf(v10, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_write_reg", v9);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_write_reg",
          13,
          689,
          100,
          v11);
        pthread_mutex_unlock(&stru_C268DC);
        return -2;
      }
    }
  }
  else
  {
    strcpy(v10, "more than one byte reg address is not supported");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_write_reg",
      13,
      650,
      100,
      v11);
    return -3;
  }
}
