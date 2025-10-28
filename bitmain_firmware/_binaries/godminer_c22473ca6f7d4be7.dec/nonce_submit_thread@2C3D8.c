void __noreturn nonce_submit_thread()
{
  _DWORD *v0; // r9
  int v1; // r11
  int *all_created_runtime; // r7
  char *v3; // r0
  const char *v4; // r2
  char *v5; // r4
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r3
  _DWORD *v9; // r6
  int *v10; // r8
  int v11; // r1
  _DWORD *v12; // r10
  pthread_t v13; // r0
  int v14; // r7
  double *v15; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r4
  const char *v19; // r0
  double v20; // d7
  double v21; // d5
  int v22; // r2
  bool v23; // cf
  double v24; // d7
  int v25; // r1
  const void *src; // [sp+10h] [bp-1944h]
  int srca; // [sp+10h] [bp-1944h]
  size_t n; // [sp+1Ch] [bp-1938h]
  _DWORD *v29; // [sp+20h] [bp-1934h]
  int v30; // [sp+24h] [bp-1930h]
  int v31; // [sp+28h] [bp-192Ch]
  double *v32; // [sp+2Ch] [bp-1928h]
  int v33; // [sp+34h] [bp-1920h] BYREF
  _QWORD v34[127]; // [sp+38h] [bp-191Ch] BYREF
  void *v35[326]; // [sp+438h] [bp-151Ch] BYREF
  char v36[4100]; // [sp+950h] [bp-1004h] BYREF

  LOWORD(v0) = 21588;
  v1 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v33);
  LOWORD(v12) = -14272;
  v3 = (char *)calloc(1u, 0x40u);
  LOWORD(v4) = -3884;
  HIWORD(v4) = (unsigned int)"ed, trying again in 30sec" >> 16;
  v5 = v3;
  snprintf(v3, 0x40u, v4, "nonce_submit_thread", 0);
  V_LOCK();
  v6 = syscall(224);
  LOWORD(v7) = -14512;
  LOWORD(v8) = -3872;
  HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v8) = (unsigned int)"gain in 30sec" >> 16;
  v9 = v7;
  v29 = v7;
  LOWORD(v10) = 21584;
  logfmt_raw(v36, 0x1000u, 0, v8, v5, v6);
  V_UNLOCK();
  LOWORD(v11) = -4392;
  HIWORD(v11) = (unsigned int)"ares / min): %.2f/min" >> 16;
  HIWORD(v12) = (unsigned int)&unk_16B640 >> 16;
  zlog(*v9, v11, 132, "nonce_submit_thread", 19, 326, 60, v36);
  prctl(15, v5);
  v13 = pthread_self();
  pthread_detach(v13);
  v14 = *all_created_runtime;
  LOWORD(v15) = -14208;
  LOWORD(v16) = -3396;
  LOWORD(v17) = -4392;
  HIWORD(v15) = (unsigned int)&unk_16B680 >> 16;
  HIWORD(v16) = (unsigned int)"enum" >> 16;
  HIWORD(v17) = (unsigned int)"ares / min): %.2f/min" >> 16;
  v32 = v15;
  v30 = v16;
  v31 = v17;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v14 + 32))(v14, v34);
      HIWORD(v10) = (unsigned int)&unk_164328 >> 16;
      if ( v34[0] < (unsigned __int64)*v10 )
      {
        HIWORD(v0) = (unsigned int)&unk_16432C >> 16;
        v18 = *(_DWORD *)(*v0 + 4 * LODWORD(v34[0]));
        if ( v18 )
          break;
      }
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, v30);
      V_UNLOCK();
      zlog(*v29, v31, 132, "nonce_submit_thread", 19, 341, 80, v36);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v18 + 1752));
    if ( v35[288] )
    {
      free(v35[288]);
      v35[288] = 0;
    }
    if ( v35[290] )
    {
      free(v35[290]);
      v35[290] = 0;
    }
    memcpy(v35, (const void *)(v18 + 448), sizeof(v35));
    v19 = *(const char **)(v18 + 1600);
    if ( v19 )
      v35[288] = _strdup(v19);
    src = *(const void **)(v18 + 1608);
    if ( src )
    {
      n = *(_DWORD *)(v18 + 1604);
      v35[290] = malloc(n);
      memcpy(v35[290], src, n);
    }
    srca = (*(int (__fastcall **)(int, void **, _QWORD *))(v1 + 40))(v18, v35, v34);
    pthread_mutex_unlock((pthread_mutex_t *)(v18 + 1752));
    if ( srca == 1 )
    {
      v20 = *(double *)(v18 + 1968);
      v21 = *(double *)(v18 + 1976) + v20;
      v22 = v12[1];
      v23 = __CFADD__(*v12, 1);
      v24 = *v32 + v20;
      v25 = *(_DWORD *)(v18 + 1800) + 1;
      ++*v12;
      *(_DWORD *)(v18 + 1800) = v25;
      v12[1] = v23 + v22;
      *(double *)(v18 + 1976) = v21;
      *v32 = v24;
    }
    else
    {
      workio_submit_work((int)v35, (unsigned __int8 *)v18);
    }
  }
}
