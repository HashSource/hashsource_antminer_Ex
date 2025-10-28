int __fastcall push_work_base(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  void *v5; // r6
  unsigned int v6; // r0
  int (**v7)(); // r0
  int (**v8)(); // r0
  int v9; // r5
  _DWORD *v11; // r3
  int v12; // r1
  unsigned int v13; // [sp+14h] [bp-101Ch] BYREF
  char v14[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 146) && !*(_BYTE *)(a1 + 145) )
    return 4;
  v4 = (pthread_mutex_t *)(a1 + 736);
  v5 = calloc(1u, *(_DWORD *)(a1 + 640));
  v13 = 0;
  (*(void (__fastcall **)(int, int, void *, unsigned int *))(a1 + 56))(a1, a2, v5, &v13);
  v6 = pthread_mutex_lock(v4);
  do
  {
    v7 = dev_ctrl(v6);
    v6 = ((int (__fastcall *)(_DWORD))v7[15])(*(_DWORD *)(a1 + 136));
  }
  while ( v6 < v13 );
  v8 = dev_ctrl(v6);
  v9 = ((int (__fastcall *)(_DWORD, void *, unsigned int))v8[11])(*(_DWORD *)(a1 + 136), v5, v13);
  pthread_mutex_unlock(v4);
  if ( v9 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 136), v9);
    V_UNLOCK();
    LOWORD(v11) = -14512;
    HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v12) = -1592;
    HIWORD(v12) = (unsigned int)"ase/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
    zlog(*v11, v12, 143, "push_work_base", 14, 284, 100, v14);
  }
  else
  {
    ++*(_QWORD *)(a1 + 248);
  }
  free(v5);
  return 0;
}
