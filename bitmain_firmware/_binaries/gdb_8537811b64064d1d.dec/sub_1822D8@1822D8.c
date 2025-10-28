int __fastcall sub_1822D8(const char *a1)
{
  int result; // r0
  int v3; // r0

  result = off_489AF8(&dword_4899A0);
  if ( result )
  {
    sub_243C5C(result);
    if ( a1 && !strncmp(a1, "-a", 2u) )
    {
      if ( !dword_487950 )
        sub_94708("-a is meaningless in all-stop mode.");
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
    return sub_182258(v3);
  }
  return result;
}
