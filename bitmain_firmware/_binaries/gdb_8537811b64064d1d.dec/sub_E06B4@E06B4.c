int __fastcall sub_E06B4(int a1, int a2, _DWORD *a3, int a4)
{
  int result; // r0

  *a3 = 2;
  a3[2] = 0;
  result = sub_273FC8(a4, "size");
  if ( result )
    a3[2] = **(_DWORD **)(result + 4);
  return result;
}
