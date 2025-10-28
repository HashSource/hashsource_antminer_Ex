void __fastcall sub_578FC(int a1, int a2)
{
  int v2; // r4
  void **v3; // r7
  _DWORD *v6; // r4

  sub_92E68(v2);
  if ( a2 == 1 )
  {
    v6 = (_DWORD *)sub_339EA0(a1);
    if ( *v3 )
      free(*v3);
    sub_92F44(*v6, v6[1], v6[2]);
  }
  JUMPOUT(0x57630);
}
