void get_total_accept_rate()
{
  int v0; // [sp+4h] [bp-18h]
  int i; // [sp+Ch] [bp-10h]
  int v2; // [sp+10h] [bp-Ch]
  int v3; // [sp+14h] [bp-8h]

  v3 = 0;
  v2 = 0;
  for ( i = 0; i < total_pools; ++i )
  {
    v0 = *(_DWORD *)(pools + 4 * i);
    if ( v0 )
    {
      v3 = (int)((double)v3 + *(double *)(v0 + 1960));
      v2 = (int)((double)v2 + *(double *)(v0 + 1968));
    }
  }
}
