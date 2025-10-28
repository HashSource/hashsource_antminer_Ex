int __fastcall sub_21F564(int a1, _DWORD *a2)
{
  int result; // r0

  result = sub_21F51C(a1, (int)a2);
  if ( a2 != (_DWORD *)(a1 + 4) )
  {
    sub_21F564(a1, (_DWORD *)*a2);
    return sub_21F564(a1, (_DWORD *)a2[1]);
  }
  return result;
}
