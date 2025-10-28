int __fastcall sub_81524(int a1)
{
  int v2; // r0
  int v3; // r6
  int (__fastcall *v4)(int, _DWORD *); // r3
  int v5; // r0
  int v6; // r8
  int v7; // r2
  int v8; // r5
  int v9; // r5
  int v10; // r0
  int *v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r0
  int v20; // r0
  int v21; // [sp+4h] [bp-10C0h]
  int v22; // [sp+10h] [bp-10B4h]
  int v23; // [sp+14h] [bp-10B0h]
  int v24; // [sp+18h] [bp-10ACh]
  int v25; // [sp+1Ch] [bp-10A8h]
  const char *v26; // [sp+20h] [bp-10A4h]
  int v27; // [sp+24h] [bp-10A0h]
  int v28; // [sp+28h] [bp-109Ch]
  int v29; // [sp+2Ch] [bp-1098h]
  int v30; // [sp+30h] [bp-1094h]
  int v31; // [sp+34h] [bp-1090h]
  int v32; // [sp+3Ch] [bp-1088h]
  int *ptr; // [sp+44h] [bp-1080h]
  int v34; // [sp+48h] [bp-107Ch] BYREF
  int v35; // [sp+4Ch] [bp-1078h]
  _DWORD v36[2]; // [sp+50h] [bp-1074h] BYREF
  int v37; // [sp+58h] [bp-106Ch]
  int v38; // [sp+5Ch] [bp-1068h]
  _DWORD v39[8]; // [sp+60h] [bp-1064h] BYREF
  char v40[16]; // [sp+80h] [bp-1044h] BYREF
  int v41; // [sp+90h] [bp-1034h]
  int v42; // [sp+94h] [bp-1030h]
  int v43; // [sp+98h] [bp-102Ch]
  int v44; // [sp+9Ch] [bp-1028h]
  _DWORD v45[8]; // [sp+A0h] [bp-1024h] BYREF
  _BYTE v46[4100]; // [sp+C0h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)v39, "chain");
  v27 = *(_DWORD *)(a1 + 304);
  v26 = "get pmdata chip_no %d";
  v22 = v39[4];
  v23 = v39[5];
  v24 = v39[6];
  v25 = v39[7];
  v2 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_pmdata_HNS_2130",
    27,
    778,
    20,
    v46);
  v3 = 0;
  v37 = 0;
  v38 = 0;
  v32 = 0;
  v36[1] = 0;
  v4 = *(int (__fastcall **)(int, _DWORD *))(a1 + 244);
  while ( 1 )
  {
    if ( v3 == 3 )
      goto LABEL_12;
    LOBYTE(v37) = 1;
    HIWORD(v37) = 255;
    v36[0] = (16 * v3) | 1;
    LOBYTE(v38) = -1;
    v5 = v4(a1, v36);
    if ( v5 < 0 )
      break;
    v6 = 0;
    usleep(0x4E20u);
    v7 = *(_DWORD *)(a1 + 304);
    v8 = *(_DWORD *)(a1 + 308);
    v37 = 327681;
    v9 = v8 * v7;
    LOBYTE(v38) = 0;
    ptr = (int *)calloc(12 * v9, 1u);
    v10 = (*(int (__fastcall **)(int, _DWORD *, int, int *, int *, int, int, _DWORD, int, int, int, int, const char *, int, int, int, int, int))(a1 + 268))(
            a1,
            v36,
            v9,
            ptr,
            &v34,
            v21,
            2000,
            0,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
    if ( v34 > 0 )
    {
      v11 = ptr;
      do
      {
        v16 = *v11;
        v17 = *((unsigned __int16 *)v11 + 3);
        HIBYTE(v35) = *v11;
        BYTE2(v35) = BYTE1(v16);
        BYTE1(v35) = BYTE2(v16);
        LOBYTE(v35) = HIBYTE(v16);
        if ( v17 == 5 )
        {
          V_LOCK(v10);
          ++v32;
          V_INT((int)v40, "chain");
          v29 = v3;
          v26 = "[PM data] chip %02x, reg %02x mode %d PMDATA %08x";
          v30 = v35;
          v27 = *((unsigned __int8 *)v11 + 4);
          v28 = *((unsigned __int16 *)v11 + 3);
          v22 = v41;
          v23 = v42;
          v24 = v43;
          v25 = v44;
          v18 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v18);
          v13 = g_zc;
          v14 = 40;
          v15 = 810;
        }
        else
        {
          V_LOCK(v10);
          V_INT((int)v45, "chain");
          v26 = "[PM data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x";
          v30 = v3;
          v31 = v35;
          v28 = 5;
          v29 = *((unsigned __int16 *)v11 + 3);
          v27 = *((unsigned __int8 *)v11 + 4);
          v22 = v45[4];
          v23 = v45[5];
          v24 = v45[6];
          v25 = v45[7];
          v12 = logfmt_raw((int)v46, 0x1000u);
          V_UNLOCK(v12);
          v13 = g_zc;
          v14 = 100;
          v15 = 813;
        }
        ++v6;
        v11 += 3;
        v10 = zlog(
                v13,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/chip_setting.c",
                153,
                "ChipSetting_pmdata_HNS_2130",
                27,
                v15,
                v14,
                v46);
      }
      while ( v34 > v6 );
    }
    if ( v3 == 6 )
    {
      free(ptr);
      return v32;
    }
    v4 = *(int (__fastcall **)(int, _DWORD *))(a1 + 244);
LABEL_12:
    ++v3;
  }
  V_LOCK(v5);
  v20 = logfmt_raw((int)v46, 0x1000u);
  V_UNLOCK(v20);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/chip_setting.c",
    153,
    "ChipSetting_pmdata_HNS_2130",
    27,
    791,
    100,
    v46);
  return -1;
}
