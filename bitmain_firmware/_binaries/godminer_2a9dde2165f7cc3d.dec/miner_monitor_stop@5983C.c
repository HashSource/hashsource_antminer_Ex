int miner_monitor_stop()
{
  stop_task_timer(dword_1756CC);
  return stop_task_timer(dword_1756C8);
}
