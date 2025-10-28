int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  *a2 = (double)*(int *)(a1 + 372)
      * (float)((float)(*(float *)(a1 + 1020) + *(float *)(a1 + 1020)) / 130050.0)
      * (double)(8 * *(_DWORD *)(a1 + 376) - 5)
      * 1000.0
      * 1000.0;
  return 0;
}
