int __fastcall sub_1C7878(const char *a1, const char **a2, int a3, int a4, int a5)
{
  const char *v5; // r6
  const char *v9; // r0
  void *v10; // r8
  int v11; // r7
  _BYTE v13[52]; // [sp+Ch] [bp-50h] BYREF
  int v14; // [sp+40h] [bp-1Ch]

  v5 = a1;
  if ( !a1 )
  {
    if ( dword_46D448 )
      v5 = (const char *)sub_21B3EC(a2);
    else
      v5 = *a2;
  }
  v9 = (const char *)sub_25A72C(2 * a5);
  sub_25A440(a4, "%s%s = ", v9, v5);
  v10 = sub_92E50();
  v11 = ((int (__fastcall *)(const char **, _DWORD, int))loc_15B3C8)(a2, 0, a3);
  sub_266618(v13);
  v14 = 1;
  sub_266BEC(v11, a4, a5, v13, off_46D5A4[0]);
  sub_92E68((int)v10);
  return sub_25A440(a4, (const char *)&word_356660);
}
