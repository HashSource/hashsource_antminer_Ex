_DWORD *__fastcall sub_297CE8(int a1)
{
  _DWORD *v2; // r5
  char *v3; // r0
  size_t v4; // r0
  char *v5; // r0
  int v6; // r3

  if ( !a1 )
    return 0;
  v2 = sub_297A40(*(char **)a1, 0);
  v3 = *(char **)(a1 + 4);
  if ( v3 )
  {
    v4 = strlen(v3);
    v5 = (char *)sub_93050(v4 + 1);
    v3 = strcpy(v5, *(const char **)(a1 + 4));
  }
  v6 = *(_DWORD *)(a1 + 8);
  v2[1] = v3;
  v2[2] = v6;
  return v2;
}
