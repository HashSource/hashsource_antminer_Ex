int sub_194360(int a1, ...)
{
  _DWORD *v1; // r0
  int v2; // r0
  _DWORD *v3; // r0
  char *v5; // r0
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  if ( dword_4879EC == 1 )
    return sub_25BD94(a1, (char *)varg_r1);
  if ( dword_4879EC )
  {
    if ( dword_4879EC == 2 )
      sub_258A20(a1, (char *)varg_r1);
    v5 = (char *)sub_94728((int)"language.c", 468, "bad switch");
    return sub_194404(v5);
  }
  else
  {
    v1 = (_DWORD *)sub_242FDC(a1);
    v2 = sub_25A4E8(*v1, a1, (char *)varg_r1);
    v3 = (_DWORD *)sub_242FDC(v2);
    return sub_25A440(*v3, (const char *)&word_356660);
  }
}
