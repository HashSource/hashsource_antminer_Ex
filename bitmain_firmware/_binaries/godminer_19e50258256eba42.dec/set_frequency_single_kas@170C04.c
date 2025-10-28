int __fastcall set_frequency_single_kas(int a1, int a2, unsigned __int8 a3)
{
  int v3; // s0
  int v8; // [sp+10h] [bp-Ch]

  v8 = *(_DWORD *)(a1 + 392) * a3;
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * a3 + 20));
  sub_1666DC(a1, a2, 0, v8);
  *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * a3 + 4) = v3;
  *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * a3 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * a3 + 20));
  return 0;
}
