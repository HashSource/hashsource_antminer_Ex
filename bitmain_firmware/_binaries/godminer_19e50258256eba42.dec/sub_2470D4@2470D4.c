void *__fastcall sub_2470D4(void *a1)
{
  void *result; // r0
  unsigned int i; // [sp+Ch] [bp-8h]

  result = memset(a1, 0, 0xF0u);
  for ( i = 0; i <= 7; ++i )
  {
    result = a1;
    *((_QWORD *)a1 + i) = qword_57D9D8[i];
  }
  return result;
}
