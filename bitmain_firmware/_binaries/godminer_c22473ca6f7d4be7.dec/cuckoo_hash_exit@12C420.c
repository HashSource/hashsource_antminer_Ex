void __fastcall cuckoo_hash_exit(int a1)
{
  free((void *)cuckoo[a1]);
}
