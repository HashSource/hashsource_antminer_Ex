int __fastcall wait_pool_to_be_current_timeout(int a1)
{
  int v2; // r4
  struct timespec v4; // [sp+0h] [bp-14h] BYREF
  struct timespec tp; // [sp+8h] [bp-Ch] BYREF

  clock_gettime(1, &tp);
  LOWORD(v2) = 21504;
  HIWORD(v2) = (unsigned int)&unk_1642D8 >> 16;
  v4.tv_sec = tp.tv_sec + (tp.tv_nsec + 1000) / 1000000000;
  v4.tv_nsec = (tp.tv_nsec + 1000) % 1000000000;
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 4));
  if ( *(_DWORD *)(v2 + 0x1C) != a1 )
    pthread_cond_timedwait((pthread_cond_t *)(v2 + 32), (pthread_mutex_t *)(v2 + 4), &v4);
  return pthread_mutex_unlock(&mutex);
}
