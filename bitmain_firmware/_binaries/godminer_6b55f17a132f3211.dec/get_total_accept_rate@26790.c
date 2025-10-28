void get_total_accept_rate()
{
  int v0; // s12
  int *v1; // r2
  int v2; // s14
  int v3; // t1
  double *v4; // r0
  int v5; // r1

  if ( total_pools > 0 )
  {
    v0 = 0;
    v1 = (int *)pools;
    v2 = 0;
    do
    {
      v3 = *v1++;
      v4 = (double *)(v3 + 1952);
      v5 = v3 + 1968;
      if ( v3 )
      {
        v2 = (int)((double)v2 + *v4);
        v0 = (int)((double)v0 + *(double *)(v5 - 8));
      }
    }
    while ( v1 != (int *)(pools + 4 * total_pools) );
  }
}
