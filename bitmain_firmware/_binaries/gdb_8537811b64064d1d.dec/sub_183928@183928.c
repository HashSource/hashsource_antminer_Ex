_DWORD *__fastcall sub_183928(int a1)
{
  int *v1; // r3

  v1 = &dword_487914;
  do
    v1 = (int *)v1[1];
  while ( v1 && a1 != v1[2] );
  return sub_1830D4(v1, 1);
}
