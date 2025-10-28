int __fastcall sub_BC000(int a1)
{
  int v2; // r6
  int result; // r0
  _QWORD *v4; // r5

  v2 = sub_1836B0(a1);
  result = sub_1836A8(v2, dword_478250);
  if ( !result )
  {
    v4 = sub_930BC(1u, 0x10u);
    *v4 = sub_23059C(a1, 7, 0, v4 + 1);
    sub_1836A0(v2, dword_478250, v4);
    return (int)v4;
  }
  return result;
}
