int get_power_voltage_calibration_data()
{
  double v0; // d0
  __int64 v2; // r0
  _BYTE v4[68]; // [sp+10h] [bp-1084h] BYREF
  int v5; // [sp+1010h] [bp-84h] BYREF
  int v6; // [sp+1014h] [bp-80h]
  int v7; // [sp+1018h] [bp-7Ch] BYREF
  int v8; // [sp+101Ch] [bp-78h]
  __int16 v9; // [sp+1020h] [bp-74h]
  unsigned int v10; // [sp+1024h] [bp-70h]
  __int64 dest; // [sp+1028h] [bp-6Ch] BYREF
  uint8_t src[8]; // [sp+1034h] [bp-60h] BYREF
  unsigned int v13; // [sp+103Ch] [bp-58h]
  unsigned __int8 v14; // [sp+1040h] [bp-54h]
  unsigned __int8 v15; // [sp+1041h] [bp-53h]
  _BYTE v16[18]; // [sp+1042h] [bp-52h] BYREF
  double *v17; // [sp+1054h] [bp-40h]
  _BYTE *v18; // [sp+1058h] [bp-3Ch]
  unsigned int v19; // [sp+105Ch] [bp-38h]
  unsigned int v20; // [sp+1060h] [bp-34h]
  unsigned int v21; // [sp+1064h] [bp-30h]
  unsigned __int16 v22; // [sp+106Ah] [bp-2Ah]
  unsigned int v23; // [sp+106Ch] [bp-28h]
  unsigned int i; // [sp+1070h] [bp-24h]
  int v25; // [sp+1074h] [bp-20h]
  unsigned int j; // [sp+1078h] [bp-1Ch]
  unsigned __int16 v27; // [sp+107Ch] [bp-18h]
  uint16_t v28; // [sp+107Eh] [bp-16h]
  __int64 v29; // [sp+1080h] [bp-14h]

  if ( is_power_protocal_v2() )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "%s power protocal not support!", "get_power_voltage_calibration_data");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      173,
      "get_power_voltage_calibration_data",
      34,
      1044,
      100,
      v4);
    return -1;
  }
  else
  {
    bitmain_power_read(0x40u, (int)src, 0x20u);
    v27 = (v16[16] << 8) + v16[17];
    v28 = CRC16(src, 0x1Eu);
    if ( v27 == v28 )
    {
      memcpy(&dest, src, sizeof(dest));
      v10 = v13;
      LODWORD(v2) = sub_20D888(dest, HIDWORD(dest));
      dest = v2;
      v10 = sub_20D860(v10);
      v29 = dest & 0x1FFFFFFFFFFFFFFLL;
      v23 = v10;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      sub_2111DC((int)&v5, 0xCu, dest & 0x1FFFFFFFFFFFFFFLL, 0x24u);
      sub_2111DC((int)&v7 + 3, 7u, v23, 0x24u);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "%s SN:%s", "get_power_voltage_calibration_data", &v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "get_power_voltage_calibration_data",
        34,
        1080,
        100,
        v4);
      dword_C25FD0[0] = v5;
      dword_C25FD0[1] = v6;
      dword_C25FD0[2] = v7;
      dword_C25FD0[3] = v8;
      word_C25FE0 = v9;
      v22 = (v16[14] << 8) + v16[15];
      v21 = v22 / 0x174u;
      v20 = v22 / 0x1Fu % 0xC + 1;
      v19 = v22 % 0x1Fu + 1;
      dword_C26088 = 10000 * v21 + 100 * v20 + v19;
      v18 = v16;
      for ( i = 0; i <= 0xD && (char)v18[i] != -128; ++i )
        ;
      v17 = (double *)dword_C25FD0;
      dword_C25FE4 = i + 1;
      v25 = (__int16)((v14 << 8) + v15);
      if ( (unsigned __int8)sub_211370((int)&byte_C25FE8, i + 1) != 1 )
      {
        V_LOCK();
        logfmt_raw(v4, 0x1000u, 0, "%s power eeprom list get error!", "get_power_voltage_calibration_data");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
          173,
          "get_power_voltage_calibration_data",
          34,
          1104,
          100,
          v4);
        return -1;
      }
      else
      {
        sub_211440();
        v17[13] = v0 + (double)v25 / 1000.0;
        for ( j = 0; j < i; ++j )
        {
          v25 += (char)v18[j];
          sub_211440();
          v17[j + 14] = v0 + (double)v25 / 1000.0;
        }
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "%s error!", "get_power_voltage_calibration_data");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        173,
        "get_power_voltage_calibration_data",
        34,
        1065,
        100,
        v4);
      return -1;
    }
  }
}
