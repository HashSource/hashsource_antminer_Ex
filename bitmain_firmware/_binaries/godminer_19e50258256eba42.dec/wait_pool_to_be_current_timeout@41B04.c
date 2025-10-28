int __fastcall wait_pool_to_be_current_timeout(int a1)
{
  struct timespec tp; // [sp+8h] [bp-24h] BYREF
  struct timespec abstime; // [sp+10h] [bp-1Ch] BYREF
  int v5; // [sp+18h] [bp-14h]
  struct timespec *p_abstime; // [sp+1Ch] [bp-10h]
  int v7; // [sp+20h] [bp-Ch]
  int v8; // [sp+24h] [bp-8h]

  v8 = 1;
  v7 = 1;
  p_abstime = &abstime;
  clock_gettime(1, &tp);
  v5 = tp.tv_nsec + 1000 * (v7 % 1000000);
  p_abstime->tv_sec = tp.tv_sec + v5 / 1000000000 + v7 / 1000000;
  p_abstime->tv_nsec = v5 % 1000000000;
  pthread_mutex_lock(&stru_5AC4FC);
  if ( a1 != dword_5AC4F8 )
    pthread_cond_timedwait(&stru_5AC518, &stru_5AC4FC, &abstime);
  return pthread_mutex_unlock(&stru_5AC4FC);
}
