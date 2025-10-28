void __cdecl _list_del(list_head *prev, list_head *next)
{
  *((_DWORD *)next + 1) = prev;
  *(_DWORD *)prev = next;
}
