int __fastcall stratum_authorize_rvn(int a1, _DWORD *a2, void *a3)
{
  int v3; // r5
  _DWORD *v6; // r11
  int v8; // r7
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  const char *v12; // r7
  const char *v13; // r8
  size_t v14; // r6
  size_t v15; // r0
  char *v16; // r6
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  _BOOL4 v21; // r8
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  _DWORD *v29; // r0
  int v30; // r0
  int v31; // r0
  char *v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  _DWORD *v36; // [sp+2Ch] [bp-1138h]
  _DWORD *v37; // [sp+34h] [bp-1130h]
  _BYTE v38[36]; // [sp+40h] [bp-1124h] BYREF
  char v39[92]; // [sp+64h] [bp-1100h] BYREF
  _BYTE v40[4100]; // [sp+160h] [bp-1004h] BYREF

  v3 = 0;
  v6 = 0;
  while ( 1 )
  {
    v12 = (const char *)a2[3];
    v13 = (const char *)a2[4];
    v14 = strlen(v12);
    v15 = strlen(v13);
    v16 = (char *)malloc(v14 + v15 + 128);
    sprintf(v16, "{\"id\":%d,\"method\":\"mining.authorize\",\"params\":[\"%s\",\"%s\"]}", 2, v12, v13);
    if ( !(*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v16) )
      goto LABEL_2;
    v8 = socket_full(a2[8], 30);
    if ( !v8 )
    {
      V_LOCK(0);
      v34 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        163,
        "stratum_authorize_rvn",
        21,
        191,
        100,
        v40);
LABEL_2:
      free(v16);
      if ( !v6 )
        goto LABEL_10;
LABEL_3:
      if ( v6[1] != -1 )
      {
        v8 = 0;
        goto LABEL_5;
      }
      goto LABEL_10;
    }
    v17 = (*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    a3 = (void *)v17;
    if ( !v17 )
      break;
    v6 = (_DWORD *)json_loads(v17, 0, v39);
    free(a3);
    if ( v6 )
    {
      v37 = (_DWORD *)json_object_get(v6, "result");
      v36 = (_DWORD *)json_object_get(v6, "error");
      v19 = json_object_get(v6, "id");
      v20 = json_integer_value(v19);
      v21 = v37 == 0;
      if ( v20 != 2 )
        v21 = 1;
      if ( v21 || *v37 == 6 )
      {
        V_LOCK(v20);
        V_INT((int)v38, "poolno");
        v29 = json_array_get(v36, 1u);
        json_string_value(v29);
        v30 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v30);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          163,
          "stratum_authorize_rvn",
          21,
          215,
          80,
          v40);
        if ( !v3 )
        {
LABEL_36:
          v8 = 0;
          goto LABEL_37;
        }
        if ( !v36 )
        {
          v32 = (char *)malloc(0x11u);
          if ( v32 )
          {
            v16 = v32;
            v8 = 0;
            strcpy(v32, "(unknown reason)");
            V_LOCK(*(_DWORD *)"(unknown reason)");
            v33 = logfmt_raw((int)v40, 0x1000u);
            V_UNLOCK(v33);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              163,
              "stratum_authorize_rvn",
              21,
              222,
              100,
              v40);
LABEL_37:
            free(v16);
            if ( v6[1] != -1 )
            {
LABEL_5:
              v9 = v6 + 1;
              __dmb(0xBu);
              do
              {
                v10 = __ldrex(v9);
                v11 = v10 - 1;
              }
              while ( __strex(v11, v9) );
              if ( !v11 )
                json_delete(v6);
            }
            if ( v8 )
              return v8;
            goto LABEL_10;
          }
          V_LOCK(0);
          v8 = 0;
          v35 = logfmt_raw((int)v40, 0x1000u);
          V_UNLOCK(v35);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            163,
            "stratum_authorize_rvn",
            21,
            222,
            100,
            v40);
          if ( v6[1] == -1 )
            return v8;
LABEL_27:
          v25 = v6 + 1;
          __dmb(0xBu);
          do
          {
            v26 = __ldrex(v25);
            v27 = v26 - 1;
          }
          while ( __strex(v27, v25) );
          if ( !v27 )
            json_delete(v6);
          goto LABEL_10;
        }
      }
      else
      {
        if ( !v36 || *v36 == 7 )
          goto LABEL_37;
        V_LOCK(v20);
        V_INT((int)v38, "poolno");
        v22 = json_array_get(v36, 1u);
        json_string_value(v22);
        v23 = logfmt_raw((int)v40, 0x1000u);
        V_UNLOCK(v23);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          163,
          "stratum_authorize_rvn",
          21,
          215,
          80,
          v40);
        if ( !v3 )
          goto LABEL_36;
      }
      v16 = (char *)json_dumps(v36, 3);
      V_LOCK(v16);
      v24 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        163,
        "stratum_authorize_rvn",
        21,
        222,
        100,
        v40);
      if ( v16 )
        goto LABEL_36;
      if ( v6[1] != -1 )
        goto LABEL_27;
    }
    else
    {
      V_LOCK(v18);
      v31 = logfmt_raw((int)v40, 0x1000u);
      V_UNLOCK(v31);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        163,
        "stratum_authorize_rvn",
        21,
        205,
        100,
        v40);
      free(v16);
    }
LABEL_10:
    if ( a3 )
      v3 ^= 1u;
    else
      v3 = 0;
    if ( !v3 )
      return 0;
  }
  free(v16);
  if ( v6 )
    goto LABEL_3;
  return 0;
}
