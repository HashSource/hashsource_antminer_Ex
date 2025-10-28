int __fastcall set_check_asic_voltage(int a1)
{
  int v2; // r3
  int v3; // r1
  int result; // r0
  int v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = 27176;
  HIWORD(v2) = (unsigned int)"voltage_by_steps to %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = 26816;
  HIWORD(v3) = (unsigned int)"check_feedback_voltage" >> 16;
  zlog(g_zc, v3, 153, "set_check_asic_voltage", 22, 557, 40, v7);
  if ( a1 )
    result = set_voltage_by_steps(dword_195C24, (unsigned __int8)byte_195C10, 0x64u);
  else
    result = set_voltage(dword_195C24, (unsigned __int8)byte_195C10);
  if ( result )
  {
    V_LOCK();
    LOWORD(v5) = 27200;
    HIWORD(v5) = (unsigned int)"set_check_asic_voltage" >> 16;
    logfmt_raw(v7, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 26816;
    HIWORD(v6) = (unsigned int)"check_feedback_voltage" >> 16;
    zlog(g_zc, v6, 153, "set_check_asic_voltage", 22, 565, 100, v7);
    return -1;
  }
  return result;
}
