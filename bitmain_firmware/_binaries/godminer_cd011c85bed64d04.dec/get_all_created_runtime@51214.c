void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_16B828);
  *a1 = dword_16B840;
  pthread_mutex_unlock(&stru_16B828);
  return &unk_16B844;
}
