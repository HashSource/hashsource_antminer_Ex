int __fastcall set_working_voltage(char a1)
{
  _BYTE v3[8]; // [sp+1Ch] [bp-1008h] BYREF
  __int16 v4; // [sp+101Eh] [bp-6h]

  v4 = 0;
  if ( a1 )
    v4 = set_voltage_by_steps(dword_5AD5FC, byte_5AD5F0, 0x64u);
  else
    v4 = set_voltage(dword_5AD5FC, byte_5AD5F0);
  if ( !v4 )
    return 0;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "set_working_voltage error!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/power_api.c",
    150,
    "set_working_voltage",
    19,
    545,
    100,
    v3);
  return -1;
}
