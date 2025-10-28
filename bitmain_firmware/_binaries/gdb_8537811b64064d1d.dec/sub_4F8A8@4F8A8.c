int sub_4F8A8(_DWORD *a1, int a2, int a3, ...)
{
  int result; // r0
  _DWORD *i; // r5
  _DWORD *v6; // r0
  va_list varg_r3; // [sp+24h] [bp+10h] BYREF

  va_start(varg_r3, a3);
  result = sub_259F10(a3, (char *)varg_r3);
  for ( i = &a1[10 * a2]; i != a1; result = sub_4F7F8(v6) )
  {
    v6 = a1;
    a1 += 10;
  }
  return result;
}
