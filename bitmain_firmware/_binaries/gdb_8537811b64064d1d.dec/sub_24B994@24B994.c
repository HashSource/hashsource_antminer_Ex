int __fastcall sub_24B994(char *s1, int a2)
{
  int v4; // r1
  _BOOL4 v6; // r3

  if ( dword_48A8D0 )
    sub_248B30(&dword_48A8C8);
  if ( s1 && *s1 )
  {
    if ( !strcmp(s1, (const char *)&word_3C148C) )
    {
      if ( dword_48A8BC == -1 )
        sub_94708("not debugging trace buffer");
      v6 = dword_48A8BC == 0;
      if ( !a2 )
        v6 = 0;
      if ( v6 )
        sub_94708("already at start of trace buffer");
      v4 = dword_48A8BC - 1;
    }
    else
    {
      if ( !strcmp(s1, "-1") )
      {
        v4 = -1;
        return sub_24B6A0(0, v4, 0, 0, a2);
      }
      v4 = sub_14CC28((int)s1);
    }
  }
  else
  {
    if ( dword_48A8BC == -1 )
    {
      v4 = 0;
      return sub_24B6A0(0, v4, 0, 0, a2);
    }
    v4 = dword_48A8BC + 1;
  }
  if ( v4 < -1 )
    sub_94708("invalid input (%d is less than zero)", v4);
  return sub_24B6A0(0, v4, 0, 0, a2);
}
