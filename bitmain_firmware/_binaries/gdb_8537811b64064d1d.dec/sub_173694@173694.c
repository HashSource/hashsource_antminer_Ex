int __fastcall sub_173694(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v6; // r3
  char v7; // r2

  result = ((int (__fastcall *)(int, int, int, int))loc_173508)(a1, 1, a2, a3);
  v6 = *(_DWORD *)(result + 24);
  v7 = *(_BYTE *)(v6 + 1);
  *(_DWORD *)(v6 + 20) = a4;
  *(_BYTE *)(v6 + 1) = v7 | 1;
  return result;
}
