int __fastcall sub_A1620(int a1)
{
  int v1; // r0
  char *v2; // r3
  int v3; // r2
  int v4; // r4
  int v6; // r0
  int v7; // r0

  v1 = sub_A0A88(a1);
  v2 = *(char **)(v1 + 24);
  v3 = *v2;
  if ( v3 == 3 )
  {
    v6 = sub_A0C30(v1);
    v7 = sub_A0A88(v6);
    if ( v7 )
      return *(__int16 *)(*(_DWORD *)(v7 + 24) + 4) / 2;
    return 0;
  }
  if ( v3 != 2 )
    return 0;
  v4 = 0;
  do
  {
    ++v4;
    v2 = *(char **)(sub_A0898(*((_DWORD *)v2 + 5)) + 24);
  }
  while ( *v2 == 2 );
  return v4;
}
