void sub_259F38(char *a1, ...)
{
  int *v1; // r0
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  v1 = (int *)sub_242FB4();
  sub_259EAC(*v1, a1, varg_r1);
}
