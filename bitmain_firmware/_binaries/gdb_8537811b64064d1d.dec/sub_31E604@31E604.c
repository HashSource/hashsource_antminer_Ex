int __fastcall sub_31E604(_DWORD *a1, char *s, char *a3)
{
  int v3; // r5
  size_t v7; // r0
  const char *v8; // r1
  char *v9; // r6
  char **v10; // r4

  v3 = s == 0;
  if ( !a1 )
    v3 = 1;
  if ( v3 )
    return 0;
  v7 = strlen(s);
  v8 = (const char *)&dword_365018;
  v9 = (char *)v7;
  if ( !&dword_365018 )
    return 0;
  v10 = &off_4336C0;
  while ( v10[2] != v9 || v10[3] != a3 || strcmp(s, v8) )
  {
    v10 += 4;
    v8 = v10[1];
    ++v3;
    if ( !v8 )
      return 0;
  }
  a1[1] = 0;
  a1[2] = &(&off_4336C0)[4 * v3];
  *a1 = 49;
  return 1;
}
