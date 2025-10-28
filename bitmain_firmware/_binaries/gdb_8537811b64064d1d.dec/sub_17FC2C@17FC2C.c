int __fastcall sub_17FC2C(int a1, int a2)
{
  int v4; // r0
  int result; // r0

  v4 = sub_1836B0(a1);
  *(_DWORD *)(v4 + 44) = a1;
  result = sub_1836B0(v4);
  *(_DWORD *)(result + 48) = a2;
  return result;
}
