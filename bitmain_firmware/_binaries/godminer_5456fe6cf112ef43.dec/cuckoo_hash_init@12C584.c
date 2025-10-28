void *__fastcall cuckoo_hash_init(int a1)
{
  void *result; // r0

  result = calloc(0x100u, 8u);
  cuckoo[a1] = result;
  return result;
}
