int __fastcall sub_259224(int a1)
{
  int v2; // r12

  v2 = dword_48A9B4;
  *(_QWORD *)(a1 + 4) = __PAIR64__(dword_487A50, dword_48A9B8);
  *(_DWORD *)a1 = v2;
  dword_487A50 = 1;
  sub_2590A8();
  return a1;
}
