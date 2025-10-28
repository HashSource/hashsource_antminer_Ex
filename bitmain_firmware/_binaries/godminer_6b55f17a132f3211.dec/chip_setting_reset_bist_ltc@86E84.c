int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  int v9; // r0
  int v10; // r3
  bool v11; // zf
  int v12; // r2
  int v13; // r5
  int v14; // r10
  int v15; // r0
  int v16; // r2
  int v17; // r0
  char v19; // r2
  int v20; // r1
  char v21; // r3
  int v22; // r0
  char v23; // r3
  int v24; // r3
  int v27; // [sp+20h] [bp-1014h] BYREF
  int v28; // [sp+24h] [bp-1010h]
  int v29; // [sp+28h] [bp-100Ch]
  int v30; // [sp+2Ch] [bp-1008h]
  _BYTE var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK(a1);
  v9 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    175,
    "chip_setting_reset_bist_ltc",
    27,
    242,
    40,
    var1004);
  if ( !a4 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v29) = a2;
    LOBYTE(v10) = *(_BYTE *)(a1 + 296);
    if ( a2 )
    {
      BYTE1(v30) = *(_BYTE *)(a1 + 296);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v10 = *(_DWORD *)(a1 + 296);
  v11 = v8 == 0;
  v12 = v8;
  v8 = 0;
  v27 = 0;
  v7 = v10 - 1;
  v28 = 0;
  v30 = 0;
  v29 = (unsigned __int8)v12;
  if ( v11 )
  {
    v8 = v12;
LABEL_13:
    v19 = *(_BYTE *)(*(_DWORD *)(a1 + 448) + a3);
    BYTE1(v30) = v10;
    BYTE1(v29) = v19;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v20 = *(_DWORD *)(a1 + 448);
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v21 = *(_BYTE *)(v20 + a3);
    BYTE1(v30) = *(_DWORD *)(a1 + 296);
    BYTE1(v29) = v21;
    goto LABEL_15;
  }
  BYTE1(v29) = 0;
  BYTE1(v30) = v10;
  if ( v7 >= 0 )
  {
LABEL_4:
    v13 = v8;
    while ( 1 )
    {
      v27 = 1024;
      HIWORD(v29) = 0;
      LOBYTE(v30) = v13;
      HIWORD(v30) = 0;
      v14 = (*(int (__fastcall **)(int, int *))(a1 + 232))(a1, &v27);
      if ( v14 )
        break;
      ++v13;
      usleep(0x3E8u);
      if ( v13 > v7 )
      {
        usleep(0x2710u);
        v27 = 0;
        v28 = 0;
        v30 = 0;
        v29 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v30) = *(_DWORD *)(a1 + 296);
          goto LABEL_21;
        }
        v23 = *(_BYTE *)(*(_DWORD *)(a1 + 448) + a3);
        BYTE1(v30) = *(_DWORD *)(a1 + 296);
        BYTE1(v29) = v23;
        if ( v8 > v7 )
          goto LABEL_15;
LABEL_21:
        while ( 1 )
        {
          v27 = 37888;
          HIWORD(v29) = 0;
          LOBYTE(v30) = v8;
          HIWORD(v30) = 0;
          v14 = (*(int (__fastcall **)(int, int *))(a1 + 232))(a1, &v27);
          if ( v14 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK(1000);
        v22 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v22);
        v16 = 290;
        v17 = g_zc;
LABEL_8:
        zlog(
          v17,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
          175,
          "chip_setting_reset_bist_ltc",
          27,
          v16,
          100,
          var1004);
        return v14;
      }
    }
    V_LOCK(1000);
    v15 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v15);
    v16 = 267;
    v17 = g_zc;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v24 = *(_DWORD *)(a1 + 296);
  v27 = 0;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  BYTE1(v30) = v24;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
