int __fastcall stratum_subscribe_zec(int a1, int a2)
{
  int v2; // r4
  int v5; // r11
  char *v6; // r0
  const char *v7; // r10
  char *v8; // r6
  size_t v9; // r9
  const char *v10; // r3
  int v11; // t1
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r1
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v19; // r9
  int v21; // r0
  void *v22; // r9
  int v23; // r0
  _DWORD *v24; // r10
  int v25; // r0
  int v26; // r9
  _BOOL4 v27; // r2
  unsigned int *v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r2
  char *v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  const char *v36; // r0
  int v37; // r10
  int v38; // [sp+2Ch] [bp-1188h]
  _DWORD *v39; // [sp+38h] [bp-117Ch]
  char dest[16]; // [sp+40h] [bp-1174h] BYREF
  _BYTE v41[36]; // [sp+50h] [bp-1164h] BYREF
  char v42[64]; // [sp+74h] [bp-1140h] BYREF
  char v43[92]; // [sp+B4h] [bp-1100h] BYREF
  _BYTE v44[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 1656);
  if ( *(_BYTE *)(a2 + 1656) )
  {
    V_LOCK(a1);
    v34 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v34);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      167,
      "stratum_subscribe_zec",
      21,
      167,
      20,
      v44);
    return v2;
  }
  v5 = *(unsigned __int8 *)(a2 + 1656);
  v38 = v5;
  do
  {
    v6 = (char *)malloc(0x80u);
    v7 = *(const char **)(a2 + 12);
    v8 = v6;
    v9 = strlen(v7) - 1;
    v10 = &v7[v9];
    if ( v7[v9] != 58 )
    {
      do
      {
        v11 = *(unsigned __int8 *)--v10;
        --v9;
      }
      while ( v11 != 58 );
    }
    strncpy(v42, v7, v9);
    v42[v9] = 0;
    strcpy(dest, &v7[v9 + 1]);
    if ( v2 )
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"ckbminer-v1.0.0\", null, \"%s\", \"%s\"]}",
        v42,
        dest);
    else
      sprintf(
        v8,
        "{\"id\": 1, \"method\": \"mining.subscribe\", \"params\": [\"GodMiner/2.0.0\", null, \"%s\", \"%s\"]}",
        v42,
        dest);
    if ( !(*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v8) )
    {
      V_LOCK(0);
      v12 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v12);
      v13 = 182;
      v14 = g_zc;
      LOWORD(v15) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroo"
                                      "t/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c";
LABEL_9:
      HIWORD(v15) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tm"
                                  "p/release/build/godminer-origin_godminer-new/frontend/frontend_zec/frontend_zec.c" >> 16;
      zlog(v14, v15, 167, "stratum_subscribe_zec", 21, v13, 100, v44);
LABEL_10:
      if ( !v8 )
      {
        if ( !v5 )
          goto LABEL_16;
        if ( *(_DWORD *)(v5 + 4) == -1 )
          goto LABEL_16;
        v16 = (unsigned int *)(v5 + 4);
        __dmb(0xBu);
        do
        {
          v17 = __ldrex(v16);
          v18 = v17 - 1;
        }
        while ( __strex(v18, v16) );
        if ( v18 )
          goto LABEL_16;
        v19 = 0;
LABEL_51:
        json_delete((_DWORD *)v5);
        goto LABEL_35;
      }
      free(v8);
      if ( !v5 )
        goto LABEL_16;
      v19 = 0;
      goto LABEL_31;
    }
    if ( !socket_full(*(_DWORD *)(a2 + 36), 30) )
    {
      V_LOCK(0);
      V_INT((int)v41, "poolno");
      v35 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v35);
      v14 = g_zc;
      v13 = 188;
      LOWORD(v15) = 19240;
      goto LABEL_9;
    }
    v21 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
    v22 = (void *)v21;
    v38 = v21;
    if ( !v21 )
      goto LABEL_10;
    v5 = json_loads(v21, 0, v43);
    free(v22);
    if ( !v5 )
    {
      V_LOCK(v23);
      v33 = logfmt_raw((int)v44, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_zec/frontend_zec.c",
        167,
        "stratum_subscribe_zec",
        21,
        201,
        100,
        v44);
      if ( v8 )
        free(v8);
      goto LABEL_16;
    }
    v24 = (_DWORD *)json_object_get((_DWORD *)v5, "result");
    v39 = (_DWORD *)json_object_get((_DWORD *)v5, "error");
    v25 = json_object_get((_DWORD *)v5, "id");
    v26 = json_integer_value(v25);
    v27 = v24 == 0;
    if ( v26 != 1 )
      v27 = 1;
    if ( !v27 && *v24 != 7 )
    {
      if ( !v39 || *v39 == 7 )
      {
        v19 = (*(int (__fastcall **)(int, int, _DWORD *, int))(a1 + 52))(a1, a2, v24, 1);
        if ( v19 )
        {
          v36 = *(const char **)(a2 + 32);
          *(_DWORD *)(a2 + 1920) = 2;
          if ( v36 )
          {
            if ( strstr(v36, "nicehash") )
            {
              *(_DWORD *)(a2 + 1920) = 3;
              sprintf(v8, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", 2);
              v37 = (*(int (__fastcall **)(int, char *))(a1 + 12))(a2, v8);
              if ( v37 )
              {
                v19 = socket_full(*(_DWORD *)(a2 + 36), 30);
                if ( v19 )
                {
                  (*(void (__fastcall **)(int))(a1 + 8))(a2);
                  free(v8);
                  goto LABEL_31;
                }
                v19 = v37;
              }
LABEL_46:
              free(v8);
              goto LABEL_31;
            }
          }
        }
      }
      else
      {
        if ( v2 )
        {
LABEL_44:
          v31 = (char *)json_dumps(v39, 3);
          v8 = v31;
          goto LABEL_45;
        }
LABEL_29:
        v19 = v2;
      }
      if ( v8 )
        goto LABEL_46;
      goto LABEL_31;
    }
    if ( !v2 )
      goto LABEL_29;
    if ( v39 )
      goto LABEL_44;
    v31 = (char *)malloc(0x11u);
    v8 = v31;
    if ( v31 )
    {
      v31 = *(char **)"(unknown reason)";
      strcpy(v8, "(unknown reason)");
    }
LABEL_45:
    V_LOCK(v31);
    v19 = 0;
    v32 = logfmt_raw((int)v44, 0x1000u);
    V_UNLOCK(v32);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_zec/frontend_zec.c",
      167,
      "stratum_subscribe_zec",
      21,
      218,
      100,
      v44);
    if ( v8 )
      goto LABEL_46;
LABEL_31:
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
        goto LABEL_51;
    }
LABEL_35:
    if ( v19 )
      return v19;
LABEL_16:
    if ( v38 )
      v2 ^= 1u;
    else
      v2 = 0;
  }
  while ( v2 );
  return 0;
}
