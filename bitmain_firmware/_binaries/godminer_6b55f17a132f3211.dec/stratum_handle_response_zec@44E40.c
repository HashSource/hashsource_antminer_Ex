int __fastcall stratum_handle_response_zec(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int *v6; // r6
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _BOOL4 v9; // r3
  _BOOL4 v10; // r4
  int v11; // r0
  int v12; // r6
  unsigned int *v13; // r3
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v17; // r3
  char *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  char *v21; // r0
  char v22[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v23[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = (_DWORD *)json_loads(a2, 0, v22);
  v5 = v4;
  if ( v4 )
  {
    v6 = (int *)json_object_get(v4, "result");
    v7 = (_DWORD *)json_object_get(v5, "error");
    v8 = (_DWORD *)json_object_get(v5, "id");
    v9 = v7 == 0;
    if ( !v6 )
      v9 = 1;
    if ( v8 )
      v10 = v9;
    else
      v10 = 1;
    if ( v10 || *v8 != 3 )
    {
      V_LOCK(v8);
      v11 = logfmt_raw((int)v23, 0x1000u);
      V_UNLOCK(v11);
      v12 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_zec/frontend_zec.c",
        163,
        "stratum_handle_response_zec",
        27,
        279,
        20,
        v23);
    }
    else
    {
      v17 = *v6;
      v12 = *(unsigned __int8 *)(a3 + 1648);
      if ( v17 == 5 )
        v10 = *v7 == 7;
      if ( *(_BYTE *)(a3 + 1648) )
      {
        v18 = (char *)json_string_value(v7);
        share_result(v10, 0, v18, a3);
      }
      else
      {
        if ( json_integer_value((int)v8) >= 3 )
        {
          v20 = json_array_get(v7, 1u);
          v21 = (char *)json_string_value(v20);
          share_result(v10, 0, v21, a3);
        }
        v12 = 1;
      }
    }
    if ( v5[1] == -1 )
      return v12;
    v13 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v14 = __ldrex(v13);
      v15 = v14 - 1;
    }
    while ( __strex(v15, v13) );
    if ( v15 )
    {
      return v12;
    }
    else
    {
      json_delete(v5);
      return v12;
    }
  }
  else
  {
    V_LOCK(0);
    v19 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v19);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_zec/frontend_zec.c",
      163,
      "stratum_handle_response_zec",
      27,
      269,
      40,
      v23);
    return 0;
  }
}
