int __fastcall backend_eth_2282_icc_max_get(int a1, char a2)
{
  int v2; // r3
  unsigned __int16 v5; // [sp+Eh] [bp-6h] BYREF

  v5 = 0;
  switch ( a2 )
  {
    case 0:
      get_mps_rail1_icc_max(a1, 1, &v5);
      get_mps_rail2_icc_max(a1, 1, &v5);
      get_mps_rail1_cop(a1, 1, &v5);
      get_mps_rail2_cop(a1, 1, &v5);
      goto LABEL_7;
    case 1:
    case 2:
      get_mps_rail1_icc_max(a1, 2, &v5);
      get_mps_rail2_icc_max(a1, 2, &v5);
      get_mps_rail1_cop(a1, 2, &v5);
      get_mps_rail2_cop(a1, 2, &v5);
      goto LABEL_7;
    case 3:
    case 4:
      get_mps_rail1_icc_max(a1, 3, &v5);
      get_mps_rail2_icc_max(a1, 3, &v5);
      get_mps_rail1_cop(a1, 3, &v5);
      get_mps_rail2_cop(a1, 3, &v5);
      goto LABEL_7;
    case 5:
      get_mps_rail1_icc_max(a1, 4, &v5);
      get_mps_rail2_icc_max(a1, 4, &v5);
      get_mps_rail1_cop(a1, 4, &v5);
      get_mps_rail2_cop(a1, 4, &v5);
LABEL_7:
      v2 = 0;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}
