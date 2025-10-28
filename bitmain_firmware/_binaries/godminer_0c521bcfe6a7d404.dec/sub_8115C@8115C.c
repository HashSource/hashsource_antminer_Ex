int __fastcall sub_8115C(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r9
  int v8; // r0
  int *v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r12
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r0
  int v18; // r0
  int v19; // [sp+4h] [bp-10E0h]
  int v20; // [sp+10h] [bp-10D4h]
  int v21; // [sp+14h] [bp-10D0h]
  int v22; // [sp+18h] [bp-10CCh]
  int v23; // [sp+1Ch] [bp-10C8h]
  int v24; // [sp+24h] [bp-10C0h]
  int v25; // [sp+3Ch] [bp-10A8h]
  int *ptr; // [sp+44h] [bp-10A0h]
  int v27; // [sp+4Ch] [bp-1098h] BYREF
  _DWORD v28[2]; // [sp+50h] [bp-1094h] BYREF
  int v29; // [sp+58h] [bp-108Ch]
  int v30; // [sp+5Ch] [bp-1088h]
  char v31[16]; // [sp+60h] [bp-1084h] BYREF
  int v32; // [sp+70h] [bp-1074h]
  int v33; // [sp+74h] [bp-1070h]
  int v34; // [sp+78h] [bp-106Ch]
  int v35; // [sp+7Ch] [bp-1068h]
  _BYTE v36[32]; // [sp+80h] [bp-1064h] BYREF
  char v37[32]; // [sp+A0h] [bp-1044h] BYREF
  int v38; // [sp+C0h] [bp-1024h] BYREF
  _BYTE v39[4100]; // [sp+E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v31, "chain");
  v24 = *(_DWORD *)(a1 + 304);
  v2 = 0;
  v20 = v32;
  v21 = v33;
  v22 = v34;
  v23 = v35;
  v3 = logfmt_raw((int)v39, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_hash_clock_count_HNS_2130",
    37,
    830,
    20,
    v39);
  v29 = 393217;
  v28[1] = 0;
  v28[0] = 1;
  v30 = 255;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 244))(a1, v28);
  if ( v4 < 0 )
  {
    V_LOCK(v4);
    v25 = -1;
    V_INT((int)v36, "chain");
    v18 = logfmt_raw((int)v39, 0x1000u);
    V_UNLOCK(v18);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/chip_setting.c",
      153,
      "ChipSetting_hash_clock_count_HNS_2130",
      37,
      839,
      100,
      v39);
  }
  else
  {
    usleep(0x4E20u);
    v5 = *(_DWORD *)(a1 + 304);
    v6 = *(_DWORD *)(a1 + 308);
    v29 = 458753;
    v7 = v6 * v5;
    LOBYTE(v30) = 0;
    ptr = (int *)calloc(12 * v6 * v5, 1u);
    v8 = (*(int (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, int))(a1 + 268))(
           a1,
           v28,
           v7,
           ptr,
           &v27,
           v19,
           2000,
           0,
           v20,
           v21,
           v22,
           v23,
           "get hash clock count chip_no %d",
           v24);
    v25 = 0;
    if ( v27 > 0 )
    {
      v9 = ptr;
      do
      {
        v14 = *v9;
        v15 = *((unsigned __int16 *)v9 + 3);
        v36[3] = *v9;
        v36[2] = BYTE1(v14);
        v36[1] = BYTE2(v14);
        v36[0] = HIBYTE(v14);
        if ( v15 == 7 )
        {
          V_LOCK(v8);
          ++v25;
          V_INT((int)v37, "chain");
          v16 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v16);
          v11 = g_zc;
          v12 = 40;
          v13 = 858;
        }
        else
        {
          V_LOCK(v8);
          V_INT((int)&v38, "chain");
          v10 = logfmt_raw((int)v39, 0x1000u);
          V_UNLOCK(v10);
          v11 = g_zc;
          v12 = 100;
          v13 = 861;
        }
        ++v2;
        v9 += 3;
        v8 = zlog(
               v11,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/backend/chip_setting.c",
               153,
               "ChipSetting_hash_clock_count_HNS_2130",
               37,
               v13,
               v12,
               v39);
      }
      while ( v27 > v2 );
    }
    free(ptr);
  }
  return v25;
}
