int check_system_working_voltage_ltc()
{
  double v0; // d0
  int result; // r0

  result = is_miner_time_start();
  if ( result )
  {
    result = get_miner_elapsed_time();
    if ( (int)v0 > 59 )
    {
      switch ( dword_167408 )
      {
        case 1:
          return sub_4DD7C();
        case 2:
          return sub_4DFDC();
        case 3:
          return sub_4E228();
      }
    }
  }
  return result;
}
