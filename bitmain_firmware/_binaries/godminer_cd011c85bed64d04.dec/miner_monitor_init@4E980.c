int miner_monitor_init()
{
  int *v0; // r4
  _BYTE *v1; // r0
  int *v2; // r0
  int inited; // r0
  int v4; // r0

  v0 = (int *)&unk_167550;
  do
  {
    v1 = calloc(0x100u, 1u);
    *v1 = 63;
    v0[15] = (int)v1;
    v0[22] = (int)calloc(0x10u, 4u);
    v0[23] = (int)calloc(0x10u, 4u);
    v0[1] = (int)calloc(0x10u, 4u);
    *v0 = (int)calloc(0x10u, 4u);
    v0[3] = (int)calloc(0x10u, 4u);
    v0[2] = (int)calloc(0x10u, 4u);
    *((_QWORD *)v0 + 25) = 0;
    v2 = v0;
    v0[48] = 0;
    v0 += 52;
    inited = init_temp_senor_info(v2);
  }
  while ( v0 != &dword_167890 );
  dword_1678A0 = new_observable_subject(inited);
  dword_167894 = new_observable_subject(dword_1678A0);
  dword_16789C = new_observable_subject(dword_167894);
  dword_167898 = new_observable_subject(dword_16789C);
  dword_167890 = new_observable_subject(dword_167898);
  dword_1678A4 = ((int (*)(void))new_task_timer)();
  ((void (*)(void))add_new_task)();
  add_new_task(dword_1678A4, task_check_system_working_voltage, 1000);
  add_new_task(dword_1678A4, sub_4E770, "");
  add_new_task(dword_1678A4, sub_4E6B0, 10000);
  v4 = add_new_task(dword_1678A4, sub_4ED7C, 60000);
  dword_1678A8 = new_task_timer(v4);
  add_new_task(dword_1678A8, sub_4E5F0, 5000);
  add_new_task(dword_1678A8, sub_4E530, 1000);
  return add_new_task(dword_1678A8, task_check_miner_status, 1000);
}
