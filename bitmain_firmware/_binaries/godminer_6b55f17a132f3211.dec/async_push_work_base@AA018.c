int __fastcall async_push_work_base(int a1, int a2)
{
  queue_enqueue(*(_DWORD *)(a1 + 804), a2, 1);
  return 0;
}
