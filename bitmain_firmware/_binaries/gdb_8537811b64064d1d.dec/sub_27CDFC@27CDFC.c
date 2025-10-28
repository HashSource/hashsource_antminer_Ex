void sub_27CDFC(char *a1, ...)
{
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  char v2; // [sp+10h] [bp-14h] BYREF
  va_list varg_r1; // [sp+2Ch] [bp+8h] BYREF

  va_start(varg_r1, a1);
  sub_9326C((char **)&ptr, a1, varg_r1);
  sub_946D8("Compile module: warning: %s", (const char *)ptr);
  if ( ptr != &v2 )
    sub_339E8C(ptr);
}
