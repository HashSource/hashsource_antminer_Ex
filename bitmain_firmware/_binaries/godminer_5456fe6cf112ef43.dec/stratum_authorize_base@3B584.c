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
  _DWORD *v16; // r10
  _DWORD *v17; // r6
  int v18; // r0
  int v19; // r0
  _BOOL4 v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27; // r0
  char v28[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v29[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = (const char *)a2[3];
  v5 = (const char *)a2[4];
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 80);
  v9 = a2[522];
  v10 = v8;
  a2[522] = v9 + 1;
  sprintf(v8, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", v9, v2, v5);
  v11 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 16))(a2, v10);
  if ( !v11 )
  {
LABEL_2:
    free(v10);
    return v11;
  }
  while ( 1 )
  {
    v13 = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 12))(a2);
    if ( !v13 )
    {
      v11 = 0;
      goto LABEL_2;
    }
    if ( !(*(int (**)(void))(a1 + 24))() )
      break;
    free(v13);
  }
  v14 = (_DWORD *)json_loads((int)v13, 0, v28);
  free(v13);
  if ( !v14 )
  {
    v11 = 0;
    V_LOCK(v15);
    v27 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_authorize_base",
      22,
      224,
      100,
      v29);
    free(v10);
    return v11;
  }
  v16 = (_DWORD *)json_object_get(v14, "result");
  v17 = (_DWORD *)json_object_get(v14, "error");
  v18 = json_object_get(v14, "id");
  v19 = json_integer_value(v18);
  v20 = v16 == 0;
  if ( a2[522] - 1 != v19 )
    v20 = 1;
  if ( v20 || *v16 == 6 || v17 && *v17 != 7 )
  {
    V_LOCK(v19);
    v21 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v21);
    v11 = 0;
    v22 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_base.c",
            145,
            "stratum_authorize_base",
            22,
            234,
            100,
            v29);
    V_LOCK(v22);
    v23 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v23);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_authorize_base",
      22,
      236,
      100,
      v29);
  }
  free(v10);
  if ( v14[1] == -1 )
    return v11;
  v24 = v14 + 1;
  __dmb(0xBu);
  do
  {
    v25 = __ldrex(v24);
    v26 = v25 - 1;
  }
  while ( __strex(v26, v24) );
  if ( v26 )
    return v11;
  json_delete(v14);
  return v11;
}
