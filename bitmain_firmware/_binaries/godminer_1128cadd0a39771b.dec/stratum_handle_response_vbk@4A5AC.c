int __fastcall stratum_handle_response_vbk(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  int command_type; // r0
  int v8; // r5
  char *v9; // r7
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  char v21[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v22[4100]; // [sp+110h] [bp-1004h] BYREF

  v5 = (_DWORD *)json_loads(a2, 0, v21);
  v6 = v5;
  if ( v5 )
  {
    command_type = get_command_type(v5);
    if ( command_type == 6 )
    {
      v8 = 1;
      v9 = 0;
    }
    else if ( command_type == 5 )
    {
      v15 = (_DWORD *)json_object_get(v6, "reason");
      v16 = (_DWORD *)json_object_get(v15, "data");
      v9 = (char *)json_string_value(v16);
      V_LOCK(v9);
      v17 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_vbk/frontend_vbk.c",
        157,
        "stratum_handle_response_vbk",
        27,
        484,
        20,
        v22);
      v18 = strcmp(v9, "time-too-new");
      v8 = v18;
      if ( v18 )
      {
        v8 = 0;
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 8))(a3);
        v19 = pool_tclear(a3, (_BYTE *)(a3 + 2084), 0);
        V_LOCK(v19);
        v20 = logfmt_raw((int)v22, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/frontend/frontend_vbk/frontend_vbk.c",
          157,
          "stratum_handle_response_vbk",
          27,
          488,
          20,
          v22);
      }
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    share_result(v8, 0, v9, a3);
    if ( v6[1] != -1 )
    {
      v10 = v6 + 1;
      __dmb(0xBu);
      do
      {
        v11 = __ldrex(v10);
        v12 = v11 - 1;
      }
      while ( __strex(v12, v10) );
      if ( !v12 )
        json_delete(v6);
    }
    return 1;
  }
  else
  {
    V_LOCK(0);
    v14 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_handle_response_vbk",
      27,
      474,
      100,
      v22);
    return 0;
  }
}
