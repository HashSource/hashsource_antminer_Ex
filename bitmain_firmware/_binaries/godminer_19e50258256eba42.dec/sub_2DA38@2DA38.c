int sub_2DA38()
{
  int result; // r0
  _DWORD v1[1025]; // [sp+10h] [bp-100Ch] BYREF
  int v2; // [sp+1014h] [bp-8h]

  v1[1024] = 0;
  v2 = 0;
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "START %s", "load_default_config_without_restart");
  V_UNLOCK();
  result = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/api_new.c",
             137,
             "load_default_config_without_restart",
             35,
             1400,
             20,
             v1);
  if ( default_config )
  {
    result = access((const char *)default_config, 4);
    if ( !result )
    {
      result = judge_load_config((const char *)default_config);
      v2 = result;
    }
  }
  if ( (v2 & 1) != 0 )
    return reload_pool();
  return result;
}
