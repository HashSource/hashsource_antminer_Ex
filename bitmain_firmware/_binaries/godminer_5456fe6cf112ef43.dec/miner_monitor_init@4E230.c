int miner_monitor_init()
{
  int *v0; // r4
  _BYTE *v1; // r0
  int *v2; // r0
  int inited; // r0
  int v4; // r0

  v0 = (int *)&unk_166540;
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
  while ( v0 != &dword_166880 );
  dword_166890 = new_observable_subject(inited);
  dword_166884 = new_observable_subject(dword_166890);
  dword_16688C = new_observable_subject(dword_166884);
  dword_166888 = new_observable_subject(dword_16688C);
  dword_166880 = new_observable_subject(dword_166888);
  dword_166894 = ((int (*)(void))new_task_timer)();
  ((void (*)(void))add_new_task)();
  add_new_task(dword_166894, task_check_system_working_voltage, 1000);
  add_new_task(dword_166894, sub_4E020, "se");
  add_new_task(dword_166894, sub_4DF60, 10000);
  v4 = add_new_task(dword_166894, sub_4E62C, 60000);
  dword_166898 = new_task_timer(v4);
  add_new_task(dword_166898, sub_4DEA0, 5000);
  add_new_task(dword_166898, sub_4DDE0, 1000);
  return add_new_task(dword_166898, task_check_miner_status, 1000);
}
