void *__fastcall sub_30D3E0(unsigned int a1, char *s)
{
  void *result; // r0

  result = (void *)strlen(s);
  if ( result )
    return sub_30D380(__SPAIR64__((unsigned int)s, a1), (size_t)result);
  return result;
}
