int __fastcall backend_eth_2282_mps_result_get(int a1, char a2)
{
  int v2; // r3
  unsigned __int16 v4; // [sp+Eh] [bp-6h] BYREF

  v4 = 0;
  switch ( a2 )
  {
    case 0:
    case 3:
    case 4:
    case 5:
      get_mps_result(a1, 1, &v4);
      goto LABEL_5;
    case 1:
    case 2:
      get_mps_result(a1, 2, &v4);
LABEL_5:
      v2 = 0;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}
