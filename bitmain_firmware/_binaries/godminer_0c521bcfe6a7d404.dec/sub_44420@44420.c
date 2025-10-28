int __fastcall sub_44420(int a1, _DWORD *a2)
{
  int v2; // r7
  _DWORD *v5; // r6
  void *v6; // r9
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r10
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  const char *v15; // r0
  size_t v16; // r0
  char *v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  _DWORD *v21; // r0
  _BOOL4 v22; // r3
  int v23; // r2
  int v24; // r11
  int v25; // r0
  unsigned int *v26; // r3
  unsigned int v27; // r2
  unsigned int v28; // r2
  int v30; // r0
  int v31; // r0
  char *v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // [sp+14h] [bp-1110h]
  _DWORD *v37; // [sp+1Ch] [bp-1108h]
  char v38[92]; // [sp+24h] [bp-1100h] BYREF
  _BYTE v39[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v15 = (const char *)a2[18];
    if ( v15 )
      v16 = strlen(v15) + 256;
    else
      v16 = 256;
    v17 = (char *)malloc(v16);
    strcpy(v17, "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null]}");
    if ( !(*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v17) )
    {
      V_LOCK(0);
      v7 = logfmt_raw((int)v39, 0x1000u);
      V_UNLOCK(v7);
      v8 = 42;
      v9 = g_zc;
      LOWORD(v10) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroo"
                                      "t/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c";
      goto LABEL_3;
    }
    v11 = socket_full(a2[9], 30);
    if ( !v11 )
    {
      V_LOCK(0);
      v31 = logfmt_raw((int)v39, 0x1000u);
      V_UNLOCK(v31);
      v8 = 48;
      v9 = g_zc;
      LOWORD(v10) = 17384;
LABEL_3:
      HIWORD(v10) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/frontend/frontend_kas/frontend_kas.c" >> 16;
      zlog(v9, v10, 167, "stratum_subscribe_kas", 21, v8, 100, v39);
      free(v17);
      if ( !v5 )
        goto LABEL_11;
      goto LABEL_4;
    }
    v18 = (*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    v6 = (void *)v18;
    if ( v18 )
    {
      v5 = (_DWORD *)json_loads(v18, 0, v38);
      free(v6);
      if ( !v5 )
      {
        V_LOCK(v19);
        v30 = logfmt_raw((int)v39, 0x1000u);
        V_UNLOCK(v30);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          167,
          "stratum_subscribe_kas",
          21,
          61,
          100,
          v39);
        free(v17);
        goto LABEL_11;
      }
      v20 = json_object_get(v5, "id");
      v36 = json_integer_value(v20);
      v37 = (_DWORD *)json_object_get(v5, "result");
      v21 = (_DWORD *)json_object_get(v5, "error");
      v22 = v37 == 0;
      if ( v36 != 1 )
        v22 = 1;
      if ( v22 || *v37 == 7 )
      {
        if ( !v2 )
          goto LABEL_47;
        if ( v21 )
        {
LABEL_35:
          v17 = (char *)json_dumps(v21, 3);
          V_LOCK(v17);
          v25 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v25);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            167,
            "stratum_subscribe_kas",
            21,
            77,
            100,
            v39);
          if ( !v17 )
          {
            if ( v5[1] == -1 )
              goto LABEL_11;
            goto LABEL_37;
          }
LABEL_47:
          v11 = 0;
          goto LABEL_48;
        }
        v32 = (char *)malloc(0x11u);
        if ( !v32 )
        {
          V_LOCK(0);
          v35 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v35);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            167,
            "stratum_subscribe_kas",
            21,
            77,
            100,
            v39);
          if ( v5[1] == -1 )
            return 0;
LABEL_37:
          v26 = v5 + 1;
          __dmb(0xBu);
          do
          {
            v27 = __ldrex(v26);
            v28 = v27 - 1;
          }
          while ( __strex(v28, v26) );
          if ( !v28 )
            json_delete(v5);
          goto LABEL_11;
        }
        v17 = v32;
        v11 = 0;
        strcpy(v32, "(unknown reason)");
        V_LOCK(*(_DWORD *)"(unknown reason)");
        v33 = logfmt_raw((int)v39, 0x1000u);
        V_UNLOCK(v33);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          167,
          "stratum_subscribe_kas",
          21,
          77,
          100,
          v39);
      }
      else
      {
        if ( v21 && *v21 != 7 )
        {
          if ( !v2 )
            goto LABEL_47;
          goto LABEL_35;
        }
        if ( !(*(int (__fastcall **)(int, _DWORD *, _DWORD *, int))(a1 + 52))(a1, a2, v37, 1) )
        {
          V_LOCK(0);
          v34 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v34);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/frontend/frontend_kas/frontend_kas.c",
            167,
            "stratum_subscribe_kas",
            21,
            88,
            60,
            v39);
        }
        v23 = a2[480] + 1;
        a2[480] = v23;
        sprintf(v17, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v23);
        v24 = (*(int (__fastcall **)(_DWORD *, char *))(a1 + 12))(a2, v17);
        if ( v24 )
        {
          v11 = socket_full(a2[9], 30);
          if ( v11 )
            (*(void (__fastcall **)(_DWORD *))(a1 + 8))(a2);
          else
            v11 = v24;
        }
      }
LABEL_48:
      free(v17);
      if ( v5[1] == -1 )
        goto LABEL_10;
      goto LABEL_6;
    }
    free(v17);
    if ( !v5 )
      return 0;
LABEL_4:
    if ( v5[1] == -1 )
      goto LABEL_11;
    v11 = 0;
LABEL_6:
    v12 = v5 + 1;
    __dmb(0xBu);
    do
    {
      v13 = __ldrex(v12);
      v14 = v13 - 1;
    }
    while ( __strex(v14, v12) );
    if ( !v14 )
      json_delete(v5);
LABEL_10:
    if ( v11 )
      return v11;
LABEL_11:
    if ( v6 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
