int get_power_voltage_calibration_data()
{
  bool v0; // cc
  int v1; // r10
  int v2; // r4
  unsigned __int64 v3; // r2
  unsigned int v4; // r11
  int v5; // r4
  int v6; // r3
  int v7; // r1
  _BYTE *v8; // lr
  int v9; // r2
  __int64 v10; // r0
  int v11; // t1
  int v12; // r3
  int v13; // r8
  int v14; // r1
  double v15; // d0
  double v16; // d9
  int v17; // r7
  int v18; // s16
  int v19; // r10
  int v20; // r9
  unsigned int v21; // r1
  double *v22; // r8
  double v23; // d0
  int v24; // r3
  int v25; // r1
  int v27; // r3
  int v28; // r1
  int v29; // [sp+1Ch] [bp-1038h] BYREF
  int v30; // [sp+20h] [bp-1034h]
  int v31; // [sp+24h] [bp-1030h] BYREF
  int v32; // [sp+28h] [bp-102Ch]
  __int16 v33; // [sp+2Ch] [bp-1028h]
  unsigned int v34[3]; // [sp+30h] [bp-1024h] BYREF
  unsigned __int8 v35; // [sp+3Ch] [bp-1018h]
  _BYTE v36[15]; // [sp+3Dh] [bp-1017h] BYREF
  unsigned __int8 v37; // [sp+4Ch] [bp-1008h]
  unsigned __int8 v38; // [sp+4Dh] [bp-1007h]
  unsigned __int8 v39; // [sp+4Eh] [bp-1006h]
  unsigned __int8 v40; // [sp+4Fh] [bp-1005h]
  char v41[4100]; // [sp+50h] [bp-1004h] BYREF

  v0 = (unsigned int)dword_1B36F8 > 0x62;
  if ( dword_1B36F8 != 98 )
    v0 = (unsigned int)(dword_1B36F8 - 100) > 2;
  v1 = !v0;
  if ( v0 )
  {
    bitmain_power_read(64, (int)v34, 32);
    v2 = (unsigned __int16)(v40 + (v39 << 8));
    if ( POWER_CRC16((int)v34, 30) == v2 )
    {
      HIDWORD(v3) = bswap32(v34[0]) & 0x1FFFFFF;
      LODWORD(v3) = bswap32(v34[1]);
      v4 = bswap32(v34[2]);
      v31 = v1;
      v32 = v1;
      v33 = v1;
      v5 = v1;
      v29 = v1;
      v30 = v1;
      sub_C7BE4((int)&v29, 12, v3);
      sub_C7BE4((int)&v31 + 3, 7, __PAIR64__(v1, v4));
      V_LOCK();
      LOWORD(v6) = 26772;
      HIWORD(v6) = (unsigned int)"t support!" >> 16;
      logfmt_raw(v41, 0x1000u, v1, v6, "get_power_voltage_calibration_data", &v29);
      V_UNLOCK();
      LOWORD(v7) = 25984;
      HIWORD(v7) = (unsigned int)"x, crc_read = 0x%04x" >> 16;
      zlog(g_zc, v7, 176, "get_power_voltage_calibration_data", 34, 1071, 100, v41);
      v8 = v36;
      v9 = (unsigned __int16)(v38 + (v37 << 8));
      v10 = 138547333LL * (unsigned __int16)(v38 + (v37 << 8));
      WORD2(v10) = (HIDWORD(v10) + ((unsigned int)(v9 - HIDWORD(v10)) >> 1)) >> 4;
      unk_1B3708 = v29;
      unk_1B370C = v30;
      unk_1B3710 = v31;
      unk_1B3714 = v32;
      word_1B3718 = v33;
      dword_1B37C0 = 100 * (WORD2(v10) % 0xCu)
                   + 100
                   + 10000 * ((unsigned __int16)(v38 + (v37 << 8)) / 0x174u)
                   + (unsigned __int16)(v9 - 31 * WORD2(v10))
                   + 1;
      while ( 1 )
      {
        v11 = (char)*++v8;
        v12 = v5 + 1;
        if ( v11 == -128 )
          break;
        ++v5;
        if ( v12 == 14 )
        {
          v13 = 15;
          dword_1B371C = 15;
          v15 = 0.0;
          v16 = 18.2142857;
          v17 = (__int16)(v36[0] + (v35 << 8));
          v18 = v17;
          goto LABEL_16;
        }
      }
      dword_1B371C = v5 + 1;
      v13 = v5 + 1;
      if ( (unsigned int)(v5 - 1) > 0xFE )
      {
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "%s power eeprom list get error!", "get_power_voltage_calibration_data");
        V_UNLOCK();
        LOWORD(v14) = 25984;
        HIWORD(v14) = (unsigned int)"x, crc_read = 0x%04x" >> 16;
        zlog(g_zc, v14, 176, "get_power_voltage_calibration_data", 34, 1095, 100, v41);
        return -1;
      }
      v16 = 255.0 / (double)v5;
      v17 = (__int16)(v36[0] + (v35 << 8));
      v18 = v17;
      v15 = v16 * 0.0;
      round();
LABEL_16:
      v19 = 1783583;
      v20 = 0;
      while ( 1 )
      {
        ++v20;
        *(_BYTE *)++v19 = (unsigned int)v15;
        if ( v20 == v13 )
          break;
        v15 = (double)v20 * v16;
        round();
      }
      sub_C7090();
      v22 = (double *)&unk_1B3778;
      v23 = (double)v18 / 1000.0 + v15;
      dbl_1B3770 = v23;
      do
      {
        v17 += (char)v36[v21 + 1];
        sub_C7090();
        v23 = (double)v17 / 1000.0 + v23;
        *v22++ = v23;
      }
      while ( v21 < v5 );
      return 0;
    }
    else
    {
      V_LOCK();
      LOWORD(v27) = 26760;
      HIWORD(v27) = (unsigned int)" protocal not support!" >> 16;
      logfmt_raw(v41, 0x1000u, v1, v27, "get_power_voltage_calibration_data");
      V_UNLOCK();
      LOWORD(v28) = 25984;
      HIWORD(v28) = (unsigned int)"x, crc_read = 0x%04x" >> 16;
      zlog(g_zc, v28, 176, "get_power_voltage_calibration_data", 34, 1056, 100, v41);
      return -1;
    }
  }
  else
  {
    V_LOCK();
    LOWORD(v24) = 26728;
    HIWORD(v24) = (unsigned int)"%02X" >> 16;
    logfmt_raw(v41, 0x1000u, 0, v24, "get_power_voltage_calibration_data");
    V_UNLOCK();
    LOWORD(v25) = 25984;
    HIWORD(v25) = (unsigned int)"x, crc_read = 0x%04x" >> 16;
    zlog(g_zc, v25, 176, "get_power_voltage_calibration_data", 34, 1035, 100, v41);
    return -1;
  }
}
