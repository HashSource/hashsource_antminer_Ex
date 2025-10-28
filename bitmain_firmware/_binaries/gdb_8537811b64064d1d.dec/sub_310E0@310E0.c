bool __fastcall sub_310E0(unsigned int a1)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)sub_31088();
  return v2[5] <= a1 && v2[6] > a1 || v2[7] <= a1 && v2[8] > a1 || sub_1B85C4(a1, ".plt") || sub_1B2478(a1) != 0;
}
