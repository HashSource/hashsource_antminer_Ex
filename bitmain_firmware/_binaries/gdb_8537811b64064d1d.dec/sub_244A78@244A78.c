void __fastcall __noreturn sub_244A78(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v6; // r0
  int v7; // r0

  sub_92E68(v3);
  if ( a2 == 1 )
  {
    v6 = sub_339EA0(a1);
    v7 = sub_154B60(*(_DWORD *)(*(_DWORD *)v2 + 80), *(_DWORD *)v6, *(_DWORD *)(v6 + 4), *(const char **)(v6 + 8));
    sub_339F20(v7);
    JUMPOUT(0x244768);
  }
  sub_339EA0(a1);
  sub_92E88();
}
