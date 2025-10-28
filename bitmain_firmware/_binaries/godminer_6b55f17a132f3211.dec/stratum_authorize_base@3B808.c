int __fastcall stratum_authorize_base(int a1, _DWORD *a2)
{
  const char *v2; // r8
  const char *v5; // r9
  size_t v6; // r6
  size_t v7; // r0
  char *v8; // r0
  int v9; // r2
  char *v10; // r7
  int v11; // r8
  void *v13; // r6
  _DWORD *v14; // r5
  int v15; // r0
  _DWORD *v16; // r9
  _DWORD *v17; // r6
  int v18; // r0
  int v19; // r0
  _BOOL4 v20; // r3
  int v21; // r0
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  int v25; // r0
  char v26[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v27[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = (const char *)a2[3];
  v5 = (const char *)a2[4];
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 80);
  v9 = a2[478];
  v10 = v8;
  a2[478] = v9 + 1;
  sprintf(v8, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", v9, v2, v5);
  v11 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v10);
  if ( !v11 )
  {
LABEL_2:
    free(v10);
    return v11;
  }
  while ( 1 )
  {
    v13 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    if ( !v13 )
    {
      v11 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 20))() )
      break;
    free(v13);
  }
  v14 = (_DWORD *)json_loads((int)v13, 0, v26);
  free(v13);
  if ( !v14 )
  {
    v11 = 0;
    V_LOCK(v15);
    v25 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v25);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "stratum_authorize_base",
      22,
      280,
      100,
      v27);
    free(v10);
    return v11;
  }
  v16 = (_DWORD *)json_object_get(v14, "result");
  v17 = (_DWORD *)json_object_get(v14, "error");
  v18 = json_object_get(v14, "id");
  v19 = json_integer_value(v18);
  v20 = v16 == 0;
  if ( a2[478] - 1 != v19 )
    v20 = 1;
  if ( v20 || *v16 == 6 || v17 && *v17 != 7 )
  {
    V_LOCK(v19);
    v11 = 0;
    v21 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "stratum_authorize_base",
      22,
      290,
      100,
      v27);
  }
  free(v10);
  if ( v14[1] == -1 )
    return v11;
  v22 = v14 + 1;
  __dmb(0xBu);
  do
  {
    v23 = __ldrex(v22);
    v24 = v23 - 1;
  }
  while ( __strex(v24, v22) );
  if ( v24 )
    return v11;
  json_delete(v14);
  return v11;
}
