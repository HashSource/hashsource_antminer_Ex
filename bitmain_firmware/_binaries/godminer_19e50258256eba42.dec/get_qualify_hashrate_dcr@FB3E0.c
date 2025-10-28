int __fastcall get_qualify_hashrate_dcr(int a1, double *a2)
{
  double v5; // [sp+8h] [bp-14h] BYREF
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  v5 = 0.0;
  (*(void (__fastcall **)(int, double *))(a1 + 148))(a1, &v5);
  if ( strcmp((const char *)(a1 + 340), "DR7") )
    return 25;
  *a2 = v5 * 0.994;
  return v6;
}
