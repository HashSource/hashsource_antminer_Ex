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
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // [sp+14h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  int v30[1024]; // [sp+820h] [bp-1000h] BYREF

  v27 = a1;
  v5 = pthread_mutex_lock(&stru_18E280);
  if ( v5 )
  {
    v12 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v20 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_write",
      9,
      412,
      100,
      v30);
    return v12;
  }
  if ( !find_c_map((_DWORD *)dword_18E29C, (int)&v27, (int)&ptr) )
  {
    v12 = -2;
    strcpy(s, "find i2c_write node failed");
    V_LOCK(*(_DWORD *)"ode failed");
    v21 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v21);
    v22 = 418;
LABEL_20:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_write",
      9,
      v22,
      100,
      v30);
    pthread_mutex_unlock(&stru_18E280);
    return v12;
  }
  v6 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v6[3], 0x703u, v6[1] >> 1) < 0 )
    {
      v12 = -1;
      v25 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK(v25);
      v26 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_write",
        9,
        455,
        100,
        v30);
      free(ptr);
      pthread_mutex_unlock(&stru_18E280);
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
      v18 = snprintf(
              s,
              0x800u,
              "i2c_write %s 0x%02x write byte %d failed in %d size, error: %s",
              v14 + 16,
              v16,
              v5,
              a3,
              v17);
      V_LOCK(v18);
      v19 = logfmt_raw((int)v30, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
        174,
        "i2c_write",
        9,
        466,
        100,
        v30);
      goto LABEL_9;
    }
    goto LABEL_17;
  }
  if ( !sub_BB53C() )
  {
    v12 = -1;
    free(ptr);
    v23 = snprintf(s, 0x800u, "i2c_writ: %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v23);
    v24 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v24);
    v22 = 433;
    goto LABEL_20;
  }
  fpga_read(48, v30);
  if ( a3 )
  {
    v7 = a2 + a3;
    v8 = a2 - 1;
    v9 = v7 - 1;
    do
    {
      v10 = *(_BYTE *)++v8;
      HIBYTE(v30[0]) = HIBYTE(v30[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v11 = *((_DWORD *)ptr + 1);
      LOBYTE(v30[0]) = v10;
      HIBYTE(v30[0]) = HIBYTE(v30[0]) & 0xFC | 1;
      BYTE2(v30[0]) = (16 * ((v11 >> 4) & 0xF)) | (v11 >> 1) & 7;
      fpga_write(48, v30[0]);
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
  pthread_mutex_unlock(&stru_18E280);
  return v12;
}
