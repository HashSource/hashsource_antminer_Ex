int __fastcall global_idx_init_kda(int a1)
{
  void *s; // [sp+Ch] [bp-8h]

  s = malloc(0xC688u);
  memset(s, 0, 0xC688u);
  *(_DWORD *)(a1 + 864) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
