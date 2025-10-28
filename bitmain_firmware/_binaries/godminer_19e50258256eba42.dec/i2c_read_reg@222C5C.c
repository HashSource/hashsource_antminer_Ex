int __fastcall i2c_read_reg(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5)
{
  int v10; // [sp+1Ch] [bp-1818h] BYREF
  char v11[2048]; // [sp+20h] [bp-1814h] BYREF
  _BYTE v12[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  unsigned int v15; // [sp+1828h] [bp-Ch]
  _DWORD *v16; // [sp+182Ch] [bp-8h]

  v10 = a1;
  i = 0;
  if ( a3 == 1 || a3 == 2 )
  {
    if ( pthread_mutex_lock(&stru_C268DC) )
    {
      strcpy(v11, "failed to i2c lock");
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, v11);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_read_reg",
        12,
        499,
        100,
        v12);
      return -1;
    }
    else
    {
      v15 = 0;
      ptr = 0;
      if ( find_c_map((int *)dword_C2696C, (int)&v10, &ptr) == 1 )
      {
        v16 = ptr;
        snprintf(v11, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_read_reg",
          12,
          506,
          20,
          v12);
        for ( i = 0; i < a5; i += a3 )
        {
          if ( a3 == 2 )
            v15 = (*v16 << 26) | (v16[1] >> 4 << 20) | (v16[1] >> 1 << 16) & 0x70000 | ((*a2 + i) << 8) | 0x3000000;
          else
            v15 = (*v16 << 26) | ((*a2 + i) << 8) | 0x3A90000;
          if ( !sub_221024() )
          {
            strcpy(v11, "iic not ready 4 read1");
            V_LOCK();
            logfmt_raw(v12, 0x1000u, 0, v11);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
              177,
              "i2c_read_reg",
              12,
              529,
              100,
              v12);
            free(ptr);
            pthread_mutex_unlock(&stru_C268DC);
            return -2;
          }
          fpga_write(1336, v15);
          snprintf(v11, 0x800u, "i2c read master = %d, slave = %d, config = %08x", *v16, v16[1], v15);
          V_LOCK();
          logfmt_raw(v12, 0x1000u, 0, v11);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
            177,
            "i2c_read_reg",
            12,
            535,
            20,
            v12);
          if ( !sub_221190((_BYTE *)(a4 + i)) )
          {
            strcpy(v11, "iic failed to read data");
            V_LOCK();
            logfmt_raw(v12, 0x1000u, 0, v11);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
              177,
              "i2c_read_reg",
              12,
              542,
              100,
              v12);
            free(ptr);
            pthread_mutex_unlock(&stru_C268DC);
            return -3;
          }
          ++i;
        }
        free(ptr);
        pthread_mutex_unlock(&stru_C268DC);
        return a5;
      }
      else
      {
        snprintf(v11, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read_reg", v10);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_read_reg",
          12,
          550,
          100,
          v12);
        pthread_mutex_unlock(&stru_C268DC);
        return -2;
      }
    }
  }
  else
  {
    strcpy(v11, "more than one byte reg address is not supported");
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_read_reg",
      12,
      495,
      100,
      v12);
    return -3;
  }
}
