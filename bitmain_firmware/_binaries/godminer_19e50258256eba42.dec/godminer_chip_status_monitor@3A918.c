char *__fastcall godminer_chip_status_monitor(int a1)
{
  char *v1; // r3
  _BYTE v4[44]; // [sp+60h] [bp-106Ch] BYREF
  _DWORD v5[7]; // [sp+1060h] [bp-6Ch] BYREF
  int v6; // [sp+107Ch] [bp-50h]
  int v7; // [sp+1080h] [bp-4Ch]
  char *v8; // [sp+1084h] [bp-48h]
  int v9; // [sp+1088h] [bp-44h]
  char *v10; // [sp+108Ch] [bp-40h]
  int v11; // [sp+1090h] [bp-3Ch]
  char *v12; // [sp+1094h] [bp-38h]
  int v13; // [sp+1098h] [bp-34h]
  char *v14; // [sp+109Ch] [bp-30h]
  pthread_mutex_t *current_pool; // [sp+10A0h] [bp-2Ch]
  char *flag_from_monitor; // [sp+10A4h] [bp-28h]

  flag_from_monitor = get_flag_from_monitor(a1);
  current_pool = (pthread_mutex_t *)get_current_pool();
  v14 = flag_from_monitor + 48;
  v13 = 1;
  if ( (*((_DWORD *)flag_from_monitor + 12) & 2) != 0 )
  {
    if ( (unsigned __int8)pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) != 1 )
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 272), 1);
    v12 = flag_from_monitor + 48;
    v11 = 1;
    *((_QWORD *)flag_from_monitor + 7) |= 2uLL;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 272), 0);
  }
  v10 = flag_from_monitor + 48;
  v9 = 2;
  if ( (*((_DWORD *)flag_from_monitor + 12) & 4) != 0 )
  {
    if ( (unsigned __int8)pool_tget(current_pool, (unsigned __int8 *)&current_pool[79].__size[8]) != 1 )
    {
      V_LOCK();
      sub_37C40((int)v5, *(int *)(a1 + 272));
      logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "some chip working slow");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "godminer_chip_status_monitor",
        28,
        640,
        20,
        v4);
      set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 272), 1);
    }
    v8 = flag_from_monitor + 48;
    v7 = 2;
    v1 = flag_from_monitor + 48;
    *((_QWORD *)flag_from_monitor + 7) |= 4uLL;
  }
  else
  {
    set_miner_6060info_runtime_bad_asic_err(*(_DWORD *)(a1 + 272), 0);
  }
  return v1;
}
