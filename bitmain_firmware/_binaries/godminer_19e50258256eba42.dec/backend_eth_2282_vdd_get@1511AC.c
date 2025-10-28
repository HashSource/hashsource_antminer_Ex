int __fastcall backend_eth_2282_vdd_get(int a1, char a2, unsigned __int16 *a3)
{
  int mps_rail1_voltage; // r3

  *a3 = 0;
  switch ( a2 )
  {
    case 0:
      mps_rail1_voltage = get_mps_rail1_voltage(a1, 1, a3);
      break;
    case 1:
    case 2:
      mps_rail1_voltage = get_mps_rail1_voltage(a1, 2, a3);
      break;
    case 3:
    case 4:
      mps_rail1_voltage = get_mps_rail1_voltage(a1, 3, a3);
      break;
    case 5:
      mps_rail1_voltage = get_mps_rail1_voltage(a1, 4, a3);
      break;
    default:
      mps_rail1_voltage = -1;
      break;
  }
  return mps_rail1_voltage;
}
