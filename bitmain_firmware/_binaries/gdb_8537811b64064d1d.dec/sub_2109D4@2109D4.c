int __fastcall sub_2109D4(int a1)
{
  int v2; // r4
  int v3; // r0
  int v5; // r0
  int v6; // r6
  __int64 v7; // r0
  int v8; // r7
  int v9; // r8
  int v10; // r0

  v2 = sub_15ECDC(a1);
  if ( ((int (*)(void))loc_167390)() < 0 )
  {
    sub_1780DC();
    v6 = *(_DWORD *)(v5 + 156);
    v7 = sub_26BBA8(v6);
    v8 = v7;
    v9 = sub_26BCE0(v7, HIDWORD(v7));
    v10 = sub_15DE24(a1);
    ((void (__fastcall *)(int, int, int, int))loc_16899C)(v2, v6, v9, v10);
    return v8;
  }
  else
  {
    v3 = ((int (__fastcall *)(int))loc_167390)(v2);
    return sub_15B1D4(v3, a1);
  }
}
