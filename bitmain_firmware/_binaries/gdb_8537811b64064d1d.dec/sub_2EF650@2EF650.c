void *__fastcall sub_2EF650(int a1, char *s)
{
  size_t v4; // r5
  void *v5; // r0

  v4 = strlen(s) + 1;
  v5 = (void *)sub_2ACC1C(a1, v4);
  return memcpy(v5, s, v4);
}
