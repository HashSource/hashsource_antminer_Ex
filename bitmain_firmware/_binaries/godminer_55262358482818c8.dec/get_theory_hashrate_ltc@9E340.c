int __fastcall get_theory_hashrate_ltc(int a1, double *a2)
{
  float v2; // s15

  v2 = *(float *)(a1 + 976);
  *a2 = (float)((float)(v2 + v2) / 130050.0)
      * (double)*(int *)(a1 + 336)
      * (double)(8 * *(_DWORD *)(a1 + 340) - 5)
      * 1000.0
      * 1000.0;
  return 0;
}
