void sub_186FB8()
{
  if ( (dword_489AF0 & 1) == 0 )
  {
    off_46D590[0] = "off";
    sub_94708("Target '%s' cannot support this command.", (const char *)dword_4899A4);
  }
}
