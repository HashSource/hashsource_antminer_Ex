unsigned int fpga_reset()
{
  int v0; // r4
  int v1; // r4
  bool v2; // zf
  unsigned int result; // r0
  int v4; // [sp+4h] [bp-8h] BYREF

  v0 = 3;
  v4 = 0;
  do
  {
    if ( !fpga_read(60, &v4) )
      break;
    sleep(1u);
    --v0;
  }
  while ( v0 );
  v1 = 3;
  pthread_mutex_lock(&stru_1B3264);
  ps2pl_set_low();
  usleep(0x1F4u);
  ps2pl_set_high();
  usleep(0x1F4u);
  pthread_mutex_unlock(&stru_1B3264);
  do
  {
    v2 = fpga_write(60, v4) == 0;
    result = 1;
    if ( v2 )
      break;
    result = sleep(1u);
    --v1;
  }
  while ( v1 );
  return result;
}
