int __fastcall sub_FC2B0(int a1)
{
  int v1; // r4
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3

  v1 = *(_DWORD *)sub_243004(a1);
  sub_2573A8(v1, "The currently selected C++ ABI is \"", v2, v3);
  sub_257610(v1, "cp-abi", off_46D370);
  sub_2573A8(v1, "\" (", v4, v5);
  sub_257610(v1, "longname", dword_46D374);
  return sub_2573A8(v1, ").\n", v6, v7);
}
