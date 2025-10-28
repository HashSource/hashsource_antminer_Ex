int __fastcall get_working_voltage_base(int a1)
{
  int temp; // r8
  int v3; // r7
  int working_voltage; // r4
  int v5; // r3
  int v6; // r1
  int result; // r0
  char v8[4096]; // [sp+18h] [bp-1000h] BYREF

  temp = get_temp(1);
  v3 = get_temp(2);
  working_voltage = get_working_voltage();
  V_LOCK();
  LOWORD(v5) = -14444;
  HIWORD(v5) = (unsigned int)"t, and reboot system" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v5, temp, v3, working_voltage, 0, 0);
  V_UNLOCK();
  LOWORD(v6) = -14932;
  HIWORD(v6) = (unsigned int)"%d, set voltage to %d" >> 16;
  zlog(g_zc, v6, 169, "get_working_voltage_base", 24, 331, 20, v8);
  result = *(_DWORD *)(a1 + 96);
  if ( working_voltage < result )
    return working_voltage;
  return result;
}
