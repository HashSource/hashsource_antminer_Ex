int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r9
  int v7; // r4
  int v8; // r6
  int v9; // r4
  char v10; // t1
  unsigned int v11; // r2
  int v13; // [sp+8h] [bp-1818h]
  int v14; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  int v17[1024]; // [sp+820h] [bp-1000h] BYREF

  v14 = a1;
  v5 = pthread_mutex_lock(&stru_16C6C0);
  if ( v5 )
  {
    a3 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw((char *)v17, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_write",
      9,
      408,
      100,
      v17);
    return a3;
  }
  if ( !find_c_map((int *)dword_16C6DC, (int)&v14, &ptr) )
  {
    a3 = -2;
    pthread_mutex_unlock(&stru_16C6C0);
    return a3;
  }
  snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK();
  logfmt_raw((char *)v17, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_write",
    9,
    419,
    20,
    v17);
  v6 = ptr;
  if ( !strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( !sub_BB768() )
    {
      a3 = -1;
      free(ptr);
      snprintf(s, 0x800u, "i2c %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)v17, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
        168,
        "i2c_write",
        9,
        426,
        100,
        v17);
      pthread_mutex_unlock(&stru_16C6C0);
      return a3;
    }
    fpga_read(48, v17);
    if ( a3 )
    {
      v7 = a2 + a3;
      v8 = a2 - 1;
      v9 = v7 - 1;
      do
      {
        v10 = *(_BYTE *)++v8;
        HIBYTE(v17[0]) = HIBYTE(v17[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
        v11 = *((_DWORD *)ptr + 1);
        LOBYTE(v17[0]) = v10;
        HIBYTE(v17[0]) = HIBYTE(v17[0]) & 0xFC | 1;
        BYTE2(v17[0]) = (16 * ((v11 >> 4) & 0xF)) | (v11 >> 1) & 7;
        fpga_write(48, v17[0]);
      }
      while ( v9 != v8 );
      goto LABEL_8;
    }
  }
  else
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) < 0 )
    {
      a3 = -1;
      snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)v17, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
        168,
        "i2c_write",
        9,
        448,
        100,
        v17);
      free(ptr);
      pthread_mutex_unlock(&stru_16C6C0);
      return a3;
    }
    if ( a3 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a2 + v5), 1u) == 1 )
      {
        if ( a3 == ++v5 )
          goto LABEL_8;
      }
      v13 = a3;
      a3 = v5;
      snprintf(
        s,
        0x800u,
        "i2c %s 0x%02x write byte %d failed in %d size",
        (const char *)ptr + 16,
        *((_DWORD *)ptr + 1),
        v5,
        v13);
      V_LOCK();
      logfmt_raw((char *)v17, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
        168,
        "i2c_write",
        9,
        459,
        100,
        v17);
      goto LABEL_8;
    }
  }
  a3 = 0;
LABEL_8:
  free(ptr);
  pthread_mutex_unlock(&stru_16C6C0);
  return a3;
}
