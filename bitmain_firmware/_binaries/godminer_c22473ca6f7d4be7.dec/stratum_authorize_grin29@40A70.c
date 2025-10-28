int __fastcall stratum_authorize_grin29(int a1, int a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r0
  int v9; // r12
  const char *v10; // r1
  char *v11; // r7
  int v12; // r8
  size_t v13; // r6
  size_t v14; // r0
  const void *v15; // r1
  void *v16; // r6
  char *v18; // r0
  const char *v19; // r1
  double *v20; // r9
  char *v21; // r1
  int v22; // r0
  char *v23; // r1
  _DWORD *v24; // r6
  int v25; // r0
  char *v26; // r1
  _DWORD *v27; // r10
  int v28; // r0
  unsigned int *v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // r2
  int v32; // r3
  _DWORD *v33; // r3
  int v34; // r1
  char *v35; // r1
  _DWORD *v36; // r6
  const void *v37; // r1
  int v38; // r6
  int v39; // r10
  int v40; // r0
  void *v41; // r6
  double *v42; // r0
  double *v43; // r8
  int v44; // r0
  int v45; // r3
  _DWORD *v46; // r3
  int v47; // r1
  unsigned int *v48; // r3
  unsigned int v49; // r2
  unsigned int v50; // r2
  int v51; // r3
  _DWORD *v52; // r3
  int v53; // r1
  int v54; // r3
  _DWORD *v55; // r3
  int v56; // r1
  int v57; // r3
  _DWORD *v58; // r3
  int v59; // r1
  _DWORD v60[23]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v61[160]; // [sp+70h] [bp-10A0h] BYREF
  char v62[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = v6 + strlen(v5);
  if ( *(_BYTE *)(a2 + 1816) )
  {
    v8 = (char *)malloc(v7 + 300);
    LOWORD(v9) = 12008;
    LOWORD(v10) = 11900;
    HIWORD(v9) = (unsigned int)" to merkle_bin in parse_notify" >> 16;
    HIWORD(v10) = (unsigned int)"nd_dash/frontend_dash.c" >> 16;
    v11 = v8;
    sprintf(v8, v10, v2, v5, v9);
  }
  else
  {
    v18 = (char *)malloc(v7 + 80);
    LOWORD(v19) = 12024;
    HIWORD(v19) = (unsigned int)"n parse_notify" >> 16;
    v11 = v18;
    sprintf(v18, v19, v2, v5);
  }
  v12 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( !v12 )
  {
LABEL_11:
    free(v11);
    return v12;
  }
  if ( *(_BYTE *)(a2 + 1816) )
  {
    v13 = strlen(*(const char **)(a2 + 12));
    v14 = strlen(*(const char **)(a2 + 16));
    memset(v11, 0, v13 + v14 + 300);
    LOWORD(v15) = 12088;
    HIWORD(v15) = (unsigned int)"00000000000000000000000000000000" >> 16;
    memcpy(v11, v15, 0x4Au);
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11) )
    {
      v12 = 0;
      free(v11);
      return v12;
    }
  }
  while ( 1 )
  {
    v16 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(a2);
    if ( !v16 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v16);
  }
  v20 = json_loads((int)v16, 0, (char *)v60);
  free(v16);
  if ( !v20 )
  {
    v12 = 0;
    V_LOCK();
    LOWORD(v32) = 7656;
    HIWORD(v32) = (unsigned int)" passed to valid_ascii" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v32, v60[0], v61);
    V_UNLOCK();
    LOWORD(v33) = -14512;
    HIWORD(v33) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v34) = 11324;
    HIWORD(v34) = (unsigned int)"tranonce_ckb" >> 16;
    zlog(*v33, v34, 163, "stratum_authorize_grin29", 24, 875, 100, v62);
    free(v11);
    return v12;
  }
  LOWORD(v21) = 7692;
  HIWORD(v21) = (unsigned int)"ECT" >> 16;
  v22 = json_object_get(v20, v21);
  LOWORD(v23) = -22980;
  v24 = (_DWORD *)v22;
  HIWORD(v23) = (unsigned int)&unk_13996C >> 16;
  v25 = json_object_get(v20, v23);
  LOWORD(v26) = 11724;
  v27 = (_DWORD *)v25;
  HIWORD(v26) = (unsigned int)"e_extranonce_dash" >> 16;
  v28 = json_object_get(v20, v26);
  if ( (unsigned int)json_integer_value(v28) == 2 && (!v24 || *v24 == 6 || v27 && *v27 != 7) )
  {
    V_LOCK();
    LOWORD(v51) = 12164;
    HIWORD(v51) = (unsigned int)"n parse_notify" >> 16;
    logfmt_raw(v62, 0x1000u, 0, v51);
    V_UNLOCK();
    LOWORD(v52) = -14512;
    HIWORD(v52) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v53) = 11324;
    HIWORD(v53) = (unsigned int)"tranonce_ckb" >> 16;
    v12 = 0;
    zlog(*v52, v53, 163, "stratum_authorize_grin29", 24, 885, 100, v62);
    goto LABEL_20;
  }
  if ( *(_BYTE *)(a2 + 1816) )
  {
    if ( !rpc2_login_decode(v20, a2) )
    {
      v12 = 0;
      goto LABEL_20;
    }
    LOWORD(v35) = 12196;
    HIWORD(v35) = (unsigned int)"t cb1 to cb1_bin in parse_notify" >> 16;
    v36 = (_DWORD *)json_object_get(v24, v35);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1752));
    if ( v36 )
      rpc2_job_decode(v36, a2);
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1752));
  }
  LOWORD(v37) = 12200;
  HIWORD(v37) = (unsigned int)"1 to cb1_bin in parse_notify" >> 16;
  memcpy(v11, v37, 0x41u);
  v38 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v11);
  if ( v38 )
  {
    v39 = socket_full(*(_DWORD *)(a2 + 32), 3);
    if ( v39 )
    {
      v40 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v41 = (void *)v40;
      if ( v40 )
      {
        v42 = json_loads(v40, 0, (char *)v60);
        v43 = v42;
        if ( v42 )
        {
          v44 = json_object_get(v42, "id");
          if ( json_integer_value(v44) != 3 && !(*(int (__fastcall **)(int, int, void *))(a1 + 24))(a1, a2, v41) )
          {
            V_LOCK();
            LOWORD(v45) = 12308;
            HIWORD(v45) = (unsigned int)"inbase in parse_notify" >> 16;
            logfmt_raw(v62, 0x1000u, 0, v45);
            V_UNLOCK();
            LOWORD(v46) = -14512;
            HIWORD(v46) = (unsigned int)&unk_16B55C >> 16;
            LOWORD(v47) = 11324;
            HIWORD(v47) = (unsigned int)"tranonce_ckb" >> 16;
            zlog(*v46, v47, 163, "stratum_authorize_grin29", 24, 921, 80, v62);
          }
          if ( *((_DWORD *)v43 + 1) != -1 )
          {
            v48 = (unsigned int *)v43 + 1;
            __dmb(0xBu);
            do
            {
              v49 = __ldrex(v48);
              v50 = v49 - 1;
            }
            while ( __strex(v50, v48) );
            if ( !v50 )
              json_delete(v43);
          }
        }
        else
        {
          V_LOCK();
          LOWORD(v54) = 7656;
          HIWORD(v54) = (unsigned int)" passed to valid_ascii" >> 16;
          logfmt_raw(v62, 0x1000u, 0, v54, v60[0], v61);
          V_UNLOCK();
          LOWORD(v55) = -14512;
          HIWORD(v55) = (unsigned int)&unk_16B55C >> 16;
          LOWORD(v56) = 11324;
          HIWORD(v56) = (unsigned int)"tranonce_ckb" >> 16;
          zlog(*v55, v56, 163, "stratum_authorize_grin29", 24, 916, 80, v62);
        }
        v12 = v39;
        free(v41);
      }
    }
    else
    {
      V_LOCK();
      LOWORD(v57) = 12268;
      HIWORD(v57) = (unsigned int)"parse_notify" >> 16;
      logfmt_raw(v62, 0x1000u, 0, v57);
      V_UNLOCK();
      LOWORD(v58) = -14512;
      HIWORD(v58) = (unsigned int)&unk_16B55C >> 16;
      LOWORD(v59) = 11324;
      HIWORD(v59) = (unsigned int)"tranonce_ckb" >> 16;
      v12 = v38;
      zlog(*v58, v59, 163, "stratum_authorize_grin29", 24, 908, 20, v62);
    }
  }
LABEL_20:
  free(v11);
  if ( *((_DWORD *)v20 + 1) == -1 )
    return v12;
  v29 = (unsigned int *)v20 + 1;
  __dmb(0xBu);
  do
  {
    v30 = __ldrex(v29);
    v31 = v30 - 1;
  }
  while ( __strex(v31, v29) );
  if ( v31 )
    return v12;
  json_delete(v20);
  return v12;
}
