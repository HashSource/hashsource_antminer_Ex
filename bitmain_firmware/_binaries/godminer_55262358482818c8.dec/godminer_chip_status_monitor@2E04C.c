int __fastcall godminer_chip_status_monitor(int a1)
{
  char *flag_from_monitor; // r4
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v4; // r5
  int result; // r0
  char *v6; // r1
  int v7; // r5
  int v8; // r3
  int v9; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  char v12[4096]; // [sp+48h] [bp-1000h] BYREF

  flag_from_monitor = get_flag_from_monitor(a1);
  current_pool = (pthread_mutex_t *)get_current_pool();
  v4 = current_pool;
  if ( (*((_DWORD *)flag_from_monitor + 12) & 2) != 0 )
  {
    if ( !pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) )
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 1);
    *((_DWORD *)flag_from_monitor + 14) |= 2u;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 0);
  }
  if ( (*((_DWORD *)flag_from_monitor + 12) & 4) == 0 )
    return set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 0);
  result = pool_tget(v4, (unsigned __int8 *)&v4[79].__size[8]);
  if ( !result )
  {
    V_LOCK();
    LOWORD(v6) = 23936;
    HIWORD(v6) = (unsigned int)"p" >> 16;
    V_INT((int)v10, v6, *(int *)(a1 + 248));
    LOWORD(v7) = 27592;
    HIWORD(v7) = (unsigned int)"e" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v7);
    V_UNLOCK();
    LOWORD(v8) = 25808;
    LOWORD(v9) = 27616;
    HIWORD(v8) = (unsigned int)" rate" >> 16;
    HIWORD(v9) = (unsigned int)"some chip working slow" >> 16;
    zlog(g_zc, v9, 142, v8, 28, 515, 20, v12);
    result = set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 248), 1);
  }
  *((_DWORD *)flag_from_monitor + 14) |= 4u;
  return result;
}
