int gpio_uninit()
{
  int result; // r0

  if ( dword_1B3284 )
  {
    pthread_join(dword_1B32BC, 0);
    pthread_mutex_destroy(&stru_1B3288);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_1B32A0);
    dword_1B3284 = 0;
    return pthread_mutex_destroy(&stru_1B32A4);
  }
  return result;
}
