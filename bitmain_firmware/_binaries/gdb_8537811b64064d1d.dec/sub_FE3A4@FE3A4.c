int __fastcall sub_FE3A4(const char *a1)
{
  int v2; // r4
  int v4; // r0
  char *v5; // r0

  v2 = ((int (*)(void))loc_21DA28)();
  if ( v2 )
    return v2;
  v4 = sub_20F3B0(0);
  v5 = sub_C25D0(v4);
  if ( !*v5 )
    return v2;
  else
    return sub_FCC14(a1, v5, 0);
}
