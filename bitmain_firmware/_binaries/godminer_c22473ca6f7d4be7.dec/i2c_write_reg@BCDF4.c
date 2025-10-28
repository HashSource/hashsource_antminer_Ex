int __fastcall i2c_write_reg(int a1, char *a2, int a3, int a4, int a5)
{
  int v6; // r5
  int v8; // r4
  int v9; // r7
  char *v10; // r4
  char *v11; // r6
  char v12; // r8
  char v13; // t1
  char v14; // t1
  unsigned int v15; // r2
  int v17; // r2
  _DWORD *v18; // [sp+10h] [bp-1814h]
  int v19; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  int var1004[1032]; // [sp+820h] [bp-1004h] BYREF

  v19 = a1;
  v6 = a5;
  if ( a3 != 1 )
  {
    v6 = -3;
    strcpy(s, "not support >1 bytes register address");
    V_LOCK();
    logfmt_raw((char *)var1004, 0x1000u, 0, s);
    V_UNLOCK();
    v17 = 577;
LABEL_19:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_write_reg",
      13,
      v17,
      100,
      var1004);
    return v6;
  }
  v8 = pthread_mutex_lock(&stru_16C6C0);
  if ( v8 )
  {
    v6 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw((char *)var1004, 0x1000u, 0, s);
    V_UNLOCK();
    v17 = 583;
    goto LABEL_19;
  }
  if ( !find_c_map((int *)dword_16C6DC, (int)&v19, &ptr) )
  {
    v6 = -2;
    pthread_mutex_unlock(&stru_16C6C0);
    return v6;
  }
  snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK();
  logfmt_raw((char *)var1004, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_write_reg",
    13,
    594,
    20,
    var1004);
  v18 = ptr;
  if ( !strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( !sub_BB768() )
    {
      v6 = -1;
      free(ptr);
      snprintf(s, 0x800u, "i2c %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)var1004, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
        168,
        "i2c_write_reg",
        13,
        601,
        100,
        var1004);
      pthread_mutex_unlock(&stru_16C6C0);
      return v6;
    }
    fpga_read(48, var1004);
    if ( a5 )
    {
      v9 = a4 - 1;
      v10 = &a2[a5 - 1];
      v11 = a2 - 1;
      do
      {
        v13 = *++v11;
        v12 = v13;
        v14 = *(_BYTE *)++v9;
        HIBYTE(var1004[0]) = HIBYTE(var1004[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
        v15 = *((_DWORD *)ptr + 1);
        BYTE1(var1004[0]) = v12;
        LOBYTE(var1004[0]) = v14;
        HIBYTE(var1004[0]) = HIBYTE(var1004[0]) & 0xFC | 1;
        BYTE2(var1004[0]) = (16 * ((v15 >> 4) & 0xF)) | (v15 >> 1) & 7;
        fpga_write(48, var1004[0]);
      }
      while ( v10 != v11 );
      goto LABEL_9;
    }
  }
  else
  {
    if ( ioctl(v18[3], 0x703u, v18[1] >> 1) < 0 )
    {
      v6 = -1;
      snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)var1004, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
        168,
        "i2c_write_reg",
        13,
        624,
        100,
        var1004);
      free(ptr);
      pthread_mutex_unlock(&stru_16C6C0);
      return v6;
    }
    write(*((_DWORD *)ptr + 3), a2, 1u);
    if ( a5 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a4 + v8), 1u) == 1 )
      {
        if ( a5 == ++v8 )
          goto LABEL_9;
      }
      v6 = v8;
      snprintf(
        s,
        0x800u,
        "i2c %s 0x%02x write byte %d failed in %d size",
        (const char *)ptr + 16,
        *((_DWORD *)ptr + 1),
        v8,
        a5);
      V_LOCK();
      logfmt_raw((char *)var1004, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
        168,
        "i2c_write_reg",
        13,
        636,
        100,
        var1004);
      goto LABEL_9;
    }
  }
  v6 = 0;
LABEL_9:
  free(ptr);
  pthread_mutex_unlock(&stru_16C6C0);
  return v6;
}
