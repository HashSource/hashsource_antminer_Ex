int __fastcall get_hash_on_plug(int a1)
{
  int v1; // r4
  int v2; // r8
  int v3; // r5
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v8; // r0
  int v9; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v11[4100]; // [sp+818h] [bp-1004h] BYREF

  v1 = 0;
  v9 = 0;
  if ( platform_inited[0] )
  {
    v2 = hal_chain_max_num(a1);
    if ( v2 <= 0 )
      return 0;
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v9 = 0;
        v4 = hal_chain_plug_addr(v1);
        if ( v4 < 0 )
          break;
        gpio_export();
        gpio_direction(v4, 0);
        gpio_read(v4, &v9);
        v3 |= v9 << v1++;
        if ( v2 == v1 )
          return v3;
      }
      v5 = snprintf(s, 0x800u, "fail to get slot for chain %d", v1);
      V_LOCK(v5);
      ++v1;
      v6 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_common.c",
        173,
        "get_hash_on_plug",
        16,
        326,
        80,
        v11);
    }
    while ( v2 != v1 );
    return v3;
  }
  else
  {
    strcpy(s, "platform not inited");
    V_LOCK(*(_DWORD *)"platform not inited");
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/platform/7020/7020_common.c",
      173,
      "get_hash_on_plug",
      16,
      315,
      100,
      v11);
    return 0;
  }
}
