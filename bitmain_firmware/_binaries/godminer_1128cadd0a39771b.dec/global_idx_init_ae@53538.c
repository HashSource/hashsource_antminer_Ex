int __fastcall global_idx_init_ae(int a1)
{
  void *v2; // r0

  v2 = calloc((size_t)"te", 1u);
  *(_DWORD *)(a1 + 632) = v2;
  return printf("__custom_data init %p\n", v2);
}
