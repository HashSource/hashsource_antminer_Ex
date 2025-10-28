const char *__fastcall stratum_handle_method_base(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  double *v6; // r0
  double *v7; // r4
  _DWORD *v8; // r0
  const char *v9; // r5
  char *v10; // r1
  int v11; // r9
  char *v12; // r1
  const char *v13; // r1
  int v14; // r0
  _BYTE *v15; // r1
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v20; // r3
  _DWORD *v21; // r3
  int v22; // r1
  char *v23; // r1
  const char *v24; // r1
  const char *v25; // r1
  const char *v26; // r1
  int v27; // r3
  _DWORD *v28; // r3
  int v29; // r1
  char v30[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v31[160]; // [sp+70h] [bp-10A4h] BYREF
  char v32[4100]; // [sp+110h] [bp-1004h] BYREF

  v6 = json_loads(a3, 0, v30);
  v7 = v6;
  if ( !v6 )
  {
    V_LOCK();
    LOWORD(v20) = 7656;
    HIWORD(v20) = (unsigned int)" passed to valid_ascii" >> 16;
    logfmt_raw(v32, 0x1000u, 0, v20, *(_DWORD *)v30, v31);
    V_UNLOCK();
    LOWORD(v21) = -14512;
    HIWORD(v21) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v22) = 7408;
    HIWORD(v22) = (unsigned int)"at hashrate double %f %s" >> 16;
    zlog(*v21, v22, 145, "stratum_handle_method_base", 26, 62, 100, v32);
    return 0;
  }
  v8 = (_DWORD *)json_object_get(v6, "method");
  v9 = (const char *)json_string_value(v8);
  if ( !v9 )
  {
LABEL_9:
    if ( *((_DWORD *)v7 + 1) != -1 )
      goto LABEL_10;
    return v9;
  }
  LOWORD(v10) = 7684;
  HIWORD(v10) = (unsigned int)"XLY_CORRECT" >> 16;
  v11 = json_object_get(v7, v10);
  if ( !v11 )
  {
    LOWORD(v23) = 7692;
    HIWORD(v23) = (unsigned int)"ECT" >> 16;
    v11 = json_object_get(v7, v23);
  }
  LOWORD(v12) = 11724;
  HIWORD(v12) = (unsigned int)"e_extranonce_dash" >> 16;
  json_object_get(v7, v12);
  LOWORD(v13) = 7700;
  HIWORD(v13) = (unsigned int)"                            " >> 16;
  if ( !strcasecmp(v9, v13) )
  {
    v14 = a1[15](a1, a2, v11);
    goto LABEL_7;
  }
  LOWORD(v24) = 7716;
  HIWORD(v24) = (unsigned int)"            " >> 16;
  if ( !strcasecmp(v9, v24) || (LOWORD(v25) = 7740, HIWORD(v25) = (unsigned int)"\\b" >> 16, !strcasecmp(v9, v25)) )
  {
    v9 = (const char *)a1[17](a1, a2, v11);
    goto LABEL_9;
  }
  LOWORD(v26) = 7760;
  HIWORD(v26) = (unsigned int)"\\/" >> 16;
  if ( strcasecmp(v9, v26) )
  {
    V_LOCK();
    LOWORD(v27) = 7784;
    HIWORD(v27) = (unsigned int)"" >> 16;
    v9 = 0;
    logfmt_raw(v32, 0x1000u, 0, v27, a3);
    V_UNLOCK();
    LOWORD(v28) = -14512;
    HIWORD(v28) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v29) = 7408;
    HIWORD(v29) = (unsigned int)"at hashrate double %f %s" >> 16;
    zlog(*v28, v29, 145, "stratum_handle_method_base", 26, 102, 80, v32);
    goto LABEL_9;
  }
  v14 = a1[16](a1, a2, v11);
LABEL_7:
  v9 = (const char *)v14;
  v15 = (_BYTE *)(a2 + 2076);
  if ( v14 )
  {
    pool_tset(a2, v15, 1);
    goto LABEL_9;
  }
  pool_tclear(a2, v15, 0);
  if ( *((_DWORD *)v7 + 1) == -1 )
    return v9;
LABEL_10:
  v16 = (unsigned int *)v7 + 1;
  __dmb(0xBu);
  do
  {
    v17 = __ldrex(v16);
    v18 = v17 - 1;
  }
  while ( __strex(v18, v16) );
  if ( v18 )
    return v9;
  json_delete(v7);
  return v9;
}
