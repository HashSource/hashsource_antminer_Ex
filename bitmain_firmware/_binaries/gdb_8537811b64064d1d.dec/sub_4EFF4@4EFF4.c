void __fastcall __noreturn sub_4EFF4(int a1, int a2)
{
  int v3; // r0
  __int64 v4; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  if ( a1 )
  {
    v3 = sub_14CC94();
    v4 = sub_26EB44(v3);
    v5 = v4;
    if ( sub_244628(v4, HIDWORD(v4)) )
    {
      sub_24B2B4(a2);
      sub_2446E0(&v5, a2);
    }
  }
  else if ( ((int (*)(void))sub_244628)() )
  {
    sub_24B2B4(a2);
    sub_2446E0(0, a2);
  }
  sub_94708("Not confirmed.");
}
