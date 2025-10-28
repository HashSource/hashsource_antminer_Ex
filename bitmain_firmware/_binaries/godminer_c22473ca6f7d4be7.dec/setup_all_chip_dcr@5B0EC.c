int __fastcall setup_all_chip_dcr(int a1)
{
  int v2; // r6
  int v3; // r3
  _DWORD *v4; // r10
  int v5; // r1
  int v6; // r0
  int v7; // r7
  _BYTE *v8; // r8
  _BYTE *v9; // r2
  char v10; // r3
  int v11; // r9
  int v12; // r3
  int v13; // r11
  int v14; // r1
  char *v15; // r1
  const char *v16; // r2
  char *v17; // r1
  int v18; // lr
  unsigned int v19; // r3
  int result; // r0
  int v21; // r6
  void (__fastcall *v22)(int, int *); // r3
  char *v23; // r7
  void (__fastcall *v24)(int, int *); // r3
  char v25; // r10
  char v26; // r0
  unsigned int v27; // [sp+50h] [bp-1094h]
  void *ptr; // [sp+54h] [bp-1090h]
  int v29; // [sp+58h] [bp-108Ch]
  _DWORD v30[4]; // [sp+70h] [bp-1074h] BYREF
  _DWORD v31[8]; // [sp+80h] [bp-1064h] BYREF
  _DWORD v32[7]; // [sp+A0h] [bp-1044h] BYREF
  int v33; // [sp+BCh] [bp-1028h]
  _DWORD v34[7]; // [sp+C0h] [bp-1024h] BYREF
  int v35; // [sp+DCh] [bp-1008h]
  int v36; // [sp+E0h] [bp-1004h] BYREF
  int v37; // [sp+E4h] [bp-1000h]
  int v38; // [sp+E8h] [bp-FFCh]
  int v39; // [sp+ECh] [bp-FF8h]

  v2 = *(_DWORD *)(a1 + 196);
  LOWORD(v4) = -14512;
  V_LOCK();
  LOWORD(v3) = -23476;
  HIWORD(v3) = (unsigned int)"e" >> 16;
  logfmt_raw((char *)&v36, 0x1000u, 0, v3, "setup_all_chip_dcr");
  HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
  V_UNLOCK();
  LOWORD(v5) = 32128;
  HIWORD(v5) = (unsigned int)"hrate_dash" >> 16;
  zlog(*v4, v5, 154, "setup_all_chip_dcr", 18, 248, 60, &v36);
  v6 = sub_12CAD0(256, (unsigned __int8)v2);
  v7 = v6;
  v8 = *(_BYTE **)(a1 + 296);
  if ( (_BYTE)v2 )
  {
    v9 = v8 - 1;
    v10 = 0;
    do
    {
      *++v9 = v10;
      v10 += v6;
    }
    while ( &v8[(unsigned __int8)v2 - 1] != v9 );
  }
  LOWORD(v11) = 25188;
  *v8 = rand();
  *(_DWORD *)(a1 + 240) = v7;
  LOWORD(v13) = 24504;
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), v2);
  V_LOCK();
  LOWORD(v12) = 28308;
  HIWORD(v12) = (unsigned int)"_id:%d time: %ld us" >> 16;
  logfmt_raw((char *)&v36, 0x1000u, 0, v12);
  V_UNLOCK();
  LOWORD(v14) = 32128;
  HIWORD(v14) = (unsigned int)"hrate_dash" >> 16;
  LOWORD(v2) = 25164;
  zlog(*v4, v14, 154, "setup_all_chip_dcr", 18, 263, 60, &v36);
  HIWORD(v13) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  v27 = *(_DWORD *)(a1 + 196);
  v29 = 3;
  while ( 1 )
  {
    V_LOCK();
    HIWORD(v2) = (unsigned int)"s/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
    logfmt_raw((char *)&v36, 0x1000u, 0, v2, "ChipSetting_get_addr_DCR", v27);
    V_UNLOCK();
    zlog(*v4, v13, 143, "ChipSetting_get_addr_DCR", 24, 26, 20, &v36);
    v30[2] = 1;
    v30[0] = 0;
    v30[1] = 0;
    v30[3] = 0;
    ptr = calloc(12 * v27, 1u);
    (*(void (__fastcall **)(int, _DWORD *, unsigned int))(a1 + 176))(a1, v30, v27);
    V_LOCK();
    LOWORD(v15) = -7948;
    HIWORD(v15) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v34, v15, *(int *)(a1 + 140));
    HIWORD(v11) = (unsigned int)"build/godminer-origin_master/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
    logfmt_raw(
      (char *)&v36,
      0x1000u,
      0,
      v35,
      v34[0],
      v34[1],
      v34[2],
      v34[3],
      v34[4],
      v34[5],
      v34[6],
      v35,
      v11,
      "ChipSetting_get_addr_DCR",
      0);
    V_UNLOCK();
    zlog(*v4, v13, 143, "ChipSetting_get_addr_DCR", 24, 36, 60, &v36);
    if ( *(int *)(a1 + 196) > 0 )
    {
      V_LOCK();
      V_INT((int)v32, "chain", *(int *)(a1 + 140));
      LOWORD(v16) = 25292;
      LOWORD(v17) = -22980;
      HIWORD(v16) = (unsigned int)"p error! pcb temp count %d chip temp count %d uneffective value count %d" >> 16;
      HIWORD(v17) = (unsigned int)&unk_13996C >> 16;
      V_STR(v31, v17, v16);
      LOWORD(v18) = 25308;
      HIWORD(v18) = (unsigned int)"p count %d chip temp count %d uneffective value count %d" >> 16;
      logfmt_raw(
        (char *)&v36,
        0x1000u,
        0,
        v33,
        v32[0],
        v32[1],
        v32[2],
        v32[3],
        v32[4],
        v32[5],
        v32[6],
        v33,
        v31[0],
        v31[1],
        v31[2],
        v31[3],
        v31[4],
        v31[5],
        v31[6],
        v31[7],
        v18);
      V_UNLOCK();
      zlog(*v4, v13, 143, "ChipSetting_get_addr_DCR", 24, 54, 100, &v36);
    }
    free(ptr);
    *(_DWORD *)(a1 + 236) = 0;
    usleep(0x2710u);
    v19 = *(_DWORD *)(a1 + 236);
    if ( v27 <= v19 )
      break;
    if ( !--v29 )
      return 3;
  }
  if ( v27 != v19 )
    return 3;
  v38 = 6291456;
  v37 = 0;
  v39 = 0;
  v36 = 48;
  v21 = 0;
  v22 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v38) = 1;
  v22(a1, &v36);
  v38 = 524289;
  v39 = 255;
  v37 = 0;
  v36 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 160))(a1, &v36);
  usleep((__useconds_t)&stru_18694.st_info);
  chip_setting_ticket_value_dcr(a1, 255);
  chip_setting_misc_dcr(a1);
  v23 = (char *)calloc(1u, 0x118u);
  do
  {
    v24 = *(void (__fastcall **)(int, int *))(a1 + 160);
    v36 = 23130;
    v38 = 131073;
    v37 = 0;
    v39 = (unsigned __int8)v21++;
    v24(a1, &v36);
    usleep((__useconds_t)&stru_13874.st_info);
    usleep(0x4E20u);
    v25 = *(_BYTE *)(a1 + 136);
    v26 = rand();
    memset(v23 + 40, (unsigned __int8)(v25 + v26), 0xB4u);
    push_work_base(a1, (int)v23);
    usleep((__useconds_t)&loc_3D090);
  }
  while ( v21 != 192 );
  free(v23);
  result = *(unsigned __int8 *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 268) )
    return 0;
  *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
