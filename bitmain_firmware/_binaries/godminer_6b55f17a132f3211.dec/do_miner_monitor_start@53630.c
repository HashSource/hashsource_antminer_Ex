int do_miner_monitor_start()
{
  int v0; // r5
  int all_created_runtime; // r0
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // t1
  int v6; // [sp+4h] [bp-8h] BYREF

  v0 = 0;
  v6 = 0;
  all_created_runtime = get_all_created_runtime(&v6);
  v2 = v6;
  if ( v6 > 0 )
  {
    v3 = (_DWORD *)(all_created_runtime - 4);
    do
    {
      v4 = v3[1];
      ++v3;
      if ( !*(_BYTE *)(v4 + 218) )
      {
        do
          sleep(1u);
        while ( !*(_BYTE *)(*v3 + 218) );
        v2 = v6;
      }
      ++v0;
    }
    while ( v2 > v0 );
  }
  force_exec_all_task(dword_167378);
  force_exec_all_task(dword_16737C);
  start_task_timer((void *)dword_167378);
  return start_task_timer((void *)dword_16737C);
}
