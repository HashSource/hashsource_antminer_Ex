int __fastcall sub_276D6C(int a1, int a2, int *a3, const char *a4)
{
  int v7; // r1
  int v9; // r0

  v7 = sub_2A65A4(a4);
  if ( v7 )
    return sub_236624(*a3, v7);
  v9 = sub_273D20(a1, "Target description specified unknown architecture \"%s\"", a4);
  return sub_276DAC(v9);
}
