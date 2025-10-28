void *__fastcall sub_33B84(int a1)
{
  void *result; // r0

  result = (void *)sub_1836A8(a1, dword_471ACC);
  if ( result )
  {
    free(result);
    return (void *)sub_1836A0(a1, dword_471ACC, 0);
  }
  return result;
}
