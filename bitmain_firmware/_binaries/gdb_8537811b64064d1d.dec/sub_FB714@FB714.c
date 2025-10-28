int __fastcall sub_FB714(int a1, int a2)
{
  int v3; // r0
  int v4; // r6
  int i; // r4
  int v6; // r0
  bool v7; // cc
  int result; // r0
  _DWORD *v9; // r0

  v3 = dword_47ACBC;
  if ( dword_47ACBC && (v3 = ((int (*)(void))loc_16B198)()) != 0 || dword_47AD04 && *(_DWORD *)(dword_47AD04 + 12) )
  {
    v4 = sub_1DD5B4(a2);
    if ( ((int (*)(void))loc_16B198)() )
    {
      ((void (__fastcall *)(int, int (*)(int, int, int, int, int), int, _DWORD))loc_16B1E4)(v4, sub_FB854, a2, 0);
    }
    else
    {
      sub_FB484(a2, 0, ".reg", 0, 0, "general-purpose", 1);
      sub_FB484(a2, 0, ".reg2", 0, 2, "floating-point", 0);
    }
    for ( i = 0; ; ++i )
    {
      v6 = sub_1DD5B4(a2);
      v7 = i < ((int (__fastcall *)(int))loc_166EC4)(v6);
      result = a2;
      if ( !v7 )
        break;
      if ( !((int (__fastcall *)(int, int))loc_1DD928)(a2, i) )
        ((void (__fastcall *)(int, int))loc_1DE9F0)(a2, i);
    }
  }
  else
  {
    v9 = (_DWORD *)sub_242FDC(v3);
    return sub_25A440(*v9, "Can't fetch registers from this type of core file\n");
  }
  return result;
}
