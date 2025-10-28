int __fastcall sub_A1CA0(int result, int a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  _BYTE v7[4100]; // [sp+818h] [bp-1004h] BYREF

  v5 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, &v5);
    if ( result == 1 )
    {
      v3 = snprintf(s, 0x800u, "remove %d from flicker list", v5);
      V_LOCK(v3);
      v4 = logfmt_raw((int)v7, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/platform/7020/7020_ui.c",
        169,
        "remove_port_form_gpio_map",
        25,
        215,
        20,
        v7);
      return remove_c_map(a2, &v5);
    }
  }
  return result;
}
