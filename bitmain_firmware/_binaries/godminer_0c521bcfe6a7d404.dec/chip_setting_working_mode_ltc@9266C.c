int __fastcall chip_setting_working_mode_ltc(int a1, int a2, int a3, int a4, char a5, unsigned __int8 a6)
{
  int v10; // r0
  char v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // [sp+18h] [bp-1010h] BYREF
  int v25; // [sp+1Ch] [bp-100Ch]
  int v26; // [sp+20h] [bp-1008h]
  int v27; // [sp+24h] [bp-1004h]
  _BYTE var1000[4120]; // [sp+28h] [bp-1000h] BYREF

  V_LOCK(a1);
  v10 = logfmt_raw((int)var1000, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    179,
    "chip_setting_working_mode_ltc",
    29,
    304,
    20,
    var1000);
  if ( a4 )
  {
    v13 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( !a2 )
      v13 = *(_DWORD *)(a1 + 456);
    LOBYTE(v26) = a2;
    v14 = *(_DWORD *)(a1 + 308);
    if ( !a2 )
      LOBYTE(v13) = *(_BYTE *)(v13 + a3);
    LOBYTE(v27) = a5;
    BYTE1(v27) = v14;
    BYTE1(v26) = v13;
    v24 = a6 | 0x400;
    BYTE2(v27) = 1;
    v15 = (*(int (__fastcall **)(int))(a1 + 244))(a1);
    v16 = v15;
    if ( v15 )
    {
      V_LOCK(v15);
      v17 = logfmt_raw((int)var1000, 0x1000u);
      V_UNLOCK(v17);
      v18 = g_zc;
      v19 = 321;
LABEL_8:
      zlog(
        v18,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
        179,
        "chip_setting_working_mode_ltc",
        29,
        v19,
        100,
        var1000);
      return v16;
    }
  }
  else
  {
    if ( a2 )
      v11 = 0;
    else
      v12 = *(_DWORD *)(a1 + 456);
    v24 = 0;
    v25 = 0;
    v27 = 0;
    v26 = (unsigned __int8)a2;
    if ( !a2 )
      v11 = *(_BYTE *)(v12 + a3);
    v21 = *(_DWORD *)(a1 + 308);
    BYTE1(v26) = v11;
    *(_WORD *)((char *)&v27 + 1) = (unsigned __int8)v21;
    LOBYTE(v27) = a5;
    HIWORD(v26) = 0;
    HIBYTE(v27) = 0;
    v24 = a6 | 0x400;
    v22 = (*(int (__fastcall **)(int, int *))(a1 + 244))(a1, &v24);
    v16 = v22;
    if ( v22 )
    {
      V_LOCK(v22);
      v23 = logfmt_raw((int)var1000, 0x1000u);
      V_UNLOCK(v23);
      v18 = g_zc;
      v19 = 344;
      goto LABEL_8;
    }
  }
  usleep(0x3E8u);
  return v16;
}
