int __fastcall sub_646CC(int a1, _DWORD *a2)
{
  json_t *v2; // r0
  _BYTE v6[56]; // [sp+1Ch] [bp-1138h] BYREF
  char s[4]; // [sp+101Ch] [bp-138h] BYREF
  _DWORD dest[2]; // [sp+1020h] [bp-134h] BYREF
  _DWORD v9[23]; // [sp+1028h] [bp-12Ch] BYREF
  int v10; // [sp+1084h] [bp-D0h] BYREF
  char *s1; // [sp+1124h] [bp-30h]
  int v12; // [sp+1128h] [bp-2Ch]
  json_t *v13; // [sp+112Ch] [bp-28h]
  unsigned int i; // [sp+1130h] [bp-24h]
  const json_t *v15; // [sp+1134h] [bp-20h]
  void *ptr; // [sp+1138h] [bp-1Ch]
  unsigned __int8 v17; // [sp+113Eh] [bp-16h]
  char v18; // [sp+113Fh] [bp-15h]
  int v19; // [sp+1140h] [bp-14h]
  int v20; // [sp+1144h] [bp-10h]

  ptr = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v12 = fcntl(a2[9], 3, 0);
  if ( v12 >= 0 && fcntl(a2[9], 4, v12 | 0x800) >= 0 )
  {
    ptr = (void *)(*(int (__fastcall **)(_DWORD *))(a1 + 8))(a2);
    if ( ptr )
    {
      v15 = json_loads((int)ptr, 0, (json_error_t *)v9);
      if ( ptr )
        free(ptr);
      if ( v15 )
      {
        v2 = json_object_get(v15, "method");
        s1 = (char *)json_string_value(v2);
        if ( s1 && !strcasecmp(s1, "mining.set_extranonce") )
        {
          v13 = json_object_get(v15, "params");
          if ( !v13 )
            v13 = json_object_get(v15, "result");
          v17 = (*(int (__fastcall **)(int, _DWORD *, json_t *, _DWORD))(a1 + 52))(a1, a2, v13, 0);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "JSON decode failed(%d): %s", v9[0], &v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          174,
          "stratum_parse_subscribe_reply_2",
          31,
          221,
          100,
          v6);
      }
    }
  }
  if ( v17 )
  {
    dest[0] = 0;
    dest[1] = 0;
    *(_WORD *)s = 0;
    for ( i = 0; a2[19] > i; ++i )
    {
      sprintf(s, "%02x", *(unsigned __int8 *)(a2[20] + i));
      strcat((char *)dest, s);
    }
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "poolno=%d, extranonce_line: %s, pool->xnonce1_size: %d", *a2, dest, a2[19]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_parse_subscribe_reply_2",
      31,
      243,
      40,
      v6);
  }
  v12 = fcntl(a2[9], 3, 0);
  if ( v12 >= 0 )
  {
    v12 &= ~0x800u;
    if ( fcntl(a2[9], 4, v12) < 0 )
    {
      v17 = 0;
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "poolno=%d set block socket failed!", *a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        174,
        "stratum_parse_subscribe_reply_2",
        31,
        254,
        100,
        v6);
    }
  }
  else
  {
    v17 = 0;
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "poolno=%d get fnctl flag failed!", *a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_parse_subscribe_reply_2",
      31,
      249,
      100,
      v6);
  }
  if ( v15 )
    sub_6346C((int)v15);
  return v17;
}
