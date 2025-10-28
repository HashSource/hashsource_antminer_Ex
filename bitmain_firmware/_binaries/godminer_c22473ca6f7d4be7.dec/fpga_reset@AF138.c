int fpga_reset()
{
  int v1; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  fpga_read(60, &v1);
  if ( dword_16C19C )
  {
    dword_16C19C = 0;
    close(dword_16C1A0);
  }
  pthread_mutex_lock(&stru_16C1A4);
  ps2pl_set_low();
  sleep(1u);
  ps2pl_set_high();
  sleep(1u);
  pthread_mutex_unlock(&stru_16C1A4);
  fpga_init();
  return fpga_write(60, v1);
}
