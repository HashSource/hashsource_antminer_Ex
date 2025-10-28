int gpio_uninit()
{
  int result; // r0

  if ( dword_1770CC )
  {
    pthread_join(dword_177104, 0);
    pthread_mutex_destroy(&stru_1770D0);
    delete_c_map(dword_1770E8);
    dword_1770CC = 0;
    return pthread_mutex_destroy(&stru_1770EC);
  }
  return result;
}
