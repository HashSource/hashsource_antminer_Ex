int __fastcall sub_1FDDA4(const char *a1)
{
  char *v2; // r0
  const char **v3; // r5

  if ( *a1 == 124 )
  {
    v3 = sub_1FD6A8("pipe");
    sub_93634(a1 + 1);
  }
  else
  {
    if ( strchr(a1, 58) )
      LOWORD(v2) = -6092;
    else
      LOWORD(v2) = -6496;
    HIWORD(v2) = 52;
    v3 = sub_1FD6A8(v2);
  }
  if ( v3 )
    return sub_1FD8D8((int)v3);
  else
    return 0;
}
