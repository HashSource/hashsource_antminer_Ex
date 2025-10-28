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
  int v16; // r0
  int v17; // r0
  int v18; // r2
  const char *v19; // r7
  int *v20; // r0
  int v21; // r8
  char *v22; // r0
  int v23; // r0
  int v24; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r2
  int v31; // r0
  int v32; // r0
  int v33; // [sp+14h] [bp-180Ch] BYREF
  int v34; // [sp+18h] [bp-1808h] BYREF
  void *ptr; // [sp+1Ch] [bp-1804h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v37[4096]; // [sp+820h] [bp-1000h] BYREF

  v33 = a1;
  v7 = pthread_mutex_lock(&stru_18E280);
  if ( v7 )
  {
    v15 = -1;
    strcpy(s, "failed to get i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v26 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      495,
      100,
      v37);
    return v15;
  }
  if ( !find_c_map((_DWORD *)dword_18E29C, (int)&v33, (int)&ptr) )
  {
    v15 = -2;
    strcpy(s, "find i2c_read_reg node failed");
    V_LOCK(*(_DWORD *)"g node failed");
    v27 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      501,
      100,
      v37);
    pthread_mutex_unlock(&stru_18E280);
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
            v19 = (const char *)ptr;
            v15 = v7;
            v20 = _errno_location();
            v21 = *((_DWORD *)v19 + 1);
            v22 = strerror(*v20);
            v23 = snprintf(
                    s,
                    0x800u,
                    "i2c_read_reg %s 0x%02x read byte %d failed in %d size, error: %s",
                    v19 + 16,
                    v21,
                    v7,
                    a5,
                    v22);
            V_LOCK(v23);
            v24 = logfmt_raw((int)v37, 0x1000u);
            V_UNLOCK(v24);
            v18 = 558;
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
    v31 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v31);
    v32 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v32);
    v30 = 546;
LABEL_24:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      v30,
      100,
      v37);
    free(ptr);
    pthread_mutex_unlock(&stru_18E280);
    return v15;
  }
  if ( !sub_BB52C() )
  {
    v15 = -1;
    v28 = snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v28);
    v29 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v29);
    v30 = 515;
    goto LABEL_24;
  }
  fpga_read(48, &v34);
  if ( a5 )
  {
    v10 = a2 - 1;
    while ( 1 )
    {
      v11 = *(_BYTE *)++v10;
      v12 = *(_DWORD *)ptr;
      BYTE1(v34) = v11;
      HIBYTE(v34) = HIBYTE(v34) & 0xE3 | (4 * (v12 & 7));
      v13 = *((_DWORD *)ptr + 1);
      HIBYTE(v34) |= 3u;
      BYTE2(v34) = (16 * ((v13 >> 4) & 0xF)) | (v13 >> 1) & 7;
      fpga_write(48, v34);
      v14 = (_BYTE *)(a4 + v9++);
      if ( !sub_BB578(v14) )
        break;
      if ( a5 == v9 )
        goto LABEL_19;
    }
    v15 = -1;
    v16 = snprintf(s, 0x800u, "i2c %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v16);
    v17 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v17);
    v18 = 535;
LABEL_16:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read_reg",
      12,
      v18,
      100,
      v37);
    goto LABEL_17;
  }
LABEL_20:
  v15 = 0;
LABEL_17:
  free(ptr);
  pthread_mutex_unlock(&stru_18E280);
  return v15;
}
