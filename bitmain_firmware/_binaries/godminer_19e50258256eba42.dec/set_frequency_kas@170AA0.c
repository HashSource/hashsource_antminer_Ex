int __fastcall set_frequency_kas(int a1, int a2)
{
  int v2; // s0
  int j; // [sp+18h] [bp-Ch]
  int i; // [sp+1Ch] [bp-8h]

  for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
    pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * i + 20));
  sub_1666DC(a1, a2, 1, 0);
  for ( j = 0; j < *(_DWORD *)(a1 + 372); ++j )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * j + 4) = v2;
    *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * j + 12) = v2;
    pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * j + 20));
  }
  return 0;
}
