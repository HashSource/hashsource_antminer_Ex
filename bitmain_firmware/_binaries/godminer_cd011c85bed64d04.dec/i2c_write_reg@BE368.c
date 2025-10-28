int __fastcall i2c_write_reg(int a1, char *a2, int a3, int a4, int a5)
{
  int v6; // r5
  int v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r7
  char *v12; // r4
  char *v13; // r6
  char v14; // r8
  char v15; // t1
  char v16; // t1
  unsigned int v17; // r2
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _DWORD *v28; // [sp+10h] [bp-1814h]
  int v29; // [sp+14h] [bp-1810h] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  int var1004[1032]; // [sp+820h] [bp-1004h] BYREF

  v29 = a1;
  v6 = a5;
  if ( a3 != 1 )
  {
    v6 = -3;
    strcpy(s, "not support >1 bytes register address");
    V_LOCK(*(_DWORD *)"dress");
    v21 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v21);
    v22 = 577;
LABEL_19:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_write_reg",
      13,
      v22,
      100,
      var1004);
    return v6;
  }
  v8 = pthread_mutex_lock(&stru_16D6D8);
  if ( v8 )
  {
    v6 = -4;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v23 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v23);
    v22 = 583;
    goto LABEL_19;
  }
  if ( !find_c_map((_DWORD *)dword_16D6F4, (int)&v29, (int)&ptr) )
  {
    v6 = -2;
    pthread_mutex_unlock(&stru_16D6D8);
    return v6;
  }
  v9 = snprintf(s, 0x800u, "i2c read master = %d, slave = 0x%x", *(_DWORD *)ptr, *((_DWORD *)ptr + 1));
  V_LOCK(v9);
  v10 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v10);
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
  v28 = ptr;
  if ( !strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( !sub_BCCDC() )
    {
      v6 = -1;
      free(ptr);
      v24 = snprintf(s, 0x800u, "i2c %s 0x%02x not ready for write", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK(v24);
      v25 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v25);
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
      pthread_mutex_unlock(&stru_16D6D8);
      return v6;
    }
    fpga_read(48, var1004);
    if ( a5 )
    {
      v11 = a4 - 1;
      v12 = &a2[a5 - 1];
      v13 = a2 - 1;
      do
      {
        v15 = *++v13;
        v14 = v15;
        v16 = *(_BYTE *)++v11;
        HIBYTE(var1004[0]) = HIBYTE(var1004[0]) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
        v17 = *((_DWORD *)ptr + 1);
        BYTE1(var1004[0]) = v14;
        LOBYTE(var1004[0]) = v16;
        HIBYTE(var1004[0]) = HIBYTE(var1004[0]) & 0xFC | 1;
        BYTE2(var1004[0]) = (16 * ((v17 >> 4) & 0xF)) | (v17 >> 1) & 7;
        fpga_write(48, var1004[0]);
      }
      while ( v12 != v13 );
      goto LABEL_9;
    }
  }
  else
  {
    if ( ioctl(v28[3], 0x703u, v28[1] >> 1) < 0 )
    {
      v6 = -1;
      v26 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
      V_LOCK(v26);
      v27 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v27);
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
      pthread_mutex_unlock(&stru_16D6D8);
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
      v19 = snprintf(
              s,
              0x800u,
              "i2c %s 0x%02x write byte %d failed in %d size",
              (const char *)ptr + 16,
              *((_DWORD *)ptr + 1),
              v8,
              a5);
      V_LOCK(v19);
      v20 = logfmt_raw((int)var1004, 0x1000u);
      V_UNLOCK(v20);
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
  pthread_mutex_unlock(&stru_16D6D8);
  return v6;
}
