int bitmain_get_sample_voltage()
{
  int result; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // [sp+10h] [bp-1814h] BYREF
  __int16 v6; // [sp+14h] [bp-1810h]
  _DWORD v7[2]; // [sp+18h] [bp-180Ch] BYREF
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_18D94C || sub_B3474() >= 0 )
  {
    v7[1] = 0;
    v7[0] = 0;
    v5 = 67414613;
    v6 = 8;
    result = sub_B2AE8(dword_18D948, (unsigned __int8 *)&v5, 6u, (unsigned __int8 *)v7, 8u);
    if ( result )
    {
      strcpy(s, "get sample N failed");
      V_LOCK(*(_DWORD *)"get sample N failed");
      v3 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v3);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "_bitmain_get_sample_N",
        21,
        459,
        100,
        v9);
      strcpy(s, "can nont get sample voltage");
      V_LOCK(*(_DWORD *)"ple voltage");
      v4 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v4);
      return zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
               176,
               "bitmain_get_sample_voltage",
               26,
               571,
               100,
               v9);
    }
  }
  else
  {
    v1 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_get_sample_voltage");
    V_LOCK(v1);
    v2 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v2);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
             176,
             "bitmain_get_sample_voltage",
             26,
             567,
             100,
             v9);
  }
  return result;
}
