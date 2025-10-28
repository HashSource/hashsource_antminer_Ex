int __fastcall i2c_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r7
  int v8; // r4
  _DWORD *v9; // r5
  int v10; // r6
  int v11; // r5
  char v12; // t1
  int v13; // lr
  unsigned int v14; // r2
  _BYTE *v15; // r0
  int v16; // r0
  int v17; // r2
  int v19; // r0
  int v20; // r3
  int v21; // [sp+14h] [bp-1810h] BYREF
  int v22; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  v21 = a1;
  v7 = a5;
  v8 = pthread_mutex_lock(&stru_16C6C0);
  if ( v8 )
  {
    v7 = -1;
    strcpy(s, "failed to get i2c lock");
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_read_reg",
      12,
      488,
      100,
      var1004);
    return v7;
  }
  if ( !find_c_map((int *)dword_16C6DC, (int)&v21, &ptr) )
  {
    v7 = -2;
    pthread_mutex_unlock(&stru_16C6C0);
    return v7;
  }
  snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK();
  logfmt_raw(var1004, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_read_reg",
    12,
    499,
    20,
    var1004);
  v9 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v9[3], 0x703u, v9[1] >> 1) >= 0 )
    {
      if ( a5 )
      {
        while ( 1 )
        {
          write(*((_DWORD *)ptr + 3), (const void *)(a2 + v8), 1u);
          if ( read(*((_DWORD *)ptr + 3), (void *)(a4 + v8), 1u) != 1 )
            break;
          if ( a5 == ++v8 )
            goto LABEL_17;
        }
        v7 = v8;
        snprintf(
          s,
          0x800u,
          "i2c %s 0x%02x read byte %d failed in %d size",
          (const char *)ptr + 16,
          *((_DWORD *)ptr + 1),
          v8,
          a5);
        V_LOCK();
        logfmt_raw(var1004, 0x1000u, 0, s);
        V_UNLOCK();
        v16 = g_zc;
        v17 = 548;
        goto LABEL_16;
      }
LABEL_19:
      v7 = 0;
      goto LABEL_17;
    }
    v7 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, s);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 536;
LABEL_23:
    zlog(
      v19,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_read_reg",
      12,
      v20,
      100,
      var1004);
    free(ptr);
    pthread_mutex_unlock(&stru_16C6C0);
    return v7;
  }
  if ( !sub_BB768() )
  {
    v7 = -1;
    snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, s);
    V_UNLOCK();
    v19 = g_zc;
    v20 = 505;
    goto LABEL_23;
  }
  fpga_read(48, &v22);
  if ( !a5 )
    goto LABEL_19;
  v10 = a2 - 1;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(_BYTE *)++v10;
    v13 = *(_DWORD *)ptr;
    BYTE1(v22) = v12;
    HIBYTE(v22) = HIBYTE(v22) & 0xE3 | (4 * (v13 & 7));
    v14 = *((_DWORD *)ptr + 1);
    HIBYTE(v22) |= 3u;
    BYTE2(v22) = (16 * ((v14 >> 4) & 0xF)) | (v14 >> 1) & 7;
    fpga_write(48, v22);
    v15 = (_BYTE *)(a4 + v11++);
    if ( !sub_BB7B4(v15) )
      break;
    if ( a5 == v11 )
      goto LABEL_17;
  }
  v7 = -1;
  snprintf(s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
  V_LOCK();
  logfmt_raw(var1004, 0x1000u, 0, s);
  V_UNLOCK();
  v16 = g_zc;
  v17 = 525;
LABEL_16:
  zlog(
    v16,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_read_reg",
    12,
    v17,
    100,
    var1004);
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_16C6C0);
  return v7;
}
