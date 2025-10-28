int miner_6060info_errorcode_uninit()
{
  pthread_mutex_lock(&stru_5AD6BC);
  if ( byte_5AD6D4 == 1 )
  {
    byte_5AD6D4 = 0;
    usleep(0x3E8u);
    sub_B5134(dword_5AD6B8);
  }
  return pthread_mutex_unlock(&stru_5AD6BC);
}
