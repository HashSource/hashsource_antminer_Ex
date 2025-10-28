_DWORD *__fastcall sub_17BB08(int a1)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v2 = sub_163960(a1, 0x48u);
  *v2 = ((int (__fastcall *)(int, int, int, char *))loc_177350)(a1, 10, 8, "void");
  v2[1] = sub_177418(a1, 8, 1);
  v2[2] = sub_177444(a1, 8, 0);
  v3 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[3] = sub_1773EC(a1, v3, 0);
  v4 = ((int (__fastcall *)(int))loc_165E90)(a1);
  v2[4] = sub_1773EC(a1, v4, 1);
  v5 = ((int (__fastcall *)(int))loc_16661C)(a1);
  v2[5] = sub_1773EC(a1, v5, 1);
  v2[6] = sub_1773EC(a1, 8, 0);
  v2[7] = sub_1773EC(a1, 16, 0);
  v2[8] = sub_1773EC(a1, 32, 0);
  v2[9] = sub_1773EC(a1, 64, 0);
  v2[10] = sub_1773EC(a1, 8, 1);
  v2[11] = sub_1773EC(a1, 16, 1);
  v2[12] = sub_1773EC(a1, 32, 1);
  v2[13] = sub_1773EC(a1, 64, 1);
  v2[14] = sub_177470(a1, 32, (int)"float32", (int)&off_46D508);
  v2[15] = sub_177470(a1, 64, (int)"float64", (int)&off_46D500);
  v2[16] = sub_177BC4(a1, (int)"complex64", v2[14]);
  v2[17] = sub_177BC4(a1, (int)"complex128", v2[15]);
  return v2;
}
