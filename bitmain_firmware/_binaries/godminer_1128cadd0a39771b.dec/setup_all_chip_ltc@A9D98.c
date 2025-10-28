int __fastcall setup_all_chip_ltc(int a1)
{
  int v2; // r8
  int v3; // r0
  unsigned int v4; // r5
  int v5; // r9
  int v6; // r0
  unsigned int v7; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r1
  char v17; // r3
  int v18; // r1
  int (__fastcall *v19)(int, int, int); // r3
  int v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int v25; // r6
  int v26; // r5
  unsigned int v27; // r3
  int v28; // r0
  int v29; // [sp+0h] [bp-1020h]
  _DWORD v30[4]; // [sp+10h] [bp-1010h] BYREF
  _BYTE v31[4096]; // [sp+20h] [bp-1000h] BYREF

  v2 = *(_DWORD *)(a1 + 204);
  V_LOCK(a1);
  v3 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    336,
    60,
    v31);
  v4 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 244) = 0;
  if ( v4 )
  {
    v5 = 3;
    while ( 1 )
    {
      v6 = sub_A8C94(a1, v4);
      if ( *(_DWORD *)(a1 + 244) < v4 )
      {
        v9 = dev_ctrl(v6);
        (*(void (__fastcall **)(_DWORD))(v9 + 28))(*(_DWORD *)(a1 + 144));
        v10 = usleep((__useconds_t)&loc_493E0);
        v11 = dev_ctrl(v10);
        v12 = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(v11 + 24))(
                *(_DWORD *)(a1 + 144),
                *(_DWORD *)(a1 + 772),
                *(_DWORD *)(a1 + 784));
        v13 = dev_ctrl(v12);
        (*(void (__fastcall **)(_DWORD))(v13 + 36))(*(_DWORD *)(a1 + 144));
      }
      usleep((__useconds_t)&loc_493E0);
      v7 = *(_DWORD *)(a1 + 244);
      if ( v7 >= v4 )
        break;
      if ( !--v5 )
        return 3;
    }
    if ( v7 != v4 )
      return 3;
  }
  v14 = *(_DWORD *)(a1 + 304);
  v15 = sub_12E0D8(256, (unsigned __int8)v2);
  if ( (_BYTE)v2 )
  {
    v16 = v14 - 1;
    v17 = 0;
    do
    {
      *(_BYTE *)++v16 = v17;
      v17 += v15;
    }
    while ( v16 != v14 - 1 + (unsigned __int8)v2 );
    v14 = *(_DWORD *)(a1 + 304);
  }
  v18 = v14;
  v19 = *(int (__fastcall **)(int, int, int))(a1 + 156);
  v20 = 0;
  *(_DWORD *)(a1 + 248) = v15;
  v21 = v19(a1, v18, v2);
  v30[2] = 2883585;
  v30[1] = 0;
  v30[3] = 0;
  v30[0] = 0;
  V_LOCK(v21);
  v22 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/chip_setting.c",
    143,
    "ChipSetting_analog_mux_LTC",
    26,
    503,
    60,
    v31);
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v30);
  v23 = chip_setting_ticket_mask_ltc(a1, -1);
  if ( *(int *)(a1 + 208) > 0 )
  {
    do
    {
      v29 = v20++;
      v23 = chip_setting_working_mode_ltc(a1, 1, 0, 0, v29, 255);
    }
    while ( *(_DWORD *)(a1 + 208) > v20 );
  }
  if ( *(_BYTE *)(a1 + 788) )
  {
    V_LOCK(v23);
    v28 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/backend_ltc.c",
      154,
      "setup_all_chip_ltc",
      18,
      401,
      60,
      v31);
    v23 = chip_setting_share_mode_ltc(a1);
  }
  *(_DWORD *)(a1 + 280) = 900;
  V_LOCK(v23);
  v24 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/backend_ltc.c",
    154,
    "setup_all_chip_ltc",
    18,
    409,
    60,
    v31);
  v25 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 244) = 0;
  if ( !v25 )
    return 0;
  v26 = 3;
  while ( 1 )
  {
    sub_A8C94(a1, v25);
    usleep((__useconds_t)&loc_493E0);
    v27 = *(_DWORD *)(a1 + 244);
    if ( v25 <= v27 )
      break;
    if ( !--v26 )
      return 3;
  }
  if ( v25 != v27 )
    return 3;
  else
    return 0;
}
