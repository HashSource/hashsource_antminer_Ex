int __fastcall sub_154A44(int a1)
{
  int v1; // r5
  int v2; // r0
  int v3; // r7
  int v4; // r0
  int v5; // r0
  int v6; // r6
  _DWORD *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r5
  int result; // r0

  v1 = dword_487668;
  if ( off_48A9F0 )
    a1 = off_48A9F0();
  v2 = sub_22F0EC(a1);
  if ( v2 )
  {
    v3 = dword_46DC04;
    v4 = sub_22F070(v2);
    v5 = sub_25920C(v4);
    v6 = 1;
  }
  else
  {
    v3 = 0;
    v6 = 0;
    v5 = ((int (*)(void))sub_25920C)();
  }
  if ( v5 )
    v5 = sub_259B80("");
  v7 = (_DWORD *)sub_242FB4(v5);
  v8 = sub_256834(*v7);
  v9 = (_DWORD *)sub_242FDC(v8);
  sub_256834(*v9);
  v10 = fileno(*(FILE **)(v1 + 52));
  v11 = sub_1FDE24(v10);
  v12 = v11;
  if ( v11 )
  {
    sub_1FE080();
    v11 = sub_1FDE34(v12);
  }
  result = sub_B78DC(v11);
  if ( v6 )
  {
    if ( v3 == 1 )
    {
      return sub_22F070(result);
    }
    else if ( v3 )
    {
      if ( v3 == 2 )
        return sub_22F01C(result);
    }
    else
    {
      return sub_22EFA4(result);
    }
  }
  return result;
}
