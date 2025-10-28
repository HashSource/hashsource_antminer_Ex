void __fastcall sub_20CCA4(int a1, int a2)
{
  int v2; // r6
  int v5; // r0
  int v6; // [sp+Ch] [bp+Ch]

  sub_92E68(v2);
  if ( a2 == 1 )
  {
    v5 = sub_339EA0(a1);
    v6 = *(_DWORD *)(v5 + 8);
    sub_339F20(v5);
    if ( v6 )
      JUMPOUT(0x20CA7C);
    JUMPOUT(0x20CA8C);
  }
  sub_339EA0(a1);
  sub_92E88();
}
