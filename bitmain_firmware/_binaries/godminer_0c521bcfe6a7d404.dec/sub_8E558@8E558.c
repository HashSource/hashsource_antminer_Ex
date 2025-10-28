int __fastcall sub_8E558(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r2
  int v7; // r7
  int v8; // r7
  int v9; // r0
  int v10; // r8
  int *v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r0
  int v20; // r0
  int v21; // [sp+4h] [bp-10E0h]
  int v22; // [sp+10h] [bp-10D4h]
  int v23; // [sp+14h] [bp-10D0h]
  int v24; // [sp+18h] [bp-10CCh]
  int v25; // [sp+1Ch] [bp-10C8h]
  int v26; // [sp+24h] [bp-10C0h]
  int v27; // [sp+28h] [bp-10BCh]
  int v28; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v30; // [sp+4Ch] [bp-1098h] BYREF
  _DWORD v31[3]; // [sp+50h] [bp-1094h] BYREF
  int v32; // [sp+5Ch] [bp-1088h]
  char v33[16]; // [sp+60h] [bp-1084h] BYREF
  int v34; // [sp+70h] [bp-1074h]
  int v35; // [sp+74h] [bp-1070h]
  int v36; // [sp+78h] [bp-106Ch]
  int v37; // [sp+7Ch] [bp-1068h]
  _BYTE v38[32]; // [sp+80h] [bp-1064h] BYREF
  char v39[32]; // [sp+A0h] [bp-1044h] BYREF
  int v40; // [sp+C0h] [bp-1024h] BYREF
  _BYTE v41[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v33, "chain");
  v26 = *(_DWORD *)(a1 + 304);
  v27 = a2;
  v22 = v34;
  v23 = v35;
  v24 = v36;
  v25 = v37;
  v4 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/./backend/chip_setting.c",
    155,
    "ChipSetting_clock_delay_LTC_1489",
    32,
    735,
    40,
    v41);
  v31[2] = 16711681;
  v31[1] = 0;
  v32 = 255;
  v31[0] = a2;
  v5 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 244))(a1, v31);
  if ( v5 < 0 )
  {
    V_LOCK(v5);
    v28 = -1;
    V_INT((int)v38, "chain");
    v20 = logfmt_raw((int)v41, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/./backend/chip_setting.c",
      155,
      "ChipSetting_clock_delay_LTC_1489",
      32,
      744,
      100,
      v41);
  }
  else
  {
    usleep((__useconds_t)&stru_1869C.st_value);
    v6 = *(_DWORD *)(a1 + 304);
    v7 = *(_DWORD *)(a1 + 308);
    LOBYTE(v32) = 0;
    v8 = v7 * v6;
    ptr = (int *)calloc(12 * v8, 1u);
    v9 = (*(int (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int))(a1 + 268))(
           a1,
           v31,
           v8,
           ptr,
           &v30,
           v21,
           2000,
           0,
           v22,
           v23,
           v24,
           v25,
           "set clock delay chip_no %d, value %08x",
           v26,
           v27);
    if ( v30 > 0 )
    {
      v10 = 0;
      v28 = 0;
      v11 = ptr;
      do
      {
        v16 = *v11;
        v17 = *((unsigned __int16 *)v11 + 3);
        v38[3] = *v11;
        v38[2] = BYTE1(v16);
        v38[1] = BYTE2(v16);
        v38[0] = HIBYTE(v16);
        if ( v17 == 255 )
        {
          V_LOCK(v9);
          ++v28;
          V_INT((int)v39, "chain");
          v18 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v18);
          v13 = g_zc;
          v14 = 20;
          v15 = 760;
        }
        else
        {
          V_LOCK(v9);
          V_INT((int)&v40, "chain");
          v12 = logfmt_raw((int)v41, 0x1000u);
          V_UNLOCK(v12);
          v13 = g_zc;
          v14 = 100;
          v15 = 763;
        }
        ++v10;
        v11 += 3;
        v9 = zlog(
               v13,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/./backend/chip_setting.c",
               155,
               "ChipSetting_clock_delay_LTC_1489",
               32,
               v15,
               v14,
               v41);
      }
      while ( v30 > v10 );
    }
    else
    {
      v28 = 0;
    }
    free(ptr);
  }
  return v28;
}
