int __fastcall bitmain_set_voltage_by_n(unsigned __int8 a1)
{
  char v4[8]; // [sp+1Ch] [bp-1808h] BYREF
  _BYTE v5[8]; // [sp+81Ch] [bp-1008h] BYREF
  int v6; // [sp+181Ch] [bp-8h]

  v6 = 0;
  if ( dword_C25FBC )
    return sub_20E6E0(dword_C25FB8, a1);
  v6 = bitmain_power_open();
  if ( v6 >= 0 )
    return sub_20E6E0(dword_C25FB8, a1);
  snprintf(v4, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage_by_n");
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/power/bitmain_power_APW9.c",
    173,
    "bitmain_set_voltage_by_n",
    24,
    731,
    100,
    v5);
  return v6;
}
