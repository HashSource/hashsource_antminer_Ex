void __cdecl hashtable_close(hashtable_t *hashtable)
{
  hashtable_do_clear(hashtable);
  jsonp_free(*((void **)hashtable + 1));
}
