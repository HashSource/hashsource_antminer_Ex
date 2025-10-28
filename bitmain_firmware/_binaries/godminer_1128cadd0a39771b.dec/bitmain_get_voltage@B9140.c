void bitmain_get_voltage()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // [sp+10h] [bp-1814h] BYREF
  __int16 v5; // [sp+14h] [bp-1810h]
  _DWORD v6[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v8[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_16D65C || sub_B861C() >= 0 )
  {
    v6[1] = 0;
    v6[0] = 0;
    v4 = 50637397;
    v5 = 7;
    if ( sub_B7E38(dword_16D658, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)v6, 8u) )
    {
      strcpy(s, "get AD conversion N failed\n");
      V_LOCK(*(_DWORD *)"n N failed\n");
      v2 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "_bitmain_get_AD_conversion_N",
        28,
        313,
        100,
        v8);
      strcpy(s, "can nont get voltage\n");
      V_LOCK(*(_DWORD *)"tage\n");
      v3 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/power/bitmain_power_APW9.c",
        166,
        "bitmain_get_voltage",
        19,
        469,
        100,
        v8);
    }
    else
    {
      bitmain_convert_N_to_V();
    }
  }
  else
  {
    v0 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    V_LOCK(v0);
    v1 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/power/bitmain_power_APW9.c",
      166,
      "bitmain_get_voltage",
      19,
      465,
      100,
      v8);
  }
}
