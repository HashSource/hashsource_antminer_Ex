int __fastcall stratum_authorize_grin29(int a1, int a2)
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
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v22; // r0
  _DWORD *v23; // r10
  int v24; // r6
  int v25; // r10
  int v26; // r0
  void *v27; // r6
  _DWORD *v28; // r0
  _DWORD *v29; // r8
  int v30; // r0
  int v31; // r0
  unsigned int *v32; // r3
  unsigned int v33; // r2
  unsigned int v34; // r2
  int v35; // r0
  int v36; // r0
  int v37; // r0
  char v38[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v39[4096]; // [sp+110h] [bp-1000h] BYREF

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
  v14 = (_DWORD *)json_loads((int)v12, 0, v38);
  free(v12);
  if ( !v14 )
  {
    v9 = 0;
    V_LOCK(v15);
    v22 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v22);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "stratum_authorize_grin29",
      24,
      875,
      100,
      v39);
    free(v8);
    return v9;
  }
  v16 = (_DWORD *)json_object_get(v14, "result");
  v17 = (_DWORD *)json_object_get(v14, "error");
  v18 = json_object_get(v14, "id");
  if ( (unsigned int)json_integer_value(v18) == 2 && (!v16 || *v16 == 6 || v17 && *v17 != 7) )
  {
    V_LOCK(2);
    v35 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v35);
    v9 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "stratum_authorize_grin29",
      24,
      885,
      100,
      v39);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a2 + 1824) )
  {
    if ( !rpc2_login_decode(v14, a2) )
    {
      v9 = 0;
      goto LABEL_20;
    }
    v23 = (_DWORD *)json_object_get(v16, "job");
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1760));
    if ( v23 )
      rpc2_job_decode(v23, a2);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1760));
  }
  strcpy(v8, "{\"id\": 3, \"method\": \"mining.extranonce.subscribe\", \"params\": []}");
  v24 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v8);
  if ( v24 )
  {
    v25 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v25 )
    {
      v26 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v27 = (void *)v26;
      if ( v26 )
      {
        v28 = (_DWORD *)json_loads(v26, 0, v38);
        v29 = v28;
        if ( v28 )
        {
          v30 = json_object_get(v28, "id");
          if ( json_integer_value(v30) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v27) )
          {
            V_LOCK(0);
            v31 = logfmt_raw((int)v39, 0x1000u);
            V_UNLOCK(v31);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/frontend/frontend_grin29/frontend_grin29.c",
              163,
              "stratum_authorize_grin29",
              24,
              921,
              80,
              v39);
          }
          if ( v29[1] != -1 )
          {
            v32 = v29 + 1;
            __dmb(0xBu);
            do
            {
              v33 = __ldrex(v32);
              v34 = v33 - 1;
            }
            while ( __strex(v34, v32) );
            if ( !v34 )
              json_delete(v29);
          }
        }
        else
        {
          V_LOCK(0);
          v36 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v36);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_grin29/frontend_grin29.c",
            163,
            "stratum_authorize_grin29",
            24,
            916,
            80,
            v39);
        }
        v9 = v25;
        free(v27);
      }
    }
    else
    {
      V_LOCK(0);
      v37 = logfmt_raw((int)v39, 0x1000u);
      V_UNLOCK(v37);
      v9 = v24;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_grin29/frontend_grin29.c",
        163,
        "stratum_authorize_grin29",
        24,
        908,
        20,
        v39);
    }
  }
LABEL_20:
  free(v8);
  if ( v14[1] == -1 )
    return v9;
  v19 = v14 + 1;
  __dmb(0xBu);
  do
  {
    v20 = __ldrex(v19);
    v21 = v20 - 1;
  }
  while ( __strex(v21, v19) );
  if ( v21 )
    return v9;
  json_delete(v14);
  return v9;
}
