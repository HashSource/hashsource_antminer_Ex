int __fastcall sub_BD16C(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0

  if ( sub_194328(*(_DWORD *)(a3 + 4)) || sub_194328(*(_DWORD *)(a4 + 4)) )
  {
    result = sub_C09E0(a1, 21);
    *a2 = 0;
    a2[1] = a5;
  }
  else
  {
    result = sub_BD010(a1, a2, a2 + 1, a3 + 4, a4 + 4, 20, 21, 0, "less than");
    *a2 = 0;
    a2[1] = a5;
  }
  return result;
}
