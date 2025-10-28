int __fastcall stratum_subscribe_vbk(int a1, int a2)
{
  size_t v4; // r5
  size_t v5; // r0
  char *v6; // r0
  char *v7; // r5
  int v8; // r6
  int v9; // r0
  void *v10; // r8
  _DWORD *v11; // r7
  int v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r0
  int v19; // r1
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  char v30[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v31[4096]; // [sp+110h] [bp-1000h] BYREF

  v4 = strlen(*(const char **)(a2 + 12));
  v5 = strlen(*(const char **)(a2 + 16));
  v6 = (char *)malloc(v4 + v5 + 300);
  v7 = v6;
  if ( !v6 )
  {
    V_LOCK(0);
    v23 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v23);
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
      v31);
    goto LABEL_14;
  }
  sprintf(
    v6,
    "{\"command\":\"MINING_SUBSCRIBE\",\"request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"update_frequency_ms\":{\"da"
    "ta\":%d,\"type\":\"FREQUENCY_MS\"}}",
    2,
    100);
  v8 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v7);
  if ( !v8 )
  {
    V_LOCK(0);
    v29 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      242,
      100,
      v31);
    free(v7);
    goto LABEL_14;
  }
  v9 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v10 = (void *)v9;
  if ( !v9 )
  {
    V_LOCK(0);
    v25 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v25);
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
      v31);
    free(v7);
    goto LABEL_14;
  }
  v11 = (_DWORD *)json_loads(v9, 0, v30);
  free(v10);
  if ( !v11 )
  {
    v8 = 0;
    V_LOCK(v12);
    v27 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_subscribe_vbk",
      21,
      255,
      100,
      v31);
    free(v7);
    goto LABEL_14;
  }
  if ( get_command_type(v11) == 4 )
  {
    V_LOCK(4);
    v28 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v28);
    v16 = 20;
    v17 = 261;
    goto LABEL_17;
  }
  v13 = (_DWORD *)json_object_get(v11, "reason");
  v14 = json_string_value(v13);
  v8 = (int)v14;
  if ( !v14 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v26);
    v16 = 100;
    v17 = 271;
LABEL_17:
    v18 = g_zc;
    LOWORD(v19) = 16000;
    goto LABEL_8;
  }
  V_LOCK(v14);
  v8 = 0;
  v15 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v15);
  v16 = 100;
  v17 = 268;
  v18 = g_zc;
  LOWORD(v19) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/re"
                                  "lease/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
LABEL_8:
  HIWORD(v19) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/releas"
                              "e/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
  zlog(v18, v19, 157, "stratum_subscribe_vbk", 21, v17, v16, v31);
  free(v7);
  if ( v11[1] != -1 )
  {
    v20 = v11 + 1;
    __dmb(0xBu);
    do
    {
      v21 = __ldrex(v20);
      v22 = v21 - 1;
    }
    while ( __strex(v22, v20) );
    if ( !v22 )
      json_delete(v11);
  }
LABEL_14:
  *(_DWORD *)(a2 + 2088) = 2500000;
  return v8;
}
