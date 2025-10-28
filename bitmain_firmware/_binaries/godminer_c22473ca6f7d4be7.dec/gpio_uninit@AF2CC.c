int gpio_uninit()
{
  int result; // r0

  if ( dword_16C1BC )
  {
    pthread_join(dword_16C1F4, 0);
    pthread_mutex_destroy(&stru_16C1C0);
    delete_c_map((void (__fastcall ***)(_DWORD))dword_16C1D8);
    dword_16C1BC = 0;
    return pthread_mutex_destroy(&stru_16C1DC);
  }
  return result;
}
