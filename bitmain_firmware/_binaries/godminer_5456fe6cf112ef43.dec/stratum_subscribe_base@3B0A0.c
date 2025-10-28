int __fastcall stratum_subscribe_base(int a1, int a2)
{
  int v2; // r4
  int v5; // r7
  void *v6; // r9
  const char *v7; // r0
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r6
  const char *v11; // r1
  size_t v12; // r2
  int v13; // r0
  int v14; // r2
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r11
  int v19; // r0
  int v20; // r10
  _BOOL4 v21; // r2
  char *v22; // r0
  int v23; // r10
  int v24; // r0
  unsigned int *v25; // r3
  unsigned int v26; // r2
  unsigned int v27; // r2
  unsigned int *v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r2
  int v31; // r0
  const char *v32; // r0
  int v33; // r11
  int v34; // r0
  _DWORD *v35; // [sp+18h] [bp-110Ch]
  char v36[92]; // [sp+24h] [bp-1100h] BYREF
  _BYTE v37[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1824);
  if ( !*(_BYTE *)(a2 + 1824) )
  {
    v5 = *(unsigned __int8 *)(a2 + 1824);
    v6 = (void *)v5;
    while ( 1 )
    {
      v7 = *(const char **)(a2 + 68);
      v8 = v7 ? strlen(v7) + 128 : 128;
      v9 = (char *)malloc(v8);
      v10 = v9;
      if ( v2 )
      {
        v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
        v12 = 77;
      }
      else
      {
        v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/1.0.0\", null]}";
        v12 = 76;
      }
      memcpy(v9, v11, v12);
      if ( !(*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v10) )
        break;
      if ( !socket_full(*(_DWORD *)(a2 + 32), 30) )
      {
        V_LOCK(0);
        v34 = logfmt_raw((int)v37, 0x1000u);
        V_UNLOCK(v34);
        v14 = 136;
        goto LABEL_11;
      }
      v16 = (*(int (__fastcall **)(int))(a1 + 12))(a2);
      v6 = (void *)v16;
      if ( !v16 )
        goto LABEL_12;
      v5 = json_loads(v16, 0, v36);
      free(v6);
      if ( v5 )
      {
        v18 = (_DWORD *)json_object_get((_DWORD *)v5, "result");
        v35 = (_DWORD *)json_object_get((_DWORD *)v5, "error");
        v19 = json_object_get((_DWORD *)v5, "id");
        v20 = json_integer_value(v19);
        v21 = v18 == 0;
        if ( v20 != 1 )
          v21 = 1;
        if ( v21 || *v18 == 7 )
        {
          if ( !v2 )
            goto LABEL_41;
          if ( v35 )
            goto LABEL_28;
          v22 = (char *)malloc(0x11u);
          v10 = v22;
          if ( v22 )
          {
            v22 = *(char **)"(unknown reason)";
            strcpy(v10, "(unknown reason)");
          }
LABEL_29:
          V_LOCK(v22);
          v23 = 0;
          v24 = logfmt_raw((int)v37, 0x1000u);
          V_UNLOCK(v24);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/frontend/frontend_base.c",
            145,
            "stratum_subscribe_base",
            22,
            162,
            100,
            v37);
        }
        else
        {
          if ( v35 && *v35 != 7 )
          {
            if ( !v2 )
            {
LABEL_41:
              v23 = v2;
              if ( v10 )
                goto LABEL_42;
              goto LABEL_31;
            }
LABEL_28:
            v22 = (char *)json_dumps(v35, 3);
            v10 = v22;
            goto LABEL_29;
          }
          v23 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 64))(a1, a2, v18, 1);
          if ( v23 )
          {
            v32 = *(const char **)(a2 + 28);
            *(_DWORD *)(a2 + 2088) = 2;
            if ( v32 )
            {
              if ( strstr(v32, "nicehash") )
              {
                *(_DWORD *)(a2 + 2088) = 3;
                sprintf(v10, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
                v33 = (*(int (__fastcall **)(int, char *))(a1 + 16))(a2, v10);
                if ( v33 )
                {
                  v23 = socket_full(*(_DWORD *)(a2 + 32), 30);
                  if ( v23 )
                  {
                    (*(void (__fastcall **)(int))(a1 + 12))(a2);
                    free(v10);
                    goto LABEL_31;
                  }
                  v23 = v33;
                }
LABEL_42:
                free(v10);
LABEL_31:
                if ( *(_DWORD *)(v5 + 4) != -1 )
                {
                  v25 = (unsigned int *)(v5 + 4);
                  __dmb(0xBu);
                  do
                  {
                    v26 = __ldrex(v25);
                    v27 = v26 - 1;
                  }
                  while ( __strex(v27, v25) );
                  if ( !v27 )
LABEL_47:
                    json_delete((_DWORD *)v5);
                }
                if ( v23 )
                  return 1;
                goto LABEL_15;
              }
            }
          }
        }
        if ( v10 )
          goto LABEL_42;
        goto LABEL_31;
      }
      V_LOCK(v17);
      v31 = logfmt_raw((int)v37, 0x1000u);
      V_UNLOCK(v31);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/frontend/frontend_base.c",
        145,
        "stratum_subscribe_base",
        22,
        147,
        100,
        v37);
      if ( v10 )
        free(v10);
LABEL_15:
      if ( v6 )
        v2 ^= 1u;
      else
        v2 = 0;
      if ( !v2 )
        return 0;
    }
    V_LOCK(0);
    v13 = logfmt_raw((int)v37, 0x1000u);
    V_UNLOCK(v13);
    v14 = 131;
LABEL_11:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_base.c",
      145,
      "stratum_subscribe_base",
      22,
      v14,
      100,
      v37);
LABEL_12:
    if ( v10 )
    {
      free(v10);
      if ( v5 )
      {
        v23 = 0;
        goto LABEL_31;
      }
    }
    else if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 4) != -1 )
      {
        v28 = (unsigned int *)(v5 + 4);
        __dmb(0xBu);
        do
        {
          v29 = __ldrex(v28);
          v30 = v29 - 1;
        }
        while ( __strex(v30, v28) );
        if ( !v30 )
        {
          v23 = 0;
          goto LABEL_47;
        }
      }
    }
    goto LABEL_15;
  }
  return 1;
}
