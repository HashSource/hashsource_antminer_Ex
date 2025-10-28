int __fastcall sub_78488(int a1, int a2, int a3, int a4)
{
  _BYTE v7[8]; // [sp+24h] [bp-1008h] BYREF
  int v8; // [sp+1024h] [bp-8h]

  v8 = 0;
  if ( a3 >= a4 || dword_598BC0 > 120 )
    dword_598BC0 = 0;
  if ( dword_598BC0 )
  {
    if ( a2 <= 0 )
      v8 = 40;
    if ( a3 < a4 && a2 )
      v8 = 20;
    ++dword_598BC0;
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "initial_cnt:%d, temp_max:%d, target_temp:%d, voltage_bias:%d", dword_598BC0, a3, a4, v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/dash_1766/machine_runtime_dash_1766.c",
    181,
    "calc_voltage_bias_dash_1766",
    27,
    72,
    20,
    v7);
  return v8;
}
