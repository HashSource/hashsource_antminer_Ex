int bitmain_power_fw_version()
{
  int v0; // r5
  int v1; // r3
  int v3; // [sp+10h] [bp-1810h] BYREF
  __int16 v4; // [sp+14h] [bp-180Ch]
  int v5; // [sp+18h] [bp-1808h] BYREF
  int v6; // [sp+1Ch] [bp-1804h]
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v8[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_1B36F4 || (v0 = sub_C7E74(), v0 >= 0) )
  {
    v6 = 0;
    v5 = 0;
    v3 = 17082965;
    v4 = 5;
    if ( sub_C74E8(dword_1B36F0, (unsigned __int8 *)&v3, 6u, (unsigned __int8 *)&v5, 8u) )
    {
      strcpy(s, "get power version failed");
      V_LOCK();
      logfmt_raw(v8, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "_bitmain_get_power_fw_version",
        29,
        256,
        100,
        v8);
      v1 = -2147482880;
      v0 = -2147482880;
    }
    else
    {
      v0 = (unsigned __int16)v6;
      v1 = (unsigned __int16)v6;
    }
    dword_1B36FC = v1;
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_fw_version");
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "bitmain_power_fw_version",
      24,
      671,
      100,
      v8);
  }
  return v0;
}
