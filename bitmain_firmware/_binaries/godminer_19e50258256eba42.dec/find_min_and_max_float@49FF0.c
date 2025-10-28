int __fastcall find_min_and_max_float(int result, int a2, float *a3, float *a4)
{
  int i; // [sp+14h] [bp-10h]
  float v5; // [sp+18h] [bp-Ch]
  float v6; // [sp+1Ch] [bp-8h]

  v6 = INFINITY;
  v5 = -INFINITY;
  for ( i = 0; i < a2; ++i )
  {
    if ( v6 > *(float *)(result + 4 * i) )
      v6 = *(float *)(result + 4 * i);
    if ( v5 < *(float *)(result + 4 * i) )
      v5 = *(float *)(result + 4 * i);
  }
  *a3 = v6;
  *a4 = v5;
  return result;
}
