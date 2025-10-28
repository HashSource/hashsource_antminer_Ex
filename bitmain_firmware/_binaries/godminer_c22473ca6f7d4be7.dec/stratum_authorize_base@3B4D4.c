int __fastcall stratum_authorize_base(int a1, _DWORD *a2)
{
  const char *v4; // r9
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r0
  const char *v8; // r1
  char *v9; // r7
  int v10; // r8
  void *v12; // r6
  double *v13; // r5
  char *v14; // r1
  int v15; // r0
  char *v16; // r1
  _DWORD *v17; // r9
  int v18; // r0
  char *v19; // r1
  _DWORD *v20; // r6
  int v21; // r0
  int v22; // r0
  _BOOL4 v23; // r3
  int v24; // r10
  int v25; // r3
  _DWORD *v26; // r3
  int v27; // r1
  unsigned int *v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r2
  int v31; // r3
  _DWORD *v32; // r3
  int v33; // r1
  char v34[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v35[160]; // [sp+70h] [bp-10A0h] BYREF
  char v36[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = (const char *)a2[4];
  v5 = strlen((const char *)a2[3]);
  v6 = strlen(v4);
  v7 = (char *)malloc(v5 + v6 + 80);
  LOWORD(v8) = 8164;
  v9 = v7;
  HIWORD(v8) = (unsigned int)"ached" >> 16;
  ++a2[520];
  sprintf(v7, v8);
  v10 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
LABEL_2:
    free(v9);
    return v10;
  }
  while ( 1 )
  {
    v12 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v12 )
    {
      v10 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v12);
  }
  v13 = json_loads((int)v12, 0, v34);
  free(v12);
  if ( !v13 )
  {
    v10 = 0;
    V_LOCK();
    LOWORD(v31) = 7656;
    HIWORD(v31) = (unsigned int)" passed to valid_ascii" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v31, *(_DWORD *)v34, v35);
    V_UNLOCK();
    LOWORD(v32) = -14512;
    HIWORD(v32) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v33) = 7408;
    HIWORD(v33) = (unsigned int)"at hashrate double %f %s" >> 16;
    zlog(*v32, v33, 145, "stratum_authorize_base", 22, 224, 100, v36);
    free(v9);
    return v10;
  }
  LOWORD(v14) = 7692;
  HIWORD(v14) = (unsigned int)"ECT" >> 16;
  v15 = json_object_get(v13, v14);
  LOWORD(v16) = -22980;
  v17 = (_DWORD *)v15;
  HIWORD(v16) = (unsigned int)&unk_13996C >> 16;
  v18 = json_object_get(v13, v16);
  LOWORD(v19) = 11724;
  v20 = (_DWORD *)v18;
  HIWORD(v19) = (unsigned int)"e_extranonce_dash" >> 16;
  v21 = json_object_get(v13, v19);
  v22 = json_integer_value(v21);
  v23 = v17 == 0;
  v24 = v22;
  if ( a2[520] - 1 != v22 )
    v23 = 1;
  if ( v23 || *v17 == 6 || v20 && *v20 != 7 )
  {
    V_LOCK();
    LOWORD(v25) = 8224;
    HIWORD(v25) = (unsigned int)"ng or '}' expected" >> 16;
    v10 = 0;
    logfmt_raw(v36, 0x1000u, 0, v25, v24);
    V_UNLOCK();
    LOWORD(v26) = -14512;
    HIWORD(v26) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v27) = 7408;
    HIWORD(v27) = (unsigned int)"at hashrate double %f %s" >> 16;
    zlog(*v26, v27, 145, "stratum_authorize_base", 22, 234, 100, v36);
  }
  free(v9);
  if ( *((_DWORD *)v13 + 1) == -1 )
    return v10;
  v28 = (unsigned int *)v13 + 1;
  __dmb(0xBu);
  do
  {
    v29 = __ldrex(v28);
    v30 = v29 - 1;
  }
  while ( __strex(v30, v28) );
  if ( v30 )
    return v10;
  json_delete(v13);
  return v10;
}
