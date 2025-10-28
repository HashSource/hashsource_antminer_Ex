int get_hash_on_plug()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(12, &v1);
  return v1 ^ 7;
}
