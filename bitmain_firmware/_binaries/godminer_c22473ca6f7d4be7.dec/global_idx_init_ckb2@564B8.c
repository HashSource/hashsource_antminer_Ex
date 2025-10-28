int __fastcall global_idx_init_ckb2(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0x3E08u, 1u);
  LOWORD(v3) = 24456;
  *(_DWORD *)(a1 + 624) = v2;
  HIWORD(v3) = (unsigned int)"rigin_master/miner_util/miner_monitor/update_miner_status/heartbeat_on_device.c" >> 16;
  printf(v3);
  return 0;
}
