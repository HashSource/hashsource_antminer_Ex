char *__fastcall sub_33AB8C(int a1)
{
  unsigned int v1; // r4
  void *v2; // r3

  v1 = a1 + 128;
  v2 = malloc(a1 + 128);
  if ( !v2 )
  {
    v2 = sub_33AA80(v1);
    if ( !v2 )
      sub_3397A8();
  }
  return (char *)memset(v2, 0, 0x80u) + 128;
}
