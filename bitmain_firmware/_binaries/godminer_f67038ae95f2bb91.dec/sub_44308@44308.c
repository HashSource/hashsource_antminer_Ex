int __fastcall sub_44308(int a1, int a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v5; // r0
  char *v6; // r4
  void *v7; // r0
  size_t v8; // r6
  void *v9; // r0
  _WORD *v10; // r4
  void *v11; // r3
  char *v12; // r6
  char *v13; // r4
  int v14; // t1
  char s[4]; // [sp+14h] [bp-1010h] BYREF
  _DWORD v17[2]; // [sp+18h] [bp-100Ch] BYREF
  char v18[4100]; // [sp+20h] [bp-1004h] BYREF

  v5 = json_array_get(a3, a4);
  v6 = (char *)json_string_value(v5);
  if ( v6 )
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    v7 = *(void **)(a2 + 80);
    if ( v7 )
    {
      free(v7);
      *(_DWORD *)(a2 + 80) = 0;
    }
    v8 = strlen(v6) >> 1;
    *(_DWORD *)(a2 + 76) = v8;
    v9 = calloc(1u, v8);
    *(_DWORD *)(a2 + 80) = v9;
    if ( v9 )
    {
      hex2bin((int)v9, (unsigned __int8 *)v6, v8);
      v10 = *(_WORD **)(a2 + 1588);
      if ( v10 || (v10 = calloc(1u, 0x6Bu), (*(_DWORD *)(a2 + 1588) = v10) != 0) )
      {
        v10[52] = 0;
        v11 = v10 + 52;
        *((_BYTE *)v10 + 106) = 0;
        v12 = (char *)v10 + 103;
        v13 = (char *)(v10 + 53);
        memcpy(v11, *(const void **)(a2 + 80), *(_DWORD *)(a2 + 76));
        v17[0] = 0;
        *(_WORD *)s = 0;
        v17[1] = 0;
        do
        {
          v14 = (unsigned __int8)*++v12;
          sprintf(s, "%02x", v14);
          strcat((char *)v17, s);
        }
        while ( v12 != v13 );
        V_LOCK();
        logfmt_raw(v18, 0x1000u, 0, "pool %d extranonce_line1: %s", *(_DWORD *)a2, v17);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
          177,
          "stratum_parse_extranonce_eth_2282",
          33,
          825,
          40,
          v18);
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
        return 1;
      }
      else
      {
        printf(aInvalidPointer, "work->private");
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, "Failed to alloc xnonce1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
        177,
        "stratum_parse_extranonce_eth_2282",
        33,
        806,
        100,
        v18);
      pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
      return 0;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Failed to get extranonce1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      177,
      "stratum_parse_extranonce_eth_2282",
      33,
      796,
      100,
      v18);
    return 0;
  }
}
