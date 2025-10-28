int __fastcall sub_5AA00(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r5
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v12; // r11

  v3 = a1;
  v6 = *(_DWORD *)sub_243004(a1);
  sub_2578D4(v6, 0);
  for ( ; v3; v3 = *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)(v3 + 52) && (*(_BYTE *)(v3 + 12) & 0x40) == 0 )
    {
      sub_2578D4(v6, *(_BYTE *)(v3 + 12) & 0x40);
      v12 = sub_338BFC(*(_DWORD *)(v3 + 56), "show ") + 5;
      if ( sub_257418(v6) )
        sub_257610(v6, "prefix", v12);
      sub_5AA00(**(_DWORD **)(v3 + 52), a2, v12);
      sub_257374(v6, 0);
    }
    else if ( *(_DWORD *)(v3 + 8) != 16 )
    {
      sub_2578D4(v6, 0);
      sub_2573A8(v6, a3, v7, v8);
      sub_257610(v6, "name", *(_DWORD *)(v3 + 4));
      sub_2573A8(v6, ":  ", v9, v10);
      if ( (*(_WORD *)(v3 + 12) & 0x180) == 0x100 )
        ((void (__fastcall *)(_DWORD, int, int))loc_5A708)(0, a2, v3);
      else
        sub_54C84(v3);
      sub_257374(v6, 0);
    }
  }
  return sub_257374(v6, 0);
}
