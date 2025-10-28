void __fastcall destroy_task_timer(_BYTE *a1)
{
  if ( a1[6148] )
    stop_task_timer((int)a1);
  free(a1);
}
