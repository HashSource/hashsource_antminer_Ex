int __fastcall backend_eth_2282_vdd_set(int a1, char a2, unsigned __int16 a3)
{
  int v3; // r3
  int v5; // [sp+Ch] [bp-8h]

  v5 = -1;
  switch ( a2 )
  {
    case 0:
      v5 = set_mps_rail1_voltage(a1, 1, a3);
      goto LABEL_7;
    case 1:
    case 3:
      goto LABEL_7;
    case 2:
      v5 = set_mps_rail1_voltage(a1, 2, a3);
      goto LABEL_7;
    case 4:
      v5 = set_mps_rail1_voltage(a1, 3, a3);
      goto LABEL_7;
    case 5:
      v5 = set_mps_rail1_voltage(a1, 4, a3);
LABEL_7:
      v3 = v5;
      break;
    default:
      v3 = 0;
      break;
  }
  return v3;
}
