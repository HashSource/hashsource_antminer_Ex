int __fastcall sub_986CC(int a1, int a2, int a3, int a4)
{
  _BYTE v8[8]; // [sp+24h] [bp-1008h] BYREF
  int v9; // [sp+1024h] [bp-8h]

  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "calc_voltage_bias_ltc_1489() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "calc_voltage_bias_ltc_1489",
    26,
    13,
    40,
    v8);
  v9 = 0;
  if ( a3 >= a4 || dword_5993B8 > 120 )
    dword_5993B8 = 0;
  if ( a3 < a4 && dword_5993B8 && a2 )
  {
    v9 += 10 * (20 * (a4 - a3 + 10) / 100);
    ++dword_5993B8;
  }
  if ( a2 <= 0 && dword_5993B8 )
  {
    v9 = 20;
    ++dword_5993B8;
  }
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "calc_voltage_bias_ltc_1489() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c",
    179,
    "calc_voltage_bias_ltc_1489",
    26,
    33,
    40,
    v8);
  return v9;
}
