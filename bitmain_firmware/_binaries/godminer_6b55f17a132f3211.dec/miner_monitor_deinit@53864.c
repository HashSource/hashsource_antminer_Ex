void miner_monitor_deinit()
{
  int v0; // r0
  int (**v1)(void); // r0
  int v2; // r0
  char *v3; // r4
  char *v4; // r5
  void *v5; // r0

  destroy_task_timer((void *)dword_16737C);
  destroy_task_timer((void *)dword_167378);
  destroy_observable_subject((void *)dword_167374);
  destroy_observable_subject((void *)dword_16736C);
  destroy_observable_subject((void *)dword_167370);
  destroy_observable_subject((void *)dword_167368);
  v1 = (int (**)(void))dev_ctrl(v0);
  v2 = (*v1)();
  if ( v2 > 0 )
  {
    v3 = (char *)&unk_1665E8;
    v4 = (char *)&unk_1665E8 + 216 * v2;
    do
    {
      v5 = (void *)*((_DWORD *)v3 + 17);
      v3 += 216;
      free(v5);
      free(*((void **)v3 - 30));
      free(*((void **)v3 - 53));
      free(*((void **)v3 - 54));
      free(*((void **)v3 - 51));
      free(*((void **)v3 - 52));
    }
    while ( v3 != v4 );
  }
}
