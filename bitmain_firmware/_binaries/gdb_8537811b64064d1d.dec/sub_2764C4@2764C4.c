_DWORD *__fastcall sub_2764C4(int a1, int a2, int a3, _DWORD *a4)
{
  const char *v5; // r4
  _DWORD *result; // r0
  int *v7; // r2
  int *v8; // r4
  _DWORD *v9; // r3
  _DWORD *v10; // r0

  v5 = (const char *)sub_273FC8(a4, "version")[1];
  result = (_DWORD *)strcmp(v5, "1.0");
  if ( result )
  {
    sub_273D20(a1, "Target description has unsupported version \"%s\"", v5);
    v8 = v7;
    v10 = sub_273FC8(v9, "name");
    result = sub_238784(*v8, (char *)v10[1], 0);
    v8[1] = (int)result;
  }
  return result;
}
