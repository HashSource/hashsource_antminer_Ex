unsigned int fpga_reset()
{
  int v0; // r4
  int v1; // r4
  int v2; // r0
  unsigned int v3; // r0
  bool v4; // zf
  unsigned int result; // r0
  int v6; // [sp+4h] [bp-8h] BYREF

  v0 = 3;
  v6 = 0;
  do
  {
    if ( !fpga_read(60, &v6) )
      break;
    sleep(1u);
    --v0;
  }
  while ( v0 );
  if ( dword_16C1A4 )
  {
    dword_16C1A4 = 0;
    close(dword_16C1A8);
  }
  v1 = 3;
  v2 = pthread_mutex_lock(&stru_16C1AC);
  ps2pl_set_low(v2);
  v3 = sleep(2u);
  ps2pl_set_high(v3);
  sleep(2u);
  pthread_mutex_unlock(&stru_16C1AC);
  fpga_init();
  do
  {
    v4 = fpga_write(60, v6) == 0;
    result = 1;
    if ( v4 )
      break;
    result = sleep(1u);
    --v1;
  }
  while ( v1 );
  return result;
}
