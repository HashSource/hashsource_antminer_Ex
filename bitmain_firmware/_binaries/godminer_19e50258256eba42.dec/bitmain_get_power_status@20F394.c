int bitmain_get_power_status()
{
  char v2[2048]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v3[8]; // [sp+814h] [bp-1008h] BYREF
  int v4; // [sp+1814h] [bp-8h]

  v4 = 0;
  if ( dword_C25FBC || (v4 = bitmain_power_open(), v4 >= 0) )
  {
    v4 = sub_20EEAC(dword_C25FB8);
    if ( v4 < 0 )
    {
      strcpy(v2, "can nont get power status");
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, v2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "bitmain_get_power_status",
        24,
        595,
        100,
        v3);
    }
    return v4;
  }
  else
  {
    snprintf(v2, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_power_status");
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, v2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_get_power_status",
      24,
      591,
      100,
      v3);
    return v4;
  }
}
