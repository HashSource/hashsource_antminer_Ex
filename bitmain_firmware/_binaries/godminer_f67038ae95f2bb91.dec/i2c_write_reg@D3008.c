int __fastcall i2c_write_reg(int a1, char *a2, int a3, int a4, int a5)
{
  int v7; // r4
  _DWORD *v8; // r9
  int v9; // r7
  char *v10; // r4
  char *v11; // r6
  char v12; // r9
  char v13; // t1
  char v14; // t1
  unsigned int v15; // lr
  int v16; // r6
  const char *v18; // r7
  int *v19; // r0
  int v20; // r8
  char *v21; // r0
  int v22; // r2
  int v23; // r2
  int v24; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  int v27[1024]; // [sp+820h] [bp-1000h] BYREF

  v24 = a1;
  if ( a3 != 1 )
  {
    v16 = -3;
    strcpy(s, "not support >1 bytes register address");
    V_LOCK();
    logfmt_raw((char *)v27, 0x1000u, 0, s);
    V_UNLOCK();
    v22 = 587;
LABEL_20:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_write_reg",
      13,
      v22,
      100,
      v27);
    return v16;
  }
  v7 = pthread_mutex_lock(&stru_1B402C);
  if ( v7 )
  {
    v16 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw((char *)v27, 0x1000u, 0, s);
    V_UNLOCK();
    v22 = 593;
    goto LABEL_20;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v24, &ptr) )
  {
    v16 = -2;
    strcpy(s, "find i2c_write_reg node failed");
    V_LOCK();
    logfmt_raw((char *)v27, 0x1000u, 0, s);
    V_UNLOCK();
    v23 = 599;
LABEL_23:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_write_reg",
      13,
      v23,
      100,
      v27);
    pthread_mutex_unlock(&stru_1B402C);
    return v16;
  }
  v8 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v8[3], 0x703u, v8[1] >> 1) < 0 )
    {
      v16 = -1;
      snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK();
      logfmt_raw((char *)v27, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_write_reg",
        13,
        637,
        100,
        v27);
      free(ptr);
      pthread_mutex_unlock(&stru_1B402C);
      return v16;
    }
    write(*((_DWORD *)ptr + 3), a2, 1u);
    if ( a5 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a4 + v7), 1u) == 1 )
      {
        if ( a5 == ++v7 )
          goto LABEL_9;
      }
      v18 = (const char *)ptr;
      v16 = v7;
      v19 = _errno_location();
      v20 = *((_DWORD *)v18 + 1);
      v21 = strerror(*v19);
      snprintf(
        s,
        0x800u,
        "i2c_write_reg %s 0x%02x write byte %d failed in %d size, error: %s",
        v18 + 16,
        v20,
        v7,
        a5,
        v21);
      V_LOCK();
      logfmt_raw((char *)v27, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_write_reg",
        13,
        649,
        100,
        v27);
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  if ( !sub_D1934() )
  {
    v16 = -1;
    free(ptr);
    snprintf(s, 0x800u, "i2c %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw((char *)v27, 0x1000u, 0, s);
    V_UNLOCK();
    v23 = 614;
    goto LABEL_23;
  }
  fpga_read(48, v27);
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
      HIBYTE(v27[0]) = HIBYTE(v27[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v15 = *((_DWORD *)ptr + 1);
      BYTE1(v27[0]) = v12;
      LOBYTE(v27[0]) = v14;
      HIBYTE(v27[0]) = HIBYTE(v27[0]) & 0xFC | 1;
      BYTE2(v27[0]) = (16 * ((v15 >> 4) & 0xF)) | (v15 >> 1) & 7;
      fpga_write(48, v27[0]);
    }
    while ( v10 != v11 );
LABEL_9:
    v16 = a5;
    goto LABEL_10;
  }
LABEL_18:
  v16 = 0;
LABEL_10:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v16;
}
