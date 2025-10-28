int __fastcall sub_191768(const char *a1)
{
  int result; // r0

  result = *((_DWORD *)sub_1911E8() + 1);
  if ( result )
    return strcmp(*(const char **)(result + 4), a1) == 0;
  return result;
}
