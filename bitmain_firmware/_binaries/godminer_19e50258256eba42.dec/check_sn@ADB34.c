int __fastcall check_sn(int a1)
{
  size_t v2; // r0
  _BYTE v4[32]; // [sp+1Ch] [bp-1020h] BYREF
  char ptr[16]; // [sp+101Ch] [bp-20h] BYREF
  __int16 v6; // [sp+102Ch] [bp-10h]
  char *v7; // [sp+1030h] [bp-Ch]
  FILE *stream; // [sp+1034h] [bp-8h]

  memset(ptr, 0, sizeof(ptr));
  v6 = 0;
  stream = 0;
  if ( a1 )
    g_miner_sn_file_path = a1;
  else
    g_miner_sn_file_path = (int)"/config/sn";
  stream = fopen((const char *)g_miner_sn_file_path, "r");
  if ( stream )
  {
    if ( fread(ptr, 0x11u, 1u, stream) )
    {
      v7 = strstr(ptr, "\r\n");
      if ( v7 )
        strncpy(g_miner_sn, ptr, v7 - ptr);
      else
        strcpy(g_miner_sn, ptr);
      if ( g_miner_sn[strlen(g_miner_sn) - 1] == 10 )
        g_miner_sn[strlen(g_miner_sn) - 1] = 0;
      if ( g_miner_sn[strlen(g_miner_sn) - 1] == 13 )
        g_miner_sn[strlen(g_miner_sn) - 1] = 0;
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_sn.c",
        149,
        "check_sn",
        8,
        51,
        60,
        v4);
      fclose(stream);
      return 0;
    }
    else
    {
      if ( ptr[0] )
      {
        V_LOCK();
        v2 = strlen(ptr);
        logfmt_raw(v4, 0x1000u, 0, "miner sn: not support length %d:%s", v2, ptr);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_sn.c",
          149,
          "check_sn",
          8,
          55,
          100,
          v4);
      }
      else
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "miner sn: is NULL");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_sn.c",
          149,
          "check_sn",
          8,
          57,
          100,
          v4);
      }
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_sn.c",
      149,
      "check_sn",
      8,
      23,
      100,
      v4);
    return 2;
  }
}
