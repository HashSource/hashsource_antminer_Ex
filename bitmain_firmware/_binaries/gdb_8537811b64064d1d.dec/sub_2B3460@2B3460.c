char *__fastcall sub_2B3460(int a1)
{
  char *result; // r0

  result = sub_2AD7D4(a1, ".ARM.exidx");
  if ( result )
    return (char *)((*((_DWORD *)result + 5) >> 1) & 1);
  return result;
}
