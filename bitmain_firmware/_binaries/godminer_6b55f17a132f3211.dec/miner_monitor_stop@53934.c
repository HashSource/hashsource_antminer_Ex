int miner_monitor_stop()
{
  stop_task_timer(dword_16737C);
  return stop_task_timer(dword_167378);
}
