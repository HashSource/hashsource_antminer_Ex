int __fastcall sub_62C48(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v9; // r8
  int v10; // r0
  int v11; // r5
  unsigned __int8 v12; // r4
  __int64 v13; // r0

  v6 = sub_1DD5B4(a3);
  if ( !a2 )
    return 1;
  v7 = v6;
  if ( v6 != sub_1DD5B4(a2) )
    return 1;
  v9 = ((int (__fastcall *)(int, int))loc_1DE060)(a2, a1);
  v10 = ((int (__fastcall *)(int, int))loc_1DE060)(a3, a1);
  v11 = v10;
  if ( v9 )
  {
    if ( v10 )
    {
      ((int (__fastcall *)(int, int))loc_1DD448)(v7, a1);
      v12 = ((int (__fastcall *)(int))loc_26B4A0)(v9) ^ 1;
      sub_26C3E0(v9);
      sub_26C3E0(v11);
      ((void (__fastcall *)(int))loc_26C228)(v9);
      ((void (__fastcall *)(int))loc_26C228)(v11);
      return v12;
    }
  }
  else
  {
    sub_94728(
      "mi/mi-main.c",
      1012,
      "%s: Assertion `%s' failed.",
      "bool register_changed_p(int, regcache*, regcache*)",
      "prev_value != NULL");
  }
  v13 = sub_94728(
          "mi/mi-main.c",
          1013,
          "%s: Assertion `%s' failed.",
          "bool register_changed_p(int, regcache*, regcache*)",
          "this_value != NULL");
  return sub_62D78(v13, HIDWORD(v13));
}
