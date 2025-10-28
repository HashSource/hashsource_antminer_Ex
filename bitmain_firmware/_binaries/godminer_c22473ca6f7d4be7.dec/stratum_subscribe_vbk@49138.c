_DWORD *__fastcall stratum_subscribe_vbk(int a1, int a2)
{
  size_t v4; // r5
  size_t v5; // r0
  char *v6; // r0
  char *v7; // r5
  _DWORD *v8; // r6
  int v9; // r0
  void *v10; // r8
  double *v11; // r7
  _DWORD *v12; // r0
  int v13; // r12
  int v14; // r2
  int v15; // r0
  int v16; // r1
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  _DWORD *v21; // [sp+0h] [bp-1110h]
  char v22[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v23[160]; // [sp+70h] [bp-10A0h] BYREF
  char v24[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = strlen(*(const char **)(a2 + 12));
  v5 = strlen(*(const char **)(a2 + 16));
  v6 = (char *)malloc(v4 + v5 + 300);
  v7 = v6;
  if ( !v6 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s malloc error!", "stratum_subscribe_vbk");
    V_UNLOCK();
    v8 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      236,
      100,
      v24);
    goto LABEL_14;
  }
  sprintf(
    v6,
    "{\"command\":\"MINING_SUBSCRIBE\",\"request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"update_frequency_ms\":{\"da"
    "ta\":%d,\"type\":\"FREQUENCY_MS\"}}",
    2,
    100);
  v8 = (_DWORD *)(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v7);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s stratum_send_line error!", "stratum_subscribe_vbk");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      242,
      100,
      v24);
    free(v7);
    goto LABEL_14;
  }
  v9 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v10 = (void *)v9;
  if ( !v9 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "%s stratum_recv_line failed!", "stratum_subscribe_vbk");
    V_UNLOCK();
    v8 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      248,
      100,
      v24);
    free(v7);
    goto LABEL_14;
  }
  v11 = json_loads(v9, 0, v22);
  free(v10);
  if ( !v11 )
  {
    v8 = 0;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "JSON decode failed(%d): %s", *(_DWORD *)v22, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      255,
      100,
      v24);
    free(v7);
    goto LABEL_14;
  }
  if ( get_command_type(v11) == 4 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "Successfully subscribed to server!");
    V_UNLOCK();
    v13 = 20;
    v14 = 261;
    goto LABEL_17;
  }
  v12 = (_DWORD *)json_object_get(v11, "reason");
  v8 = json_string_value(v12);
  if ( !v8 )
  {
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, "The server did not send a valid mining subscription response command!");
    V_UNLOCK();
    v13 = 100;
    v14 = 271;
LABEL_17:
    v15 = g_zc;
    LOWORD(v16) = 15452;
    goto LABEL_8;
  }
  V_LOCK();
  v21 = v8;
  v8 = 0;
  logfmt_raw(v24, 0x1000u, 0, "Unable to subscribe to the server: %s", v21);
  V_UNLOCK();
  v13 = 100;
  v14 = 268;
  v15 = g_zc;
  LOWORD(v16) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
LABEL_8:
  HIWORD(v16) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
  zlog(v15, v16, 157, "stratum_subscribe_vbk", 21, v14, v13, v24);
  free(v7);
  if ( *((_DWORD *)v11 + 1) != -1 )
  {
    v17 = (unsigned int *)v11 + 1;
    __dmb(0xBu);
    do
    {
      v18 = __ldrex(v17);
      v19 = v18 - 1;
    }
    while ( __strex(v19, v17) );
    if ( !v19 )
      json_delete(v11);
  }
LABEL_14:
  *(_DWORD *)(a2 + 2080) = 2500000;
  return v8;
}
