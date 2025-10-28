int __fastcall get_theory_hashrate_hns(int a1, double *a2)
{
  *a2 = *(float *)(a1 + 1020) * 5520.0 * 1000.0 * 1000.0;
  return 0;
}
