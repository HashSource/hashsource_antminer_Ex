int __fastcall set_check_asic_voltage(char a1)
{
  _BYTE v4[8]; // [sp+1Ch] [bp-1008h] BYREF
  int v5; // [sp+101Ch] [bp-8h]

  v5 = 0;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "set_check_asic_voltage");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "set_check_asic_voltage",
    22,
    561,
    40,
    v4);
  if ( a1 )
    v5 = set_voltage_by_steps(dword_5AD604, byte_5AD5F0, 0x64u);
  else
    v5 = set_voltage(dword_5AD604, byte_5AD5F0);
  if ( !v5 )
    return 0;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "set_check_asic_voltage error!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "set_check_asic_voltage",
    22,
    569,
    100,
    v4);
  return -1;
}
