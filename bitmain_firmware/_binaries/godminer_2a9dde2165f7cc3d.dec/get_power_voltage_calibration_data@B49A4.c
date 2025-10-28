int __fastcall get_power_voltage_calibration_data(int a1)
{
  bool v1; // cc
  int v2; // r10
  int v3; // r4
  int v4; // r0
  __int64 v5; // r2
  unsigned int v6; // r11
  int v7; // r4
  int v8; // r0
  int v9; // r0
  _BYTE *v10; // lr
  int v11; // r2
  __int64 v12; // r0
  int v13; // t1
  int v14; // r3
  int v15; // r8
  int v16; // r0
  double v17; // d0
  double v18; // d9
  int v19; // r7
  int v20; // s16
  int v21; // r10
  int v22; // r9
  unsigned int v23; // r1
  double *v24; // r8
  double v25; // d0
  int v26; // r0
  int v28; // r0
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
  _BYTE v41[4100]; // [sp+50h] [bp-1004h] BYREF

  v1 = (unsigned int)dword_18D950 > 0x62;
  if ( dword_18D950 != 98 )
    v1 = (unsigned int)(dword_18D950 - 100) > 2;
  v2 = !v1;
  if ( v1 )
  {
    bitmain_power_read(64, (int)v34, 32);
    v3 = (unsigned __int16)(v40 + (v39 << 8));
    v4 = POWER_CRC16(v34, 30);
    if ( v4 == v3 )
    {
      HIDWORD(v5) = bswap32(v34[0]) & 0x1FFFFFF;
      LODWORD(v5) = bswap32(v34[1]);
      v6 = bswap32(v34[2]);
      v31 = v2;
      v32 = v2;
      v33 = v2;
      v7 = v2;
      v29 = v2;
      v30 = v2;
      sub_B31CC((int)&v29, 12, v5);
      v8 = sub_B31CC((int)&v31 + 3, 7, __SPAIR64__(v2, v6));
      V_LOCK(v8);
      v9 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "get_power_voltage_calibration_data",
        34,
        1070,
        100,
        v41);
      v10 = v36;
      v11 = (unsigned __int16)(v38 + (v37 << 8));
      v12 = 138547333LL * (unsigned __int16)(v38 + (v37 << 8));
      WORD2(v12) = (HIDWORD(v12) + ((unsigned int)(v11 - HIDWORD(v12)) >> 1)) >> 4;
      unk_18D960 = v29;
      unk_18D964 = v30;
      unk_18D968 = v31;
      unk_18D96C = v32;
      word_18D970 = v33;
      dword_18DA18 = 100 * (WORD2(v12) % 0xCu)
                   + 100
                   + 10000 * ((unsigned __int16)(v38 + (v37 << 8)) / 0x174u)
                   + (unsigned __int16)(v11 - 31 * WORD2(v12))
                   + 1;
      while ( 1 )
      {
        v13 = (char)*++v10;
        v14 = v7 + 1;
        if ( v13 == -128 )
          break;
        ++v7;
        if ( v14 == 14 )
        {
          v15 = 15;
          dword_18D974 = 15;
          v17 = 0.0;
          v18 = 18.2142857;
          v19 = (__int16)(v36[0] + (v35 << 8));
          v20 = v19;
          goto LABEL_16;
        }
      }
      dword_18D974 = v7 + 1;
      v15 = v7 + 1;
      if ( (unsigned int)(v7 - 1) > 0xFE )
      {
        V_LOCK(v29);
        v16 = logfmt_raw((int)v41, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
          176,
          "get_power_voltage_calibration_data",
          34,
          1094,
          100,
          v41);
        return -1;
      }
      v18 = 255.0 / (double)v7;
      v19 = (__int16)(v36[0] + (v35 << 8));
      v20 = v19;
      v17 = v18 * 0.0;
      round();
LABEL_16:
      v21 = 1628535;
      v22 = 0;
      while ( 1 )
      {
        ++v22;
        *(_BYTE *)++v21 = (unsigned int)v17;
        if ( v22 == v15 )
          break;
        v17 = (double)v22 * v18;
        round();
      }
      sub_B2678();
      v24 = (double *)&unk_18D9D0;
      v25 = (double)v20 / 1000.0 + v17;
      dbl_18D9C8 = v25;
      do
      {
        v19 += (char)v36[v23 + 1];
        sub_B2678();
        v25 = (double)v19 / 1000.0 + v25;
        *v24++ = v25;
      }
      while ( v23 < v7 );
      return 0;
    }
    else
    {
      V_LOCK(v4);
      v28 = logfmt_raw((int)v41, 0x1000u);
      V_UNLOCK(v28);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "get_power_voltage_calibration_data",
        34,
        1055,
        100,
        v41);
      return -1;
    }
  }
  else
  {
    V_LOCK(a1);
    v26 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v26);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "get_power_voltage_calibration_data",
      34,
      1034,
      100,
      v41);
    return -1;
  }
}
