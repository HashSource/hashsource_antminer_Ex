int miner_monitor_stop()
{
  stop_task_timer(dword_5AEF58);
  return stop_task_timer(dword_5AEF5C);
}
