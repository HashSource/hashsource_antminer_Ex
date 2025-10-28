int __fastcall sub_7F5B4(int a1)
{
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  obstack_begin((struct obstack *)(a1 + 8), 0, 0, (void *(*)(int))sub_93050, sub_7B68C);
  return a1;
}
