int __fastcall sub_172254(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0

  result = sub_171DFC(a1, a2, a3, 0, 0);
  **(_BYTE **)(result + 24) = 13;
  return result;
}
