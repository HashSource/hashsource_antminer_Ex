int __fastcall sub_21178C(int *a1, int *a2)
{
  int v2; // r5
  int v3; // r4
  char *v4; // r6
  char *v5; // r0
  int result; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = sub_21173C(*(const char **)(*a1 + 4));
  v5 = sub_21173C(*(const char **)(v3 + 4));
  result = strcmp(v4, v5);
  if ( !result )
    return *(_DWORD *)(v2 + 8) - *(_DWORD *)(v3 + 8);
  return result;
}
