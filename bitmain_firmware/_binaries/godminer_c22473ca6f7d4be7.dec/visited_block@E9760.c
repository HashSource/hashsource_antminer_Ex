int __fastcall visited_block(_DWORD *a1, unsigned int a2)
{
  return *(_DWORD *)(*a1 + 4 * (a2 / a1[2]));
}
