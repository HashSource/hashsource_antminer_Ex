void miner_monitor_deinit()
{
  int (**v0)(); // r0
  int v1; // [sp+0h] [bp-Ch]
  int i; // [sp+4h] [bp-8h]

  destroy_task_timer((_BYTE *)dword_5AEF58);
  destroy_task_timer((_BYTE *)dword_5AEF5C);
  destroy_observable_subject((void *)dword_5AEF60);
  destroy_observable_subject((void *)dword_5AEF64);
  destroy_observable_subject((void *)dword_5AEF68);
  destroy_observable_subject((void *)dword_5AEF6C);
  v0 = dev_ctrl();
  v1 = (*v0)();
  for ( i = 0; i < v1; ++i )
  {
    free((void *)dword_5ADBD8[54 * i + 17]);
    free((void *)dword_5ADBD8[54 * i + 24]);
    free((void *)dword_5ADBD8[54 * i + 1]);
    free((void *)dword_5ADBD8[54 * i]);
    free((void *)dword_5ADBD8[54 * i + 3]);
    free((void *)dword_5ADBD8[54 * i + 2]);
  }
}
