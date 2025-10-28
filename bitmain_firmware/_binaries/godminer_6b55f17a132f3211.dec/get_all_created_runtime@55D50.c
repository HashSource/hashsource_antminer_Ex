void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_176DB0);
  *a1 = dword_176DC8;
  pthread_mutex_unlock(&stru_176DB0);
  return &unk_176DCC;
}
