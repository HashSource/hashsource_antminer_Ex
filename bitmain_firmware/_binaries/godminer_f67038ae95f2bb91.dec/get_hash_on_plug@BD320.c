int get_hash_on_plug()
{
  int v0; // r4
  int v1; // r8
  int v2; // r5
  int v3; // r0
  int v4; // r7
  int v6; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v8[4100]; // [sp+818h] [bp-1004h] BYREF

  v0 = 0;
  v6 = 0;
  if ( platform_inited[0] )
  {
    v1 = hal_chain_max_num();
    if ( v1 <= 0 )
      return 0;
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v6 = 0;
        v3 = hal_chain_plug_addr(v0);
        v4 = v3;
        if ( v3 < 0 )
          break;
        gpio_export(v3);
        gpio_direction(v4, 0);
        gpio_read(v4, &v6);
        v2 |= v6 << v0++;
        if ( v1 == v0 )
          return v2;
      }
      snprintf(s, 0x800u, "fail to get slot for chain %d", v0);
      V_LOCK();
      ++v0;
      logfmt_raw(v8, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
        177,
        "get_hash_on_plug",
        16,
        326,
        80,
        v8);
    }
    while ( v1 != v0 );
    return v2;
  }
  else
  {
    strcpy(s, "platform not inited");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/platform/7020/7020_common.c",
      177,
      "get_hash_on_plug",
      16,
      315,
      100,
      v8);
    return 0;
  }
}
