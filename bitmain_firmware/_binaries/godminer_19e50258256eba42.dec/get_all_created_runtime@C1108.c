_DWORD *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_5BAB0C);
  *a1 = dword_5BAB08;
  pthread_mutex_unlock(&stru_5BAB0C);
  return dword_5BAA08;
}
