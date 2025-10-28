double __fastcall calc_stdd(int a1, int a2)
{
  double v2; // d0
  double v3; // r0
  double v4; // r2
  double v5; // d0
  double y_4; // [sp+8h] [bp-1Ch]
  int i; // [sp+14h] [bp-10h]
  double v11; // [sp+18h] [bp-Ch]

  v11 = 0.0;
  LODWORD(v3) = calc_mean(a1, a2);
  y_4 = v2;
  for ( i = 0; i < a2; ++i )
  {
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(_DWORD *)(a1 + 4 * i);
    v5 = (double)SHIDWORD(v4) - y_4;
    v3 = pow(v3, v4);
    v11 = v11 + v5;
  }
  return sqrt(v3);
}
