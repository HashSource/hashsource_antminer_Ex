int __fastcall miner_monitor_init(int a1)
{
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r5
  char *v4; // r8
  _BYTE *v5; // r0
  char *v6; // r9
  char *v7; // r4
  void *v8; // r0
  char *v9; // r2
  char *v10; // r3
  char *v11; // r0
  int v12; // r0

  v1 = (int (**)(void))dev_ctrl(a1);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (char *)&unk_174938;
    v4 = (char *)&unk_174938 + 216 * v2;
    do
    {
      v5 = calloc(0x100u, 1u);
      *v5 = 63;
      *((_DWORD *)v3 + 17) = v5;
      *((_DWORD *)v3 + 24) = calloc(0x10u, 4u);
      *((_DWORD *)v3 + 25) = calloc(0x10u, 4u);
      v6 = (char *)calloc(0x10u, 4u);
      *((_DWORD *)v3 + 1) = v6;
      v7 = (char *)calloc(0x10u, 4u);
      *(_DWORD *)v3 = v7;
      *((_DWORD *)v3 + 3) = calloc(0x10u, 4u);
      v8 = calloc(0x10u, 4u);
      v9 = v7 - 4;
      v10 = v6 - 4;
      *((_DWORD *)v3 + 2) = v8;
      *((_QWORD *)v3 + 26) = 0;
      *((_DWORD *)v3 + 50) = 0;
      do
      {
        *((_DWORD *)v10 + 1) = -64;
        v10 += 4;
        *((_DWORD *)v9 + 1) = -64;
        v9 += 4;
      }
      while ( v10 != v6 + 60 );
      v11 = v3;
      v3 += 216;
      init_temp_senor_info(v11, -64, v9);
    }
    while ( v3 != v4 );
  }
  dword_1756C4 = new_observable_subject();
  dword_1756BC = new_observable_subject();
  dword_1756C0 = new_observable_subject();
  dword_1756B8 = new_observable_subject();
  dword_1756C8 = ((int (*)(void))new_task_timer)();
  ((void (*)(void))add_new_task)();
  add_new_task(dword_1756C8, sub_593A8, "ith_voltage_zec");
  v12 = add_new_task(dword_1756C8, sub_59A0C, 60000);
  dword_1756CC = new_task_timer(v12);
  add_new_task(dword_1756CC, sub_592E0, 5000);
  add_new_task(dword_1756CC, sub_59218, 1000);
  return add_new_task(dword_1756CC, task_check_miner_status, 1000);
}
