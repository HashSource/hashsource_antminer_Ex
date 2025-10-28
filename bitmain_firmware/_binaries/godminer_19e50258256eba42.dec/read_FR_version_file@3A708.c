__int64 read_FR_version_file()
{
  _BYTE v1[12]; // [sp+10h] [bp-110Ch] BYREF
  _BYTE s[256]; // [sp+1010h] [bp-10Ch] BYREF
  FILE *stream; // [sp+1110h] [bp-Ch]
  signed int v4; // [sp+1114h] [bp-8h]

  stream = fopen(opt_FR_version_path, "rb");
  memset(s, 0, sizeof(s));
  v4 = 0;
  if ( stream )
  {
    v4 = fread(s, 1u, 0x100u, stream);
    if ( v4 > 0 )
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Firmware version: %s", s);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/god-miner.c",
               139,
               "read_FR_version_file",
               20,
               601,
               60,
               v1);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "Read miner version file %s error %d", opt_FR_version_path, v4);
      V_UNLOCK();
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmin"
               "er-origin_godminer-new/god-miner.c",
               139,
               "read_FR_version_file",
               20,
               599,
               100,
               v1);
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "Open miner version file %s error", opt_FR_version_path);
    V_UNLOCK();
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/god-miner.c",
             139,
             "read_FR_version_file",
             20,
             594,
             100,
             v1);
  }
}
