void *__fastcall sub_2AD0C4(int a1, size_t a2)
{
  void *v3; // r0
  void *v4; // r4

  v3 = (void *)sub_2ACC1C(a1, a2);
  v4 = v3;
  if ( v3 )
    memset(v3, 0, a2);
  return v4;
}
