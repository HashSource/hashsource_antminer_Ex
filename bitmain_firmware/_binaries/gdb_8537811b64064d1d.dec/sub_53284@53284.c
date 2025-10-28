int __fastcall sub_53284(char *a1, int a2, int a3, int **a4)
{
  int result; // r0

  result = sub_52DE0(a1, a2, a3, a4);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}
