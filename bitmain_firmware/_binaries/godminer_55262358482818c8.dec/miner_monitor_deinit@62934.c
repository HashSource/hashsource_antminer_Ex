void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  void *v5; // r0

  destroy_task_timer((_DWORD *)dword_197374);
  destroy_task_timer((_DWORD *)dword_197370);
  destroy_observable_subject((void *)dword_19736C);
  destroy_observable_subject((void *)dword_197364);
  destroy_observable_subject((void *)dword_197368);
  destroy_observable_subject((void *)dword_197360);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = dword_1965E0;
    v4 = &dword_1965E0[54 * v2];
    do
    {
      v5 = (void *)v3[17];
      v3 += 54;
      free(v5);
      free((void *)*(v3 - 30));
      free((void *)*(v3 - 53));
      free((void *)*(v3 - 54));
      free((void *)*(v3 - 51));
      free((void *)*(v3 - 52));
    }
    while ( v3 != v4 );
  }
}
