int __fastcall sub_236440(int a1, signed int a2, void *a3)
{
  int v6; // r4
  int v7; // r0
  int result; // r0
  int (__fastcall *v9)(int, signed int, void *); // r3

  v6 = ((int (*)(void))loc_166EC4)();
  v7 = ((int (__fastcall *)(int))loc_166F70)(a1);
  if ( v6 <= a2 && v6 + v7 > a2 )
  {
    v9 = *(int (__fastcall **)(int, signed int, void *))(((int (__fastcall *)(int, int))loc_16ECB0)(a1, dword_48A4B4)
                                                       + 20);
    if ( v9 )
      return v9(a1, a2, a3);
  }
  result = sub_2363B8(a1, a2, a3);
  if ( result == -1 )
    return sub_1E077C(a1, a2, (_UNKNOWN **)a3);
  return result;
}
