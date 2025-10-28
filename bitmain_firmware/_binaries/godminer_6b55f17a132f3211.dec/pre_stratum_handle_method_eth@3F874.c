int __fastcall pre_stratum_handle_method_eth(int a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  const char *v9; // r0
  _DWORD *v10; // r0
  int v11; // r5
  int v12; // r2
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v17; // r0
  int v18; // r0
  char v19[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v20[4096]; // [sp+110h] [bp-1000h] BYREF

  v6 = (_DWORD *)json_loads(a3, 0, v19);
  v7 = v6;
  if ( v6 )
  {
    v8 = (_DWORD *)json_object_get(v6, "jsonrpc");
    v9 = (const char *)json_string_value(v8);
    if ( !strcasecmp(v9, "2.0") )
      *(_BYTE *)(a2 + 1648) = 1;
    v10 = (_DWORD *)json_object_get(v7, "params");
    if ( !v10 )
      v10 = (_DWORD *)json_object_get(v7, "result");
    v11 = sub_3EA2C(v10, a2);
    if ( !v11 )
    {
      V_LOCK(0);
      v17 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
        163,
        "pre_stratum_handle_method_eth",
        29,
        506,
        80,
        v20);
    }
    v12 = v7[1];
    *a4 = "notify";
    if ( v12 == -1 )
      return v11;
    v13 = v7 + 1;
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( v15 )
    {
      return v11;
    }
    else
    {
      json_delete(v7);
      return v11;
    }
  }
  else
  {
    V_LOCK(0);
    v18 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_eth/frontend_eth.c",
      163,
      "pre_stratum_handle_method_eth",
      29,
      487,
      100,
      v20);
    return 0;
  }
}
