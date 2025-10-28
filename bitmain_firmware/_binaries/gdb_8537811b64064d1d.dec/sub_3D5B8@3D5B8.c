void __noreturn sub_3D5B8(int a1, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_946D8("Could not trace the inferior process.\nError: ");
  sub_25BD94(a1, (char *)varg_r1);
  sub_3D12C();
  exit(127);
}
