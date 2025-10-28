int __fastcall sub_117670(int a1, unsigned __int64 a2)
{
  int result; // r0

  if ( a2 > 0x7FFFFFFF || (result = sub_115FE0(a1, a2), result == -1) )
    sub_15D8C(a2, SHIDWORD(a2));
  return result;
}
