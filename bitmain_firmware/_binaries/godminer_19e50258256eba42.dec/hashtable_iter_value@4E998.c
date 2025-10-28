void *__cdecl hashtable_iter_value(void *iter)
{
  return (void *)*((_DWORD *)iter + 3);
}
