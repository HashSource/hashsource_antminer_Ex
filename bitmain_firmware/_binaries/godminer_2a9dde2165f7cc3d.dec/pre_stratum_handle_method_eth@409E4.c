int __fastcall pre_stratum_handle_method_eth(int (__fastcall **a1)(_DWORD, _DWORD, _DWORD), int a2, int a3, _DWORD *a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r6
  const char *v10; // r0
  bool v11; // zf
  _DWORD *v12; // r0
  const char *v13; // r6
  int v14; // r7
  int v15; // r6
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  int v20; // r0
  _DWORD *v21; // r6
  _DWORD *v22; // r5
  __int64 v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  __int64 v27; // r10
  _BYTE *v28; // r1
  int v29; // r0
  char v30[92]; // [sp+14h] [bp-1100h] BYREF
  _BYTE v31[4100]; // [sp+110h] [bp-1004h] BYREF

  v7 = (_DWORD *)json_loads(a3, 0, v30);
  v8 = v7;
  if ( v7 )
  {
    v9 = (_DWORD *)json_object_get(v7, "jsonrpc");
    v10 = (const char *)json_string_value(v9);
    v11 = v9 == 0;
    if ( v9 )
      v11 = v10 == 0;
    if ( !v11 && !strcasecmp(v10, "2.0") )
    {
      *(_BYTE *)(a2 + 1656) = 1;
      v25 = (_DWORD *)json_object_get(v8, "params");
      if ( !v25 )
        v25 = (_DWORD *)json_object_get(v8, "result");
      v15 = sub_3F994(v25, a2);
      if ( !v15 )
      {
        V_LOCK(0);
        v29 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v29);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
          167,
          "pre_stratum_handle_method_eth",
          29,
          1092,
          80,
          v31);
        goto LABEL_31;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 1656) = 0;
      v12 = (_DWORD *)json_object_get(v8, "method");
      v13 = (const char *)json_string_value(v12);
      if ( v13 )
      {
        v14 = json_object_get(v8, "params");
        if ( !v14 )
          v14 = json_object_get(v8, "result");
        json_object_get(v8, "id");
        if ( !strcasecmp(v13, "mining.notify") )
        {
          v26 = json_object_get(v8, "height");
          v27 = json_integer_value(v26);
          if ( v27 )
          {
            v15 = *(_DWORD *)(a2 + 1588);
            if ( !v15 )
            {
              v15 = (int)calloc(1u, 0x6Bu);
              *(_DWORD *)(a2 + 1588) = v15;
              if ( !v15 )
              {
                printf(aInvalidPointer, "work->private");
                return v15;
              }
            }
            *(_QWORD *)(v15 + 96) = v27;
          }
          v15 = a1[12](a1, a2, v14);
          v28 = (_BYTE *)(a2 + 1916);
          if ( v15 )
          {
            *a4 = "notify";
            pool_tset(a2, v28, 1);
            goto LABEL_12;
          }
          goto LABEL_35;
        }
        if ( !strcasecmp(v13, "mining.set_difficulty") || !strcasecmp(v13, "mining.set_target") )
        {
          *a4 = "set diff or target";
          v15 = a1[14](a1, a2, v14);
          goto LABEL_12;
        }
        if ( !strcasecmp(v13, "mining.set_extranonce") )
        {
          v15 = a1[13](a1, a2, v14);
          v28 = (_BYTE *)(a2 + 1916);
          if ( v15 )
          {
            pool_tset(a2, v28, 1);
LABEL_12:
            if ( v8[1] != -1 )
            {
              v16 = v8 + 1;
              __dmb(0xBu);
              do
              {
                v17 = __ldrex(v16);
                v18 = v17 - 1;
              }
              while ( __strex(v18, v16) );
              if ( !v18 )
                json_delete(v8);
            }
            return v15;
          }
LABEL_35:
          pool_tclear(a2, v28, 0);
          goto LABEL_12;
        }
      }
      v21 = (_DWORD *)json_object_get(v8, "result");
      json_object_get(v8, "error");
      v22 = (_DWORD *)json_object_get(v8, "id");
      if ( v21 && *v21 != 7 && v21 != json_false() )
        json_string_value(v21);
      LODWORD(v23) = json_true();
      if ( !v22 || *v22 == 7 || (v23 = json_integer_value((int)v22), v23 != 2) )
      {
        V_LOCK(v23);
        v24 = logfmt_raw((int)v31, 0x1000u);
        V_UNLOCK(v24);
        v15 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_eth/frontend_eth.c",
          167,
          "pre_stratum_handle_method_eth",
          29,
          1084,
          40,
          v31);
        goto LABEL_12;
      }
    }
    v15 = 1;
LABEL_31:
    *a4 = "notify";
    goto LABEL_12;
  }
  V_LOCK(0);
  v20 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/frontend/frontend_eth/frontend_eth.c",
    167,
    "pre_stratum_handle_method_eth",
    29,
    995,
    100,
    v31);
  return 0;
}
