int __fastcall sub_63D34(int a1, int a2)
{
  json_t *v2; // r0
  _BOOL4 v3; // r3
  _BOOL4 v4; // r2
  _BOOL4 v5; // r3
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  _BYTE v13[8]; // [sp+24h] [bp-1148h] BYREF
  char src[4]; // [sp+1024h] [bp-148h] BYREF
  _DWORD dest[2]; // [sp+1028h] [bp-144h] BYREF
  _DWORD v16[23]; // [sp+1030h] [bp-13Ch] BYREF
  _DWORD v17[41]; // [sp+108Ch] [bp-E0h] BYREF
  char *s; // [sp+1130h] [bp-3Ch]
  char *v19; // [sp+1134h] [bp-38h]
  const char *v20; // [sp+1138h] [bp-34h]
  char *s1; // [sp+113Ch] [bp-30h]
  const json_t *v22; // [sp+1140h] [bp-2Ch]
  unsigned int i; // [sp+1144h] [bp-28h]
  unsigned __int8 v24; // [sp+114Ah] [bp-22h]
  char v25; // [sp+114Bh] [bp-21h]
  int v26; // [sp+114Ch] [bp-20h]
  int v27; // [sp+1150h] [bp-1Ch]
  void *v28; // [sp+1154h] [bp-18h]
  void *ptr; // [sp+1158h] [bp-14h]
  const json_t *v30; // [sp+115Ch] [bp-10h]
  const json_t *v31; // [sp+1160h] [bp-Ch]
  json_t *v32; // [sp+1164h] [bp-8h]

  ptr = 0;
  v30 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = malloc(0x80u);
  ptr = (void *)(*(int (__fastcall **)(int))(a1 + 8))(a2);
  if ( ptr )
  {
    v30 = json_loads((int)ptr, 0, (json_error_t *)v16);
    if ( ptr )
      free(ptr);
    if ( v30 )
    {
      v31 = json_object_get(v30, "result");
      v32 = json_object_get(v30, "error");
      v2 = json_object_get(v30, "id");
      v26 = json_integer_value((int)v2);
      if ( v26 == 1 && v31 && *(_DWORD *)v31 != 7 && (!v32 || *(_DWORD *)v32 == 7) )
      {
        v22 = json_array_get(v31, 0);
        if ( v22 && *(_DWORD *)v22 != 7 )
        {
          v6 = json_array_get(v22, 0);
          s1 = (char *)json_string_value(v6);
          v7 = json_array_get(v22, 1u);
          v20 = json_string_value(v7);
          v8 = json_array_get(v22, 2u);
          v19 = (char *)json_string_value(v8);
          v9 = json_array_get(v31, 1u);
          s = (char *)json_string_value(v9);
          if ( s1 && v20 && v19 && s )
          {
            if ( !strcasecmp(s1, "mining.notify") && !strcasecmp(v19, "EthereumStratum/1.0.0") )
            {
              v17[40] = a2 + 456;
              pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
              if ( *(_DWORD *)(a2 + 80)
                || (*(_DWORD *)(a2 + 76) = strlen(s) >> 1, (*(_DWORD *)(a2 + 80) = calloc(1u, *(_DWORD *)(a2 + 76))) != 0) )
              {
                hex2bin(*(_BYTE **)(a2 + 80), s, *(_DWORD *)(a2 + 76));
                dest[0] = 0;
                dest[1] = 0;
                *(_WORD *)src = 0;
                for ( i = 0; *(_DWORD *)(a2 + 76) > i; ++i )
                {
                  sprintf(src, "%02x", *(unsigned __int8 *)(*(_DWORD *)(a2 + 80) + i));
                  strcat((char *)dest, src);
                }
                V_LOCK();
                logfmt_raw(
                  v13,
                  0x1000u,
                  0,
                  "poolno=%d, extranonce_line: %s, pool->xnonce1_size: %d",
                  *(_DWORD *)a2,
                  dest,
                  *(_DWORD *)(a2 + 76));
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
                  174,
                  "stratum_parse_subscribe_reply_1",
                  31,
                  170,
                  40,
                  v13);
                pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
                v24 = 1;
              }
              else
              {
                V_LOCK();
                logfmt_raw(v13, 0x1000u, 0, "Failed to alloc xnonce1");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
                  174,
                  "stratum_parse_subscribe_reply_1",
                  31,
                  158,
                  100,
                  v13);
                pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
              }
            }
            else
            {
              V_LOCK();
              logfmt_raw(v13, 0x1000u, 0, "invalid respond for nicehash pool!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
                174,
                "stratum_parse_subscribe_reply_1",
                31,
                148,
                100,
                v13);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v13, 0x1000u, 0, "param check failed for EthereumStratum/1.0.0");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
              174,
              "stratum_parse_subscribe_reply_1",
              31,
              141,
              100,
              v13);
          }
        }
        else
        {
          V_LOCK();
          v5 = v31 && *(_DWORD *)v31 == 7;
          logfmt_raw(v13, 0x1000u, 0, "res_val1[%d], json_is_null(res_val1)[%d]", v22, v5);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            174,
            "stratum_parse_subscribe_reply_1",
            31,
            132,
            100,
            v13);
        }
      }
      else
      {
        V_LOCK();
        v3 = v31 && *(_DWORD *)v31 == 7;
        v4 = !v32 || *(_DWORD *)v32 != 7;
        logfmt_raw(
          v13,
          0x1000u,
          0,
          "req_id[%d], !res_val[%d], json_is_null(res_val)[%d], err_val[%d], !json_is_null(err_val)[%d]",
          v26,
          v31 == 0,
          v3,
          v32,
          v4);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          174,
          "stratum_parse_subscribe_reply_1",
          31,
          117,
          100,
          v13);
        if ( v25 )
        {
          if ( v32 )
            v28 = json_dumps(v32, 3);
          else
            v28 = strdup("(unknown reason)");
          V_LOCK();
          logfmt_raw(v13, 0x1000u, 0, "JSON-RPC call failed: %s, req_id=%d", v28, v26);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
            174,
            "stratum_parse_subscribe_reply_1",
            31,
            124,
            100,
            v13);
        }
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v13, 0x1000u, 0, "JSON decode failed(%d): %s", v16[0], v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "stratum_parse_subscribe_reply_1",
        31,
        106,
        100,
        v13);
    }
  }
  if ( v28 )
    free(v28);
  if ( v30 )
    sub_6346C((int)v30);
  return v24;
}
