int __fastcall i2c_read(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r9
  int v7; // r11
  unsigned int v8; // r1
  _BYTE *v9; // r0
  int v10; // r0
  int v11; // r2
  int v13; // r0
  int v14; // r3
  int v15; // [sp+8h] [bp-181Ch]
  int v16; // [sp+14h] [bp-1810h] BYREF
  int v17; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v20[4100]; // [sp+820h] [bp-1004h] BYREF

  v16 = a1;
  v5 = pthread_mutex_lock(&stru_16C6C0);
  if ( v5 )
  {
    a3 = -4;
    strcpy(s, "failed get to i2c lock");
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_read",
      8,
      322,
      100,
      v20);
    return a3;
  }
  if ( !find_c_map((int *)dword_16C6DC, (int)&v16, &ptr) )
  {
    a3 = -2;
    pthread_mutex_unlock(&stru_16C6C0);
    return a3;
  }
  snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK();
  logfmt_raw(v20, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_read",
    8,
    333,
    20,
    v20);
  v6 = ptr;
  v7 = strcmp("power-api", (const char *)ptr + 16);
  if ( v7 )
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) >= 0 )
    {
      if ( !a3 )
        goto LABEL_19;
      while ( read(*((_DWORD *)ptr + 3), (void *)(a2 + v5), 1u) == 1 )
      {
        if ( a3 == ++v5 )
          goto LABEL_17;
      }
      v15 = a3;
      a3 = v5;
      snprintf(
        s,
        0x800u,
        "i2c %s 0x%02x read byte %d failed in %d size",
        (const char *)ptr + 16,
        *((_DWORD *)ptr + 1),
        v5,
        v15);
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      v10 = g_zc;
      v11 = 380;
      goto LABEL_16;
    }
    a3 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    v13 = g_zc;
    v14 = 369;
LABEL_23:
    zlog(
      v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_read",
      8,
      v14,
      100,
      v20);
    free(ptr);
    pthread_mutex_unlock(&stru_16C6C0);
    return a3;
  }
  if ( !sub_BB768() )
  {
    a3 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    v13 = g_zc;
    v14 = 339;
    goto LABEL_23;
  }
  fpga_read(48, &v17);
  if ( !a3 )
  {
LABEL_19:
    a3 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    HIBYTE(v17) = HIBYTE(v17) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
    v8 = *((_DWORD *)ptr + 1);
    HIBYTE(v17) |= 3u;
    BYTE2(v17) = (16 * ((unsigned __int8)v8 >> 4)) | (v8 >> 1) & 7;
    fpga_write(48, v17);
    v9 = (_BYTE *)(a2 + v7++);
    if ( !sub_BB7B4(v9) )
      break;
    if ( a3 == v7 )
      goto LABEL_17;
  }
  a3 = -1;
  snprintf(s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
  V_LOCK();
  logfmt_raw(v20, 0x1000u, 0, s);
  V_UNLOCK();
  v10 = g_zc;
  v11 = 358;
LABEL_16:
  zlog(
    v10,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_read",
    8,
    v11,
    100,
    v20);
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_16C6C0);
  return a3;
}
