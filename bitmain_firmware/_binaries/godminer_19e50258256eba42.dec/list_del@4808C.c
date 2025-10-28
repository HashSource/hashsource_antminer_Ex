void __cdecl list_del(list_head *entry)
{
  _list_del(*((list_head **)entry + 1), *(list_head **)entry);
  *(_DWORD *)entry = 0;
  *((_DWORD *)entry + 1) = 0;
}
