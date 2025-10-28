int *__fastcall tree_successor(int *a1, int a2)
{
  int v4; // [sp+0h] [bp-14h]
  int *i; // [sp+Ch] [bp-8h]

  v4 = a2;
  if ( *(int **)(a2 + 4) != a1 + 1 )
    return minimum_c_rb((int)a1, *(_DWORD **)(a2 + 4));
  if ( a2 == maximum_c_rb((int)a1, *a1) )
    return 0;
  for ( i = *(int **)(v4 + 8); i != a1 + 1 && v4 == i[1]; i = (int *)i[2] )
    v4 = (int)i;
  return i;
}
