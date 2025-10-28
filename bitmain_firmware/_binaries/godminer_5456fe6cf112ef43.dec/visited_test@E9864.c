int __fastcall visited_test(_DWORD *a1, int a2)
{
  int v3; // r0
  char v4; // r1

  v3 = sub_12CC3C(a2, a1[2]);
  return (*(_DWORD *)(*a1 + 4 * v3) >> v4) & 1;
}
