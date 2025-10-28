int __fastcall sub_87DD8(int a1, int a2, int a3, int a4)
{
  _BYTE v7[8]; // [sp+24h] [bp-1008h] BYREF
  int v8; // [sp+1024h] [bp-8h]

  v8 = 0;
  if ( a3 >= a4 || dword_5990B8 > 120 )
    dword_5990B8 = 0;
  if ( a3 < a4 && dword_5990B8 && a2 )
  {
    v8 += 10 * (20 * (a4 - a3 + 10) / 100);
    ++dword_5990B8;
  }
  if ( a2 <= 0 && dword_5990B8 )
  {
    v8 = 20;
    ++dword_5990B8;
  }
  V_LOCK();
  logfmt_raw(v7, 0x1000u, 0, "initial_cnt:%d, temp_max:%d, target_temp:%d, voltage_bias:%d", dword_5990B8, a3, a4, v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "calc_voltage_bias_kas_2380",
    26,
    117,
    20,
    v7);
  return v8;
}
