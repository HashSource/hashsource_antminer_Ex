int __fastcall reset_mining_base(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // lr
  int v6; // r2
  void *v7; // r0
  int (**v8)(); // r0
  unsigned int v9; // r0
  int (**v10)(); // r0
  unsigned int v11; // r0
  int (**v12)(); // r0
  int v13; // r0
  int (**v14)(); // r0
  int v15; // r0
  int (**v16)(); // r0
  int v17; // r0
  int (**v18)(); // r0
  char v20[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = -1376;
  HIWORD(v2) = (unsigned int)"auto exec eeprom_open, but chain %d open eeprom failed\n" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v2, *(_DWORD *)(a1 + 140));
  V_UNLOCK();
  LOWORD(v3) = -14512;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v4) = -1592;
  HIWORD(v4) = (unsigned int)"ase/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(*v3, v4, 143, "reset_mining_base", 17, 387, 100, v20);
  (*(void (__fastcall **)(int))(a1 + 8))(a1);
  v5 = *(_DWORD *)(a1 + 648);
  v6 = *(_DWORD *)(a1 + 196);
  *(_BYTE *)(a1 + 145) = 0;
  *(_BYTE *)(a1 + 146) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 328) = 0;
  v7 = memset(*(void **)(a1 + 324), 0, v5 * v6);
  v8 = dev_ctrl((int)v7);
  ((void (__fastcall *)(_DWORD))v8[7])(*(_DWORD *)(a1 + 136));
  v9 = sleep(0xAu);
  v10 = dev_ctrl(v9);
  ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))v10[6])(
    *(_DWORD *)(a1 + 136),
    *(_DWORD *)(a1 + 764),
    *(_DWORD *)(a1 + 776));
  v11 = sleep(1u);
  v12 = dev_ctrl(v11);
  ((void (__fastcall *)(char *))v12[4])("ckoo_hash_init");
  usleep(0x2710u);
  (*(void (__fastcall **)(int, int))(a1 + 76))(a1, 3125000);
  v13 = usleep(0x2710u);
  v14 = dev_ctrl(v13);
  ((void (__fastcall *)(int))v14[4])(3125000);
  v15 = usleep(0x2710u);
  v16 = dev_ctrl(v15);
  v17 = ((int (__fastcall *)(_DWORD))v16[9])(*(_DWORD *)(a1 + 136));
  v18 = dev_ctrl(v17);
  ((void (__fastcall *)(_DWORD))v18[1])(*(_DWORD *)(a1 + 136));
  return (*(int (__fastcall **)(int))(a1 + 4))(a1);
}
