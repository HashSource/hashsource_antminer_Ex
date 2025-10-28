int __fastcall sub_7D8A0(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  int v4; // r12
  int v5; // r6
  float v6; // s19
  int v7; // r10
  int v8; // r11
  int v9; // r8
  int v10; // r5
  int v11; // r2
  int v12; // r0
  int v13; // r4
  float v14; // s17
  int v15; // r0
  int v16; // r0
  float v17; // s16
  int v18; // r2
  int v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned int v26; // [sp+38h] [bp-104Ch]
  int v28; // [sp+4Ch] [bp-1038h]
  _DWORD v29[2]; // [sp+50h] [bp-1034h] BYREF
  int v30; // [sp+58h] [bp-102Ch]
  int v31; // [sp+5Ch] [bp-1028h]
  _BYTE v32[16]; // [sp+60h] [bp-1024h] BYREF
  _BYTE v33[4100]; // [sp+80h] [bp-1004h] BYREF

  v3 = 0;
  v30 = 0;
  v29[1] = 0;
  v31 = 0;
  v29[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v30) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v30) = 12;
  }
  else
  {
    HIWORD(v30) = v3;
  }
  v4 = -1068236443;
  v5 = 2;
  v28 = 2;
LABEL_8:
  v6 = (float)v5;
  v7 = 0;
  v8 = 0;
LABEL_9:
  v9 = v8 + 1;
  v10 = v8;
  v26 = (v5 << 8) | 0xC0000000 | v7;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)(v10 + 1) * (float)((float)(v8 + 1) * v2)) * v6) / 25.0) * 100.0);
    v12 = 1374389535 * v11;
    v13 = v11 / 100;
    if ( v11 % 100 > 50 )
      ++v13;
    if ( (unsigned int)(v13 - 16) <= 0xEA )
    {
      v14 = (float)((float)v13 * 25.0) / v6;
      if ( (v5 != 1 || v14 <= 3125.0) && v14 <= 3200.0 )
      {
        v12 = 25 * v13;
        if ( v14 >= 2000.0 )
        {
          v15 = sub_121A48(v12, v5);
          v16 = sub_121A48(v15, v8 + 1);
          v12 = sub_121A48(v16, v10 + 1);
          v17 = (float)v12;
          v18 = v14 > 2400.0;
          v4 = v10 & 7 | v26 | (v13 << 16) | (v18 << 28);
          if ( fabsf((float)v12 - v2) < 3.0 )
            break;
        }
      }
    }
    if ( v10-- == 0 )
    {
      v7 += 16;
      ++v8;
      if ( v9 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v28 == 1 )
      {
        v29[0] = v4;
        V_LOCK(v12);
        V_INT((int)v32, "chain");
        v20 = logfmt_raw((int)v33, 0x1000u);
        V_UNLOCK(v20);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/chip_setting.c",
          149,
          "ChipSetting_freq_KDA_2110",
          25,
          533,
          40,
          v33);
        goto LABEL_24;
      }
      v28 = 1;
      goto LABEL_8;
    }
  }
  v21 = v10 & 7 | v26 | (v13 << 16) | (v18 << 28);
  V_LOCK(v12);
  v22 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v22);
  v23 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/chip_setting.c",
          149,
          "inferred_plldivider",
          19,
          506,
          20,
          v33);
  v29[0] = v21;
  V_LOCK(v23);
  V_INT((int)v32, "chain");
  v24 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v24);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_freq_KDA_2110",
    25,
    533,
    40,
    v33);
  if ( v17 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 228))(a1, v29);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
