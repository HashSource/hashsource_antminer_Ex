int __fastcall get_working_voltage_base(int a1)
{
  int v1; // r3
  _BYTE v4[24]; // [sp+24h] [bp-1018h] BYREF
  signed int v5; // [sp+1024h] [bp-18h]
  signed int temp; // [sp+1028h] [bp-14h]
  int working_voltage; // [sp+102Ch] [bp-10h]
  int v8; // [sp+1030h] [bp-Ch]
  int v9; // [sp+1034h] [bp-8h]

  v9 = 0;
  v8 = 0;
  temp = get_temp(1);
  v5 = get_temp(2);
  working_voltage = get_working_voltage();
  V_LOCK();
  logfmt_raw(
    v4,
    0x1000u,
    0,
    "temp_min:%d, temp_max:%d, working_voltage:%d, compensate:%d, bias:%d",
    temp,
    v5,
    working_voltage,
    0,
    0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "get_working_voltage_base",
    24,
    375,
    20,
    v4);
  v1 = *(_DWORD *)(a1 + 96);
  if ( working_voltage + v8 + v9 < v1 )
    return working_voltage + v8 + v9;
  return v1;
}
