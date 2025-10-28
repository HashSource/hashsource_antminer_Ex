int __fastcall sub_6B820(int a1, int a2)
{
  float v2; // s0
  __int16 v3; // r3
  unsigned int v4; // r6
  int v5; // r7
  float v6; // s11
  int v7; // r10
  int v8; // r8
  int v9; // r9
  int v10; // r5
  float v11; // s6
  float v12; // s15
  int v13; // r3
  int v14; // r0
  int v15; // r1
  float v16; // s16
  float v17; // s17
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v25; // [sp+4Ch] [bp-34h]
  _DWORD v26[2]; // [sp+50h] [bp-30h] BYREF
  int v27; // [sp+58h] [bp-28h]
  int v28; // [sp+5Ch] [bp-24h]
  _BYTE v29[16]; // [sp+60h] [bp-20h] BYREF
  _BYTE v30[4100]; // [sp+80h] [bp+0h] BYREF

  v3 = 0;
  v27 = 0;
  v26[1] = 0;
  v28 = 0;
  v26[0] = 0;
  if ( !a2 )
    v3 = 8;
  LOBYTE(v27) = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(v27) = 12;
  }
  else
  {
    HIWORD(v27) = v3;
  }
  v4 = -1068236443;
  v5 = 2;
  v25 = 2;
LABEL_8:
  v6 = (float)v5;
  v7 = 0;
  v8 = 0;
LABEL_9:
  v9 = v8 + 1;
  v10 = v8;
  v11 = (float)(v8 + 1);
  while ( 1 )
  {
    v12 = (float)(v10 + 1);
    v13 = (int)(float)((float)((float)((float)((float)(v2 * v11) * v12) * v6) / 25.0) * 100.0);
    v14 = v13 >> 31;
    v15 = v13 / 100;
    if ( v13 % 100 > 50 )
      ++v15;
    if ( (unsigned int)(v15 - 16) <= 0xEA )
    {
      v16 = (float)((float)v15 * 25.0) / v6;
      if ( (v5 != 1 || v16 <= 3125.0) && v16 <= 3200.0 && v16 >= 2000.0 )
      {
        v4 = v10 & 7 | (v5 << 8) | 0xC0000000 | v7 | (v15 << 16) | ((v16 > 2400.0) << 28);
        v17 = (float)(v16 / v11) / v12;
        if ( fabsf(v17 - v2) < 3.0 )
          break;
      }
    }
    if ( v10-- == 0 )
    {
      v7 += 16;
      ++v8;
      if ( v9 != 8 )
        goto LABEL_9;
      v5 = 1;
      if ( v25 == 1 )
      {
        v26[0] = v4;
        V_LOCK(v14);
        V_INT((int)v29, "chain");
        v19 = logfmt_raw((int)v30, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/chip_setting.c",
          153,
          "ChipSetting_freq_DCR_1727",
          25,
          638,
          40,
          v30);
        goto LABEL_24;
      }
      v25 = 1;
      goto LABEL_8;
    }
  }
  V_LOCK(v14);
  v20 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v20);
  v21 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/chip_setting.c",
          153,
          "inferred_plldivider",
          19,
          538,
          20,
          v30);
  v26[0] = v4;
  V_LOCK(v21);
  V_INT((int)v29, "chain");
  v22 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_freq_DCR_1727",
    25,
    638,
    40,
    v30);
  if ( v17 > 0.0 )
    v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v26);
  else
    v10 = -1;
LABEL_24:
  usleep(0x2710u);
  return v10;
}
