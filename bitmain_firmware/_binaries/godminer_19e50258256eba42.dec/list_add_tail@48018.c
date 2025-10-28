void __cdecl list_add_tail(list_head *a1, list_head *head)
{
  _list_add(a1, *((list_head **)head + 1), head);
}
