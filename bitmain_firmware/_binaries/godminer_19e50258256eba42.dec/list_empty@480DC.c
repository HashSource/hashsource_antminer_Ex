int __cdecl list_empty(list_head *head)
{
  return head == *(list_head **)head;
}
