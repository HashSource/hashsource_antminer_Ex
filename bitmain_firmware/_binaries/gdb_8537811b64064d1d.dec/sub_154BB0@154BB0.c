int sub_154BB0(int result, unsigned int a2, int a3, const char *a4, const char *a5, ...)
{
  int v7; // r6
  va_list va; // [sp+2Ch] [bp+14h] BYREF

  va_start(va, a5);
  if ( ((a4 != 0) & (a2 >> 31)) != 0 )
  {
    v7 = result;
    sub_154A44(result);
    sub_25A4E8(v7, a5, (char *)va);
    return sub_1549A8(v7, a2, a4);
  }
  return result;
}
