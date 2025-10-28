int __fastcall global_idx_init_dash(int a1)
{
  void *v2; // r0
  void *v3; // r5
  int v4; // r3
  int *v5; // r3
  int v6; // r0
  int v7; // r1
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = calloc(0x5808u, 1u);
  *(_DWORD *)(a1 + 624) = v2;
  v3 = v2;
  V_LOCK();
  LOWORD(v4) = 24456;
  HIWORD(v4) = (unsigned int)"rigin_master/miner_util/miner_monitor/update_miner_status/heartbeat_on_device.c" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v4, v3);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  v6 = *v5;
  LOWORD(v7) = 30144;
  LOWORD(v5) = 28728;
  HIWORD(v5) = (unsigned int)"ChipSetting_ticket_mask_CKB" >> 16;
  HIWORD(v7) = (unsigned int)&sensors_ckb >> 16;
  zlog(v6, v7, 156, v5, 20, 59, 20, v9);
  return 0;
}
