int sub_9274C(int result, ...)
{
  va_list varg_r1; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r1, result);
  if ( dword_4751EC )
    return sub_10A488(result, (char *)varg_r1);
  return result;
}
