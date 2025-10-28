int __fastcall setup_all_chip_kda(int a1)
{
  float v1; // s15
  int v3; // r8
  int v4; // r3
  _DWORD *v5; // r7
  int v6; // r1
  int v7; // r4
  int v8; // r0
  int v9; // r1
  char v10; // r3
  void (__fastcall *v11)(int, int, int); // r3
  int v12; // r3
  int v13; // r1
  void *v14; // r0
  char v15; // r9
  int v16; // r8
  char v17; // r0
  int v18; // r3
  int v19; // r1
  int result; // r0
  bool v21; // zf
  _DWORD v22[4]; // [sp+10h] [bp-1010h] BYREF
  char v23[4096]; // [sp+20h] [bp-1000h] BYREF

  v3 = *(_DWORD *)(a1 + 196);
  LOWORD(v5) = -14512;
  V_LOCK();
  LOWORD(v4) = -23476;
  HIWORD(v4) = (unsigned int)"e" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v4, "setup_all_chip_kda");
  V_UNLOCK();
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -16468;
  HIWORD(v6) = (unsigned int)"ing_get_addr_GRIN32" >> 16;
  zlog(*v5, v6, 154, "setup_all_chip_kda", 18, 253, 60, v23);
  if ( !sub_A6C18(a1) )
    return 3;
  v7 = *(_DWORD *)(a1 + 296);
  v8 = sub_12CAD0(256, (unsigned __int8)v3);
  if ( (_BYTE)v3 )
  {
    v9 = v7 - 1;
    v10 = 0;
    do
    {
      *(_BYTE *)++v9 = v10;
      v10 += v8;
    }
    while ( v9 != v7 - 1 + (unsigned __int8)v3 );
    v7 = *(_DWORD *)(a1 + 296);
  }
  v11 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  *(_DWORD *)(a1 + 240) = v8;
  v11(a1, v7, v3);
  v22[2] = 4194305;
  v22[1] = 0;
  v22[3] = 0;
  v22[0] = 0;
  V_LOCK();
  LOWORD(v12) = 28284;
  HIWORD(v12) = (unsigned int)"!" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v12, 0);
  V_UNLOCK();
  LOWORD(v13) = 24504;
  HIWORD(v13) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  zlog(*v5, v13, 143, "ChipSetting_analog_mux_KDA", 26, 480, 60, v23);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v22);
  chip_setting_ticket_value_kda(a1, 255);
  chip_setting_misc_kda(a1);
  chip_setting_nonce_len_kda(a1);
  chip_setting_core_mode_kda(a1, 0);
  chip_setting_core_enable_code_kda(a1, 23130);
  v14 = calloc(1u, 0x190u);
  v15 = *(_BYTE *)(a1 + 136);
  v16 = (int)v14;
  v17 = rand();
  memset((void *)(v16 + 72), (unsigned __int8)(v15 + v17), 0x11Eu);
  push_work_base(a1, v16);
  free((void *)v16);
  V_LOCK();
  LOWORD(v18) = 28308;
  HIWORD(v18) = (unsigned int)"_id:%d time: %ld us" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v18);
  V_UNLOCK();
  LOWORD(v19) = -16468;
  HIWORD(v19) = (unsigned int)"ing_get_addr_GRIN32" >> 16;
  zlog(*v5, v19, 154, "setup_all_chip_kda", 18, 294, 60, v23);
  if ( !sub_A6C18(a1) )
    return 3;
  result = *(unsigned __int8 *)(a1 + 268);
  v21 = result == 0;
  if ( *(_BYTE *)(a1 + 268) )
    result = 0;
  else
    v1 = *(float *)(a1 + 760);
  if ( v21 )
    *(_DWORD *)(a1 + 272) = (int)v1;
  return result;
}
