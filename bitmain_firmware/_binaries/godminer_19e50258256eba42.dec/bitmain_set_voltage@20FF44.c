int bitmain_set_voltage()
{
  char v2[12]; // [sp+18h] [bp-180Ch] BYREF
  _BYTE v3[12]; // [sp+818h] [bp-100Ch] BYREF
  int v4; // [sp+1818h] [bp-Ch]
  unsigned int v5; // [sp+181Ch] [bp-8h]

  v4 = 0;
  v5 = 0;
  if ( dword_C25FBC || (v4 = bitmain_power_open(), v4 >= 0) )
  {
    v5 = bitmain_convert_V_to_N();
    if ( v5 < 0x100 )
      return sub_20E6E0(dword_C25FB8, v5);
    else
      return -2147482879;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_set_voltage",
      19,
      718,
      100,
      v3);
    return v4;
  }
}
