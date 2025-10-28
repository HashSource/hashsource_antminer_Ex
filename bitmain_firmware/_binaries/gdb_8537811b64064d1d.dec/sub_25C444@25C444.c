void sub_25C444(const char *a1, int a2, char *a3, ...)
{
  va_list varg_r3; // [sp+1Ch] [bp+8h] BYREF

  va_start(varg_r3, a3);
  sub_25BF0C((int)&off_46DE1C, a1, a2, a3, varg_r3);
}
