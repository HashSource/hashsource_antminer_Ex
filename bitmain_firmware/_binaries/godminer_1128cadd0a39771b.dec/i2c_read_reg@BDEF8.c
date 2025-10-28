int __fastcall i2c_read_reg(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r7
  int v8; // r4
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r5
  int v12; // r6
  int v13; // r5
  char v14; // t1
  int v15; // lr
  unsigned int v16; // r2
  _BYTE *v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r0
  int v31; // r0
  int v32; // [sp+14h] [bp-1810h] BYREF
  int v33; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE var1004[4128]; // [sp+820h] [bp-1004h] BYREF

  v32 = a1;
  v7 = a5;
  v8 = pthread_mutex_lock(&stru_16D6D8);
  if ( v8 )
  {
    v7 = -1;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v25 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v25);
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
  if ( !find_c_map((_DWORD *)dword_16D6F4, (int)&v32, (int)&ptr) )
  {
    v7 = -2;
    pthread_mutex_unlock(&stru_16D6D8);
    return v7;
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
    "i2c_read_reg",
    12,
    499,
    20,
    var1004);
  v11 = ptr;
  if ( strcmp("power-api", (const char *)ptr + 16) )
  {
    if ( ioctl(v11[3], 0x703u, v11[1] >> 1) >= 0 )
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
        v22 = snprintf(
                s,
                0x800u,
                "i2c %s 0x%02x read byte %d failed in %d size",
                (const char *)ptr + 16,
                *((_DWORD *)ptr + 1),
                v8,
                a5);
        V_LOCK(v22);
        v23 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v23);
        v20 = g_zc;
        v21 = 548;
        goto LABEL_16;
      }
LABEL_19:
      v7 = 0;
      goto LABEL_17;
    }
    v7 = -1;
    v30 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v30);
    v31 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v31);
    v28 = g_zc;
    v29 = 536;
LABEL_23:
    zlog(
      v28,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
      168,
      "i2c_read_reg",
      12,
      v29,
      100,
      var1004);
    free(ptr);
    pthread_mutex_unlock(&stru_16D6D8);
    return v7;
  }
  if ( !sub_BCCDC() )
  {
    v7 = -1;
    v26 = snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v26);
    v27 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v27);
    v28 = g_zc;
    v29 = 505;
    goto LABEL_23;
  }
  fpga_read(48, &v33);
  if ( !a5 )
    goto LABEL_19;
  v12 = a2 - 1;
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_BYTE *)++v12;
    v15 = *(_DWORD *)ptr;
    BYTE1(v33) = v14;
    HIBYTE(v33) = HIBYTE(v33) & 0xE3 | (4 * (v15 & 7));
    v16 = *((_DWORD *)ptr + 1);
    HIBYTE(v33) |= 3u;
    BYTE2(v33) = (16 * ((v16 >> 4) & 0xF)) | (v16 >> 1) & 7;
    fpga_write(48, v33);
    v17 = (_BYTE *)(a4 + v13++);
    if ( !sub_BCD28(v17) )
      break;
    if ( a5 == v13 )
      goto LABEL_17;
  }
  v7 = -1;
  v18 = snprintf(s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
  V_LOCK(v18);
  v19 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v19);
  v20 = g_zc;
  v21 = 525;
LABEL_16:
  zlog(
    v20,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/device/hal/platform/zynqmp/zynqmp_i2c.c",
    168,
    "i2c_read_reg",
    12,
    v21,
    100,
    var1004);
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_16D6D8);
  return v7;
}
