int gpio_uninit()
{
  int result; // r0

  if ( dword_16D1D8 )
  {
    pthread_join(dword_16D210, 0);
    pthread_mutex_destroy(&stru_16D1DC);
    delete_c_map(dword_16D1F4);
    dword_16D1D8 = 0;
    return pthread_mutex_destroy(&stru_16D1F8);
  }
  return result;
}
