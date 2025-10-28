void __fastcall sub_1C8E04(int a1, int a2)
{
  int v2; // r7
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r0

  sub_92E68(v2);
  if ( a2 == 3 )
  {
    v5 = sub_339EA0(a1);
    v6 = (_DWORD *)sub_242FB4(v5);
    v7 = sub_25A440(*v6, "<error: %s>\n", *(const char **)(v5 + 8));
    sub_339F20(v7);
    JUMPOUT(0x1C8CF8);
  }
  sub_339EA0(a1);
  sub_92E88();
}
