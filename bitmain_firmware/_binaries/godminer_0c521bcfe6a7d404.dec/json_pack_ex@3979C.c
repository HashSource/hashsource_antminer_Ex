int json_pack_ex(char *a1, int a2, _BYTE *a3, ...)
{
  va_list varg_r3; // [sp+14h] [bp+8h] BYREF

  va_start(varg_r3, a3);
  return json_vpack_ex(a1, a2, a3, (int *)varg_r3);
}
