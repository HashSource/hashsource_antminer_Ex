void __fastcall sub_FBEC4(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  int v7; // r0

  sub_92E68(v2);
  if ( a2 == 1 )
  {
    v5 = (_DWORD *)sub_339EA0(a1);
    v6 = (_DWORD *)sub_242FDC(v5);
    v7 = sub_154B60(*v6, *v5, v5[1], v5[2]);
    sub_339F20(v7);
    JUMPOUT(0xFBC88);
  }
  sub_339EA0(a1);
  sub_92E88();
}
