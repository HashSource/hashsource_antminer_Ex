void *__fastcall graph_init_ae(int a1)
{
  void *v2; // r0
  void *v3; // r0

  LOWORD(v2) = -2628;
  HIWORD(v2) = (unsigned int)&unk_16E3BC >> 16;
  memset(v2, 0, 0x540u);
  LOWORD(v3) = -1284;
  HIWORD(v3) = (unsigned int)&unk_16E8FC >> 16;
  memset(v3, 0, 0x2B0u);
  return cuckoo_hash_init(a1);
}
