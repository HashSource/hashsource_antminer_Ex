int __fastcall visited_test(_DWORD *a1, unsigned int a2)
{
  int v3; // r0
  char v4; // r1

  v3 = sub_12CAB4(a2, a1[2]);
  return (*(_DWORD *)(*a1 + 4 * v3) >> v4) & 1;
}
