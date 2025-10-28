int __fastcall sub_26438(int a1)
{
  int v1; // r0
  int v2; // r8
  int v3; // r0
  int config; // r0
  int v5; // r0
  _BYTE v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/api_new.c",
    140,
    "reload_config",
    13,
    1061,
    20,
    v7);
  v2 = strcmp(s1, "127.0.0.1");
  if ( v2 )
    return -2147483643;
  V_LOCK(0);
  v3 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/api_new.c",
    140,
    "load_default_config_without_restart",
    35,
    1041,
    20,
    v7);
  config = default_config;
  if ( default_config )
  {
    config = access((const char *)default_config, 4);
    if ( !config )
    {
      config = judge_load_config(default_config);
      if ( (config & 1) != 0 )
        config = reload_pool();
    }
  }
  V_LOCK(config);
  v5 = logfmt_raw((int)v7, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/api_new.c",
    140,
    "reload_config",
    13,
    1068,
    20,
    v7);
  return v2;
}
