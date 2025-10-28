int __fastcall set_onechip_to_lower_level_kas(int a1, unsigned __int8 a2)
{
  _BYTE v5[60]; // [sp+30h] [bp-103Ch] BYREF
  _DWORD v6[7]; // [sp+1030h] [bp-3Ch] BYREF
  int v7; // [sp+104Ch] [bp-20h]
  float v8; // [sp+1054h] [bp-18h]
  float v9; // [sp+1058h] [bp-14h]
  float v10; // [sp+105Ch] [bp-10h]

  v9 = 6.25;
  V_LOCK();
  sub_1622D8((int)v6, *(int *)(a1 + 272));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "set onechip's freq to low, chip id %d",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_onechip_to_lower_level_kas",
    30,
    694,
    40,
    v5);
  sub_16CBC0(a1, a2 * *(_DWORD *)(a1 + 392), 68, 3);
  sub_16CF28(a1, a2 * *(_DWORD *)(a1 + 392), 10, 0);
  sub_1637C8(a1, 0x24u);
  pthread_mutex_lock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * a2 + 20));
  v10 = *(float *)(*(_DWORD *)(a1 + 568) + 44 * a2 + 4);
  pthread_mutex_unlock((pthread_mutex_t *)(*(_DWORD *)(a1 + 568) + 44 * a2 + 20));
  v8 = *(float *)(a1 + 1020) - 100.0;
  while ( v8 < v10 )
  {
    v10 = v10 - v9;
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(a1 + 212))(a1, 0, a2);
    usleep(0x493E0u);
  }
  return 0;
}
