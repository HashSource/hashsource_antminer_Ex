int __fastcall setup_all_chip_dcr(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r0
  int v5; // r7
  _BYTE *v6; // r8
  _BYTE *v7; // r2
  char v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  unsigned __int16 *v16; // r7
  int v17; // r8
  unsigned int v18; // r6
  int v19; // r0
  unsigned __int8 *v20; // r2
  int v21; // r12
  unsigned int v22; // r3
  int v23; // t1
  char *v24; // r6
  int v25; // r0
  unsigned int v26; // r3
  int result; // r0
  int v28; // r0
  int v29; // r2
  int v30; // r6
  int v31; // r6
  void (__fastcall *v32)(int, int *); // r3
  char *v33; // r7
  void (__fastcall *v34)(int, int *); // r3
  char v35; // r10
  char v36; // r0
  int v37; // [sp+4h] [bp-10E0h]
  int v38; // [sp+10h] [bp-10D4h]
  int v39; // [sp+14h] [bp-10D0h]
  int v40; // [sp+18h] [bp-10CCh]
  int v41; // [sp+1Ch] [bp-10C8h]
  const char *v42; // [sp+20h] [bp-10C4h]
  const char *v43; // [sp+24h] [bp-10C0h]
  int v44; // [sp+28h] [bp-10BCh]
  int v45; // [sp+2Ch] [bp-10B8h]
  int v46; // [sp+30h] [bp-10B4h]
  int v47; // [sp+34h] [bp-10B0h]
  int v48; // [sp+38h] [bp-10ACh]
  int v49; // [sp+3Ch] [bp-10A8h]
  const char *v50; // [sp+40h] [bp-10A4h]
  char *s; // [sp+4Ch] [bp-1098h]
  unsigned int v52; // [sp+50h] [bp-1094h]
  unsigned __int16 *ptr; // [sp+54h] [bp-1090h]
  int v54; // [sp+58h] [bp-108Ch]
  int v55; // [sp+6Ch] [bp-1078h] BYREF
  _DWORD v56[4]; // [sp+70h] [bp-1074h] BYREF
  _DWORD v57[8]; // [sp+80h] [bp-1064h] BYREF
  char v58[16]; // [sp+A0h] [bp-1044h] BYREF
  int v59; // [sp+B0h] [bp-1034h]
  int v60; // [sp+B4h] [bp-1030h]
  int v61; // [sp+B8h] [bp-102Ch]
  int v62; // [sp+BCh] [bp-1028h]
  _DWORD v63[8]; // [sp+C0h] [bp-1024h] BYREF
  int v64; // [sp+E0h] [bp-1004h] BYREF
  int v65; // [sp+E4h] [bp-1000h]
  int v66; // [sp+E8h] [bp-FFCh]
  int v67; // [sp+ECh] [bp-FF8h]

  v2 = *(_DWORD *)(a1 + 196);
  V_LOCK(a1);
  v3 = logfmt_raw((int)&v64, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_dcr/backend_dcr.c",
    154,
    "setup_all_chip_dcr",
    18,
    248,
    60,
    &v64);
  v4 = sub_12CDC0(256, (unsigned __int8)v2);
  v5 = v4;
  v6 = *(_BYTE **)(a1 + 296);
  if ( (_BYTE)v2 )
  {
    v7 = v6 - 1;
    v8 = 0;
    do
    {
      *++v7 = v8;
      v8 += v4;
    }
    while ( &v6[(unsigned __int8)v2 - 1] != v7 );
  }
  *v6 = rand();
  *(_DWORD *)(a1 + 240) = v5;
  v9 = (*(int (__fastcall **)(int, _DWORD, int))(a1 + 148))(a1, *(_DWORD *)(a1 + 296), v2);
  V_LOCK(v9);
  v10 = logfmt_raw((int)&v64, 0x1000u);
  V_UNLOCK(v10);
  v11 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_dcr/backend_dcr.c",
          154,
          "setup_all_chip_dcr",
          18,
          263,
          60,
          &v64);
  v52 = *(_DWORD *)(a1 + 196);
  v54 = 3;
  while ( 1 )
  {
    v55 = 0;
    V_LOCK(v11);
    v12 = logfmt_raw((int)&v64, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/chip_setting.c",
      143,
      "ChipSetting_get_addr_DCR",
      24,
      26,
      20,
      &v64);
    v56[2] = 1;
    v56[0] = 0;
    v56[1] = 0;
    v56[3] = 0;
    ptr = (unsigned __int16 *)calloc(12 * v52, 1u);
    v13 = (*(int (__fastcall **)(int, _DWORD *, unsigned int, unsigned __int16 *, int *, int, int, _DWORD, int, int, int, int, const char *, const char *, int, int, int, int, int, int, const char *))(a1 + 176))(
            a1,
            v56,
            v52,
            ptr,
            &v55,
            v37,
            3000,
            0,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
    V_LOCK(v13);
    V_INT((int)v63, "chain");
    v43 = "ChipSetting_get_addr_DCR";
    v44 = v55;
    v42 = "%s detect %d chips";
    v38 = v63[4];
    v39 = v63[5];
    v40 = v63[6];
    v41 = v63[7];
    v14 = logfmt_raw((int)&v64, 0x1000u);
    V_UNLOCK(v14);
    v15 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/backend/chip_setting.c",
            143,
            "ChipSetting_get_addr_DCR",
            24,
            36,
            60,
            &v64);
    if ( v55 <= 0 )
    {
      v24 = 0;
      s = 0;
    }
    else
    {
      v16 = ptr;
      v17 = 0;
      s = 0;
      do
      {
        v18 = *v16;
        V_LOCK(v15);
        v38 = *((unsigned __int8 *)v16 + 4);
        v19 = logfmt_raw((int)&v64, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/chip_setting.c",
          143,
          "ChipSetting_get_addr_DCR",
          24,
          40,
          20,
          &v64);
        v15 = *(_DWORD *)(a1 + 196);
        if ( (unsigned __int16)__rev16(v18) == *(_DWORD *)(a1 + 192) )
          ++s;
        if ( v15 > 0 )
        {
          v20 = *(unsigned __int8 **)(a1 + 296);
          v21 = *((unsigned __int8 *)v16 + 4);
          if ( *v20 == v21 )
          {
            v29 = 1;
            v30 = 0;
LABEL_23:
            *(_DWORD *)(*(_DWORD *)(a1 + 300) + v30) |= v29;
            V_LOCK(v15);
            v28 = logfmt_raw((int)&v64, 0x1000u);
            V_UNLOCK(v28);
            v15 = zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/go"
                    "dminer-origin_master/backend/chip_setting.c",
                    143,
                    "ChipSetting_get_addr_DCR",
                    24,
                    47,
                    20,
                    &v64);
          }
          else
          {
            v22 = 0;
            while ( ++v22 != v15 )
            {
              v23 = *++v20;
              if ( v23 == v21 )
              {
                v30 = 4 * (v22 >> 5);
                v29 = 1 << (v22 & 0x1F);
                goto LABEL_23;
              }
            }
          }
        }
        ++v17;
        v16 += 6;
      }
      while ( v17 < v55 );
      v24 = s;
    }
    if ( (int)s < *(_DWORD *)(a1 + 196) )
    {
      V_LOCK(v15);
      V_INT((int)v58, "chain");
      V_STR((int)v57, "error");
      v50 = "detected asic num less than design";
      v42 = (const char *)v57[0];
      v43 = (const char *)v57[1];
      v44 = v57[2];
      v45 = v57[3];
      v46 = v57[4];
      v47 = v57[5];
      v48 = v57[6];
      v49 = v57[7];
      v38 = v59;
      v39 = v60;
      v40 = v61;
      v41 = v62;
      v25 = logfmt_raw((int)&v64, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_setting.c",
        143,
        "ChipSetting_get_addr_DCR",
        24,
        54,
        100,
        &v64);
    }
    free(ptr);
    *(_DWORD *)(a1 + 236) = v24;
    v11 = usleep(0x2710u);
    v26 = *(_DWORD *)(a1 + 236);
    if ( v52 <= v26 )
      break;
    if ( !--v54 )
      return 3;
  }
  if ( v52 != v26 )
    return 3;
  v66 = 6291456;
  v65 = 0;
  v67 = 0;
  v64 = 48;
  v31 = 0;
  v32 = *(void (__fastcall **)(int, int *))(a1 + 156);
  LOBYTE(v66) = 1;
  v32(a1, &v64);
  v66 = 524289;
  v67 = 255;
  v65 = 0;
  v64 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 160))(a1, &v64);
  usleep((__useconds_t)&stru_18698.st_size);
  chip_setting_ticket_value_dcr(a1, 255);
  chip_setting_misc_dcr(a1);
  v33 = (char *)calloc(1u, 0x118u);
  do
  {
    v34 = *(void (__fastcall **)(int, int *))(a1 + 160);
    v64 = 23130;
    v66 = 131073;
    v65 = 0;
    v67 = (unsigned __int8)v31++;
    v34(a1, &v64);
    usleep((__useconds_t)&stru_13878.st_size);
    usleep(0x4E20u);
    v35 = *(_BYTE *)(a1 + 136);
    v36 = rand();
    memset(v33 + 40, (unsigned __int8)(v35 + v36), 0xB4u);
    push_work_base(a1, v33);
    usleep((__useconds_t)&loc_3D090);
  }
  while ( v31 != 192 );
  free(v33);
  result = *(unsigned __int8 *)(a1 + 268);
  if ( *(_BYTE *)(a1 + 268) )
    return 0;
  *(_DWORD *)(a1 + 272) = (int)*(float *)(a1 + 760);
  return result;
}
