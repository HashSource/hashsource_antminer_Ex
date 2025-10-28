int __fastcall sub_42020(int a1, char *a2)
{
  char *v2; // r3
  size_t v3; // r0
  int result; // r0
  _BYTE v7[8]; // [sp+1Ch] [bp-1008h] BYREF
  char *src; // [sp+101Ch] [bp-8h]

  src = strstr(a2, "://");
  if ( src )
    v2 = src + 3;
  else
    v2 = a2;
  src = v2;
  if ( v2 == a2 )
  {
    if ( *src )
    {
      if ( *(_DWORD *)(a1 + 12) )
        free(*(void **)(a1 + 12));
      v3 = strlen(src);
      *(_DWORD *)(a1 + 12) = malloc(v3 + 128);
      sprintf(*(char **)(a1 + 12), "stratum+tcp://%s", src);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "invalid URL -- '%s'", a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "setup_url",
        9,
        188,
        100,
        v7);
      if ( *(_DWORD *)(a1 + 12) )
        free(*(void **)(a1 + 12));
      *(_DWORD *)(a1 + 12) = strdup(byte_359954);
    }
  }
  else
  {
    if ( strncasecmp(a2, "http://", 7u) && strncasecmp(a2, "https://", 8u) && strncasecmp(a2, "stratum+tcp://", 0xEu) )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, "unknown protocol -- '%s'", a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "setup_url",
        9,
        179,
        100,
        v7);
    }
    if ( *(_DWORD *)(a1 + 12) )
      free(*(void **)(a1 + 12));
    *(_DWORD *)(a1 + 12) = strdup(a2);
    strcpy((char *)(*(_DWORD *)(a1 + 12) + src - a2), src);
  }
  result = strncasecmp(*(const char **)(a1 + 12), "stratum", 7u);
  *(_BYTE *)(a1 + 28) = result == 0;
  return result;
}
