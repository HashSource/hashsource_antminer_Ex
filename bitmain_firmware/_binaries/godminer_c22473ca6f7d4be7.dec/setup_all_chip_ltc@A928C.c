int __fastcall setup_all_chip_ltc(int a1)
{
  int v2; // r8
  int v3; // r3
  _DWORD *v4; // r7
  int v5; // r1
  unsigned int v6; // r5
  int v7; // r9
  int v8; // r0
  unsigned int v9; // r3
  int (**v11)(); // r0
  int v12; // r0
  int (**v13)(); // r0
  int v14; // r0
  int (**v15)(); // r0
  int v16; // r5
  int v17; // r0
  int v18; // r1
  char v19; // r3
  int v20; // r1
  void (__fastcall *v21)(int, int, int); // r3
  int v22; // r5
  int v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r1
  unsigned int v27; // r6
  int v28; // r5
  unsigned int v29; // r3
  int v30; // [sp+0h] [bp-1020h]
  _DWORD v31[4]; // [sp+10h] [bp-1010h] BYREF
  char v32[4096]; // [sp+20h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 196);
  LOWORD(v4) = -14512;
  V_LOCK();
  LOWORD(v3) = -23476;
  HIWORD(v3) = (unsigned int)"e" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v3, "setup_all_chip_ltc");
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  V_UNLOCK();
  LOWORD(v5) = -14544;
  HIWORD(v5) = (unsigned int)&unk_13BA60 >> 16;
  zlog(*v4, v5, 154, "setup_all_chip_ltc", 18, 335, 60, v32);
  v6 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( v6 )
  {
    v7 = 3;
    while ( 1 )
    {
      v8 = sub_A84E8(a1, v6);
      if ( *(_DWORD *)(a1 + 236) < v6 )
      {
        v11 = dev_ctrl(v8);
        ((void (__fastcall *)(_DWORD))v11[7])(*(_DWORD *)(a1 + 136));
        v12 = usleep((__useconds_t)&loc_493E0);
        v13 = dev_ctrl(v12);
        v14 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))v13[6])(
                *(_DWORD *)(a1 + 136),
                *(_DWORD *)(a1 + 764),
                *(_DWORD *)(a1 + 776));
        v15 = dev_ctrl(v14);
        ((void (__fastcall *)(_DWORD))v15[9])(*(_DWORD *)(a1 + 136));
      }
      usleep((__useconds_t)&loc_493E0);
      v9 = *(_DWORD *)(a1 + 236);
      if ( v9 >= v6 )
        break;
      if ( !--v7 )
        return 3;
    }
    if ( v9 != v6 )
      return 3;
  }
  v16 = *(_DWORD *)(a1 + 296);
  v17 = sub_12CAD0(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v18 = v16 - 1;
    v19 = 0;
    do
    {
      *(_BYTE *)++v18 = v19;
      v19 += v17;
    }
    while ( v18 != v16 - 1 + (unsigned __int8)v2 );
    v16 = *(_DWORD *)(a1 + 296);
  }
  v20 = v16;
  v21 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v22 = 0;
  *(_DWORD *)(a1 + 240) = v17;
  v21(a1, v20, v2);
  v31[2] = 2883585;
  v31[1] = 0;
  v31[3] = 0;
  v31[0] = 0;
  V_LOCK();
  LOWORD(v23) = 28284;
  HIWORD(v23) = (unsigned int)"!" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v23, 0);
  V_UNLOCK();
  LOWORD(v24) = 24504;
  HIWORD(v24) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  zlog(*v4, v24, 143, "ChipSetting_analog_mux_LTC", 26, 480, 60, v32);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v31);
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0xFFFFFFFF);
  if ( *(int *)(a1 + 200) > 0 )
  {
    do
    {
      v30 = v22++;
      chip_setting_working_mode_ltc(a1, 1, 0, 0, v30, 0xFFu);
    }
    while ( *(_DWORD *)(a1 + 200) > v22 );
  }
  *(_DWORD *)(a1 + 272) = 900;
  V_LOCK();
  LOWORD(v25) = 28308;
  HIWORD(v25) = (unsigned int)"_id:%d time: %ld us" >> 16;
  logfmt_raw(v32, 0x1000u, 0, v25);
  V_UNLOCK();
  LOWORD(v26) = -14544;
  HIWORD(v26) = (unsigned int)&unk_13BA60 >> 16;
  zlog(*v4, v26, 154, "setup_all_chip_ltc", 18, 403, 60, v32);
  v27 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( !v27 )
    return 0;
  v28 = 3;
  while ( 1 )
  {
    sub_A84E8(a1, v27);
    usleep((__useconds_t)&loc_493E0);
    v29 = *(_DWORD *)(a1 + 236);
    if ( v27 <= v29 )
      break;
    if ( !--v28 )
      return 3;
  }
  if ( v27 != v29 )
    return 3;
  else
    return 0;
}
