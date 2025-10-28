int __fastcall sub_2906F8(int a1)
{
  int v1; // r6
  char *v2; // r0
  const char *v3; // r5
  const char *v4; // r0

  if ( dword_490140 )
  {
    sub_28D034((const char *)dword_48AE34);
    tputs((const char *)dword_490140, 1, (int (*)(int))sub_293BA8);
    dword_48AE04 = 0;
    if ( dword_49011C )
    {
      tputs((const char *)dword_49011C, 1, (int (*)(int))sub_293BA8);
    }
    else
    {
      sub_28C408(dword_490144);
      tputs((const char *)dword_490140, 1, (int (*)(int))sub_293BA8);
    }
    if ( dword_48AE2C > 0 )
      sub_28D034(0);
  }
  else
  {
    sub_2945D0(a1);
  }
  v1 = dword_48AE3C;
  v2 = strrchr((const char *)dword_48AE3C, 10);
  if ( !v2 )
    return sub_28CC50();
  v3 = v2 + 1;
  sub_28D37C();
  dword_48AE3C = (int)v3;
  v4 = sub_28C644(v3, (size_t *)&dword_48AE24, &dword_48AE20, &dword_48AE1C, (size_t *)&dword_48AE10);
  dword_48AE0C = (int)v4;
  dword_48AE18 = 0;
  if ( v4 )
    v4 = (const char *)strlen(v4);
  dword_48AE08 = (int)v4;
  sub_28CC50();
  dword_48AE3C = v1;
  return sub_28D4A0();
}
