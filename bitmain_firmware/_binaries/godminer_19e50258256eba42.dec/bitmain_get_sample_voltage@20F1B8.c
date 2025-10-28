void bitmain_get_sample_voltage()
{
  char v0[2048]; // [sp+14h] [bp-1808h] BYREF
  _BYTE v1[8]; // [sp+814h] [bp-1008h] BYREF
  int v2; // [sp+1814h] [bp-8h]

  v2 = 0;
  if ( dword_C25FBC || (v2 = bitmain_power_open(), v2 >= 0) )
  {
    v2 = sub_20E9CC(dword_C25FB8);
    if ( v2 >= 0 )
    {
      sub_20F0E8();
    }
    else
    {
      strcpy(v0, "can nont get sample voltage");
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, v0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "bitmain_get_sample_voltage",
        26,
        581,
        100,
        v1);
    }
  }
  else
  {
    snprintf(v0, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_sample_voltage");
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, v0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "bitmain_get_sample_voltage",
      26,
      577,
      100,
      v1);
  }
}
