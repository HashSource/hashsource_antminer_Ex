int __fastcall set_voltage_base(int a1, int a2)
{
  char v2; // r0

  v2 = is_power_init();
  set_voltage(a2, v2);
  return 0;
}
