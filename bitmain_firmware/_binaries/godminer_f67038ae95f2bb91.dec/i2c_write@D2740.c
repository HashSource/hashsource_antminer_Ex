int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r8
  int v7; // r4
  int v8; // r6
  int v9; // r4
  char v10; // t1
  unsigned int v11; // r12
  int v12; // r6
  const char *v14; // r7
  int *v15; // r0
  int v16; // r8
  char *v17; // r0
  int v18; // r2
  int v19; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  int v22[1024]; // [sp+820h] [bp-1000h] BYREF

  v19 = a1;
  v5 = pthread_mutex_lock(&stru_1B402C);
  if ( v5 )
  {
    v12 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw((char *)v22, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_write",
      9,
      412,
      100,
      v22);
    return v12;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v19, &ptr) )
  {
    v12 = -2;
    strcpy(s, "find i2c_write node failed");
    V_LOCK();
    logfmt_raw((char *)v22, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 418;
LABEL_20:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_write",
      9,
      v18,
      100,
      v22);
    pthread_mutex_unlock(&stru_1B402C);
    return v12;
  }
  v6 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) < 0 )
    {
      v12 = -1;
      snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)v22, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_write",
        9,
        455,
        100,
        v22);
      free(ptr);
      pthread_mutex_unlock(&stru_1B402C);
      return v12;
    }
    if ( a3 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a2 + v5), 1u) == 1 )
      {
        if ( a3 == ++v5 )
          goto LABEL_8;
      }
      v14 = (const char *)ptr;
      v12 = v5;
      v15 = _errno_location();
      v16 = *((_DWORD *)v14 + 1);
      v17 = strerror(*v15);
      snprintf(s, 0x800u, "i2c_write %s 0x%02x write byte %d failed in %d size, error: %s", v14 + 16, v16, v5, a3, v17);
      V_LOCK();
      logfmt_raw((char *)v22, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_write",
        9,
        466,
        100,
        v22);
      goto LABEL_9;
    }
    goto LABEL_17;
  }
  if ( !sub_D1934() )
  {
    v12 = -1;
    free(ptr);
    snprintf(s, 0x800u, "i2c_writ: %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw((char *)v22, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 433;
    goto LABEL_20;
  }
  fpga_read(48, v22);
  if ( a3 )
  {
    v7 = a2 + a3;
    v8 = a2 - 1;
    v9 = v7 - 1;
    do
    {
      v10 = *(_BYTE *)++v8;
      HIBYTE(v22[0]) = HIBYTE(v22[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v11 = *((_DWORD *)ptr + 1);
      LOBYTE(v22[0]) = v10;
      HIBYTE(v22[0]) = HIBYTE(v22[0]) & 0xFC | 1;
      BYTE2(v22[0]) = (16 * ((v11 >> 4) & 0xF)) | (v11 >> 1) & 7;
      fpga_write(48, v22[0]);
    }
    while ( v9 != v8 );
LABEL_8:
    v12 = a3;
    goto LABEL_9;
  }
LABEL_17:
  v12 = 0;
LABEL_9:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v12;
}
