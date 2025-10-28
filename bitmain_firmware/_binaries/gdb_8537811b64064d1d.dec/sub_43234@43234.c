void __fastcall sub_43234(int a1, int a2)
{
  int v2; // r4
  int v3; // r7
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r0

  sub_92E68(v3);
  if ( a2 == 1 )
  {
    v6 = (_DWORD *)sub_339EA0(a1);
    v7 = sub_15850(v2);
    if ( v7 )
    {
      sub_339F20(v7);
      JUMPOUT(0x43094);
    }
    sub_92F44(*v6, v6[1], v6[2]);
  }
  v8 = sub_339EA0(a1);
  sub_92E88(v8);
}
