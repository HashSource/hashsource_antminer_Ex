int __fastcall sub_46FE8(int a1, int a2)
{
  void *v2; // r11
  int v5; // r10
  _DWORD *v6; // r6
  int v7; // r0
  int v8; // r2
  int v9; // r9
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  const char *v13; // r0
  size_t v14; // r0
  char *v15; // r5
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r8
  int v19; // r0
  int v20; // r0
  _BOOL4 v21; // r3
  char *v22; // r0
  int v23; // r0
  int v25; // r0
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v29; // r0
  void *v30; // r0
  _DWORD *v31; // r0
  const char *v32; // r0
  char *v33; // r0
  size_t v34; // r0
  int v35; // r0
  void *v36; // r0
  char *v37; // r0
  const char *v38; // r1
  const char *v39; // r3
  int v40; // r2
  int v41; // r8
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // [sp+34h] [bp-1138h]
  _DWORD *v46; // [sp+38h] [bp-1134h]
  _BYTE v47[36]; // [sp+48h] [bp-1124h] BYREF
  char v48[92]; // [sp+6Ch] [bp-1100h] BYREF
  _BYTE v49[4100]; // [sp+168h] [bp-1004h] BYREF

  v45 = *(unsigned __int8 *)(a2 + 1656);
  if ( *(_BYTE *)(a2 + 1656) )
    return 1;
  v2 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v13 = *(const char **)(a2 + 72);
    if ( v13 )
      v14 = strlen(v13) + 256;
    else
      v14 = 256;
    v15 = (char *)malloc(v14);
    strcpy(v15, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v15) )
    {
      V_LOCK(0);
      v7 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v7);
      v8 = 43;
      goto LABEL_4;
    }
    v9 = socket_full(*(_DWORD *)(a2 + 36), 30);
    if ( !v9 )
    {
      V_LOCK(0);
      v42 = logfmt_raw((int)v49, 0x1000u);
      V_UNLOCK(v42);
      v8 = 49;
LABEL_4:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
        167,
        "stratum_subscribe_rvn",
        21,
        v8,
        100,
        v49);
      free(v15);
      if ( !v6 )
        goto LABEL_12;
      goto LABEL_5;
    }
    v16 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
    v2 = (void *)v16;
    if ( v16 )
    {
      v6 = (_DWORD *)json_loads(v16, 0, v48);
      free(v2);
      if ( !v6 )
      {
        V_LOCK(v17);
        v29 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v29);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          167,
          "stratum_subscribe_rvn",
          21,
          62,
          100,
          v49);
        free(v15);
        goto LABEL_12;
      }
      v46 = (_DWORD *)json_object_get(v6, "result");
      v18 = (_DWORD *)json_object_get(v6, "error");
      v19 = json_object_get(v6, "id");
      v20 = json_integer_value(v19);
      v21 = v46 == 0;
      if ( v20 != 1 )
        v21 = 1;
      if ( v21 || *v46 == 7 )
      {
        if ( !v5 )
          goto LABEL_44;
        if ( v18 )
          goto LABEL_37;
        v22 = (char *)malloc(0x11u);
        if ( !v22 )
        {
          V_LOCK(0);
          v43 = logfmt_raw((int)v49, 0x1000u);
          V_UNLOCK(v43);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            167,
            "stratum_subscribe_rvn",
            21,
            79,
            100,
            v49);
          if ( v6[1] == -1 )
            return v45;
LABEL_39:
          v26 = v6 + 1;
          __dmb(0xBu);
          do
          {
            v27 = __ldrex(v26);
            v28 = v27 - 1;
          }
          while ( __strex(v28, v26) );
          if ( !v28 )
            json_delete(v6);
          goto LABEL_12;
        }
        v15 = v22;
        v9 = 0;
        strcpy(v22, "(unknown reason)");
        V_LOCK(*(_DWORD *)"(unknown reason)");
        v23 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v23);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          167,
          "stratum_subscribe_rvn",
          21,
          79,
          100,
          v49);
      }
      else
      {
        if ( v18 && *v18 != 7 )
        {
          if ( v5 )
          {
LABEL_37:
            v15 = (char *)json_dumps(v18, 3);
            V_LOCK(v15);
            v25 = logfmt_raw((int)v49, 0x1000u);
            V_UNLOCK(v25);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
              167,
              "stratum_subscribe_rvn",
              21,
              79,
              100,
              v49);
            if ( !v15 )
            {
              if ( v6[1] == -1 )
                goto LABEL_12;
              goto LABEL_39;
            }
          }
LABEL_44:
          v9 = 0;
          goto LABEL_45;
        }
        v30 = *(void **)(a2 + 80);
        if ( v30 )
          free(v30);
        v31 = json_array_get(v46, 1u);
        v32 = (const char *)json_string_value(v31);
        v33 = _strdup(v32);
        *(_DWORD *)(a2 + 80) = v33;
        v34 = strlen(v33);
        *(_DWORD *)(a2 + 76) = v34;
        V_LOCK(v34);
        V_INT((int)v47, "poolno");
        v35 = logfmt_raw((int)v49, 0x1000u);
        V_UNLOCK(v35);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
          167,
          "stratum_subscribe_rvn",
          21,
          95,
          60,
          v49);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
        v36 = *(void **)(a2 + 1552);
        if ( v36 )
          free(v36);
        v37 = (char *)calloc(8u, 1u);
        v38 = *(const char **)(a2 + 80);
        *(_DWORD *)(a2 + 1552) = v37;
        strcpy(v37, v38);
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
        if ( !(*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 52))(a1, a2, v46, 1) )
        {
          V_LOCK(0);
          v44 = logfmt_raw((int)v49, 0x1000u);
          V_UNLOCK(v44);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_rvn/frontend_rvn.c",
            167,
            "stratum_subscribe_rvn",
            21,
            113,
            60,
            v49);
        }
        v39 = *(const char **)(a2 + 80);
        v40 = *(_DWORD *)(a2 + 1920) + 1;
        *(_DWORD *)(a2 + 1920) = v40;
        sprintf(v15, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": [\"%s\"]}", v40, v39);
        v41 = (*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v15);
        if ( v41 )
        {
          v9 = socket_full(*(_DWORD *)(a2 + 36), 30);
          if ( v9 )
            (*(void (__fastcall **)(int))(a1 + 8))(a2);
          else
            v9 = v41;
        }
      }
LABEL_45:
      free(v15);
      if ( v6[1] == -1 )
        goto LABEL_11;
      goto LABEL_7;
    }
    free(v15);
    if ( !v6 )
      return v45;
LABEL_5:
    if ( v6[1] == -1 )
      goto LABEL_12;
    v9 = 0;
LABEL_7:
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
LABEL_11:
    if ( v9 )
      return 1;
LABEL_12:
    if ( v2 )
      v5 ^= 1u;
    else
      v5 = 0;
  }
  while ( v5 );
  return 0;
}
