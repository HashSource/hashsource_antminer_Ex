char *__fastcall sub_27FFC0(char *a1)
{
  int v1; // r0
  int v2; // r0
  char *v3; // r0
  char *v4; // r4

  if ( dword_48AAE0 == -1 )
  {
    sub_29334C();
    return 0;
  }
  else
  {
    sub_27EFE8(a1);
    v1 = sub_27FD50();
    if ( off_47073C )
      v1 = off_47073C(dword_48AB00);
    sub_290A84(v1);
    sub_27F060();
    if ( dword_48FF30 )
    {
      v2 = 1;
    }
    else
    {
      do
        v2 = sub_27F8B0();
      while ( !dword_48FF30 );
    }
    v3 = sub_27F180(v2);
    v4 = v3;
    if ( off_470738 )
      v3 = (char *)off_470738();
    sub_290CB4(v3);
  }
  return v4;
}
