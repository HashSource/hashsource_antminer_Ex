const char *__fastcall sub_8D50C(const char *result, int a2)
{
  if ( dword_4751C0 )
  {
    sub_1C4D68(stderr, "%s ", result);
    sub_8D4B8(stderr, a2);
    return (const char *)sub_1C4D68(stderr, (const char *)&word_356660);
  }
  return result;
}
