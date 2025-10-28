int miner_monitor_stop()
{
  stop_task_timer(dword_1678A8);
  return stop_task_timer(dword_1678A4);
}
