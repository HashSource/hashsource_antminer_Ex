int __fastcall global_idx_init_grin32(int a1)
{
  void *v2; // r0

  v2 = calloc(0xDF01u, 1u);
  *(_DWORD *)(a1 + 632) = v2;
  return printf("__custom_data init %p\n", v2);
}
