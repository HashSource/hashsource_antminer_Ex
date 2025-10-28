int __fastcall stratum_subscribe_base(int a1, int a2)
{
  int v2; // r4
  int v5; // r7
  void *v6; // r11
  const char *v7; // r0
  size_t v8; // r0
  void *v9; // r0
  void *v10; // r6
  const char *v11; // r1
  size_t v12; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r1
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  int v20; // r9
  int v22; // r0
  int v23; // r0
  _DWORD *v24; // r10
  int v25; // r0
  int v26; // r9
  _BOOL4 v27; // r2
  unsigned int *v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r2
  void *v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  const char *v36; // r0
  int v37; // r10
  _DWORD *v38; // [sp+30h] [bp-112Ch]
  _BYTE v39[36]; // [sp+38h] [bp-1124h] BYREF
  char v40[92]; // [sp+5Ch] [bp-1100h] BYREF
  _BYTE v41[4100]; // [sp+158h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1648);
  if ( *(_BYTE *)(a2 + 1648) )
  {
    V_LOCK(a1);
    v34 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "stratum_subscribe_base",
      22,
      175,
      20,
      v41);
    return v2;
  }
  v5 = *(unsigned __int8 *)(a2 + 1648);
  v6 = (void *)v5;
  do
  {
    v7 = *(const char **)(a2 + 68);
    if ( v7 )
      v8 = strlen(v7) + 128;
    else
      v8 = 128;
    v9 = malloc(v8);
    v10 = v9;
    if ( v2 )
    {
      v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null]}";
      v12 = 77;
    }
    else
    {
      v11 = "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}";
      v12 = 76;
    }
    memcpy(v9, v11, v12);
    if ( !(*(int (__fastcall **)(int, void *))(a1 + 12))(a2, v10) )
    {
      V_LOCK(0);
      v13 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v13);
      v14 = 187;
      v15 = g_zc;
      LOWORD(v16) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/"
                                      "tmp/debug/build/godminer-origin_godminer-new/frontend/frontend_base.c";
LABEL_11:
      HIWORD(v16) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/"
                                  "debug/build/godminer-origin_godminer-new/frontend/frontend_base.c" >> 16;
      zlog(v15, v16, 151, "stratum_subscribe_base", 22, v14, 100, v41);
LABEL_12:
      if ( !v10 )
      {
        if ( !v5 )
          goto LABEL_18;
        if ( *(_DWORD *)(v5 + 4) == -1 )
          goto LABEL_18;
        v17 = (unsigned int *)(v5 + 4);
        __dmb(0xBu);
        do
        {
          v18 = __ldrex(v17);
          v19 = v18 - 1;
        }
        while ( __strex(v19, v17) );
        if ( v19 )
          goto LABEL_18;
        v20 = 0;
LABEL_52:
        json_delete((_DWORD *)v5);
        goto LABEL_37;
      }
      free(v10);
      if ( !v5 )
        goto LABEL_18;
      v20 = 0;
      goto LABEL_33;
    }
    if ( !socket_full(*(_DWORD *)(a2 + 32), 30) )
    {
      V_LOCK(0);
      V_INT((int)v39, "poolno");
      v35 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v35);
      v15 = g_zc;
      v14 = 192;
      LOWORD(v16) = 27208;
      goto LABEL_11;
    }
    v22 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
    v6 = (void *)v22;
    if ( !v22 )
      goto LABEL_12;
    v5 = json_loads(v22, 0, v40);
    free(v6);
    if ( !v5 )
    {
      V_LOCK(v23);
      v33 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/frontend/frontend_base.c",
        151,
        "stratum_subscribe_base",
        22,
        203,
        100,
        v41);
      if ( v10 )
        free(v10);
      goto LABEL_18;
    }
    v24 = (_DWORD *)json_object_get((_DWORD *)v5, "result");
    v38 = (_DWORD *)json_object_get((_DWORD *)v5, "error");
    v25 = json_object_get((_DWORD *)v5, "id");
    v26 = json_integer_value(v25);
    v27 = v24 == 0;
    if ( v26 != 1 )
      v27 = 1;
    if ( !v27 && *v24 != 7 )
    {
      if ( !v38 || *v38 == 7 )
      {
        v20 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 52))(a1, a2, v24, 1);
        if ( v20 )
        {
          v36 = *(const char **)(a2 + 28);
          *(_DWORD *)(a2 + 1912) = 2;
          if ( v36 )
          {
            if ( strstr(v36, "nicehash") )
            {
              *(_DWORD *)(a2 + 1912) = 3;
              sprintf((char *)v10, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v37 = (*(int (__fastcall **)(int, void *))(a1 + 12))(a2, v10);
              if ( v37 )
              {
                v20 = socket_full(*(_DWORD *)(a2 + 32), 30);
                if ( v20 )
                {
                  (*(void (__fastcall **)(int))(a1 + 8))(a2);
                  free(v10);
                  goto LABEL_33;
                }
                v20 = v37;
              }
LABEL_47:
              free(v10);
              goto LABEL_33;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_45:
          v31 = (void *)json_dumps(v38, 3);
          v10 = v31;
          goto LABEL_46;
        }
LABEL_31:
        v20 = v2;
      }
      if ( v10 )
        goto LABEL_47;
      goto LABEL_33;
    }
    if ( !v2 )
      goto LABEL_31;
    if ( v38 )
      goto LABEL_45;
    v31 = malloc(0x11u);
    v10 = v31;
    if ( v31 )
    {
      v31 = *(void **)"(unknown reason)";
      strcpy((char *)v10, "(unknown reason)");
    }
LABEL_46:
    V_LOCK(v31);
    v20 = 0;
    v32 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/frontend/frontend_base.c",
      151,
      "stratum_subscribe_base",
      22,
      218,
      100,
      v41);
    if ( v10 )
      goto LABEL_47;
LABEL_33:
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
        goto LABEL_52;
    }
LABEL_37:
    if ( v20 )
      return v20;
LABEL_18:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
