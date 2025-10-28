int __fastcall bitmain_set_watchdog(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v9[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_18D94C )
  {
    v3 = sub_B3474();
    if ( v3 < 0 )
    {
      v4 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_watchdog");
      V_LOCK(v4);
      v5 = logfmt_raw((int)v9, 0x1000u);
      V_UNLOCK(v5);
      v6 = 595;
LABEL_7:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "bitmain_set_watchdog",
        20,
        v6,
        100,
        v9);
      return v3;
    }
  }
  result = sub_B2F7C(dword_18D948, a1 == 1);
  v3 = result;
  if ( result < 0 )
  {
    strcpy(s, "can nont set power watchdog");
    V_LOCK(*(_DWORD *)"er watchdog");
    v7 = logfmt_raw((int)v9, 0x1000u);
    V_UNLOCK(v7);
    v6 = 607;
    goto LABEL_7;
  }
  return result;
}
