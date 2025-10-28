int __fastcall sub_15E14C(int a1, int *a2)
{
  int v2; // r5
  void *v5; // r5
  __int64 v7; // kr00_8
  int *v8; // r0

  if ( *(_DWORD *)(a1 + 76) )
  {
    v5 = sub_92E50();
    *a2 = sub_15DC24(*(int **)(a1 + 76));
    sub_92E68((int)v5);
    return 1;
  }
  else
  {
    v7 = sub_94728(
           (int)"frame.c",
           2386,
           "%s: Assertion `%s' failed.",
           "int get_frame_pc_if_available(frame_info*, CORE_ADDR*)",
           "frame->next != NULL");
    sub_92E68(v2);
    if ( HIDWORD(v7) != 1 )
    {
      sub_339EA0(v7);
      sub_92E88();
    }
    v8 = (int *)sub_339EA0(v7);
    if ( v8[1] != 9 )
      sub_92F44(*v8, v8[1], v8[2]);
    sub_339F20(v8);
    return 0;
  }
}
