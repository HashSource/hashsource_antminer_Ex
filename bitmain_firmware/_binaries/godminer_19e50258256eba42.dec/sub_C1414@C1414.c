int __fastcall sub_C1414(int a1)
{
  __int64 v1; // r2
  __int64 v4; // [sp+10h] [bp-24h]

  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  clock_gettime(1, (struct timespec *)(a1 + 24));
  v4 = 1000LL * (*(_DWORD *)(a1 + 24) - *(_DWORD *)(a1 + 16)) + (*(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 20)) / 1000000;
  clock_gettime(1, (struct timespec *)(a1 + 16));
  v1 = v4;
  if ( v4 < 0 )
    v1 = 0;
  *(_QWORD *)(a1 + 8) -= v1;
  if ( *(int *)(a1 + 12) < 0 )
    *(_QWORD *)(a1 + 8) = 0;
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 44));
}
