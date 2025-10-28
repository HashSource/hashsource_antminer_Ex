int miner_monitor_init()
{
  int (**v0)(); // r0
  int v2; // [sp+4h] [bp-10h]
  int j; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v0 = dev_ctrl();
  v2 = (*v0)();
  for ( i = 0; i < v2; ++i )
  {
    dword_5ADBD8[54 * i + 17] = calloc(0x100u, 1u);
    *(_BYTE *)dword_5ADBD8[54 * i + 17] = 63;
    dword_5ADBD8[54 * i + 24] = calloc(0x10u, 4u);
    dword_5ADBD8[54 * i + 25] = calloc(0x10u, 4u);
    dword_5ADBD8[54 * i + 1] = calloc(0x10u, 4u);
    dword_5ADBD8[54 * i] = calloc(0x10u, 4u);
    dword_5ADBD8[54 * i + 3] = calloc(0x10u, 4u);
    dword_5ADBD8[54 * i + 2] = calloc(0x10u, 4u);
    dword_5ADBD8[54 * i + 50] = 0;
    *(_QWORD *)&dword_5ADBD8[54 * i + 52] = 0;
    for ( j = 0; j <= 15; ++j )
    {
      *(_DWORD *)(dword_5ADBD8[54 * i + 1] + 4 * j) = -64;
      *(_DWORD *)(dword_5ADBD8[54 * i] + 4 * j) = -64;
    }
    init_temp_senor_info((int)&dword_5ADBD8[54 * i]);
  }
  dword_5AEF60 = (int)new_observable_subject();
  dword_5AEF64 = (int)new_observable_subject();
  dword_5AEF68 = (int)new_observable_subject();
  dword_5AEF6C = (int)new_observable_subject();
  dword_5AEF5C = (int)new_task_timer();
  add_new_task(dword_5AEF5C, 751484, 1000);
  add_new_task(dword_5AEF5C, 752220, (int)"orking_voltage_by_mps");
  add_new_task(dword_5AEF5C, 754992, 60000);
  dword_5AEF58 = (int)new_task_timer();
  add_new_task(dword_5AEF58, 751852, 5000);
  add_new_task(dword_5AEF58, 752956, 1000);
  add_new_task(dword_5AEF58, (int)task_check_miner_status, 1000);
  if ( pthread_mutex_init(&sweep_result_file_mutex, 0) )
    perror("sweep_result_file_mutex init failed");
  add_new_task(dword_5AEF5C, 753324, 60000);
  return add_new_task(dword_5AEF58, 752588, 1000);
}
