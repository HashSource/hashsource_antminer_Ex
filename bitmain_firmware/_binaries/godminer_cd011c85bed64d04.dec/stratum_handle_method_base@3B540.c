const char *__fastcall stratum_handle_method_base(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  const char *v8; // r5
  int v9; // r9
  int v10; // r0
  _BYTE *v11; // r1
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  int v16; // r0
  int v17; // r0
  int v18; // r0
  char v19[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v20[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = (_DWORD *)json_loads(a3, 0, v19);
  v6 = v5;
  if ( !v5 )
  {
    V_LOCK(0);
    v16 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_handle_method_base",
      26,
      62,
      100,
      v20);
    return 0;
  }
  v7 = (_DWORD *)json_object_get(v5, "method");
  v8 = (const char *)json_string_value(v7);
  if ( !v8 )
  {
LABEL_9:
    if ( v6[1] != -1 )
      goto LABEL_10;
    return v8;
  }
  v9 = json_object_get(v6, "params");
  if ( !v9 )
    v9 = json_object_get(v6, "result");
  json_object_get(v6, "id");
  if ( !strcasecmp(v8, "mining.notify") )
  {
    v10 = a1[15](a1, a2, v9);
    goto LABEL_7;
  }
  if ( !strcasecmp(v8, "mining.set_difficulty") || !strcasecmp(v8, "mining.set_target") )
  {
    v8 = (const char *)a1[17](a1, a2, v9);
    goto LABEL_9;
  }
  v17 = strcasecmp(v8, "mining.set_extranonce");
  if ( v17 )
  {
    V_LOCK(v17);
    v8 = 0;
    v18 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_handle_method_base",
      26,
      102,
      80,
      v20);
    goto LABEL_9;
  }
  v10 = a1[16](a1, a2, v9);
LABEL_7:
  v8 = (const char *)v10;
  v11 = (_BYTE *)(a2 + 2084);
  if ( v10 )
  {
    pool_tset(a2, v11, 1);
    goto LABEL_9;
  }
  pool_tclear(a2, v11, 0);
  if ( v6[1] == -1 )
    return v8;
LABEL_10:
  v12 = v6 + 1;
  __dmb(0xBu);
  do
  {
    v13 = __ldrex(v12);
    v14 = v13 - 1;
  }
  while ( __strex(v14, v12) );
  if ( v14 )
    return v8;
  json_delete(v6);
  return v8;
}
