int __fastcall sub_1874F4(char *a1)
{
  __int64 v2; // r0
  int v4; // r0
  int v5; // r0
  unsigned int v6; // r0

  sub_259F38("Signal        Stop\tPrint\tPass to program\tDescription\n");
  if ( a1 )
  {
    LODWORD(v2) = sub_99AB0(a1);
    if ( (_DWORD)v2 == 143 )
    {
      v2 = sub_14CC28((int)a1);
      if ( (unsigned int)(v2 - 1) > 0xE )
        sub_94708(
          "Only signals 1-15 are valid as numeric signals.\nUse \"info signals\" for a list of symbolic signals.",
          HIDWORD(v2));
    }
    return sub_186538(v2);
  }
  else
  {
    v4 = sub_259F38((const char *)&word_356660);
    v5 = sub_258BFC(v4);
    while ( ++a1 != (char *)152 )
    {
      while ( 1 )
      {
        v5 = sub_258BFC(v5);
        if ( (unsigned int)(a1 - 143) <= 1 )
          break;
        v6 = (unsigned int)a1++;
        v5 = sub_186538(v6);
        if ( a1 == (char *)152 )
          return sub_259F38("\nUse the \"handle\" command to change these tables.\n");
      }
    }
    return sub_259F38("\nUse the \"handle\" command to change these tables.\n");
  }
}
