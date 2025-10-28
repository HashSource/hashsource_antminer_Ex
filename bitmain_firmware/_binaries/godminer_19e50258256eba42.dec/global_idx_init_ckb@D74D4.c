int __fastcall global_idx_init_ckb(int a1)
{
  void *s; // [sp+Ch] [bp-8h]

  s = malloc(0x3E08u);
  memset(s, 0, 0x3E08u);
  *(_DWORD *)(a1 + 864) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
