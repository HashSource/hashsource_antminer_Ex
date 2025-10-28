int __fastcall get_theory_hashrate_ckb2(int a1, double *a2)
{
  float v2; // s14

  v2 = *(float *)(a1 + 760);
  *a2 = v2 * 352.0 * 1000.0 * 1000.0;
  return 0;
}
