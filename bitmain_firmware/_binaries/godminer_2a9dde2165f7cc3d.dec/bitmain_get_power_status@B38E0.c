int bitmain_get_power_status()
{
  int v0; // r5
  int v1; // r0
  int v2; // r0
  int v4; // r0
  int v5; // r0
  int v6; // [sp+10h] [bp-1814h] BYREF
  __int16 v7; // [sp+14h] [bp-1810h]
  int v8; // [sp+18h] [bp-180Ch] BYREF
  int v9; // [sp+1Ch] [bp-1808h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v11[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_18D94C || (v0 = sub_B3474(), v0 >= 0) )
  {
    v9 = 0;
    v8 = 0;
    v6 = 168077909;
    v7 = 14;
    if ( sub_B2AE8(dword_18D948, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u) )
    {
      strcpy(s, "get power status failed");
      V_LOCK(*(_DWORD *)" failed");
      v1 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v1);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "_bitmain_get_power_status",
        25,
        531,
        100,
        v11);
      strcpy(s, "can nont get power status");
      V_LOCK(*(_DWORD *)"er status");
      v2 = logfmt_raw((int)v11, 0x1000u);
      V_UNLOCK(v2);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "bitmain_get_power_status",
        24,
        585,
        100,
        v11);
      return -2147482880;
    }
    return (unsigned __int16)v9;
  }
  else
  {
    v4 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_power_status");
    V_LOCK(v4);
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "bitmain_get_power_status",
      24,
      581,
      100,
      v11);
  }
  return v0;
}
