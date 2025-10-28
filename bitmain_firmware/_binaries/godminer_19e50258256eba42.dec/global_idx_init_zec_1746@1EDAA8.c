int __fastcall global_idx_init_zec_1746(int a1)
{
  void *s; // [sp+Ch] [bp-8h]

  s = malloc(0xADF0u);
  memset(s, 0, 0xADF0u);
  *(_DWORD *)(a1 + 864) = s;
  printf("__custom_data init %p\n", s);
  return 0;
}
