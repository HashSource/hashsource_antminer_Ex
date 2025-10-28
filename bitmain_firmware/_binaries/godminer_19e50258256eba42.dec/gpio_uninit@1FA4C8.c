int gpio_uninit()
{
  int result; // r0

  if ( dword_C25AA8 )
  {
    dword_C25AAC = 0;
    pthread_join(dword_C25AB0, 0);
    pthread_mutex_destroy(&stru_C25ACC);
    delete_c_map((void ***)dword_C25AE4);
    dword_C25AA8 = 0;
    return pthread_mutex_destroy(&stru_C25AB4);
  }
  return result;
}
