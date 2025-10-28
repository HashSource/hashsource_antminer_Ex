int __fastcall sub_16033C(int a1)
{
  void *v2; // r4
  int v3; // r5
  int v4; // r0
  int *v6; // r0
  __int64 v7; // r0

  if ( a1 )
  {
    v2 = sub_92E50();
    v3 = sub_15DE3C(a1);
    sub_92E68((int)v2);
    v4 = sub_21DDD4(v3);
    if ( v4 )
      return sub_21A700(v4);
  }
  else
  {
    v7 = sub_94728(
           (int)"frame.c",
           2745,
           "%s: Assertion `%s' failed.",
           "language get_frame_language(frame_info*)",
           "frame!= NULL");
    if ( HIDWORD(v7) != 1 )
    {
      sub_339EA0(v7);
      sub_92E88();
    }
    v6 = (int *)sub_339EA0(v7);
    if ( v6[1] != 9 )
      sub_92F44(*v6, v6[1], v6[2]);
    sub_339F20(v6);
  }
  return 0;
}
