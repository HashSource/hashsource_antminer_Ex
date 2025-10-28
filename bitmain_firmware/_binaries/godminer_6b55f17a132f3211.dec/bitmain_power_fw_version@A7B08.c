int bitmain_power_fw_version()
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

  if ( dword_177554 || (v0 = sub_A7360(), v0 >= 0) )
  {
    v8 = 0;
    v7 = 0;
    v5 = 17082965;
    v6 = 5;
    if ( sub_A6AA8(dword_177550, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)&v7, 8u) )
    {
      v0 = -2147482880;
      strcpy(s, "get power version failed");
      V_LOCK(*(_DWORD *)"n failed");
      v4 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v4);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        172,
        "_bitmain_get_power_fw_version",
        29,
        227,
        100,
        v10);
    }
    else
    {
      return (unsigned __int16)v8;
    }
  }
  else
  {
    v2 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
    V_LOCK(v2);
    v3 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v3);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      172,
      "bitmain_power_fw_version",
      24,
      642,
      100,
      v10);
  }
  return v0;
}
