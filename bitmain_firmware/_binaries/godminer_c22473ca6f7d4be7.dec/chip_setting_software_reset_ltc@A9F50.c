int __fastcall chip_setting_software_reset_ltc(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  _DWORD v7[1025]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = -13880;
  HIWORD(v1) = (unsigned int)"ns" >> 16;
  V_LOCK();
  LOWORD(v3) = 24648;
  HIWORD(v3) = (unsigned int)"ildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/update_miner_status/update_chip_status.c" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v3, v1, 52);
  V_UNLOCK();
  LOWORD(v4) = -14512;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v5) = -13556;
  HIWORD(v5) = (unsigned int)"acket_kda" >> 16;
  zlog(*v4, v5, 159, v1 + 32, 31, 39, 20, v7);
  v7[2] = 3407873;
  v7[0] = 0;
  v7[1] = 0;
  v7[3] = 0;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v7);
}
