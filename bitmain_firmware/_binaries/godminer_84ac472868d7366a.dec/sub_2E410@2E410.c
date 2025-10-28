bool __fastcall sub_2E410(void **a1, _BYTE *a2, char *haystack)
{
  char *v6; // r0
  const char *v7; // r6
  int v8; // r0
  int v9; // r0
  char *v10; // r5
  _BOOL4 result; // r0
  size_t v12; // r0
  char *v13; // r0
  int v14; // r0
  _BYTE v15[4096]; // [sp+10h] [bp-1000h] BYREF

  v6 = strstr(haystack, "://");
  if ( v6 )
  {
    v7 = v6 + 3;
    if ( haystack != v6 + 3 )
    {
      if ( strncasecmp(haystack, "http://", 7u) )
      {
        if ( strncasecmp(haystack, "https://", 8u) )
        {
          v8 = strncasecmp(haystack, "stratum+tcp://", 0xEu);
          if ( v8 )
          {
            V_LOCK(v8);
            v9 = logfmt_raw((int)v15, 0x1000u);
            V_UNLOCK(v9);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/pool.c",
              127,
              "setup_url",
              9,
              173,
              100,
              v15);
          }
        }
      }
      if ( *a1 )
        free(*a1);
      v10 = _strdup(haystack);
      *a1 = v10;
      strcpy(&v10[v7 - haystack], v7);
      goto LABEL_10;
    }
  }
  else
  {
    v7 = haystack;
  }
  if ( *v7 )
  {
    if ( *a1 )
      free(*a1);
    v12 = strlen(v7);
    v13 = (char *)malloc(v12 + 128);
    *a1 = v13;
    sprintf(v13, "stratum+tcp://%s", v7);
    v10 = (char *)*a1;
  }
  else
  {
    V_LOCK(v6);
    v14 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/pool.c",
      127,
      "setup_url",
      9,
      182,
      100,
      v15);
    if ( *a1 )
      free(*a1);
    v10 = (char *)calloc(1u, 1u);
    *a1 = v10;
  }
LABEL_10:
  result = strncasecmp(v10, "stratum", 7u) == 0;
  *a2 = result;
  return result;
}
