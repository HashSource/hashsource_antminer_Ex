void bitmain_get_voltage()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // [sp+10h] [bp-1810h] BYREF
  __int16 v5; // [sp+14h] [bp-180Ch]
  _DWORD v6[2]; // [sp+18h] [bp-1808h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v8[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_177554 || sub_A7360() >= 0 )
  {
    v6[1] = 0;
    v6[0] = 0;
    v4 = 50637397;
    v5 = 7;
    if ( sub_A6AA8(dword_177550, (unsigned __int8 *)&v4, 6u, (unsigned __int8 *)v6, 8u) )
    {
      strcpy(s, "get AD conversion N failed");
      V_LOCK(*(_DWORD *)"n N failed");
      v2 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        172,
        "_bitmain_get_AD_conversion_N",
        28,
        332,
        100,
        v8);
      strcpy(s, "can nont get voltage");
      V_LOCK(*(_DWORD *)"tage");
      v3 = logfmt_raw((int)v8, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        172,
        "bitmain_get_voltage",
        19,
        667,
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
    v0 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_voltage");
    V_LOCK(v0);
    v1 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      172,
      "bitmain_get_voltage",
      19,
      663,
      100,
      v8);
  }
}
