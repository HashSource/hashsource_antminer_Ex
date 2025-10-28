int __fastcall sub_C853C(int a1)
{
  int v2; // r2
  __int64 v3; // r0

  v2 = dword_478360;
  dword_478360 = a1;
  dword_47835C = v2;
  v3 = sub_26CC1C("bpnum");
  return sub_26CCA8(v3, HIDWORD(v3), a1, a1 >> 31);
}
