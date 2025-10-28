void __cdecl _list_add(list_head *a1, list_head *prev, list_head *next)
{
  *((_DWORD *)next + 1) = a1;
  *(_DWORD *)a1 = next;
  *((_DWORD *)a1 + 1) = prev;
  *(_DWORD *)prev = a1;
}
