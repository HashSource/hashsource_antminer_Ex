int gpio_uninit()
{
  int result; // r0

  if ( dword_16C1C4 )
  {
    pthread_join(dword_16C1FC, 0);
    pthread_mutex_destroy(&stru_16C1C8);
    delete_c_map(dword_16C1E0);
    dword_16C1C4 = 0;
    return pthread_mutex_destroy(&stru_16C1E4);
  }
  return result;
}
