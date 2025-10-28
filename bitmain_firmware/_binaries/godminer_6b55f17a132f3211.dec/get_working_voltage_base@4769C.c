int __fastcall get_working_voltage_base(int a1)
{
  int working_voltage; // r4
  int v3; // r0
  int result; // r0
  _BYTE v5[4096]; // [sp+18h] [bp-1000h] BYREF

  get_temp(1);
  get_temp(2);
  working_voltage = get_working_voltage();
  V_LOCK(working_voltage);
  v3 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/machine_runtime/machine_runtime_base.c",
    165,
    "get_working_voltage_base",
    24,
    285,
    20,
    v5);
  result = *(_DWORD *)(a1 + 84);
  if ( working_voltage < result )
    return working_voltage;
  return result;
}
