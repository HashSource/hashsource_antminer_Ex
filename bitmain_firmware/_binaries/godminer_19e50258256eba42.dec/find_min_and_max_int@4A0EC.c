int *__fastcall find_min_and_max_int(int *result, int a2, int *a3, int *a4)
{
  int i; // [sp+14h] [bp-10h]
  int v5; // [sp+18h] [bp-Ch]
  int v6; // [sp+1Ch] [bp-8h]

  if ( a2 > 0 )
  {
    v6 = *result;
    v5 = *result;
    for ( i = 1; i < a2; ++i )
    {
      if ( v6 > result[i] )
        v6 = result[i];
      if ( v5 < result[i] )
        v5 = result[i];
    }
    *a3 = v6;
    *a4 = v5;
  }
  return result;
}
