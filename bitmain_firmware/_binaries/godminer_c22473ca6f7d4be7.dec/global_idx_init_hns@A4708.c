int __fastcall global_idx_init_hns(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0xA608u, 1u);
  LOWORD(v3) = 24456;
  *(_DWORD *)(a1 + 624) = v2;
  HIWORD(v3) = (unsigned int)"rigin_master/miner_util/miner_monitor/update_miner_status/heartbeat_on_device.c" >> 16;
  printf(v3);
  return 0;
}
