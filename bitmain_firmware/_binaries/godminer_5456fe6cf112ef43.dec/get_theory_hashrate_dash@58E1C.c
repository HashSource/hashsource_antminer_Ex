int __fastcall get_theory_hashrate_dash(int a1, double *a2)
{
  if ( *(_BYTE *)(a1 + 310) )
  {
    *a2 = *(double *)(a1 + 312);
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 216) != 68 || *(_BYTE *)(a1 + 217) != 55 )
      goto LABEL_8;
    if ( !*(_BYTE *)(a1 + 218) )
    {
      *a2 = 3.79e11;
      return 8;
    }
    if ( *(_BYTE *)(a1 + 218) == 101 && !*(_BYTE *)(a1 + 219) )
    {
      *a2 = 3.6e11;
      return 8;
    }
    else
    {
LABEL_8:
      *a2 = *(float *)(a1 + 760) * 700.0 * 1000.0 * 1000.0 * 0.98;
      return 8;
    }
  }
}
