int __fastcall global_idx_init_rvn(int a1)
{
  int v1; // r3
  void *s; // [sp+Ch] [bp-8h]

  s = malloc(0x8901u);
  memset(s, 0, 0x8901u);
  *(_DWORD *)(a1 + 864) = s;
  printf("__custom_data init %p\n", s);
  return v1;
}
