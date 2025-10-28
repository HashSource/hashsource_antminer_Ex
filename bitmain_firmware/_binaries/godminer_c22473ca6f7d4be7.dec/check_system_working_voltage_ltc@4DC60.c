time_t check_system_working_voltage_ltc()
{
  double v0; // d0
  time_t result; // r0

  result = is_miner_time_start();
  if ( result )
  {
    result = get_miner_elapsed_time();
    if ( (int)v0 > 59 )
    {
      switch ( dword_1663F0 )
      {
        case 1:
          return sub_4D568();
        case 2:
          return sub_4D7C8();
        case 3:
          return sub_4DA14();
      }
    }
  }
  return result;
}
