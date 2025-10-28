int __fastcall sub_B9098(const char *a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r4
  _DWORD *v6; // r0
  char *s1; // [sp+4h] [bp-8h] BYREF

  s1 = (char *)sub_32727C(a1);
  sub_25B34C((int)&s1, "$datadir");
  sub_25B34C((int)&s1, "$debugdir");
  v2 = s1;
  if ( dword_478228 )
  {
    v3 = strcmp(s1, a1);
    if ( v3 )
    {
      v6 = (_DWORD *)sub_242FF0(v3);
      sub_2594D8(*v6, "auto-load: Expanded $-variables to \"%s\".\n", s1);
      v2 = s1;
    }
  }
  v4 = sub_98354(v2);
  if ( s1 )
    free(s1);
  return v4;
}
