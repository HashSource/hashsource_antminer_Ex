const char *__fastcall pre_stratum_handle_method_base(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r0
  const char *v10; // r5
  int v11; // r10
  _BYTE *v12; // r1
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r0
  char v20[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v21[4096]; // [sp+110h] [bp-1000h] BYREF

  v7 = (_DWORD *)json_loads(a3, 0, v20);
  v8 = v7;
  if ( !v7 )
  {
    V_LOCK(0);
    v17 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "pre_stratum_handle_method_base",
      30,
      124,
      100,
      v21);
    return 0;
  }
  v9 = (_DWORD *)json_object_get(v7, "method");
  v10 = (const char *)json_string_value(v9);
  if ( !v10 )
  {
LABEL_8:
    if ( v8[1] != -1 )
      goto LABEL_9;
    return v10;
  }
  v11 = json_object_get(v8, "params");
  if ( !v11 )
    v11 = json_object_get(v8, "result");
  json_object_get(v8, "id");
  if ( strcasecmp(v10, "mining.notify") )
  {
    if ( !strcasecmp(v10, "mining.set_difficulty") || (v18 = strcasecmp(v10, "mining.set_target")) == 0 )
    {
      *a4 = "set diff or target";
      v10 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 56))(a1, a2, v11);
    }
    else
    {
      V_LOCK(v18);
      v10 = 0;
      v19 = logfmt_raw((int)v21, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_base.c",
        151,
        "pre_stratum_handle_method_base",
        30,
        157,
        80,
        v21);
    }
    goto LABEL_8;
  }
  v10 = (const char *)(*(int (__fastcall **)(int, int, int))(a1 + 48))(a1, a2, v11);
  v12 = (_BYTE *)(a2 + 1908);
  if ( v10 )
  {
    *a4 = "notify";
    pool_tset(a2, v12, 1);
    goto LABEL_8;
  }
  pool_tclear(a2, v12, 0);
  if ( v8[1] == -1 )
    return v10;
LABEL_9:
  v13 = v8 + 1;
  __dmb(0xBu);
  do
  {
    v14 = __ldrex(v13);
    v15 = v14 - 1;
  }
  while ( __strex(v15, v13) );
  if ( v15 )
    return v10;
  json_delete(v8);
  return v10;
}
