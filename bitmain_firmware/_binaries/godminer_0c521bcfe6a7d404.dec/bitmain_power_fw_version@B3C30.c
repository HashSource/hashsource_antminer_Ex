int bitmain_power_fw_version()
{
  int v0; // r5
  int v1; // r3
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // [sp+10h] [bp-1810h] BYREF
  __int16 v7; // [sp+14h] [bp-180Ch]
  int v8; // [sp+18h] [bp-1808h] BYREF
  int v9; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v11[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_18D94C || (v0 = sub_B3484(), v0 >= 0) )
  {
    v9 = 0;
    v8 = 0;
    v6 = 17082965;
    v7 = 5;
    if ( sub_B2AF8(dword_18D948, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u) )
    {
      strcpy(s, "get power version failed");
      V_LOCK(*(_DWORD *)"n failed");
      v5 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "_bitmain_get_power_fw_version",
        29,
        255,
        100,
        v11);
      v1 = -2147482880;
      v0 = -2147482880;
    }
    else
    {
      v0 = (unsigned __int16)v9;
      v1 = (unsigned __int16)v9;
    }
    dword_18D954 = v1;
  }
  else
  {
    v3 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
    V_LOCK(v3);
    v4 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "bitmain_power_fw_version",
      24,
      670,
      100,
      v11);
  }
  return v0;
}
