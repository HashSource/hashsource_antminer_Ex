int __fastcall sub_276D30(int a1, int a2, int *a3, char *s1)
{
  int v6; // r1

  v6 = sub_1BD8F0(s1);
  if ( v6 )
    return sub_236644(*a3, v6);
  else
    return sub_946D8("Target description specified unknown osabi \"%s\"", s1);
}
