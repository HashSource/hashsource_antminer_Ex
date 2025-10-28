void __fastcall sub_1C4214(int a1, int a2)
{
  int v2; // r4
  int v3; // r11
  int *v5; // r0

  sub_92E68(v3);
  if ( a2 == 1 )
  {
    v5 = (int *)sub_339EA0(a1);
    if ( *(_DWORD *)(v2 + 20) )
    {
      sub_339F20(v5);
      JUMPOUT(0x1C4088);
    }
    sub_92F44(*v5, v5[1], v5[2]);
  }
  sub_339EA0(a1);
  sub_92E88();
}
