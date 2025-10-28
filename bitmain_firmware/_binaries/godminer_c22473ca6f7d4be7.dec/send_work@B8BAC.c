int __fastcall send_work(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  void *v7; // r0
  size_t v8; // r2
  void *v9; // r5
  size_t v11; // [sp+14h] [bp-1004h]
  char v12[4096]; // [sp+18h] [bp-1000h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "send_work", *(_DWORD *)(a1 + 136));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -3872;
  HIWORD(v4) = (unsigned int)"gain in 30sec" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -1592;
  HIWORD(v6) = (unsigned int)"ase/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(*v5, v6, 143, "send_work", 9, 46, 60, v12);
  prctl(15, v2);
  v11 = *(_DWORD *)(a1 + 628);
  v7 = calloc(1u, v11);
  v8 = v11;
  v9 = v7;
  while ( 1 )
  {
    memset(v9, 0, v8);
    queue_dequeue(*(_DWORD *)(a1 + 652), (char *)v9, 1u);
    if ( *(_BYTE *)(a1 + 686) )
      break;
    push_work_base(a1, (int)v9);
    v8 = *(_DWORD *)(a1 + 628);
  }
  *(_BYTE *)(a1 + 686) = 0;
  free(v9);
  return 0;
}
