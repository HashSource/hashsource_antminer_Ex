int __fastcall set_frequency_single_ks5(int a1, int a2, char a3)
{
  int v3; // s0

  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * (unsigned __int8)a3 + 20));
  sub_1898DC(a1, a3, a2);
  *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * (unsigned __int8)a3 + 4) = v3;
  *(_DWORD *)(*(_DWORD *)(a1 + 568) + 44 * (unsigned __int8)a3 + 12) = v3;
  pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * (unsigned __int8)a3 + 20));
  return 0;
}
