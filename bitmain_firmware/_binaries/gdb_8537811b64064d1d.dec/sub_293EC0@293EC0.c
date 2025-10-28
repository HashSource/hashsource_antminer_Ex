int sub_293EC0()
{
  int v0; // r0
  int result; // r0

  v0 = fileno((FILE *)dword_48AAAC);
  result = sub_293BB8(v0, 1);
  if ( dword_48AAB8 )
  {
    if ( (char *)off_470784 == (char *)sub_28ED04 )
    {
      if ( (dword_48AAA0 & 0x800000) == 0 )
        return sub_2906F8(result);
    }
    else
    {
      return sub_28CC50();
    }
  }
  return result;
}
