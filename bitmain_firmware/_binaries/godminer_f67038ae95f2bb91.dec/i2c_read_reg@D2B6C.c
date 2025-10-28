int __fastcall i2c_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r4
  _DWORD *v8; // r9
  int v9; // r10
  int v10; // r7
  char v11; // t1
  int v12; // r12
  unsigned int v13; // r2
  _BYTE *v14; // r0
  int v15; // r6
  int v16; // r2
  const char *v17; // r7
  int *v18; // r0
  int v19; // r8
  char *v20; // r0
  int v22; // r2
  int v23; // [sp+14h] [bp-180Ch] BYREF
  int v24; // [sp+18h] [bp-1808h] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v27[4096]; // [sp+820h] [bp-1000h] BYREF

  v23 = a1;
  v7 = pthread_mutex_lock(&stru_1B402C);
  if ( v7 )
  {
    v15 = -1;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      495,
      100,
      v27);
    return v15;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v23, &ptr) )
  {
    v15 = -2;
    strcpy(s, "find i2c_read_reg node failed");
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      501,
      100,
      v27);
    pthread_mutex_unlock(&stru_1B402C);
    return v15;
  }
  v8 = ptr;
  v9 = strcmp("power-api", (const char *)ptr + 16);
  if ( v9 )
  {
    if ( ioctl(v8[3], 0x703u, v8[1] >> 1) >= 0 )
    {
      if ( a5 )
      {
        do
        {
          write(*((_DWORD *)ptr + 3), (const void *)(a2 + v7), 1u);
          if ( read(*((_DWORD *)ptr + 3), (void *)(a4 + v7), 1u) != 1 )
          {
            v17 = (const char *)ptr;
            v15 = v7;
            v18 = _errno_location();
            v19 = *((_DWORD *)v17 + 1);
            v20 = strerror(*v18);
            snprintf(
              s,
              0x800u,
              "i2c_read_reg %s 0x%02x read byte %d failed in %d size, error: %s",
              v17 + 16,
              v19,
              v7,
              a5,
              v20);
            V_LOCK();
            logfmt_raw(v27, 0x1000u, 0, s);
            V_UNLOCK();
            v16 = 558;
            goto LABEL_16;
          }
          ++v7;
        }
        while ( a5 != v7 );
LABEL_19:
        v15 = a5;
        goto LABEL_17;
      }
      goto LABEL_20;
    }
    v15 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, s);
    V_UNLOCK();
    v22 = 546;
LABEL_24:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      v22,
      100,
      v27);
    free(ptr);
    pthread_mutex_unlock(&stru_1B402C);
    return v15;
  }
  if ( !sub_D1934() )
  {
    v15 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, s);
    V_UNLOCK();
    v22 = 515;
    goto LABEL_24;
  }
  fpga_read(48, &v24);
  if ( a5 )
  {
    v10 = a2 - 1;
    while ( 1 )
    {
      v11 = *(_BYTE *)++v10;
      v12 = *(_DWORD *)ptr;
      BYTE1(v24) = v11;
      HIBYTE(v24) = HIBYTE(v24) & 0xE3 | (4 * (v12 & 7));
      v13 = *((_DWORD *)ptr + 1);
      HIBYTE(v24) |= 3u;
      BYTE2(v24) = (16 * ((v13 >> 4) & 0xF)) | (v13 >> 1) & 7;
      fpga_write(48, v24);
      v14 = (_BYTE *)(a4 + v9++);
      if ( !sub_D1980(v14) )
        break;
      if ( a5 == v9 )
        goto LABEL_19;
    }
    v15 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, s);
    V_UNLOCK();
    v16 = 535;
LABEL_16:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      v16,
      100,
      v27);
    goto LABEL_17;
  }
LABEL_20:
  v15 = 0;
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v15;
}
