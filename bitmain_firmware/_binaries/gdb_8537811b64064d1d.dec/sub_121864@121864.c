_BYTE *__fastcall sub_121864(const char **a1, int a2, int a3, _DWORD *a4)
{
  __int64 v7; // r0
  int v8; // r7
  int v9; // r4

  LODWORD(v7) = sub_11E4E8(*a1, (int)(a1 + 1), a2, *(_DWORD *)(a3 + 12));
  v8 = *(_DWORD *)(a3 + 12);
  v9 = dword_4872D8;
  *a4 = v8;
  return sub_1217C4(a1, v7, v9 + 160, "DW_FORM_line_strp", ".debug_line_str");
}
