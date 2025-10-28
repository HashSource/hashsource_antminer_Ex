char *__fastcall stratum_recv_line(int *a1)
{
  pthread_mutex_t *v1; // r7
  char *v3; // r10
  size_t v4; // r0
  const char *v5; // r1
  signed int v6; // r5
  char *v7; // r0
  char *v8; // r6
  size_t v9; // r0
  _BYTE *v10; // r3
  int *v12; // r8
  ssize_t v13; // r10
  int *v14; // r11
  int *v15; // r10
  int v16; // r0
  int v17; // r2
  char *v18; // r1
  _DWORD *v19; // r3
  int *v20; // r12
  int *v21; // r8
  char *v22; // r1
  _DWORD *v23; // r3
  ssize_t v24; // [sp+0h] [bp-5054h]
  time_t v25; // [sp+2Ch] [bp-5028h] BYREF
  _DWORD v26[7]; // [sp+30h] [bp-5024h] BYREF
  int v27; // [sp+4Ch] [bp-5008h]
  _DWORD v28[7]; // [sp+50h] [bp-5004h] BYREF
  int v29; // [sp+6Ch] [bp-4FE8h]
  char v30[16388]; // [sp+1050h] [bp-4004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 11);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 11));
  v3 = (char *)a1[10];
  if ( !strchr(v3, 10) && a1[8] != -1 )
  {
    LOWORD(v12) = -14512;
    HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
    time(&v25);
    while ( 1 )
    {
      memset(v30, 0, 0x4000u);
      v13 = recv(a1[8], v30, 0x3FFCu, 0);
      if ( !v13 )
      {
        V_LOCK();
        LOWORD(v20) = -14512;
        HIWORD(v20) = (unsigned int)&unk_16B55C >> 16;
        v21 = v20;
        v15 = v20;
        logfmt_raw((char *)v28, 0x1000u, 0, 1246336);
        V_UNLOCK();
        v16 = *v21;
        v17 = 53;
        goto LABEL_20;
      }
      if ( v13 < 0 )
      {
        V_LOCK();
        v14 = _errno_location();
        v24 = v13;
        v15 = v12;
        logfmt_raw((char *)v28, 0x1000u, 0, 1246368, v24, *v14);
        V_UNLOCK();
        zlog(
          *v12,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/stratum_handler.c",
          138,
          "stratum_recv_line",
          17,
          58,
          20,
          v28);
        if ( *v14 != 11 || !socket_full(a1[8], 1) )
        {
          V_LOCK();
          logfmt_raw((char *)v28, 0x1000u, 0, 1246412, *v14);
          V_UNLOCK();
          v16 = *v12;
          v17 = 60;
LABEL_20:
          zlog(
            v16,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_recv_line",
            17,
            v17,
            20,
            v28);
          V_LOCK();
          LOWORD(v22) = -3560;
          HIWORD(v22) = (unsigned int)"DEVS" >> 16;
          V_INT((int)v26, v22, *a1);
          logfmt_raw(
            v30,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "stratum_recv_line failed");
          V_UNLOCK();
          zlog(
            *v15,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_recv_line",
            17,
            69,
            20,
            v30);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append((int)a1, v30);
      }
      if ( time(0) - v25 > 59 )
        break;
      v3 = (char *)a1[10];
      if ( strchr(v3, 10) )
        goto LABEL_2;
    }
    v3 = (char *)a1[10];
  }
LABEL_2:
  v4 = strlen(v3);
  LOWORD(v5) = 10712;
  v6 = v4;
  HIWORD(v5) = (unsigned int)"result" >> 16;
  v7 = strtok(v3, v5);
  if ( v7 )
  {
    v8 = _strdup(v7);
    v9 = strlen(v8);
    v10 = (_BYTE *)a1[10];
    if ( (int)(v9 + 1) < v6 )
      memmove((void *)a1[10], &v10[v9 + 1], v6 - v9 + 1);
    else
      *v10 = 0;
    pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK();
      LOWORD(v18) = -3560;
      HIWORD(v18) = (unsigned int)"DEVS" >> 16;
      V_INT((int)v28, v18, *a1);
      logfmt_raw(v30, 0x1000u, 0, v29, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6], v29, 1246552, v8);
      V_UNLOCK();
      LOWORD(v19) = -14512;
      HIWORD(v19) = (unsigned int)&unk_16B55C >> 16;
      zlog(
        *v19,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/stratum_handler.c",
        138,
        "stratum_recv_line",
        17,
        91,
        60,
        v30);
    }
    return v8;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, 1246488);
    V_UNLOCK();
    LOWORD(v23) = -14512;
    HIWORD(v23) = (unsigned int)&unk_16B55C >> 16;
    zlog(
      *v23,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_recv_line",
      17,
      77,
      100,
      v30);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
