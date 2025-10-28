void __cdecl list_init(list_t *list)
{
  *((_DWORD *)list + 1) = list;
  *(_DWORD *)list = list;
}
