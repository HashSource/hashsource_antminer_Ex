int sub_9B3C0(int result, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, result);
  if ( ++dword_477C64 <= 2 )
    return sub_25BD94(result, (char *)varg_r1);
  return result;
}
