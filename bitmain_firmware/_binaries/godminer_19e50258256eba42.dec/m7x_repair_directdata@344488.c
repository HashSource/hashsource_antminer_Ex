int __fastcall m7x_repair_directdata(unsigned int *a1, int *a2)
{
  int result; // r0

  initialization((int)&main_array, 2048, 4, 16, 16, row_canuse, col_canuse, repair_list);
  result = FBM_feed4(a1, (int)&main_array, (int)row_canuse, (int)col_canuse, repair_list, a2);
  fbc_accumulation = result;
  return result;
}
