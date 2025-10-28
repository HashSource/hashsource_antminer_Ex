int __fastcall get_theory_hashrate_dash(int a1, double *a2)
{
  *a2 = *(float *)(a1 + 1020) * 1512.0 * 1000.0 * 1000.0;
  return 0;
}
