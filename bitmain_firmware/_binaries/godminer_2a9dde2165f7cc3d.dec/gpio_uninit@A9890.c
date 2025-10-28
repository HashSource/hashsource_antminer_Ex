int gpio_uninit()
{
  int result; // r0

  if ( dword_18D4DC )
  {
    pthread_join(dword_18D514, 0);
    pthread_mutex_destroy(&stru_18D4E0);
    delete_c_map(dword_18D4F8);
    dword_18D4DC = 0;
    return pthread_mutex_destroy(&stru_18D4FC);
  }
  return result;
}
