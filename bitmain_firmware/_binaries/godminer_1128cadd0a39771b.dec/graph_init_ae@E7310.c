int __fastcall graph_init_ae(int a1)
{
  memset(&gEdges, 0, 0x540u);
  memset(&gSols, 0, 0x2B0u);
  return cuckoo_hash_init(a1);
}
