int __fastcall i2c_read(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r9
  int v9; // r11
  unsigned int v10; // r1
  _BYTE *v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // [sp+8h] [bp-181Ch]
  int v27; // [sp+14h] [bp-1810h] BYREF
  int v28; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v31[4100]; // [sp+820h] [bp-1004h] BYREF

  v27 = a1;
  v5 = pthread_mutex_lock(&stru_177E0C);
  if ( v5 )
  {
    a3 = -4;
    strcpy(s, "failed get to i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v19 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      170,
      "i2c_read",
      8,
      322,
      100,
      v31);
    return a3;
  }
  if ( !find_c_map((_DWORD *)dword_177E28, (int)&v27, (int)&ptr) )
  {
    a3 = -2;
    pthread_mutex_unlock(&stru_177E0C);
    return a3;
  }
  v6 = snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK(v6);
  v7 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_i2c.c",
    170,
    "i2c_read",
    8,
    333,
    20,
    v31);
  v8 = ptr;
  v9 = strcmp("power-api", (const char *)ptr + 16);
  if ( v9 )
  {
    if ( ioctl(v8[3], 0x703u, v8[1] >> 1) >= 0 )
    {
      if ( !a3 )
        goto LABEL_19;
      while ( read(*((_DWORD *)ptr + 3), (void *)(a2 + v5), 1u) == 1 )
      {
        if ( a3 == ++v5 )
          goto LABEL_17;
      }
      v26 = a3;
      a3 = v5;
      v16 = snprintf(
              s,
              0x800u,
              "i2c %s 0x%02x read byte %d failed in %d size",
              (const char *)ptr + 16,
              *((_DWORD *)ptr + 1),
              v5,
              v26);
      V_LOCK(v16);
      v17 = logfmt_raw((int)v31, 0x1000u);
      V_UNLOCK(v17);
      v14 = g_zc;
      v15 = 380;
      goto LABEL_16;
    }
    a3 = -1;
    v24 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v24);
    v25 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v25);
    v22 = g_zc;
    v23 = 369;
LABEL_23:
    zlog(
      v22,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      170,
      "i2c_read",
      8,
      v23,
      100,
      v31);
    free(ptr);
    pthread_mutex_unlock(&stru_177E0C);
    return a3;
  }
  if ( !sub_AEF64() )
  {
    a3 = -1;
    v20 = snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v20);
    v21 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v21);
    v22 = g_zc;
    v23 = 339;
    goto LABEL_23;
  }
  fpga_read(48, &v28);
  if ( !a3 )
  {
LABEL_19:
    a3 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    HIBYTE(v28) = HIBYTE(v28) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
    v10 = *((_DWORD *)ptr + 1);
    HIBYTE(v28) |= 3u;
    BYTE2(v28) = (16 * ((unsigned __int8)v10 >> 4)) | (v10 >> 1) & 7;
    fpga_write(48, v28);
    v11 = (_BYTE *)(a2 + v9++);
    if ( !sub_AEFB0(v11) )
      break;
    if ( a3 == v9 )
      goto LABEL_17;
  }
  a3 = -1;
  v12 = snprintf(s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
  V_LOCK(v12);
  v13 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v13);
  v14 = g_zc;
  v15 = 358;
LABEL_16:
  zlog(
    v14,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_i2c.c",
    170,
    "i2c_read",
    8,
    v15,
    100,
    v31);
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_177E0C);
  return a3;
}
