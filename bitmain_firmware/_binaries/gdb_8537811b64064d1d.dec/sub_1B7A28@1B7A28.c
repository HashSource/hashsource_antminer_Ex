void __fastcall sub_1B7A28(int a1, int a2)
{
  int v4; // r0
  int v5; // r4
  int i; // r5

  v4 = ((int (*)(void))loc_1B68DC)();
  v5 = *(_DWORD *)(a1 + 176);
  for ( i = v4; v5; v5 = ((int (__fastcall *)(int, int))loc_1B7330)(a1, v5) )
    i |= ((int (__fastcall *)(int, int))loc_1B68DC)(v5, a2);
  if ( i )
    sub_DC44C();
}
