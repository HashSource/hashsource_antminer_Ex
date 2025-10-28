int __fastcall set_TW_write_command_vil(int *a1)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&tw_cmd_acc_mutex);
  for ( i = 0; i <= 0xC; ++i )
  {
    if ( i )
      fpga_write(68, a1[i]);
    else
      fpga_write(64, *a1);
  }
  return pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
