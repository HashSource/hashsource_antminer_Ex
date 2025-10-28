int __fastcall stop_task_timer(int result)
{
  void *thread_return; // [sp+Ch] [bp-8h] BYREF

  if ( *(_BYTE *)(result + 6148) )
  {
    *(_BYTE *)(result + 6148) = 0;
    return pthread_join(*(_DWORD *)(result + 6152), &thread_return);
  }
  return result;
}
