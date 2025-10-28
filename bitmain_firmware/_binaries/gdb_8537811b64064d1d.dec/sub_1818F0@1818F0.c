void __fastcall sub_1818F0(int a1, int a2, int a3, int a4, char *ptr, int a6, char a7)
{
  int v7; // r6
  int v10; // r4
  int *v11; // r0
  int v12; // r0

  if ( ptr != &a7 )
    sub_339E8C(ptr);
  sub_92E68(v7);
  if ( a2 == 1 )
  {
    v10 = sub_339EA0(a1);
    v11 = (int *)sub_242FB4(v10);
    v12 = sub_154B60(*v11, *(_DWORD *)v10, *(_DWORD *)(v10 + 4), *(const char **)(v10 + 8));
    sub_339F20(v12);
    JUMPOUT(0x181880);
  }
  sub_339EA0(a1);
  sub_92E88();
}
