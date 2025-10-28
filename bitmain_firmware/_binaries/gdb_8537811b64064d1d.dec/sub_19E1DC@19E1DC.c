_DWORD *__fastcall sub_19E1DC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0

  v2 = sub_163960(a1, 0x14u);
  v3 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[1] = sub_1773EC(a1, v3, 0);
  v4 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[2] = sub_1773EC(a1, v4, 1);
  v5 = ((int (__fastcall *)(int))loc_166160)(a1);
  v6 = ((int (__fastcall *)(int))loc_1661D8)(a1);
  v2[3] = sub_177470(a1, v5, (int)"REAL", v6);
  *v2 = sub_177418(a1, 8, 1);
  v7 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[4] = sub_177444(a1, v7, 1);
  return v2;
}
