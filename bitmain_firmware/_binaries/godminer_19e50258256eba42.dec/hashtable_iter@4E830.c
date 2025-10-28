void *__cdecl hashtable_iter(hashtable_t *hashtable)
{
  return hashtable_iter_next(hashtable, (char *)hashtable + 20);
}
