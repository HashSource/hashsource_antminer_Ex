int __fastcall global_idx_init_vbk(int a1)
{
  void *v2; // r0

  v2 = calloc(0x7008u, 1u);
  *(_DWORD *)(a1 + 624) = v2;
  printf("__custom_data init %p\n", v2);
  return 0;
}
