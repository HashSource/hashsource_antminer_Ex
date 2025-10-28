void miner_monitor_deinit()
{
  int *v0; // r4
  void *v1; // r0

  v0 = (int *)&unk_166538;
  destroy_task_timer((_DWORD *)dword_166890);
  destroy_task_timer((_DWORD *)dword_16688C);
  destroy_observable_subject((void *)dword_166888);
  destroy_observable_subject((void *)dword_16687C);
  destroy_observable_subject((void *)dword_166884);
  destroy_observable_subject((void *)dword_166880);
  destroy_observable_subject((void *)dword_166878);
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
  while ( v0 != &dword_166878 );
}
