int __fastcall sub_173610(int a1, int a2, int a3, int a4)
{
  __int64 v8; // r0
  int v9; // r4
  int v10; // r0
  int result; // r0

  v8 = sub_1B7278(a1);
  v9 = *(_DWORD *)(a4 + 4 * ((int (__fastcall *)(_DWORD, _DWORD))loc_165BE0)(v8, HIDWORD(v8)));
  v10 = sub_16F92C(a2, v9);
  result = ((int (__fastcall *)(int, int, int, int))loc_173508)(a1, 9, v10, a3);
  *(_DWORD *)(*(_DWORD *)(result + 24) + 28) = v9;
  return result;
}
