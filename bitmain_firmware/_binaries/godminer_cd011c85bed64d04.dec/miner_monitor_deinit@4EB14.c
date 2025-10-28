void miner_monitor_deinit()
{
  int *v0; // r4
  void *v1; // r0

  v0 = (int *)&unk_167550;
  destroy_task_timer((void *)dword_1678A8);
  destroy_task_timer((void *)dword_1678A4);
  destroy_observable_subject((void *)dword_1678A0);
  destroy_observable_subject((void *)dword_167894);
  destroy_observable_subject((void *)dword_16789C);
  destroy_observable_subject((void *)dword_167898);
  destroy_observable_subject((void *)dword_167890);
  do
  {
    v1 = (void *)v0[15];
    v0 += 52;
    free(v1);
    free((void *)*(v0 - 30));
    free((void *)*(v0 - 51));
    free((void *)*(v0 - 52));
    free((void *)*(v0 - 49));
    free((void *)*(v0 - 50));
  }
  while ( v0 != &dword_167890 );
}
