int bitmain_power_version()
{
  int v0; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // [sp+10h] [bp-1810h] BYREF
  __int16 v6; // [sp+14h] [bp-180Ch]
  int v7; // [sp+18h] [bp-1808h] BYREF
  int v8; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v10[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_18D94C || (v0 = bitmain_power_open(), v0 >= 0) )
  {
    v8 = 0;
    v7 = 0;
    v5 = 33860181;
    v6 = 6;
    if ( sub_B2AF8(dword_18D948, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed");
      V_LOCK(*(_DWORD *)"n failed");
      v4 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "_bitmain_get_power_version",
        26,
        300,
        100,
        v10);
    }
    else
    {
      v0 = (unsigned __int16)v8;
      if ( (_WORD)v8 )
        dword_18D950 = (unsigned __int16)v8;
    }
  }
  else
  {
    v2 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_version");
    V_LOCK(v2);
    v3 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "bitmain_power_version",
      21,
      681,
      100,
      v10);
  }
  return v0;
}
