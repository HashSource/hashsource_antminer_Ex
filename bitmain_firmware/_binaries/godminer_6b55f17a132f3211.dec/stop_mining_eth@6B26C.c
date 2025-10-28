int __fastcall stop_mining_eth(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  void (__fastcall *v5)(int, unsigned int *); // r3
  unsigned int v7; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+14h] [bp-1000h]
  int v9; // [sp+18h] [bp-FFCh]
  int v10; // [sp+1Ch] [bp-FF8h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)&v7, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    170,
    "stop_mining_eth",
    15,
    1485,
    60,
    &v7);
  v3 = (*(int (__fastcall **)(int))(a1 + 56))(a1);
  v4 = dev_ctrl(v3);
  (*(void (__fastcall **)(_DWORD))(v4 + 44))(*(_DWORD *)(a1 + 208));
  *(_BYTE *)(a1 + 217) = 0;
  *(_BYTE *)(a1 + 218) = 0;
  set_ticketmask(a1, 1);
  set_core_reset(a1);
  v8 = 0;
  v9 = 1310721;
  v10 = 0;
  v7 = 274347265;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 228))(a1, &v7);
  usleep((__useconds_t)&stru_186A0);
  v9 = 5373953;
  v10 = 0;
  v8 = 0;
  v7 = 9;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 228))(a1, &v7);
  usleep((__useconds_t)&stru_186A0);
  v9 = 5701633;
  v10 = 0;
  v8 = 0;
  v5 = *(void (__fastcall **)(int, unsigned int *))(a1 + 228);
  v7 = 1;
  v5(a1, &v7);
  usleep((__useconds_t)&stru_186A0);
  v9 = 5636097;
  v10 = 0;
  v8 = 0;
  v7 = 0x80000000;
  (*(void (__fastcall **)(int, unsigned int *))(a1 + 228))(a1, &v7);
  usleep((__useconds_t)&stru_186A0);
  sub_69224(a1, 12, 2);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
