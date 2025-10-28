int __fastcall force_exec_all_task(int a1)
{
  if ( !*(_BYTE *)(a1 + 6148) )
    return _exec_all_task(a1);
  stop_task_timer(a1);
  _exec_all_task(a1);
  return start_task_timer(a1);
}
