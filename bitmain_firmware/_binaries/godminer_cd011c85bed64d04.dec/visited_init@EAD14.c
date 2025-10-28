void *__fastcall visited_init(_DWORD *a1, unsigned int a2)
{
  size_t v2; // r1
  void *result; // r0

  v2 = a2 >> 5;
  a1[1] = v2;
  a1[2] = 32;
  result = calloc(v2, 4u);
  *a1 = result;
  return result;
}
