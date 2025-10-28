int __fastcall sub_170EA4(const char *a1, int a2)
{
  int result; // r0
  int v4; // [sp+8h] [bp-8h] BYREF

  sub_21D6D8(&v4, a1, a2, 2, 0);
  if ( !v4 )
    sub_94708("No struct type named %s.", a1);
  result = *(_DWORD *)(v4 + 24);
  if ( **(_BYTE **)(result + 24) != 3 )
    sub_94708("This context has class, union or enum %s, not a struct.", a1);
  return result;
}
