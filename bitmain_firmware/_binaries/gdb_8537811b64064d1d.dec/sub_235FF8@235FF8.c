int sub_235FF8()
{
  int v0; // r4
  int *v1; // r0
  int result; // r0
  int v3; // r4
  _DWORD *v4; // r0

  v0 = sub_1836B0();
  v1 = *(int **)(v0 + 164);
  if ( !v1 )
  {
    v1 = (int *)sub_930BC(1u, 0xCu);
    *(_DWORD *)(v0 + 164) = v1;
  }
  result = *v1;
  if ( result )
  {
    v3 = sub_1836B0();
    v4 = *(_DWORD **)(v3 + 164);
    if ( !v4 )
    {
      v4 = sub_930BC(1u, 0xCu);
      *(_DWORD *)(v3 + 164) = v4;
    }
    return v4[1];
  }
  return result;
}
