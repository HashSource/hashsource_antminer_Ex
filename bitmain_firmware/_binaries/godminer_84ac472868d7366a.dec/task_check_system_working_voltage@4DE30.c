int task_check_system_working_voltage()
{
  int result; // r0

  result = is_power_init();
  if ( result )
  {
    result = is_power_on();
    if ( result )
    {
      if ( opt_algo == 6 )
        return check_system_working_voltage_ltc();
    }
  }
  return result;
}
