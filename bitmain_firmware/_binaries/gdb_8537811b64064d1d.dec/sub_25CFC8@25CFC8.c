bool __fastcall sub_25CFC8(int a1, int a2)
{
  _DWORD *v2; // r0
  char *v3; // r2
  int v4; // r0

  if ( a1 == 62 )
    return 0;
  v2 = (_DWORD *)sub_26BC98(a2);
  v3 = *(char **)(sub_171280(v2) + 24);
  v4 = *v3;
  if ( (unsigned __int8)(v4 - 18) <= 1u )
    v4 = **(char **)(sub_171280(*((_DWORD **)v3 + 5)) + 24);
  return v4 == 3;
}
