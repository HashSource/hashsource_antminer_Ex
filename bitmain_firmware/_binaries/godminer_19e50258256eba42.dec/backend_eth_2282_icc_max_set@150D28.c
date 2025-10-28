int __fastcall backend_eth_2282_icc_max_set(
        int a1,
        char a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned __int16 v6; // r0
  unsigned __int16 v7; // r0
  unsigned __int16 v8; // r0
  unsigned __int16 v9; // r0
  unsigned __int16 v10; // r0
  unsigned __int16 v11; // r0
  unsigned __int16 v12; // r0
  unsigned __int16 v13; // r0
  int v14; // r3
  unsigned __int8 v18; // [sp+17h] [bp-5h] BYREF

  v18 = 0;
  switch ( a2 )
  {
    case 0:
      set_mps_rail1_icc_max(a1, 1, a3);
      set_mps_rail2_icc_max(a1, 1, a4);
      get_mps_rail1_multi(a1, 1, &v18);
      v6 = sub_344EB8(a5, v18);
      set_mps_rail1_cop(a1, 1, v6, v18);
      get_mps_rail2_multi(a1, 1, &v18);
      v7 = sub_344EB8(a6, v18);
      set_mps_rail2_cop(a1, 1, v7, v18);
      goto LABEL_7;
    case 1:
    case 2:
      set_mps_rail1_icc_max(a1, 2, a3);
      set_mps_rail2_icc_max(a1, 2, a4);
      get_mps_rail1_multi(a1, 2, &v18);
      v10 = sub_344EB8(a5, v18);
      set_mps_rail1_cop(a1, 2, v10, v18);
      get_mps_rail1_multi(a1, 2, &v18);
      v11 = sub_344EB8(a6, v18);
      set_mps_rail2_cop(a1, 2, v11, v18);
      goto LABEL_7;
    case 3:
    case 4:
      set_mps_rail1_icc_max(a1, 3, a3);
      set_mps_rail2_icc_max(a1, 3, a4);
      get_mps_rail1_multi(a1, 3, &v18);
      v12 = sub_344EB8(a5, v18);
      set_mps_rail1_cop(a1, 3, v12, v18);
      get_mps_rail1_multi(a1, 3, &v18);
      v13 = sub_344EB8(a6, v18);
      set_mps_rail2_cop(a1, 3, v13, v18);
      goto LABEL_7;
    case 5:
      set_mps_rail1_icc_max(a1, 4, a3);
      set_mps_rail2_icc_max(a1, 4, a4);
      get_mps_rail1_multi(a1, 4, &v18);
      v8 = sub_344EB8(a5, v18);
      set_mps_rail1_cop(a1, 4, v8, v18);
      get_mps_rail1_multi(a1, 4, &v18);
      v9 = sub_344EB8(a6, v18);
      set_mps_rail2_cop(a1, 4, v9, v18);
LABEL_7:
      v14 = 0;
      break;
    default:
      v14 = -1;
      break;
  }
  return v14;
}
