int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  int v10; // r3
  _DWORD *v11; // r7
  int v12; // r1
  char v13; // r2
  int v14; // r3
  int v15; // r3
  int v16; // r0
  int v17; // r5
  int v18; // r3
  int v19; // r0
  int v20; // r2
  int v21; // r1
  int v23; // r0
  int v24; // r3
  int v25; // [sp+18h] [bp-1010h] BYREF
  int v26; // [sp+1Ch] [bp-100Ch]
  int v27; // [sp+20h] [bp-1008h]
  int v28; // [sp+24h] [bp-1004h]
  char var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  LOWORD(v11) = -14512;
  V_LOCK();
  LOWORD(v10) = -23476;
  HIWORD(v10) = (unsigned int)"e" >> 16;
  logfmt_raw(var1000, 0x1000u, 0, v10, "chip_setting_working_mode_ltc");
  V_UNLOCK();
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v12) = -13556;
  HIWORD(v12) = (unsigned int)"acket_kda" >> 16;
  zlog(*v11, v12, 159, "chip_setting_working_mode_ltc", 29, 298, 20, var1000);
  if ( a4 )
  {
    v15 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( !a2 )
      v15 = *(_DWORD *)(a1 + 296);
    LOBYTE(v27) = a2;
    v16 = *(_DWORD *)(a1 + 200);
    if ( !a2 )
      LOBYTE(v15) = *(_BYTE *)(v15 + a3);
    LOBYTE(v28) = a5;
    BYTE1(v28) = v16;
    BYTE1(v27) = v15;
    v25 = a6 | 0x400;
    BYTE2(v28) = 1;
    v17 = (*(int (__fastcall **)(int))(a1 + 160))(a1);
    if ( v17 )
    {
      V_LOCK();
      LOWORD(v18) = -13192;
      HIWORD(v18) = (unsigned int)&unk_13BFA8 >> 16;
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        v18,
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v27,
        BYTE1(v27),
        HIWORD(v27));
      V_UNLOCK();
      v19 = *v11;
      v20 = 314;
LABEL_8:
      LOWORD(v21) = -13556;
      HIWORD(v21) = (unsigned int)"acket_kda" >> 16;
      zlog(v19, v21, 159, "chip_setting_working_mode_ltc", 29, v20, 100, var1000);
      return v17;
    }
  }
  else
  {
    if ( a2 )
      v13 = 0;
    else
      v14 = *(_DWORD *)(a1 + 296);
    v25 = 0;
    v26 = 0;
    v28 = 0;
    v27 = (unsigned __int8)a2;
    if ( !a2 )
      v13 = *(_BYTE *)(v14 + a3);
    v23 = *(_DWORD *)(a1 + 200);
    BYTE1(v27) = v13;
    *(_WORD *)((char *)&v28 + 1) = (unsigned __int8)v23;
    LOBYTE(v28) = a5;
    HIWORD(v27) = 0;
    HIBYTE(v28) = 0;
    v25 = a6 | 0x400;
    v17 = (*(int (__fastcall **)(int, int *))(a1 + 160))(a1, &v25);
    if ( v17 )
    {
      V_LOCK();
      LOWORD(v24) = -13132;
      HIWORD(v24) = (unsigned int)"/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/backend/backend_kda/backend_kda.c" >> 16;
      logfmt_raw(
        var1000,
        0x1000u,
        0,
        v24,
        "chip_setting_working_mode_ltc",
        (unsigned __int8)v27,
        BYTE1(v27),
        HIWORD(v27),
        a5);
      V_UNLOCK();
      v19 = *v11;
      v20 = 336;
      goto LABEL_8;
    }
  }
  usleep(0x3E8u);
  return v17;
}
