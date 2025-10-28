int __fastcall i2c_write(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r9
  int v9; // r4
  int v10; // r6
  int v11; // r4
  char v12; // t1
  unsigned int v13; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // [sp+8h] [bp-1818h]
  int v23; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  int v26[1024]; // [sp+820h] [bp-1000h] BYREF

  v23 = a1;
  v5 = pthread_mutex_lock(&stru_177E0C);
  if ( v5 )
  {
    a3 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v17 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      170,
      "i2c_write",
      9,
      408,
      100,
      v26);
    return a3;
  }
  if ( !find_c_map((_DWORD *)dword_177E28, (int)&v23, (int)&ptr) )
  {
    a3 = -2;
    pthread_mutex_unlock(&stru_177E0C);
    return a3;
  }
  v6 = snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK(v6);
  v7 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/platform/7020/7020_i2c.c",
    170,
    "i2c_write",
    9,
    419,
    20,
    v26);
  v8 = ptr;
  if ( !strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( !sub_AEF64() )
    {
      a3 = -1;
      free(ptr);
      v18 = snprintf(s, 0x800u, "i2c %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK(v18);
      v19 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        170,
        "i2c_write",
        9,
        426,
        100,
        v26);
      pthread_mutex_unlock(&stru_177E0C);
      return a3;
    }
    fpga_read(48, v26);
    if ( a3 )
    {
      v9 = a2 + a3;
      v10 = a2 - 1;
      v11 = v9 - 1;
      do
      {
        v12 = *(_BYTE *)++v10;
        HIBYTE(v26[0]) = HIBYTE(v26[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
        v13 = *((_DWORD *)ptr + 1);
        LOBYTE(v26[0]) = v12;
        HIBYTE(v26[0]) = HIBYTE(v26[0]) & 0xFC | 1;
        BYTE2(v26[0]) = (16 * ((v13 >> 4) & 0xF)) | (v13 >> 1) & 7;
        fpga_write(48, v26[0]);
      }
      while ( v11 != v10 );
      goto LABEL_8;
    }
  }
  else
  {
    if ( ioctl(v8[3], 0x703u, v8[1] >> 1) < 0 )
    {
      a3 = -1;
      v20 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK(v20);
      v21 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v21);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        170,
        "i2c_write",
        9,
        448,
        100,
        v26);
      free(ptr);
      pthread_mutex_unlock(&stru_177E0C);
      return a3;
    }
    if ( a3 )
    {
      while ( write(*((_DWORD *)ptr + 3), (const void *)(a2 + v5), 1u) == 1 )
      {
        if ( a3 == ++v5 )
          goto LABEL_8;
      }
      v22 = a3;
      a3 = v5;
      v15 = snprintf(
              s,
              0x800u,
              "i2c %s 0x%02x write byte %d failed in %d size",
              (const char *)ptr + 16,
              *((_DWORD *)ptr + 1),
              v5,
              v22);
      V_LOCK(v15);
      v16 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        170,
        "i2c_write",
        9,
        459,
        100,
        v26);
      goto LABEL_8;
    }
  }
  a3 = 0;
LABEL_8:
  free(ptr);
  pthread_mutex_unlock(&stru_177E0C);
  return a3;
}
