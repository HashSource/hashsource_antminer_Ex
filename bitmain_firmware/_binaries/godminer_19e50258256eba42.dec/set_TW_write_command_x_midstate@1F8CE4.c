int __fastcall set_TW_write_command_x_midstate(int *a1, int a2)
{
  unsigned int v4; // [sp+8h] [bp-Ch]
  unsigned int i; // [sp+Ch] [bp-8h]

  v4 = 32 * (a2 - 1) + 52;
  pthread_mutex_lock(&tw_cmd_acc_mutex);
  for ( i = 0; i < v4 >> 2; ++i )
  {
    if ( i )
      fpga_write(68, a1[i]);
    else
      fpga_write(64, *a1);
  }
  return pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
