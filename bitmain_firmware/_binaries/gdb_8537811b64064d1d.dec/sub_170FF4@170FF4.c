int __fastcall sub_170FF4(const char *a1, int a2, int a3)
{
  int v5; // r8
  size_t v6; // r5
  int result; // r0
  _DWORD dest[3]; // [sp+8h] [bp-24h] BYREF

  v5 = *(_DWORD *)(a2 + 24);
  v6 = strlen(a1);
  strlen(*(const char **)(v5 + 8));
  memcpy(dest, a1, v6);
  *(_WORD *)((char *)dest + v6) = 60;
  strcpy((char *)stpcpy((char *)dest + v6 + 1, *(_DWORD *)(v5 + 8)), " >");
  sub_21D6D8(dest, dest, a3, 1, 0);
  if ( !dest[0] )
    sub_94708("No template type named %s.", a1);
  result = *(_DWORD *)(dest[0] + 24);
  if ( **(_BYTE **)(result + 24) != 3 )
    sub_94708("This context has class, union or enum %s, not a struct.", a1);
  return result;
}
