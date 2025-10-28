int *__fastcall sub_556D0(int *a1, const char **a2)
{
  const char *v3; // r4
  size_t v6; // r1
  const char *v7; // r0
  const char *v8; // r4
  int v9; // r7

  v3 = *a2;
  if ( *a2 && *v3 )
  {
    v6 = strcspn(v3, " \t");
    v7 = v3;
    v8 = &v3[v6];
    v9 = sub_93358(v7);
    *a2 = (const char *)sub_93634(v8);
    *a1 = v9;
    return a1;
  }
  else
  {
    *a1 = sub_32727C(0);
    return a1;
  }
}
