int __fastcall stratum_notify_ae(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r8
  _DWORD *v7; // r0
  char *v8; // r6
  _DWORD *v9; // r0
  int v10; // r10
  _DWORD *v11; // r0
  char *v12; // r7
  _DWORD *v13; // r0
  bool v14; // r5
  _BOOL4 v15; // r3
  int v16; // r4
  int v17; // r0
  void *v19; // r0
  char *v20; // r6
  __int64 v21; // r2
  size_t v22; // r0
  int v23; // r12
  int v24; // r1
  int v25; // r2
  int v26; // r1
  int v27; // lr
  int v28; // r12
  int v29; // r2
  int v30; // r1
  int v31; // r0
  int v32; // r0
  _BYTE v33[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = json_integer_value((int)v9);
  v11 = json_array_get(a3, 3u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 4u);
  v14 = (char)v13;
  if ( v13 )
  {
    v13 = json_array_get(a3, 4u);
    v14 = *v13 == 5;
  }
  v15 = v8 == 0;
  if ( !v6 )
    v15 = 1;
  if ( v12 )
    v16 = v15;
  else
    v16 = 1;
  if ( v16 || (v13 = (_DWORD *)strlen(v8), v13 != (_DWORD *)64) || (v13 = (_DWORD *)strlen(v12), v13 != (_DWORD *)8) )
  {
    V_LOCK(v13);
    v17 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      137,
      100,
      v33);
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 440));
  v19 = (void *)a2[22];
  if ( v19 )
  {
    free(v19);
    a2[22] = 0;
  }
  a2[22] = (int)_strdup(v6);
  hex2bin((int)(a2 + 23), (unsigned __int8 *)v8, 32);
  a2[453] = v10;
  hex2bin((int)(a2 + 84), (unsigned __int8 *)v12, 4);
  v20 = (char *)a2[400];
  v21 = *((_QWORD *)a2 + 247);
  *((_BYTE *)a2 + 436) = v14;
  *((_QWORD *)a2 + 55) = v21;
  if ( !v20 )
  {
    v22 = strlen(v6);
    if ( v22 <= 0x1F )
      goto LABEL_18;
    goto LABEL_20;
  }
  if ( !strcmp(v20, v6) )
  {
    V_LOCK(0);
    v32 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      152,
      20,
      v33);
    v22 = strlen(v6);
    if ( v22 <= 0x1F )
    {
LABEL_21:
      v20 = (char *)a2[400];
      if ( !v20 )
        goto LABEL_18;
      goto LABEL_17;
    }
LABEL_20:
    V_LOCK(v22);
    strlen(v6);
    v31 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_ae/frontend_ae.c",
      155,
      "stratum_notify_ae",
      17,
      155,
      100,
      v33);
    goto LABEL_21;
  }
  v22 = strlen(v6);
  if ( v22 > 0x1F )
    goto LABEL_20;
LABEL_17:
  free(v20);
  a2[400] = 0;
LABEL_18:
  a2[400] = (int)_strdup(v6);
  v23 = a2[24];
  v24 = a2[25];
  v25 = a2[26];
  a2[114] = a2[23];
  a2[115] = v23;
  a2[116] = v24;
  a2[117] = v25;
  v26 = a2[29];
  v27 = a2[27];
  v28 = a2[28];
  a2[121] = a2[30];
  v29 = *a2;
  a2[120] = v26;
  v30 = a2[453];
  a2[118] = v27;
  a2[119] = v28;
  a2[399] = v30;
  *((_QWORD *)a2 + 56) = v29;
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 440));
  return 1;
}
