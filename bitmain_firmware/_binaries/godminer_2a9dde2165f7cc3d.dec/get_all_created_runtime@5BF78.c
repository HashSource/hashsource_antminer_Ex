void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_185100);
  *a1 = dword_185118;
  pthread_mutex_unlock(&stru_185100);
  return &unk_18511C;
}
