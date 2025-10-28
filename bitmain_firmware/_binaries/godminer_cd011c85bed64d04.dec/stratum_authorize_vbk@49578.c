int __fastcall stratum_authorize_vbk(int a1, int a2)
{
  const char *v2; // r7
  const char *v5; // r6
  size_t v6; // r5
  size_t v7; // r0
  char *v8; // r0
  char *v9; // r5
  int v10; // r6
  int v11; // r0
  void *v12; // r7
  _DWORD *v13; // r4
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r12
  int v19; // r2
  int v20; // r0
  int v21; // r1
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  char v32[92]; // [sp+14h] [bp-10FCh] BYREF
  _BYTE v33[4096]; // [sp+110h] [bp-1000h] BYREF

  v2 = *(const char **)(a2 + 12);
  v5 = *(const char **)(a2 + 16);
  v6 = strlen(v2);
  v7 = strlen(v5);
  v8 = (char *)malloc(v6 + v7 + 300);
  v9 = v8;
  if ( !v8 )
  {
    V_LOCK(0);
    v26 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v26);
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
      v33);
    return v10;
  }
  sprintf(
    v8,
    "{\"command\":\"MINING_AUTH\",\"password\":{\"data\":\"%s\",\"type\":\"PASSWORD\"},\"request_id\":{\"data\":%d,\"type"
    "\":\"REQUEST_ID\"},\"username\":{\"data\":\"%s\",\"type\":\"USERNAME\"}}",
    v5,
    1,
    v2);
  v10 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v9);
  if ( !v10 )
  {
    V_LOCK(0);
    v31 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v31);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      182,
      100,
      v33);
    free(v9);
    return v10;
  }
  v11 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
  v12 = (void *)v11;
  if ( v11 )
  {
    v13 = (_DWORD *)json_loads(v11, 0, v32);
    free(v12);
    if ( v13 )
    {
      if ( get_command_type(v13) == 2 )
      {
        V_LOCK(2);
        v30 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v30);
        v18 = 20;
        v19 = 201;
      }
      else
      {
        v15 = (_DWORD *)json_object_get(v13, "reason");
        v16 = json_string_value(v15);
        v10 = (int)v16;
        if ( v16 )
        {
          V_LOCK(v16);
          v10 = 0;
          v17 = logfmt_raw((int)v33, 0x1000u);
          V_UNLOCK(v17);
          v18 = 100;
          v19 = 208;
          v20 = g_zc;
          LOWORD(v21) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroo"
                                          "t/tmp/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c";
LABEL_8:
          HIWORD(v21) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tm"
                                      "p/release/build/godminer-origin_master/frontend/frontend_vbk/frontend_vbk.c" >> 16;
          zlog(v20, v21, 157, "stratum_authorize_vbk", 21, v19, v18, v33);
          free(v9);
          if ( v13[1] != -1 )
          {
            v22 = v13 + 1;
            __dmb(0xBu);
            do
            {
              v23 = __ldrex(v22);
              v24 = v23 - 1;
            }
            while ( __strex(v24, v22) );
            if ( !v24 )
            {
              json_delete(v13);
              return v10;
            }
          }
          return v10;
        }
        V_LOCK(0);
        v28 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v28);
        v18 = 100;
        v19 = 211;
      }
      v20 = g_zc;
      LOWORD(v21) = 21584;
      goto LABEL_8;
    }
    V_LOCK(v14);
    v29 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v29);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      195,
      100,
      v33);
    free(v9);
    return 0;
  }
  else
  {
    V_LOCK(0);
    v27 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v27);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_vbk/frontend_vbk.c",
      157,
      "stratum_authorize_vbk",
      21,
      188,
      100,
      v33);
    free(v9);
    return 0;
  }
}
