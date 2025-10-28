int __fastcall get_response(int a1)
{
  char *v2; // r0
  int v3; // r3
  const char *v4; // r2
  unsigned int v5; // r8
  char *v6; // r4
  int v7; // r0
  int v8; // r3
  int *v9; // r3
  int v10; // r0
  int v11; // r1
  void *v12; // r0
  int (**v13)(); // r0
  int v14; // r0
  int v15; // r7
  size_t v16; // r4
  __useconds_t v17; // r0
  char v19[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  LOWORD(v3) = -1800;
  LOWORD(v4) = -3884;
  HIWORD(v3) = (unsigned int)"e_rate" >> 16;
  HIWORD(v4) = (unsigned int)"ed, trying again in 30sec" >> 16;
  v5 = 64;
  v6 = v2;
  snprintf(v2, 0x40u, v4, v3, *(_DWORD *)(a1 + 136));
  V_LOCK();
  v7 = syscall(224);
  LOWORD(v8) = -3872;
  HIWORD(v8) = (unsigned int)"gain in 30sec" >> 16;
  logfmt_raw(v19, 0x1000u, 0, v8, v6, v7);
  V_UNLOCK();
  LOWORD(v9) = -14512;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  v10 = *v9;
  LOWORD(v9) = -1800;
  LOWORD(v11) = -1592;
  HIWORD(v9) = (unsigned int)"e_rate" >> 16;
  HIWORD(v11) = (unsigned int)"ase/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v10, v11, 143, v9, 12, 186, 60, v19);
  prctl(15, v6);
  v12 = memset(v19, 0, 0x100u);
  while ( 1 )
  {
    v13 = dev_ctrl((int)v12);
    v14 = ((int (__fastcall *)(_DWORD, char *, int))v13[13])(*(_DWORD *)(a1 + 136), v19, 256);
    v15 = *(unsigned __int8 *)(a1 + 685);
    v16 = v14;
    if ( *(_BYTE *)(a1 + 685) )
      break;
    if ( v14 <= 0 )
    {
      v17 = v5;
      v5 *= 2;
      v12 = (void *)usleep(v17);
      if ( v5 >= 0x3E8 )
        v5 = 1000;
    }
    else
    {
      v5 = 64;
      queue_enqueue(*(_DWORD *)(a1 + 656), v19, v14);
      v12 = memset(v19, v15, v16);
    }
  }
  *(_BYTE *)(a1 + 685) = 0;
  return 0;
}
