__int64 read_version_file()
{
  _BYTE v1[16]; // [sp+14h] [bp-1110h] BYREF
  char s[256]; // [sp+1014h] [bp-110h] BYREF
  FILE *stream; // [sp+1114h] [bp-10h]
  signed int v4; // [sp+1118h] [bp-Ch]
  char *v5; // [sp+111Ch] [bp-8h]

  stream = fopen((const char *)opt_version_path, "rb");
  memset(s, 0, sizeof(s));
  v4 = 0;
  v5 = 0;
  if ( stream )
  {
    v4 = fread(s, 1u, 0x100u, stream);
    if ( v4 > 0 )
    {
      v5 = strchr(s, 10);
      if ( v5 )
      {
        memcpy(g_miner_compiletime, s, v5 - s);
        strcpy(s, v5 + 1);
        v5 = strchr(s, 10);
        if ( v5 )
          memcpy(g_miner_type, s, v5 - s);
        else
          strcpy(g_miner_type, s);
      }
      else
      {
        strcpy(g_miner_compiletime, s);
      }
      if ( g_miner_compiletime[strlen(g_miner_compiletime) - 1] == 10 )
        g_miner_compiletime[strlen(g_miner_compiletime) - 1] = 0;
      if ( g_miner_compiletime[strlen(g_miner_compiletime) - 1] == 13 )
        g_miner_compiletime[strlen(g_miner_compiletime) - 1] = 0;
      if ( g_miner_type[strlen(g_miner_type) - 1] == 10 )
        g_miner_type[strlen(g_miner_type) - 1] = 0;
      if ( g_miner_type[strlen(g_miner_type) - 1] == 13 )
        g_miner_type[strlen(g_miner_type) - 1] = 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Read miner version file %s error %d", opt_version_path, v4);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "read_version_file",
        17,
        550,
        100,
        v1);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "Open miner version file %s error", opt_version_path);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "read_version_file",
      17,
      545,
      100,
      v1);
  }
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "Miner compile time: %s type: %s", g_miner_compiletime, g_miner_type);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/god-miner.c",
           139,
           "read_version_file",
           17,
           585,
           60,
           v1);
}
