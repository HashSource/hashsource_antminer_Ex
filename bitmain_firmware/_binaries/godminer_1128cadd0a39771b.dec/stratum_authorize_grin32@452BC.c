int __fastcall stratum_authorize_grin32(int a1, int a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r7
  int v9; // r8
  size_t v10; // r6
  size_t v11; // r0
  void *v12; // r6
  _DWORD *v14; // r9
  int v15; // r0
  _DWORD *v16; // r6
  _DWORD *v17; // r10
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r10
  _BYTE *v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  int v28; // r0
  _DWORD *v29; // r0
  int *v30; // r0
  int *v31; // r1
  int v32; // r3
  int *v33; // r2
  int v34; // r11
  int v35; // lr
  int v36; // r12
  int v37; // r0
  int v38; // r0
  _DWORD *v39; // r6
  int v40; // r6
  int v41; // r10
  int v42; // r0
  void *v43; // r6
  _DWORD *v44; // r0
  _DWORD *v45; // r8
  int v46; // r0
  int v47; // r0
  unsigned int *v48; // r3
  unsigned int v49; // r2
  unsigned int v50; // r2
  int v51; // r0
  int v52; // r0
  int v53; // r2
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  _DWORD *v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  char v63[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v64[4100]; // [sp+110h] [bp-1004h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = v6 + strlen(v5);
  if ( *(_BYTE *)(a2 + 1824) )
  {
    v8 = (char *)malloc(v7 + 300);
    sprintf(
      v8,
      "{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"login\", \"params\": {\"login\": \"%s\", \"pass\": \"%s\", \"a"
      "gent\": \"%s\"}}",
      v2,
      v5,
      "GodMiner/1.0.0");
  }
  else
  {
    v8 = (char *)malloc(v7 + 80);
    sprintf(v8, "{\"id\": 2, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}", v2, v5);
  }
  v9 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( !v9 )
  {
LABEL_11:
    free(v8);
    return v9;
  }
  if ( *(_BYTE *)(a2 + 1824) )
  {
    v10 = strlen(*(const char **)(a2 + 12));
    v11 = strlen(*(const char **)(a2 + 16));
    memset(v8, 0, v10 + v11 + 300);
    strcpy(v8, "{\"id\": \"0\", \"jsonrpc\": \"2.0\", \"method\": \"getjobtemplate\", \"params\": null}");
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8) )
    {
      v9 = 0;
      free(v8);
      return v9;
    }
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v12 )
    {
      v9 = 0;
      goto LABEL_11;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v12);
  }
  v14 = (_DWORD *)json_loads((int)v12, 0, v63);
  free(v12);
  if ( !v14 )
  {
    v9 = 0;
    V_LOCK(v15);
    v28 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_authorize_grin32",
      24,
      868,
      100,
      v64);
    free(v8);
    return v9;
  }
  v16 = (_DWORD *)json_object_get(v14, "result");
  v17 = (_DWORD *)json_object_get(v14, "error");
  v18 = json_object_get(v14, "id");
  if ( (unsigned int)json_integer_value(v18) == 2 && (!v16 || *v16 == 6 || v17 && *v17 != 7) )
  {
    V_LOCK(2);
    v54 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v54);
    v9 = 0;
    v55 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin32/frontend_grin32.c",
            163,
            "stratum_authorize_grin32",
            24,
            878,
            100,
            v64);
    V_LOCK(v55);
    v56 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v56);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin32/frontend_grin32.c",
      163,
      "stratum_authorize_grin32",
      24,
      879,
      100,
      v64);
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a2 + 1824) )
    goto LABEL_37;
  v19 = (_DWORD *)json_object_get(v14, "result");
  v20 = v19;
  if ( !v19 )
  {
    V_LOCK(0);
    v51 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v51);
    v52 = g_zc;
    v53 = 89;
LABEL_51:
    v23 = zlog(
            v52,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin32/frontend_grin32.c",
            163,
            "rpc2_login_decode",
            17,
            v53,
            100,
            v64);
    goto LABEL_21;
  }
  v21 = json_string_value(v19);
  if ( v21 )
  {
    if ( *v21 != 111 || v21[1] != 107 || v21[2] )
    {
      V_LOCK(v21);
      v22 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v22);
      v23 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_grin32/frontend_grin32.c",
              163,
              "rpc2_login_decode",
              17,
              100,
              100,
              v64);
LABEL_21:
      v9 = 0;
      V_LOCK(v23);
      v24 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin32/frontend_grin32.c",
        163,
        "rpc2_login_decode",
        17,
        141,
        80,
        v64);
      goto LABEL_22;
    }
  }
  else
  {
    v58 = json_true();
    if ( v20 != v58 )
    {
      V_LOCK(v58);
      v59 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v59);
      v52 = g_zc;
      v53 = 95;
      goto LABEL_51;
    }
  }
  v29 = (_DWORD *)json_object_get(v14, "id");
  if ( !v29 )
  {
    V_LOCK(0);
    v57 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v57);
    v52 = g_zc;
    v53 = 108;
    goto LABEL_51;
  }
  v30 = json_string_value(v29);
  if ( !v30 )
  {
    V_LOCK(0);
    v60 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v60);
    v52 = g_zc;
    v53 = 113;
    goto LABEL_51;
  }
  v31 = v30;
  v32 = a2 + 1852;
  v33 = v30 + 16;
  do
  {
    v34 = *v31;
    v31 += 4;
    v35 = *(v31 - 3);
    v32 += 16;
    v36 = *(v31 - 2);
    v37 = *(v31 - 1);
    *(_DWORD *)(v32 - 16) = v34;
    *(_DWORD *)(v32 - 12) = v35;
    *(_DWORD *)(v32 - 8) = v36;
    *(_DWORD *)(v32 - 4) = v37;
  }
  while ( v31 != v33 );
  V_LOCK(v37);
  v38 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v38);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_grin32/frontend_grin32.c",
    163,
    "rpc2_login_decode",
    17,
    119,
    20,
    v64);
  v39 = (_DWORD *)json_object_get(v16, "job");
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
  if ( v39 )
    sub_4313C(v39, a2);
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
LABEL_37:
  strcpy(v8, "{\"id\": 3, \"method\": \"mining.extranonce.subscribe\", \"params\": []}");
  v40 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( v40 )
  {
    v41 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v41 )
    {
      v42 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v43 = (void *)v42;
      if ( v42 )
      {
        v44 = (_DWORD *)json_loads(v42, 0, v63);
        v45 = v44;
        if ( v44 )
        {
          v46 = json_object_get(v44, "id");
          if ( json_integer_value(v46) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v43) )
          {
            V_LOCK(0);
            v47 = logfmt_raw((int)v64, 0x1000u);
            V_UNLOCK(v47);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_grin32/frontend_grin32.c",
              163,
              "stratum_authorize_grin32",
              24,
              916,
              80,
              v64);
          }
          if ( v45[1] != -1 )
          {
            v48 = v45 + 1;
            __dmb(0xBu);
            do
            {
              v49 = __ldrex(v48);
              v50 = v49 - 1;
            }
            while ( __strex(v50, v48) );
            if ( !v50 )
              json_delete(v45);
          }
        }
        else
        {
          V_LOCK(0);
          v61 = logfmt_raw((int)v64, 0x1000u);
          V_UNLOCK(v61);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin32/frontend_grin32.c",
            163,
            "stratum_authorize_grin32",
            24,
            911,
            80,
            v64);
        }
        v9 = v41;
        free(v43);
      }
    }
    else
    {
      V_LOCK(0);
      v62 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v62);
      v9 = v40;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin32/frontend_grin32.c",
        163,
        "stratum_authorize_grin32",
        24,
        903,
        20,
        v64);
    }
  }
LABEL_22:
  free(v8);
  if ( v14[1] == -1 )
    return v9;
  v25 = v14 + 1;
  __dmb(0xBu);
  do
  {
    v26 = __ldrex(v25);
    v27 = v26 - 1;
  }
  while ( __strex(v27, v25) );
  if ( v27 )
    return v9;
  json_delete(v14);
  return v9;
}
