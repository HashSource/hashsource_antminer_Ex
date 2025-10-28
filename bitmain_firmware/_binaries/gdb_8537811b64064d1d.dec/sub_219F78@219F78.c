int __fastcall sub_219F78(int a1)
{
  int result; // r0
  void *v3; // r5

  result = sub_1CD174(a1, (_DWORD *)dword_489700);
  if ( !result )
  {
    v3 = sub_930BC(1u, 8u);
    sub_219E64((int)v3, dword_46DBAC);
    sub_1CD16C(a1, (_DWORD *)dword_489700, (int)v3);
    return (int)v3;
  }
  return result;
}
