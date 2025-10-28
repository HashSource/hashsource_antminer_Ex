void __fastcall sub_1F7468(int a1, int a2)
{
  int v2; // r9
  int v5; // r0

  sub_92E68(v2);
  if ( a2 == 1 )
  {
    if ( *(_DWORD *)sub_339EA0(a1) == -2 )
      v5 = sub_1F61CC(-1, 4);
    else
      v5 = sub_1F61CC(-1, 5);
    sub_339F20(v5);
    JUMPOUT(0x1F7428);
  }
  sub_339EA0(a1);
  sub_92E88();
}
