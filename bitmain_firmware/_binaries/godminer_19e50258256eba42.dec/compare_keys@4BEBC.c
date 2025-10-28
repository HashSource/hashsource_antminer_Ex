int __cdecl compare_keys(const void *key1, const void *key2)
{
  return strcmp(*(const char **)key1, *(const char **)key2);
}
