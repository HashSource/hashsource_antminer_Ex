int __fastcall i2c_read(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD *v6; // r8
  int v7; // r9
  unsigned int v8; // r2
  _BYTE *v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r2
  const char *v14; // r7
  int *v15; // r0
  int v16; // r8
  char *v17; // r0
  int v18; // r0
  int v19; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r2
  int v27; // r0
  int v28; // r0
  int v29; // [sp+14h] [bp-1810h] BYREF
  int v30; // [sp+18h] [bp-180Ch] BYREF
  void *ptr; // [sp+1Ch] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v33[4100]; // [sp+820h] [bp-1004h] BYREF

  v29 = a1;
  v5 = pthread_mutex_lock(&stru_18E280);
  if ( v5 )
  {
    v10 = -4;
    strcpy(s, "failed get to i2c lock");
    V_LOCK(*(_DWORD *)"c lock");
    v21 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v21);
    v22 = 323;
LABEL_23:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read",
      8,
      v22,
      100,
      v33);
    return v10;
  }
  if ( !find_c_map((_DWORD *)dword_18E29C, (int)&v29, (int)&ptr) )
  {
    v10 = -2;
    pthread_mutex_unlock(&stru_18E280);
    strcpy(s, "find i2c_read node failed");
    V_LOCK(*(_DWORD *)"de failed");
    v23 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v23);
    v22 = 330;
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
        v14 = (const char *)ptr;
        v10 = v5;
        v15 = _errno_location();
        v16 = *((_DWORD *)v14 + 1);
        v17 = strerror(*v15);
        v18 = snprintf(
                s,
                0x800u,
                "i2c_read: %s 0x%02x read byte %d failed in %d size, error: %s",
                v14 + 16,
                v16,
                v5,
                a3,
                v17);
        V_LOCK(v18);
        v19 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v19);
        v13 = 384;
LABEL_16:
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
          174,
          "i2c_read",
          8,
          v13,
          100,
          v33);
        goto LABEL_17;
      }
      goto LABEL_21;
    }
    v10 = -1;
    v27 = snprintf(s, 0x800u, "i2c %s 0x%02x get ioctl failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v27);
    v28 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v28);
    v26 = 373;
LABEL_26:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_i2c.c",
      174,
      "i2c_read",
      8,
      v26,
      100,
      v33);
    free(ptr);
    pthread_mutex_unlock(&stru_18E280);
    return v10;
  }
  if ( !sub_BB53C() )
  {
    v10 = -1;
    v24 = snprintf(s, 0x800u, "i2c %s 0x%02x not ready for read", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
    V_LOCK(v24);
    v25 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v25);
    v26 = 343;
    goto LABEL_26;
  }
  fpga_read(48, &v30);
  if ( a3 )
  {
    do
    {
      HIBYTE(v30) = HIBYTE(v30) & 0xE3 | (4 * (*(_BYTE *)ptr & 7));
      v8 = *((_DWORD *)ptr + 1);
      HIBYTE(v30) |= 3u;
      BYTE2(v30) = (16 * ((v8 >> 4) & 0xF)) | (v8 >> 1) & 7;
      fpga_write(48, v30);
      v9 = (_BYTE *)(a2 + v7++);
      if ( !sub_BB588(v9) )
      {
        v10 = -1;
        v11 = snprintf(s, 0x800u, "i2c_read: %s 0x%02x read failed", (const char *)ptr + 16, *((_DWORD *)ptr + 1));
        V_LOCK(v11);
        v12 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v12);
        v13 = 362;
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
  pthread_mutex_unlock(&stru_18E280);
  return v10;
}
