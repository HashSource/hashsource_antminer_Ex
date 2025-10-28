int miner_monitor_init()
{
  int *v0; // r4
  _BYTE *v1; // r0
  int v2; // r0
  void *v3; // r0
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  void *v9; // r0
  int v10; // r1
  int v11; // r1
  int v12; // r1

  v0 = (int *)&unk_166538;
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
    v2 = (int)v0;
    v0[48] = 0;
    v0 += 52;
    init_temp_senor_info(v2);
  }
  while ( v0 != &dword_166878 );
  dword_166888 = (int)new_observable_subject();
  dword_16687C = (int)new_observable_subject();
  dword_166884 = (int)new_observable_subject();
  dword_166880 = (int)new_observable_subject();
  dword_166878 = (int)new_observable_subject();
  v3 = new_task_timer();
  LOWORD(v4) = -8160;
  HIWORD(v4) = (unsigned int)sub_4DDE0 >> 16;
  dword_16688C = (int)v3;
  add_new_task((int)v3, v4, 1000);
  LOWORD(v5) = -8988;
  HIWORD(v5) = (unsigned int)&loc_4DAA4 >> 16;
  add_new_task(dword_16688C, v5, 1000);
  LOWORD(v6) = -8352;
  HIWORD(v6) = (unsigned int)sub_4DD20 >> 16;
  add_new_task(dword_16688C, v6, (int)"tage_by_steps");
  LOWORD(v7) = -8544;
  HIWORD(v7) = (unsigned int)check_system_working_voltage_ltc >> 16;
  add_new_task(dword_16688C, v7, 10000);
  LOWORD(v8) = -6804;
  HIWORD(v8) = (unsigned int)&loc_4E32C >> 16;
  add_new_task(dword_16688C, v8, 60000);
  v9 = new_task_timer();
  LOWORD(v10) = -8736;
  HIWORD(v10) = (unsigned int)&loc_4DBA0 >> 16;
  dword_166890 = (int)v9;
  add_new_task((int)v9, v10, 5000);
  LOWORD(v11) = -8928;
  HIWORD(v11) = (unsigned int)&loc_4DAE0 >> 16;
  add_new_task(dword_166890, v11, 1000);
  LOWORD(v12) = -15892;
  HIWORD(v12) = (unsigned int)&loc_4C234 >> 16;
  return add_new_task(dword_166890, v12, 1000);
}
