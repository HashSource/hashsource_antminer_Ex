int __fastcall global_idx_init_grin29(int a1)
{
  void *v2; // r0

  v2 = calloc((size_t)"ph_cubehash512_addbits_and_close", 1u);
  *(_DWORD *)(a1 + 624) = v2;
  return printf("__custom_data init %p\n", v2);
}
