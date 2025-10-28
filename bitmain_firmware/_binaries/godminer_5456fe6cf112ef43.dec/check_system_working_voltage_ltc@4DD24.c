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
      switch ( dword_1663F8 )
      {
        case 1:
          return sub_4D62C();
        case 2:
          return sub_4D88C();
        case 3:
          return sub_4DAD8();
      }
    }
  }
  return result;
}
