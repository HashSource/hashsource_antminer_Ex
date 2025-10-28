int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, char a5, unsigned __int8 a6)
{
  int v10; // r0
  char v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r12
  int v15; // r0
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r2
  int v22; // r12
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // [sp+18h] [bp-1010h] BYREF
  int v27; // [sp+1Ch] [bp-100Ch]
  int v28; // [sp+20h] [bp-1008h]
  int v29; // [sp+24h] [bp-1004h]
  _BYTE var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK(a1);
  v10 = logfmt_raw((int)var1000, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_working_mode_ltc",
    29,
    345,
    20,
    var1000);
  if ( a4 )
  {
    v13 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( !a2 )
      v13 = *(_DWORD *)(a1 + 304);
    v14 = *(unsigned __int8 *)(a1 + 788);
    LOBYTE(v28) = a2;
    if ( !a2 )
      LOBYTE(v13) = *(_BYTE *)(v13 + a3);
    v15 = *(_DWORD *)(a1 + 208);
    LOBYTE(v29) = a5;
    BYTE1(v28) = v13;
    BYTE1(v29) = v15;
    v26 = a6 | 0x400 | (v14 << 13);
    BYTE2(v29) = 1;
    v16 = (*(int (__fastcall **)(int))(a1 + 168))(a1);
    v17 = v16;
    if ( v16 )
    {
      V_LOCK(v16);
      v18 = logfmt_raw((int)var1000, 0x1000u);
      V_UNLOCK(v18);
      v19 = g_zc;
      v20 = 361;
LABEL_8:
      zlog(
        v19,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_ltc/chip_setting_ltc.c",
        159,
        "chip_setting_working_mode_ltc",
        29,
        v20,
        100,
        var1000);
      return v17;
    }
  }
  else
  {
    if ( a2 )
      v11 = 0;
    else
      v12 = *(_DWORD *)(a1 + 304);
    v26 = 0;
    v27 = 0;
    v29 = 0;
    v28 = (unsigned __int8)a2;
    if ( !a2 )
      v11 = *(_BYTE *)(v12 + a3);
    v22 = *(unsigned __int8 *)(a1 + 788);
    v23 = *(_DWORD *)(a1 + 208);
    BYTE1(v28) = v11;
    LOBYTE(v29) = a5;
    *(_WORD *)((char *)&v29 + 1) = (unsigned __int8)v23;
    HIWORD(v28) = 0;
    HIBYTE(v29) = 0;
    v26 = a6 | 0x400 | (v22 << 13);
    v24 = (*(int (__fastcall **)(int, int *))(a1 + 168))(a1, &v26);
    v17 = v24;
    if ( v24 )
    {
      V_LOCK(v24);
      v25 = logfmt_raw((int)var1000, 0x1000u);
      V_UNLOCK(v25);
      v19 = g_zc;
      v20 = 383;
      goto LABEL_8;
    }
  }
  usleep(0x3E8u);
  return v17;
}
