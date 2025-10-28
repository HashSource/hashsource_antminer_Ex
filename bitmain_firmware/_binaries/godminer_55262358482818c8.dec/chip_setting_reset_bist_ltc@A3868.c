int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  int v9; // r3
  int v10; // r1
  int v11; // r3
  bool v12; // zf
  int v13; // r2
  int v14; // r5
  int v15; // r10
  int v16; // r2
  int v17; // r0
  int v18; // r1
  char v20; // r2
  int v21; // r1
  char v22; // r3
  char v23; // r3
  int v24; // r3
  int v27; // [sp+20h] [bp-1014h] BYREF
  int v28; // [sp+24h] [bp-1010h]
  int v29; // [sp+28h] [bp-100Ch]
  int v30; // [sp+2Ch] [bp-1008h]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK();
  LOWORD(v9) = -30580;
  HIWORD(v9) = (unsigned int)"e failed" >> 16;
  logfmt_raw(var1004, 0x1000u, 0, v9, "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  LOWORD(v10) = 368;
  HIWORD(v10) = (unsigned int)"ting_working_mode_ltc" >> 16;
  zlog(g_zc, v10, 179, "chip_setting_reset_bist_ltc", 27, 242, 40, var1004);
  if ( !a4 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v29) = a2;
    LOBYTE(v11) = *(_BYTE *)(a1 + 340);
    if ( a2 )
    {
      BYTE1(v30) = *(_BYTE *)(a1 + 340);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v11 = *(_DWORD *)(a1 + 340);
  v12 = v8 == 0;
  v13 = v8;
  v8 = 0;
  v27 = 0;
  v7 = v11 - 1;
  v28 = 0;
  v30 = 0;
  v29 = (unsigned __int8)v13;
  if ( v12 )
  {
    v8 = v13;
LABEL_13:
    v20 = *(_BYTE *)(*(_DWORD *)(a1 + 488) + a3);
    BYTE1(v30) = v11;
    BYTE1(v29) = v20;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v21 = *(_DWORD *)(a1 + 488);
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v22 = *(_BYTE *)(v21 + a3);
    BYTE1(v30) = *(_DWORD *)(a1 + 340);
    BYTE1(v29) = v22;
    goto LABEL_15;
  }
  BYTE1(v29) = 0;
  BYTE1(v30) = v11;
  if ( v7 >= 0 )
  {
LABEL_4:
    v14 = v8;
    while ( 1 )
    {
      v27 = 1024;
      HIWORD(v29) = 0;
      LOBYTE(v30) = v14;
      HIWORD(v30) = 0;
      v15 = (*(int (__fastcall **)(int, int *))(a1 + 268))(a1, &v27);
      if ( v15 )
        break;
      ++v14;
      usleep(0x3E8u);
      if ( v14 > v7 )
      {
        usleep(0x2710u);
        v27 = 0;
        v28 = 0;
        v30 = 0;
        v29 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v30) = *(_DWORD *)(a1 + 340);
          goto LABEL_21;
        }
        v23 = *(_BYTE *)(*(_DWORD *)(a1 + 488) + a3);
        BYTE1(v30) = *(_DWORD *)(a1 + 340);
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
          v15 = (*(int (__fastcall **)(int, int *))(a1 + 268))(a1, &v27);
          if ( v15 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK();
        logfmt_raw(var1004, 0x1000u, 0, 1507340, "chip_setting_reset_bist_ltc", HIWORD(v29), v8);
        V_UNLOCK();
        v16 = 290;
        v17 = g_zc;
LABEL_8:
        LOWORD(v18) = 368;
        HIWORD(v18) = (unsigned int)"ting_working_mode_ltc" >> 16;
        zlog(v17, v18, 179, "chip_setting_reset_bist_ltc", 27, v16, 100, var1004);
        return v15;
      }
    }
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, 1507340, "chip_setting_reset_bist_ltc", HIWORD(v29), v14);
    V_UNLOCK();
    v16 = 267;
    v17 = g_zc;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v24 = *(_DWORD *)(a1 + 340);
  v27 = 0;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  BYTE1(v30) = v24;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
