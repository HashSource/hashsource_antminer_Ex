int __fastcall get_theory_hashrate_kas(int a1, double *a2)
{
  *a2 = *(float *)(a1 + 1020) * 4140.0 * 1000.0 * 1000.0;
  return 0;
}
