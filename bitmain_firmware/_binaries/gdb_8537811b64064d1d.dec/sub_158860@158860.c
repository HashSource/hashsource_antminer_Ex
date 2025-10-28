_DWORD *__fastcall sub_158860(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r6
  int v13; // r0

  v2 = (_DWORD *)sub_163960(a1, 0x38u);
  v2[13] = ((int (__fastcall *)(int, int, int, char *))loc_177350)(a1, 10, 8, "VOID");
  *v2 = sub_1773EC(a1, 8, 0, "character");
  v2[4] = sub_177444(a1, 8, 1, "logical*1");
  v3 = ((int (__fastcall *)(int))loc_165E18)(a1);
  v2[2] = sub_1773EC(a1, v3, 0, "integer*2");
  v4 = ((int (__fastcall *)(int))loc_165E18)(a1);
  v2[5] = sub_177444(a1, v4, 1, "logical*2");
  v5 = ((int (__fastcall *)(int))loc_165F80)(a1);
  v2[6] = sub_177444(a1, v5, 1, "logical*8");
  v6 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[1] = sub_1773EC(a1, v6, 0, "integer");
  v7 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[3] = sub_177444(a1, v7, 1, "logical*4");
  v8 = ((int (__fastcall *)(int))loc_166160)(a1);
  v9 = ((int (__fastcall *)(int))loc_1661D8)(a1);
  v2[7] = sub_177470(a1, v8, "real", v9);
  v10 = ((int (__fastcall *)(int))loc_166250)(a1);
  v11 = ((int (__fastcall *)(int))loc_1662C8)(a1);
  v2[8] = sub_177470(a1, v10, "real*8", v11);
  v12 = ((int (__fastcall *)(int))loc_166340)(a1);
  v13 = ((int (__fastcall *)(int))loc_1663B8)(a1);
  v2[9] = sub_177470(a1, v12, "real*16", v13);
  v2[10] = sub_177BC4(a1, "complex*8", v2[7]);
  v2[11] = sub_177BC4(a1, "complex*16", v2[8]);
  v2[12] = sub_177BC4(a1, "complex*32", v2[9]);
  return v2;
}
