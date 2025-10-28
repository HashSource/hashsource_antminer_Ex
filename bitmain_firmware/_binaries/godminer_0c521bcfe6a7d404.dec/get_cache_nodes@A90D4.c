__int64 get_cache_nodes()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(256, &v1);
  return (unsigned int)(v1 << 6);
}
