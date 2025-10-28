int __fastcall sub_1A63A4(int a1, int a2, _BYTE *a3)
{
  int v6; // r8
  const char *v7; // r7
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r9
  int v12; // r6
  int v13; // r0
  int result; // r0

  v6 = *(_DWORD *)(a2 + 20);
  v7 = *(const char **)a2;
  if ( !a3 || !*a3 || sub_1A6030((int)a3, *(char **)a2) || (result = sub_1A61D8((int)a3, v6)) != 0 )
  {
    v8 = sub_B834C(a1);
    v9 = ((int (__fastcall *)(int))loc_166694)(v8);
    v10 = a1;
    v11 = *(_DWORD *)(a2 + 28);
    v12 = *(_DWORD *)(a2 + 36);
    v13 = sub_163004(v10, a2);
    sub_259F38(" [%d] ", v13);
    return sub_1A5E7C(v7, v6, v11, v11 + v12, *(_DWORD *)(a2 + 80), v9 / 8);
  }
  return result;
}
