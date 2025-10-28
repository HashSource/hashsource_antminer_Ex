int __fastcall i2c_read_reg_e11(int a1, unsigned __int8 *a2, int a3, int a4, unsigned int a5, int a6)
{
  int v11; // [sp+1Ch] [bp-1818h] BYREF
  char v12[2048]; // [sp+20h] [bp-1814h] BYREF
  _BYTE v13[20]; // [sp+820h] [bp-1014h] BYREF
  void *ptr; // [sp+1820h] [bp-14h] BYREF
  unsigned int i; // [sp+1824h] [bp-10h]
  unsigned int v16; // [sp+1828h] [bp-Ch]
  _DWORD *v17; // [sp+182Ch] [bp-8h]

  v11 = a1;
  i = 0;
  if ( a3 == 1 || a3 == 2 )
  {
    if ( pthread_mutex_lock(&stru_C268F4[a6]) )
    {
      strcpy(v12, "failed to i2c lock");
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, v12);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
        177,
        "i2c_read_reg_e11",
        16,
        566,
        100,
        v13);
      return -1;
    }
    else
    {
      v16 = 0;
      ptr = 0;
      if ( find_c_map((int *)dword_C2696C, (int)&v11, &ptr) == 1 )
      {
        v17 = ptr;
        snprintf(v12, 0x800u, "i2c read master = %d, slave = %d", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_read_reg_e11",
          16,
          573,
          20,
          v13);
        for ( i = 0; i < a5; i += a3 )
        {
          if ( a3 == 2 )
          {
            v16 = (*v17 << 26) | (v17[1] >> 4 << 20) | (v17[1] >> 1 << 16) & 0x70000 | ((*a2 + i) << 8) | 0x3000000;
          }
          else if ( a6 == 4 )
          {
            v16 = (*v17 << 26) | (v17[1] >> 4 << 20) | (v17[1] >> 1 << 16) & 0x70000 | ((*a2 + i) << 8) | 0x3080000;
          }
          else
          {
            v16 = (*v17 << 26) | ((*a2 + i) << 8) | 0x3A90000;
          }
          if ( !sub_221098(a6) )
          {
            strcpy(v12, "iic not ready 4 read1");
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, v12);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
              177,
              "i2c_read_reg_e11",
              16,
              598,
              100,
              v13);
            free(ptr);
            pthread_mutex_unlock(&stru_C268F4[a6]);
            return -2;
          }
          if ( a6 == 4 )
          {
            fpga_write(48, v16);
          }
          else if ( a6 )
          {
            if ( a6 == 1 )
              fpga_write(1316, v16);
            else
              fpga_write(1336, v16);
          }
          else
          {
            fpga_write(1296, v16);
          }
          snprintf(v12, 0x800u, "i2c read master = %d, slave = %d, config = %08x", *v17, v17[1], v16);
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, v12);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
            177,
            "i2c_read_reg_e11",
            16,
            613,
            20,
            v13);
          if ( !sub_2212C4((_BYTE *)(a4 + i), a6) )
          {
            strcpy(v12, "iic failed to read data");
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, v12);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
              177,
              "i2c_read_reg_e11",
              16,
              620,
              100,
              v13);
            free(ptr);
            pthread_mutex_unlock(&stru_C268F4[a6]);
            return -3;
          }
          ++i;
        }
        free(ptr);
        pthread_mutex_unlock(&stru_C268F4[a6]);
        return a5;
      }
      else
      {
        snprintf(v12, 0x800u, "7007_i2c %s ctx %d not inited", "i2c_read_reg_e11", v11);
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
          177,
          "i2c_read_reg_e11",
          16,
          628,
          100,
          v13);
        pthread_mutex_unlock(&stru_C268F4[a6]);
        return -2;
      }
    }
  }
  else
  {
    strcpy(v12, "more than one byte reg address is not supported");
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007e11/7007e11_i2c.c",
      177,
      "i2c_read_reg_e11",
      16,
      562,
      100,
      v13);
    return -3;
  }
}
