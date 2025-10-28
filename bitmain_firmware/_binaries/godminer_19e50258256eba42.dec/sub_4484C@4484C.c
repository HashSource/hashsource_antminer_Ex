int *__fastcall sub_4484C(int *result)
{
  int v1; // [sp+Ch] [bp-10h]
  int v2; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]
  int j; // [sp+14h] [bp-8h]

  v2 = total_pools - 1;
  for ( i = 0; i < total_pools; ++i )
  {
    v1 = *(_DWORD *)(pools + 4 * i);
    if ( *(_DWORD *)(v1 + 4) > result[1] )
      --*(_DWORD *)(v1 + 4);
  }
  if ( v2 > *result )
  {
    for ( j = *result; j < v2; ++j )
    {
      *(_DWORD *)(pools + 4 * j) = *(_DWORD *)(pools + 4 * (j + 1));
      **(_DWORD **)(pools + 4 * j) = j;
    }
  }
  *result = total_pools--;
  return result;
}
