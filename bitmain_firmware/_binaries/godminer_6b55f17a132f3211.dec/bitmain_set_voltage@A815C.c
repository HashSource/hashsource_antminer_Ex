int bitmain_set_voltage()
{
  int v0; // r5
  unsigned int v1; // r0
  int v3; // r0
  int v4; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  _BYTE v6[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_177554 || (v0 = sub_A7360(), v0 >= 0) )
  {
    v1 = bitmain_convert_V_to_N();
    if ( v1 > 0xFF )
      return -2147482879;
    else
      return sub_A704C(dword_177550, (unsigned __int8)v1);
  }
  else
  {
    v3 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage");
    V_LOCK(v3);
    v4 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      172,
      "bitmain_set_voltage",
      19,
      679,
      100,
      v6);
  }
  return v0;
}
