int __fastcall global_idx_init_hns(int a1)
{
  void *s; // [sp+Ch] [bp-8h]

  s = malloc(0xA608u);
  memset(s, 0, 0xA608u);
  *(_DWORD *)(a1 + 864) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
