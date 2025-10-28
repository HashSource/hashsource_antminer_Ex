int __fastcall sub_62774(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int v9; // r0

  v4 = a2 + 8;
  v5 = sub_16F67C(a1);
  sub_257610(a1, "id", v4);
  sub_257610(a1, "target-name", v4);
  sub_257610(a1, "host-name", a2 + 520);
  v6 = sub_25752C(a1, "symbols-loaded", *(unsigned __int8 *)(a2 + 1040));
  v7 = sub_16F67C(v6);
  if ( !((int (__fastcall *)(int))loc_16D8AC)(v7) )
  {
    v9 = sub_1836B0(0);
    sub_2576BC(a1, "thread-group", "i%d", *(_DWORD *)(v9 + 8));
  }
  sub_2578D4(a1, 1);
  sub_2578D4(a1, 0);
  if ( *(_DWORD *)(a2 + 1060) )
  {
    sub_257658(a1, "from", v5, *(_DWORD *)(a2 + 1056));
    sub_257658(a1, "to", v5, *(_DWORD *)(a2 + 1060));
  }
  sub_257374(a1, 0);
  return sub_257374(a1, 1);
}
