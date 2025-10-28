int __fastcall sub_27E2C0(int a1)
{
  int result; // r0
  void *v3; // r5

  result = sub_1836A8(a1, (_DWORD *)dword_48AA6C);
  if ( !result )
  {
    v3 = sub_930BC(1u, 0x10u);
    sub_1836A0(a1, (_DWORD *)dword_48AA6C, (int)v3);
    return (int)v3;
  }
  return result;
}
