int fpga_reset()
{
  int v0; // r0
  unsigned int v1; // r0
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  fpga_read(60, &v3);
  if ( dword_16C1A4 )
  {
    dword_16C1A4 = 0;
    close(dword_16C1A8);
  }
  v0 = pthread_mutex_lock(&stru_16C1AC);
  ps2pl_set_low(v0);
  v1 = sleep(1u);
  ps2pl_set_high(v1);
  sleep(1u);
  pthread_mutex_unlock(&stru_16C1AC);
  fpga_init();
  return fpga_write(60, v3);
}
