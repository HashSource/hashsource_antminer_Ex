int __fastcall sub_B3F44(int a1, int a2)
{
  char v2; // r3
  int v3; // r3
  int v4; // r0
  int v8; // r7
  int v9; // r6
  int v10; // lr
  int v11; // r12
  int v12; // r2
  _WORD *v13; // r6
  _DWORD *v14; // r6
  int v15; // r2
  int v16; // r1
  int v17; // r3
  bool v18; // cf
  _DWORD *v19; // r6
  int v20; // r2
  _DWORD *v21; // r6
  _WORD *v22; // r6
  float v23; // s12
  _DWORD *v24; // r6
  int v25; // r3
  _BYTE *v26; // r6
  int v27; // r0
  char *v28; // r0
  char *v29; // r6
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  _BYTE v38[4096]; // [sp+820h] [bp-1000h] BYREF

  v2 = *(_BYTE *)a2 & 0xF | (16 * ((*(_BYTE *)a1 >> 4) & 0xF));
  *(_BYTE *)a2 = v2;
  *(_BYTE *)a2 = v2 & 0xF0 | *(_BYTE *)a1 & 0xF;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 1);
  v3 = *(unsigned __int8 *)(a1 + 2);
  *(_BYTE *)(a2 + 2) = v3;
  if ( v3 == 3 )
  {
    v8 = (int)calloc(0x12u, 1u);
    v9 = v8;
    *(_DWORD *)(a2 + 3) = v8;
    if ( v8 )
    {
      v8 = 1;
    }
    else
    {
      V_LOCK(*(_DWORD *)"Decode SN OOM\n");
      v31 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v31);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        428,
        100,
        v38);
      v9 = *(_DWORD *)(a2 + 3);
    }
    v10 = *(_DWORD *)(a1 + 7);
    v11 = *(_DWORD *)(a1 + 11);
    v12 = *(_DWORD *)(a1 + 15);
    *(_DWORD *)v9 = *(_DWORD *)(a1 + 3);
    *(_DWORD *)(v9 + 4) = v10;
    *(_DWORD *)(v9 + 8) = v11;
    *(_DWORD *)(v9 + 12) = v12;
    *(_BYTE *)(v9 + 16) = *(_BYTE *)(a1 + 19);
    v13 = calloc(3u, 1u);
    *(_DWORD *)(a2 + 7) = v13;
    if ( !v13 )
    {
      v8 = 0;
      V_LOCK(*(_DWORD *)"OOM\n");
      v27 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v27);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        437,
        100,
        v38);
      v13 = *(_WORD **)(a2 + 7);
    }
    *v13 = *(_WORD *)(a1 + 20);
    v14 = calloc(0xEu, 1u);
    *(_DWORD *)(a2 + 11) = v14;
    if ( !v14 )
    {
      v8 = 0;
      V_LOCK(*(_DWORD *)"ing OOM\n");
      v30 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v30);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        446,
        100,
        v38);
      v14 = *(_DWORD **)(a2 + 11);
    }
    v15 = *(_DWORD *)(a1 + 30);
    v16 = *(_DWORD *)(a1 + 26);
    *v14 = *(_DWORD *)(a1 + 22);
    v14[2] = v15;
    v14[1] = v16;
    *((_BYTE *)v14 + 12) = *(_BYTE *)(a1 + 34);
    v17 = *(unsigned __int8 *)(a2 + 2) - 1;
    v18 = *(_BYTE *)(a2 + 2) != 1;
    *(_BYTE *)(a2 + 15) = *(_BYTE *)(a1 + 35);
    if ( v17 != 1 && v18 )
    {
      v19 = calloc(0xAu, 1u);
      *(_DWORD *)(a2 + 16) = v19;
      if ( !v19 )
      {
        v8 = 0;
        V_LOCK(*(_DWORD *)"rogram Version OOM\n");
        v36 = logfmt_raw((int)v38, 0x1000u);
        V_UNLOCK(v36);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
          163,
          "eeprom_buf_to_layout",
          20,
          472,
          100,
          v38);
        v19 = *(_DWORD **)(a2 + 16);
      }
      v20 = *(_DWORD *)(a1 + 40);
      *v19 = *(_DWORD *)(a1 + 36);
      v19[1] = v20;
      *((_BYTE *)v19 + 8) = *(_BYTE *)(a1 + 44);
    }
    else
    {
      v28 = (char *)calloc(0xFu, 1u);
      v29 = v28;
      *(_DWORD *)(a2 + 16) = v28;
      if ( !v28 )
      {
        v8 = 0;
        V_LOCK(*(_DWORD *)"rogram Version OOM\n");
        v37 = logfmt_raw((int)v38, 0x1000u);
        V_UNLOCK(v37);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/device/hal/eeprom/bitmain_eeprom.c",
          163,
          "eeprom_buf_to_layout",
          20,
          461,
          100,
          v38);
        v29 = *(char **)(a2 + 16);
      }
      snprintf(
        v29,
        0xFu,
        "F%dV%02dB%dC%d",
        (unsigned __int8)*(_DWORD *)(a1 + 36),
        BYTE1(*(_DWORD *)(a1 + 36)),
        (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 36)),
        HIBYTE(*(_DWORD *)(a1 + 36)));
    }
    *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0x80 | *(_BYTE *)(a1 + 45) & 0x7F;
    *(_BYTE *)(a2 + 20) = *(_BYTE *)(a2 + 20) & 0x7F | (*(_BYTE *)(a1 + 45) >> 7 << 7);
    v21 = calloc(5u, 1u);
    *(_DWORD *)(a2 + 21) = v21;
    if ( !v21 )
    {
      v8 = 0;
      V_LOCK(*(_DWORD *)"rogram Version OOM\n");
      v35 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v35);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        486,
        100,
        v38);
      v21 = *(_DWORD **)(a2 + 21);
    }
    *v21 = *(_DWORD *)(a1 + 46);
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0x80 | *(_BYTE *)(a1 + 50) & 0x7F;
    *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0x7F | (*(_BYTE *)(a1 + 50) >> 7 << 7);
    *(_BYTE *)(a2 + 26) = *(_BYTE *)(a1 + 51);
    *(_BYTE *)(a2 + 27) = *(_BYTE *)(a1 + 52);
    *(_BYTE *)(a2 + 28) = *(_BYTE *)(a1 + 53);
    *(_BYTE *)(a2 + 29) = *(_BYTE *)(a1 + 54);
    *(_BYTE *)(a2 + 30) = *(_BYTE *)(a1 + 55);
    v22 = calloc(3u, 1u);
    *(_DWORD *)(a2 + 31) = v22;
    if ( !v22 )
    {
      v8 = 0;
      V_LOCK(*(_DWORD *)"nology OOM\n");
      v34 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v34);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        510,
        100,
        v38);
      v22 = *(_WORD **)(a2 + 31);
    }
    *v22 = *(_WORD *)(a1 + 56);
    *(_WORD *)(a2 + 35) = __rev16(*(unsigned __int16 *)(a1 + 58));
    *(_WORD *)(a2 + 37) = __rev16(*(unsigned __int16 *)(a1 + 60));
    v23 = (double)((unsigned __int16)(*(_WORD *)(a1 + 62) << 8) | HIBYTE(*(unsigned __int16 *)(a1 + 62))) / 100.0;
    *(float *)(a2 + 39) = v23;
    *(_BYTE *)(a2 + 43) = *(_BYTE *)(a1 + 64);
    *(_BYTE *)(a2 + 44) = *(_BYTE *)(a1 + 65);
    *(_BYTE *)(a2 + 45) = *(_BYTE *)(a1 + 66);
    *(_BYTE *)(a2 + 46) = *(_BYTE *)(a1 + 67);
    v24 = calloc(9u, 1u);
    *(_DWORD *)(a2 + 47) = v24;
    if ( !v24 )
    {
      v8 = 0;
      V_LOCK(*(_DWORD *)"e OOM\n");
      v33 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        546,
        100,
        v38);
      v24 = *(_DWORD **)(a2 + 47);
    }
    v25 = *(_DWORD *)(a1 + 72);
    *v24 = *(_DWORD *)(a1 + 68);
    v24[1] = v25;
    *(_BYTE *)(*(_DWORD *)(a2 + 47) + 8) = 0;
    v26 = calloc(6u, 1u);
    *(_DWORD *)(a2 + 51) = v26;
    if ( !v26 )
    {
      v8 = 0;
      V_LOCK(*(_DWORD *)"OOM\n");
      v32 = logfmt_raw((int)v38, 0x1000u);
      V_UNLOCK(v32);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/device/hal/eeprom/bitmain_eeprom.c",
        163,
        "eeprom_buf_to_layout",
        20,
        556,
        100,
        v38);
      v26 = *(_BYTE **)(a2 + 51);
    }
    *(_DWORD *)v26 = *(_DWORD *)(a1 + 76);
    v26[4] = *(_BYTE *)(a1 + 80);
    *(_BYTE *)(*(_DWORD *)(a2 + 51) + 5) = 0;
    *(_BYTE *)(a2 + 55) = *(_BYTE *)(a1 + 81);
    return v8;
  }
  else
  {
    V_LOCK(*(_DWORD *)"supported\n");
    v4 = logfmt_raw((int)v38, 0x1000u);
    V_UNLOCK(v4);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/device/hal/eeprom/bitmain_eeprom.c",
      163,
      "init_eeprom_fmt_info",
      20,
      370,
      100,
      v38);
    return 0;
  }
}
