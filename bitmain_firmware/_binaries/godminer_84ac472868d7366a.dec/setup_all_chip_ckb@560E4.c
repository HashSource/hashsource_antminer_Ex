int __fastcall setup_all_chip_ckb(int a1)
{
  int v2; // r3
  int v3; // r2
  void (__fastcall *v4)(int, int, int); // r3
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r7
  int v11; // r0
  float v12; // s18
  int v13; // r10
  char v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r11
  int v17; // r0
  char *v18; // r0
  char v19; // r6
  char *v20; // r9
  char v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int result; // r0
  int v27; // r0
  _DWORD v28[4]; // [sp+10h] [bp-1014h] BYREF
  int v29; // [sp+20h] [bp-1004h] BYREF
  int v30; // [sp+24h] [bp-1000h]
  int v31; // [sp+28h] [bp-FFCh]
  int v32; // [sp+2Ch] [bp-FF8h]

  puts("setup_all_chip_ckb");
  LOBYTE(v2) = 0;
  v3 = *(_DWORD *)(a1 + 296) - 1;
  do
  {
    *(_BYTE *)++v3 = v2;
    v2 = (unsigned __int8)(v2 + 9);
  }
  while ( v2 != 243 );
  v4 = *(void (__fastcall **)(int, int, int))(a1 + 148);
  v5 = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 240) = 9;
  v4(a1, v5, 27);
  v6 = sub_55CE4(a1);
  V_LOCK(v6);
  v7 = logfmt_raw((int)&v29, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_close_cores_CKB",
    27,
    329,
    20,
    &v29);
  v31 = 5242881;
  v32 = 5120;
  v29 = 0;
  v30 = 0;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 168))(a1, &v29, 20000, 0);
  v8 = (int)(float)(*(float *)(a1 + 760) - 100.0) / 25;
  if ( v8 > 0 )
  {
    v9 = 25;
    v10 = 25 * (v8 + 1);
    do
    {
      v11 = 7;
      v28[2] = 786433;
      v28[1] = 0;
      v28[3] = 0;
      while ( 2 )
      {
        v13 = (unsigned __int8)v11;
        do
        {
          v14 = v13 - 1;
          v12 = (double)v9 + 100.0;
          v15 = (unsigned int)(float)((float)v13 * (float)((float)v11 * v12));
          if ( v15 - 800 <= 0x640 )
          {
            v16 = v13 | 0xC0000100 | (16 * v11) | ((v15 / 0x19) << 16);
            v27 = sub_12CDC0(25 * (v15 / 0x19), v11);
            v11 = sub_12CDC0(v27, v13);
            goto LABEL_11;
          }
          v13 = (unsigned __int8)(v13 - 1);
        }
        while ( v14 );
        if ( --v11 )
          continue;
        break;
      }
      v16 = 0;
LABEL_11:
      v28[0] = v16;
      v9 += 25;
      V_LOCK(v11);
      v17 = logfmt_raw((int)&v29, 0x1000u);
      V_UNLOCK(v17);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_freq_CKB",
        20,
        288,
        20,
        &v29);
      (*(void (__fastcall **)(int, _DWORD *))(a1 + 156))(a1, v28);
      usleep(0x2710u);
      usleep(0x61A8u);
    }
    while ( v10 != v9 );
  }
  sub_547BC(a1, 48);
  v18 = (char *)calloc(1u, 0x80u);
  v19 = *(_BYTE *)(a1 + 136);
  v20 = v18;
  v21 = rand();
  memset(v20 + 40, (unsigned __int8)(v19 + v21), 0x30u);
  push_work_base(a1, v20);
  free(v20);
  V_LOCK(v22);
  v23 = logfmt_raw((int)&v29, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_open_cores_CKB",
    26,
    315,
    40,
    &v29);
  v31 = 5242881;
  v32 = 5120;
  v30 = 0;
  v29 = 1;
  (*(void (__fastcall **)(int, int *, int, _DWORD))(a1 + 168))(a1, &v29, 20000, 0);
  v24 = sub_547BC(a1, 32);
  V_LOCK(v24);
  v25 = logfmt_raw((int)&v29, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ckb/backend_ckb.c",
    154,
    "setup_all_chip_ckb",
    18,
    286,
    60,
    &v29);
  sub_55CE4(a1);
  result = 0;
  if ( !*(_BYTE *)(a1 + 268) )
    *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
