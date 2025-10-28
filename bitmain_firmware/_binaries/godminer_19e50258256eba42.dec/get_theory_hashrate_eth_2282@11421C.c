int __fastcall get_theory_hashrate_eth_2282(double a1)
{
  double v1; // d0
  double *v3; // [sp+0h] [bp-1Ch]

  v3 = (double *)HIDWORD(a1);
  HIDWORD(a1) = 3726 * *(_DWORD *)(LODWORD(a1) + 504);
  v1 = (double)(SHIDWORD(a1) / 600) / 50.0;
  floor(a1);
  *v3 = (double)(50 * (unsigned int)v1) * 1000.0 * 1000.0;
  return 0;
}
