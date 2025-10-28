int __fastcall sub_844C4(int a1, int a2, char a3, __int16 a4)
{
  float v4; // s0
  int v5; // r8
  int v6; // r2
  float v7; // s18
  int v8; // r11
  unsigned int v9; // r10
  int v10; // r5
  int v11; // r3
  int v12; // r0
  int v13; // r6
  float v14; // s16
  int v15; // r0
  int v16; // r0
  float v17; // s26
  int v18; // r3
  int v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v27; // [sp+44h] [bp-1038h]
  _DWORD v28[2]; // [sp+48h] [bp-1034h] BYREF
  int v29; // [sp+50h] [bp-102Ch]
  int v30; // [sp+54h] [bp-1028h]
  _BYTE v31[16]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v32[4100]; // [sp+78h] [bp-1004h] BYREF

  v29 = 0;
  BYTE1(v29) = a4;
  if ( !a2 )
    a4 = 8;
  v28[1] = 0;
  LOBYTE(v29) = a3;
  v30 = 0;
  v28[0] = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v29) = 12;
  }
  else
  {
    HIWORD(v29) = a4;
  }
  v5 = 2;
  v6 = -1068236443;
  v27 = 2;
LABEL_8:
  v7 = (float)v5;
  v8 = 0;
LABEL_9:
  v10 = v8;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)v10 * (float)((float)v8 * v4)) * v7) / 25.0) * 100.0);
    v12 = 1374389535 * v11;
    v13 = v11 / 100;
    if ( v11 % 100 > 50 )
      ++v13;
    if ( (unsigned int)(v13 - 16) <= 0xEA )
    {
      v14 = (float)((float)v13 * 25.0) / v7;
      if ( (v5 != 1 || v14 <= 3125.0) && v14 <= 3200.0 )
      {
        v12 = 25 * v13;
        if ( v14 >= 2000.0 )
        {
          v15 = sub_12E050(v12, v5);
          v16 = sub_12E050(v15, v8);
          v12 = sub_12E050(v16, v10);
          v17 = (float)v12;
          v18 = v14 > 2400.0;
          v9 = (v5 << 8) | 0xC0000000 | (16 * v8);
          v6 = v10 & 7 | v9 | (v13 << 16) | (v18 << 28);
          if ( fabsf((float)v12 - v4) < 3.0 )
            break;
        }
      }
    }
    if ( v10-- == 0 )
    {
      if ( ++v8 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v27 == 1 )
      {
        v28[0] = v6;
        V_LOCK(v12);
        V_INT((int)v31, "chain");
        v20 = logfmt_raw((int)v32, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/chip_setting.c",
          153,
          "ChipSetting_freq_kas_KAS_2380",
          29,
          615,
          40,
          v32);
        goto LABEL_24;
      }
      v27 = 1;
      goto LABEL_8;
    }
  }
  v21 = v10 & 7 | v9 | (v13 << 16) | (v18 << 28);
  V_LOCK(v12);
  v22 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/chip_setting.c",
          153,
          "inferred_plldivider_kas",
          23,
          588,
          20,
          v32);
  v28[0] = v21;
  V_LOCK(v23);
  V_INT((int)v31, "chain");
  v24 = logfmt_raw((int)v32, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_freq_kas_KAS_2380",
    29,
    615,
    40,
    v32);
  if ( v17 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v28);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
