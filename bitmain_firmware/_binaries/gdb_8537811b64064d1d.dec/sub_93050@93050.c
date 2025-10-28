void *__fastcall sub_93050(size_t a1)
{
  size_t v1; // r4
  void *result; // r0
  __int64 v3; // r0

  if ( a1 )
    v1 = a1;
  else
    v1 = 1;
  result = malloc(v1);
  if ( !result )
  {
    v3 = sub_258C44(v1);
    return (void *)sub_93078(v3, HIDWORD(v3));
  }
  return result;
}
