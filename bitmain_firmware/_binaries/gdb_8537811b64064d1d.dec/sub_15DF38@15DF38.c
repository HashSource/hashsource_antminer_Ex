void __fastcall sub_15DF38(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8; // r0
  int v9; // r4

  sub_92E68(v9);
  if ( a2 == 1 )
  {
    v8 = (int *)sub_339EA0(a1);
    if ( v8[1] == 9 )
    {
      sub_339F20(v8);
      __asm { POP             {R4-R6,PC} }
    }
    sub_92F44(*v8, v8[1], v8[2]);
  }
  sub_339EA0(a1);
  sub_92E88();
}
