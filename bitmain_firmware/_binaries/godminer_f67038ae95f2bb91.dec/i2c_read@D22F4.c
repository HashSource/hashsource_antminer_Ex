int __fastcall i2c_read(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r8
  int v7; // r9
  unsigned int v8; // r2
  _BYTE *v9; // r0
  int v10; // r6
  int v11; // r2
  const char *v12; // r7
  int *v13; // r0
  int v14; // r8
  char *v15; // r0
  int v17; // r2
  int v18; // r2
  int v19; // [sp+14h] [bp-1810h] BYREF
  int v20; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v23[4100]; // [sp+820h] [bp-1004h] BYREF

  v19 = a1;
  v5 = pthread_mutex_lock(&stru_1B402C);
  if ( v5 )
  {
    v10 = -4;
    strcpy(s, "failed get to i2c lock");
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, s);
    V_UNLOCK();
    v17 = 323;
LABEL_23:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read",
      8,
      v17,
      100,
      v23);
    return v10;
  }
  if ( !find_c_map((int *)dword_1B4048, (int)&v19, &ptr) )
  {
    v10 = -2;
    pthread_mutex_unlock(&stru_1B402C);
    strcpy(s, "find i2c_read node failed");
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, s);
    V_UNLOCK();
    v17 = 330;
    goto LABEL_23;
  }
  v6 = ptr;
  v7 = strcmp("power-api", (const char *)ptr + 16);
  if ( v7 )
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) >= 0 )
    {
      if ( a3 )
      {
        while ( read(*((_DWORD *)ptr + 3), (void *)(a2 + v5), 1u) == 1 )
        {
          if ( ++v5 == a3 )
          {
            v10 = v5;
            goto LABEL_17;
          }
        }
        v12 = (const char *)ptr;
        v10 = v5;
        v13 = _errno_location();
        v14 = *((_DWORD *)v12 + 1);
        v15 = strerror(*v13);
        snprintf(s, 0x800u, "i2c_read: %s 0x%02x read byte %d failed in %d size, error: %s", v12 + 16, v14, v5, a3, v15);
        V_LOCK();
        logfmt_raw(v23, 0x1000u, 0, s);
        V_UNLOCK();
        v11 = 384;
LABEL_16:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
          174,
          "i2c_read",
          8,
          v11,
          100,
          v23);
        goto LABEL_17;
      }
      goto LABEL_21;
    }
    v10 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 373;
LABEL_26:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read",
      8,
      v18,
      100,
      v23);
    free(ptr);
    pthread_mutex_unlock(&stru_1B402C);
    return v10;
  }
  if ( !sub_D1934() )
  {
    v10 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v23, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 343;
    goto LABEL_26;
  }
  fpga_read(48, &v20);
  if ( a3 )
  {
    do
    {
      HIBYTE(v20) = HIBYTE(v20) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v8 = *((_DWORD *)ptr + 1);
      HIBYTE(v20) |= 3u;
      BYTE2(v20) = (16 * ((v8 >> 4) & 0xF)) | (v8 >> 1) & 7;
      fpga_write(48, v20);
      v9 = (_BYTE *)(a2 + v7++);
      if ( !sub_D1980(v9) )
      {
        v10 = -1;
        snprintf(s, 0x800u, "i2c_read: %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
        V_LOCK();
        logfmt_raw(v23, 0x1000u, 0, s);
        V_UNLOCK();
        v11 = 362;
        goto LABEL_16;
      }
    }
    while ( a3 != v7 );
    v10 = a3;
    goto LABEL_17;
  }
LABEL_21:
  v10 = 0;
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_1B402C);
  return v10;
}
