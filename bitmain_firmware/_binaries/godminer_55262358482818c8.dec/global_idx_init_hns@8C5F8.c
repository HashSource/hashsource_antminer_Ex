int __fastcall global_idx_init_hns(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0xA608u, 1u);
  LOWORD(v3) = -26984;
  *(_DWORD *)(a1 + 824) = v2;
  HIWORD(v3) = (unsigned int)"dhash_start_ckb" >> 16;
  printf(v3);
  return 0;
}
