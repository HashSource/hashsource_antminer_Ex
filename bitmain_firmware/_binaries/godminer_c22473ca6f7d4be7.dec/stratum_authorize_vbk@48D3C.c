_DWORD *__fastcall stratum_authorize_vbk(int a1, int a2)
{
  const char *v2; // r7
  const char *v5; // r6
  size_t v6; // r5
  size_t v7; // r0
  char *v8; // r0
  char *v9; // r5
  _DWORD *v10; // r6
  int v11; // r0
  void *v12; // r7
  double *v13; // r4
  _DWORD *v14; // r0
  int v15; // r12
  int v16; // r2
  int v17; // r0
  int v18; // r1
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  _DWORD *v23; // [sp+0h] [bp-1110h]
  char v24[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v25[160]; // [sp+70h] [bp-10A0h] BYREF
  char v26[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 300);
  v9 = v8;
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s malloc error!", "stratum_authorize_vbk");
    V_UNLOCK();
    v10 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      176,
      100,
      v26);
    return v10;
  }
  sprintf(
    v8,
    "{\"command\":\"MINING_AUTH\",\"password\":{\"data\":\"%s\",\"type\":\"PASSWORD\"},\"request_id\":{\"data\":%d,\"type"
    "\":\"REQUEST_ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}",
    v5,
    1,
    v2);
  v10 = (_DWORD *)(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s stratum_send_line error!", "stratum_authorize_vbk");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      182,
      100,
      v26);
    free(v9);
    return v10;
  }
  v11 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v12 = (void *)v11;
  if ( v11 )
  {
    v13 = json_loads(v11, 0, v24);
    free(v12);
    if ( v13 )
    {
      if ( get_command_type(v13) == 2 )
      {
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, "Successfully authenticated to server!");
        V_UNLOCK();
        v15 = 20;
        v16 = 201;
      }
      else
      {
        v14 = (_DWORD *)json_object_get(v13, "reason");
        v10 = json_string_value(v14);
        if ( v10 )
        {
          V_LOCK();
          v23 = v10;
          v10 = 0;
          logfmt_raw(v26, 0x1000u, 0, "Unable to authenticate to the server: %s", v23);
          V_UNLOCK();
          v15 = 100;
          v16 = 208;
          v17 = g_zc;
          LOWORD(v18) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroo"
                                          "t/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
LABEL_8:
          HIWORD(v18) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
          zlog(v17, v18, 157, "stratum_authorize_vbk", 21, v16, v15, v26);
          free(v9);
          if ( *((_DWORD *)v13 + 1) != -1 )
          {
            v19 = (unsigned int *)v13 + 1;
            __dmb(0xBu);
            do
            {
              v20 = __ldrex(v19);
              v21 = v20 - 1;
            }
            while ( __strex(v21, v19) );
            if ( !v21 )
            {
              json_delete(v13);
              return v10;
            }
          }
          return v10;
        }
        V_LOCK();
        logfmt_raw(v26, 0x1000u, 0, "The server did not send a valid mining authentication response command!");
        V_UNLOCK();
        v15 = 100;
        v16 = 211;
      }
      v17 = g_zc;
      LOWORD(v18) = 15452;
      goto LABEL_8;
    }
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v24, v25);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      195,
      100,
      v26);
    free(v9);
    return 0;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s stratum_recv_line failed!", "stratum_authorize_vbk");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      188,
      100,
      v26);
    free(v9);
    return 0;
  }
}
