bool __fastcall sub_C15B0(int a1)
{
  __int64 v2; // r2

  if ( *(_BYTE *)(a1 + 40) != 1 )
    return 0;
  sub_C1414(a1);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  *(_BYTE *)(a1 + 40) = *(_BYTE *)a1 == 1 || *(__int64 *)(a1 + 8) >= 1 || *(__int64 *)(a1 + 32) >= 1;
  v2 = *(_QWORD *)(a1 + 32) - 1LL;
  if ( v2 < 0 )
    v2 = 0;
  *(_QWORD *)(a1 + 32) = v2;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 44));
  return *(_BYTE *)(a1 + 40) == 1;
}
