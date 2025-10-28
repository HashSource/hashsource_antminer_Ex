int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  int v9; // r0
  int v10; // r3
  bool v11; // zf
  int v12; // r2
  int v13; // r6
  int v14; // r3
  int (__fastcall *v15)(int, int *); // r2
  int v16; // r10
  int v17; // r0
  int v18; // r2
  int v19; // r0
  char v21; // r2
  int v22; // r1
  char v23; // r3
  int v24; // r3
  int (__fastcall *v25)(int, int *); // r2
  int v26; // r0
  char v27; // r3
  int v28; // r3
  int v31; // [sp+20h] [bp-1014h] BYREF
  int v32; // [sp+24h] [bp-1010h]
  int v33; // [sp+28h] [bp-100Ch]
  int v34; // [sp+2Ch] [bp-1008h]
  _BYTE var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK(a1);
  v9 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v9);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_ltc/chip_setting_ltc.c",
    159,
    "chip_setting_reset_bist_ltc",
    27,
    286,
    40,
    var1004);
  if ( !a4 )
  {
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v33) = a2;
    LOBYTE(v10) = *(_BYTE *)(a1 + 208);
    if ( a2 )
    {
      BYTE1(v34) = *(_BYTE *)(a1 + 208);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v10 = *(_DWORD *)(a1 + 208);
  v11 = v8 == 0;
  v12 = v8;
  v8 = 0;
  v31 = 0;
  v7 = v10 - 1;
  v32 = 0;
  v34 = 0;
  v33 = (unsigned __int8)v12;
  if ( v11 )
  {
    v8 = v12;
LABEL_13:
    v21 = *(_BYTE *)(*(_DWORD *)(a1 + 304) + a3);
    BYTE1(v34) = v10;
    BYTE1(v33) = v21;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v22 = *(_DWORD *)(a1 + 304);
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v23 = *(_BYTE *)(v22 + a3);
    BYTE1(v34) = *(_DWORD *)(a1 + 208);
    BYTE1(v33) = v23;
    goto LABEL_15;
  }
  BYTE1(v33) = 0;
  BYTE1(v34) = v10;
  if ( v7 >= 0 )
  {
LABEL_4:
    v13 = v8;
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)(a1 + 788);
      HIWORD(v33) = 0;
      LOBYTE(v34) = v13;
      HIWORD(v34) = 0;
      v15 = *(int (__fastcall **)(int, int *))(a1 + 168);
      v31 = (v14 << 13) | 0x400;
      v16 = v15(a1, &v31);
      if ( v16 )
        break;
      ++v13;
      usleep(0x3E8u);
      if ( v13 > v7 )
      {
        usleep(0x2710u);
        v31 = 0;
        v32 = 0;
        v34 = 0;
        v33 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v34) = *(_DWORD *)(a1 + 208);
          goto LABEL_21;
        }
        v27 = *(_BYTE *)(*(_DWORD *)(a1 + 304) + a3);
        BYTE1(v34) = *(_DWORD *)(a1 + 208);
        BYTE1(v33) = v27;
        if ( v8 > v7 )
          goto LABEL_15;
LABEL_21:
        while ( 1 )
        {
          v24 = *(unsigned __int8 *)(a1 + 788);
          HIWORD(v33) = 0;
          LOBYTE(v34) = v8;
          HIWORD(v34) = 0;
          v25 = *(int (__fastcall **)(int, int *))(a1 + 168);
          v31 = (v24 << 13) | 0x9400;
          v16 = v25(a1, &v31);
          if ( v16 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK(1000);
        v26 = logfmt_raw((int)var1004, 0x1000u);
        V_UNLOCK(v26);
        v18 = 331;
        v19 = g_zc;
LABEL_8:
        zlog(
          v19,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_ltc/chip_setting_ltc.c",
          159,
          "chip_setting_reset_bist_ltc",
          27,
          v18,
          100,
          var1004);
        return v16;
      }
    }
    V_LOCK(1000);
    v17 = logfmt_raw((int)var1004, 0x1000u);
    V_UNLOCK(v17);
    v18 = 309;
    v19 = g_zc;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v28 = *(_DWORD *)(a1 + 208);
  v31 = 0;
  v32 = 0;
  v33 = 1;
  v34 = 0;
  BYTE1(v34) = v28;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
