char *__fastcall stratum_recv_line(int a1)
{
  pthread_mutex_t *v1; // r7
  char *v3; // r10
  signed int v4; // r5
  char *v5; // r0
  char *v6; // r6
  size_t v7; // r0
  _BYTE *v8; // r3
  int v9; // r0
  ssize_t v11; // r10
  int *v12; // r11
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  time_t v23; // [sp+2Ch] [bp-5028h] BYREF
  int v24; // [sp+30h] [bp-5024h] BYREF
  _BYTE v25[4080]; // [sp+50h] [bp-5004h] BYREF
  char v26[16388]; // [sp+1050h] [bp-4004h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  v3 = *(char **)(a1 + 40);
  if ( !strchr(v3, 10) && *(_DWORD *)(a1 + 32) != -1 )
  {
    time(&v23);
    while ( 1 )
    {
      memset(v26, 0, 0x4000u);
      v11 = recv(*(_DWORD *)(a1 + 32), v26, 0x3FFCu, 0);
      if ( !v11 )
      {
        V_LOCK(a1);
        v19 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v19);
        v16 = g_zc;
        v17 = 53;
        goto LABEL_20;
      }
      if ( v11 < 0 )
      {
        V_LOCK(a1);
        v12 = _errno_location();
        v13 = logfmt_raw((int)v25, 0x1000u);
        V_UNLOCK(v13);
        v14 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/stratum_handler.c",
                138,
                "stratum_recv_line",
                17,
                58,
                20,
                v25);
        if ( *v12 != 11 || (v14 = socket_full(*(_DWORD *)(a1 + 32), 1)) == 0 )
        {
          V_LOCK(v14);
          v15 = logfmt_raw((int)v25, 0x1000u);
          V_UNLOCK(v15);
          v16 = g_zc;
          v17 = 60;
LABEL_20:
          v20 = zlog(
                  v16,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/stratum_handler.c",
                  138,
                  "stratum_recv_line",
                  17,
                  v17,
                  20,
                  v25);
          V_LOCK(v20);
          V_INT((int)&v24, "poolno");
          v21 = logfmt_raw((int)v26, 0x1000u);
          V_UNLOCK(v21);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/stratum_handler.c",
            138,
            "stratum_recv_line",
            17,
            69,
            20,
            v26);
          goto LABEL_21;
        }
      }
      else
      {
        stratum_buffer_append(a1, v26);
      }
      if ( time(0) - v23 > 59 )
        break;
      v3 = *(char **)(a1 + 40);
      if ( strchr(v3, 10) )
        goto LABEL_2;
    }
    v3 = *(char **)(a1 + 40);
  }
LABEL_2:
  v4 = strlen(v3);
  v5 = strtok(v3, "\n");
  if ( v5 )
  {
    v6 = _strdup(v5);
    v7 = strlen(v6);
    v8 = *(_BYTE **)(a1 + 40);
    if ( (int)(v7 + 1) < v4 )
      memmove(*(void **)(a1 + 40), &v8[v7 + 1], v4 - v7 + 1);
    else
      *v8 = 0;
    v9 = pthread_mutex_unlock(v1);
    if ( opt_protocol )
    {
      V_LOCK(v9);
      V_INT((int)v25, "poolno");
      v18 = logfmt_raw((int)v26, 0x1000u);
      V_UNLOCK(v18);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/stratum_handler.c",
        138,
        "stratum_recv_line",
        17,
        91,
        60,
        v26);
    }
    return v6;
  }
  else
  {
    V_LOCK(0);
    v22 = logfmt_raw((int)v26, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/stratum_handler.c",
      138,
      "stratum_recv_line",
      17,
      77,
      100,
      v26);
LABEL_21:
    pthread_mutex_unlock(v1);
    return 0;
  }
}
