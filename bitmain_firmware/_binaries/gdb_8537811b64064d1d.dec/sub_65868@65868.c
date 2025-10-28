int __fastcall sub_65868(int a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *v4; // r0

  if ( a3 )
    sub_94708("-add-inferior should be passed no arguments");
  v3 = ((int (*)(void))loc_18407C)();
  v4 = (_DWORD *)sub_243004(v3);
  return sub_2576BC(*v4, "inferior", "i%d", *(_DWORD *)(v3 + 8));
}
