int __fastcall setup_all_chip_eth(int a1)
{
  float v1; // s15
  char *v3; // r1
  _DWORD *v4; // r7
  int v5; // r4
  int v6; // r1
  unsigned int v7; // r4
  int v8; // r8
  int v9; // r0
  unsigned int v10; // r3
  int result; // r0
  int (**v12)(); // r0
  int v13; // r0
  int (**v14)(); // r0
  int v15; // r0
  int (**v16)(); // r0
  int v17; // r4
  int v18; // r3
  void (__fastcall *v19)(int, int, int); // r3
  int v20; // r1
  int v21; // r3
  int v22; // r1
  bool v23; // zf
  _DWORD v24[4]; // [sp+28h] [bp-1034h] BYREF
  _DWORD v25[7]; // [sp+38h] [bp-1024h] BYREF
  int v26; // [sp+54h] [bp-1008h]
  char v27[4100]; // [sp+58h] [bp-1004h] BYREF

  LOWORD(v4) = -14512;
  V_LOCK();
  LOWORD(v3) = -7948;
  HIWORD(v3) = (unsigned int)&loc_12D594 >> 16;
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v25, v3, *(int *)(a1 + 140));
  LOWORD(v5) = -21904;
  HIWORD(v5) = (unsigned int)"" >> 16;
  logfmt_raw(v27, 0x1000u, 0, v26, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v26, v5);
  V_UNLOCK();
  LOWORD(v6) = -25512;
  HIWORD(v6) = (unsigned int)"one" >> 16;
  zlog(*v4, v6, 154, "setup_all_chip_eth", 18, 12294, 60, v27);
  v7 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 236) = 0;
  if ( v7 )
  {
    v8 = 3;
    while ( 1 )
    {
      v9 = sub_5CAEC(a1, v7);
      if ( *(_DWORD *)(a1 + 236) < v7 )
      {
        v12 = dev_ctrl(v9);
        ((void (__fastcall *)(_DWORD))v12[7])(*(_DWORD *)(a1 + 136));
        v13 = usleep((__useconds_t)&loc_493E0);
        v14 = dev_ctrl(v13);
        v15 = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD))v14[6])(
                *(_DWORD *)(a1 + 136),
                *(_DWORD *)(a1 + 764),
                *(_DWORD *)(a1 + 776));
        v16 = dev_ctrl(v15);
        ((void (__fastcall *)(_DWORD))v16[9])(*(_DWORD *)(a1 + 136));
      }
      usleep((__useconds_t)&loc_493E0);
      v10 = *(_DWORD *)(a1 + 236);
      if ( v10 >= v7 )
        break;
      if ( !--v8 )
        return 3;
    }
    if ( v10 != v7 )
      return 3;
  }
  v17 = 0;
  v18 = *(_DWORD *)(a1 + 296) - 1;
  do
    *(_BYTE *)++v18 = v17++;
  while ( v17 != 8 );
  v19 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v20 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 1;
  v19(a1, v20, 8);
  sub_5CAEC(a1, 8);
  setup_clk(a1);
  set_debug_ctrl(a1, 19);
  v24[2] = 4718593;
  v24[0] = 1;
  v24[1] = 0;
  v24[3] = 0;
  V_LOCK();
  LOWORD(v21) = 28284;
  HIWORD(v21) = (unsigned int)"!" >> 16;
  logfmt_raw(v27, 0x1000u, 0, v21, 1);
  V_UNLOCK();
  LOWORD(v22) = 24504;
  HIWORD(v22) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  zlog(*v4, v22, 143, "ChipSetting_analog_mux_ETH", 26, 480, 60, v27);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v24);
  result = *(unsigned __int8 *)(a1 + 268);
  v23 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v23 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
