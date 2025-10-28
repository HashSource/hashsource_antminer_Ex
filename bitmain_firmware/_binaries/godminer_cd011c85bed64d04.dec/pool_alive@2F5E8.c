int *__fastcall pool_alive(pthread_mutex_t *a1)
{
  pthread_mutex_t *v1; // r4
  int v3; // r7
  int *result; // r0

  v1 = a1 + 83;
  pthread_mutex_lock(a1 + 83);
  v3 = (unsigned __int8)a1[86].__size[8];
  a1[86].__size[8] = 0;
  result = (int *)pthread_mutex_unlock(v1);
  if ( v3 )
    return sub_2ED08(&a1->__lock, 0);
  return result;
}
