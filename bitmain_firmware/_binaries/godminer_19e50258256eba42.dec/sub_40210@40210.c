void *__fastcall sub_40210(_DWORD *a1, const char **a2)
{
  void *result; // r0

  result = memcpy(a1, a2, 0x470u);
  if ( a2[281] )
  {
    result = strdup(a2[281]);
    a1[281] = result;
  }
  return result;
}
