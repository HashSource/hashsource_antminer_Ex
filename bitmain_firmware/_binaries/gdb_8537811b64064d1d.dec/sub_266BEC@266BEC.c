void __fastcall sub_266BEC(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v7; // r4
  _DWORD *v9; // r11
  __int64 v10; // r8
  __int64 v11; // r0

  v7 = a1;
  if ( sub_266898(a1, a2, a4 + 17) )
  {
    if ( *(_DWORD *)(a5 + 8) == 14 )
    {
      v7 = sub_AAFBC(v7);
      if ( !sub_26BF74(v7) )
        goto LABEL_4;
    }
    else if ( !sub_26BF74(v7) )
    {
LABEL_4:
      v9 = (_DWORD *)sub_26BC98(v7);
      v10 = sub_26C008(v7);
      v11 = ((__int64 (__fastcall *)(int))loc_26C0C4)(v7);
      sub_266A10(v9, SHIDWORD(v11), v10, SHIDWORD(v10), v11, a2, a3, v7, a4, a5);
      return;
    }
    ((void (__fastcall *)(int))loc_26E034)(v7);
    goto LABEL_4;
  }
}
