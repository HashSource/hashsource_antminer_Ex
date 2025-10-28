int __fastcall sub_191184(int a1, char *s2)
{
  int *v3; // r0
  int i; // r4

  v3 = *(int **)(a1 + 32);
  if ( !v3 )
  {
    v3 = (int *)sub_930BC(1u, 0x10u);
    *(_DWORD *)(a1 + 32) = v3;
  }
  for ( i = *v3; i; i = *(_DWORD *)(i + 8) )
  {
    if ( !strcmp(*(const char **)(i + 4), s2) )
      break;
  }
  return i;
}
