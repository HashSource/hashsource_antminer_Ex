int __fastcall sub_283830(_BYTE *a1, int a2)
{
  int v2; // r2
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int *v6; // r4
  int v8; // r0
  __int64 v9; // r0

  if ( a1 && *a1 && (v2 = a2, a2 = dword_48ABDC, dword_48ABDC >= 0) )
  {
    v3 = sub_28368C(a1, dword_48ABDC + v2, v2);
    if ( v3 == -1 )
    {
      v8 = sub_2972B4();
      v9 = sub_28D534(v8);
      dword_4900D8 = 0;
      sub_2945F0(v9, HIDWORD(v9));
      return 0;
    }
    else
    {
      dword_48ABDC = v3;
      v4 = sub_2978D0(v3);
      v5 = sub_2978E0(dword_48ABDC);
      v6 = (int *)sub_297940(v5);
      if ( dword_46DED4 )
        sub_2978E0(v4);
      sub_2837D0(*v6);
      dword_4900D8 = 0;
      dword_4900D4 = dword_4900DC;
      sub_28D534(0);
      return 1;
    }
  }
  else
  {
    sub_2945F0(a1, a2);
    return 0;
  }
}
