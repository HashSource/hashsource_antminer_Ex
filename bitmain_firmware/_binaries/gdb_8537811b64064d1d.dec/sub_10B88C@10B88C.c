int sub_10B88C(int a1, int a2, ...)
{
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  sub_25A4E8(a1, a2, (char *)varg_r2);
  return 0;
}
