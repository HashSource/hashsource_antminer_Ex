int __fastcall setup_all_chip_ckb(int a1)
{
  const char *v2; // r0
  int v3; // r3
  int v4; // r2
  void (__fastcall *v5)(int, int, int); // r3
  int v6; // r1
  int v7; // r3
  _DWORD *v8; // r8
  int v9; // r1
  int v10; // r7
  int v11; // r6
  int v12; // r7
  signed int v13; // r0
  float v14; // s18
  signed int v15; // r10
  char v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r11
  float v19; // s20
  int v20; // r3
  int v21; // r1
  void *v22; // r0
  char v23; // r6
  int v24; // r9
  char v25; // r0
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  int result; // r0
  int v31; // r0
  _DWORD v32[4]; // [sp+10h] [bp-1014h] BYREF
  int v33; // [sp+20h] [bp-1004h] BYREF
  int v34; // [sp+24h] [bp-1000h]
  int v35; // [sp+28h] [bp-FFCh]
  int v36; // [sp+2Ch] [bp-FF8h]

  LOWORD(v2) = 27536;
  HIWORD(v2) = (unsigned int)&unk_135EC0 >> 16;
  puts(v2);
  LOBYTE(v3) = 0;
  v4 = *(_DWORD *)(a1 + 296) - 1;
  do
  {
    *(_BYTE *)++v4 = v3;
    v3 = (unsigned __int8)(v3 + 9);
  }
  while ( v3 != 243 );
  v5 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v6 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 9;
  v5(a1, v6, 27);
  LOWORD(v8) = -14512;
  sub_55B9C(a1);
  V_LOCK();
  LOWORD(v7) = -23476;
  HIWORD(v7) = (unsigned int)"e" >> 16;
  logfmt_raw((char *)&v33, 0x1000u, 0, v7, "ChipSetting_close_cores_CKB");
  HIWORD(v8) = (unsigned int)&unk_16B55C >> 16;
  V_UNLOCK();
  LOWORD(v9) = 24504;
  HIWORD(v9) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  zlog(*v8, v9, 143, "ChipSetting_close_cores_CKB", 27, 329, 20, &v33);
  v35 = 5242881;
  v36 = 5120;
  v33 = 0;
  v34 = 0;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 168))(a1, &v33, 20000, 0);
  v10 = (int)(float)(*(float *)(a1 + 760) - 100.0) / 25;
  if ( v10 > 0 )
  {
    v11 = 25;
    v12 = 25 * (v10 + 1);
    do
    {
      v13 = 7;
      v32[2] = 786433;
      v32[1] = 0;
      v32[3] = 0;
      v14 = (double)v11 + 100.0;
      while ( 2 )
      {
        v15 = (unsigned __int8)v13;
        do
        {
          v16 = v15 - 1;
          v17 = (unsigned int)(float)((float)v15 * (float)((float)v13 * v14));
          if ( v17 - 800 <= 0x640 )
          {
            v18 = v15 | 0xC0000100 | (16 * v13) | ((v17 / 0x19) << 16);
            v31 = sub_12CAD0(25 * (v17 / 0x19), v13);
            v19 = (float)sub_12CAD0(v31, v15);
            goto LABEL_11;
          }
          v15 = (unsigned __int8)(v15 - 1);
        }
        while ( v16 );
        if ( --v13 )
          continue;
        break;
      }
      v18 = 0;
      v19 = 0.0;
LABEL_11:
      v32[0] = v18;
      v11 += 25;
      V_LOCK();
      LOWORD(v20) = 27556;
      HIWORD(v20) = (unsigned int)&unk_135ED4 >> 16;
      logfmt_raw((char *)&v33, 0x1000u, 0, v20, v19, v14);
      V_UNLOCK();
      LOWORD(v21) = 24504;
      HIWORD(v21) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
      zlog(*v8, v21, 143, "ChipSetting_freq_CKB", 20, 288, 20, &v33);
      (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v32);
      usleep(0x2710u);
      usleep(0x61A8u);
    }
    while ( v12 != v11 );
  }
  sub_54674(a1, 48);
  v22 = calloc(1u, 0x80u);
  v23 = *(_BYTE *)(a1 + 136);
  v24 = (int)v22;
  v25 = rand();
  memset((void *)(v24 + 40), (unsigned __int8)(v23 + v25), 0x30u);
  push_work_base(a1, v24);
  free((void *)v24);
  V_LOCK();
  LOWORD(v26) = 25136;
  HIWORD(v26) = (unsigned int)"miner_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
  logfmt_raw((char *)&v33, 0x1000u, 0, v26, "ChipSetting_open_cores_CKB", 20, 80, 20000);
  V_UNLOCK();
  LOWORD(v27) = 24504;
  HIWORD(v27) = (unsigned int)"er_status/heartbeat_on_device.c" >> 16;
  zlog(*v8, v27, 143, "ChipSetting_open_cores_CKB", 26, 315, 40, &v33);
  v35 = 5242881;
  v36 = 5120;
  v34 = 0;
  v33 = 1;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 168))(a1, &v33, 20000, 0);
  sub_54674(a1, 32);
  V_LOCK();
  LOWORD(v28) = 27592;
  HIWORD(v28) = (unsigned int)&unk_135EF8 >> 16;
  logfmt_raw((char *)&v33, 0x1000u, 0, v28);
  V_UNLOCK();
  LOWORD(v29) = 26996;
  HIWORD(v29) = (unsigned int)&unk_135CA4 >> 16;
  zlog(*v8, v29, 154, "setup_all_chip_ckb", 18, 286, 60, &v33);
  sub_55B9C(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
