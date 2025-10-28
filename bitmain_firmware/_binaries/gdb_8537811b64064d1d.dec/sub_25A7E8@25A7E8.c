void sub_25A7E8(int a1, int a2, char *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+Ch] BYREF

  va_start(varg_r3, a3);
  sub_25A7C8(a1, a2);
  sub_259EAC(a2, a3, varg_r3);
}
