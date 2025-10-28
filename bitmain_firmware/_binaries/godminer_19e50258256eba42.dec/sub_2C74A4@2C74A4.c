int __fastcall sub_2C74A4(int a1, int a2)
{
  int *v7; // [sp+Ch] [bp-18h]
  int *v8; // [sp+Ch] [bp-18h]
  void *v9; // [sp+10h] [bp-14h]
  int v10; // [sp+14h] [bp-10h]
  int *i; // [sp+18h] [bp-Ch]
  int *j; // [sp+18h] [bp-Ch]
  int *v13; // [sp+1Ch] [bp-8h]

  v13 = 0;
  v10 = *(_DWORD *)(a1 + 4);
  while ( v10-- )
  {
    for ( i = *(int **)(*(_DWORD *)a1 + 4 * v10); i; i = v7 )
    {
      v7 = (int *)i[2];
      i[2] = (int)v13;
      v13 = i;
    }
  }
  v9 = realloc(*(void **)a1, 4 * a2);
  if ( v9 )
  {
    *(_DWORD *)a1 = v9;
    *(_DWORD *)(a1 + 4) = a2;
  }
  if ( *(_DWORD *)a1 )
  {
    memset(*(void **)a1, 0, 4 * *(_DWORD *)(a1 + 4));
    for ( j = v13; j; j = v8 )
    {
      v8 = (int *)j[2];
      sub_2C7430((_DWORD *)a1, j);
    }
  }
  if ( v9 )
    return 0;
  else
    return -1;
}
