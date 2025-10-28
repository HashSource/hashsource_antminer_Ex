int __fastcall sub_F517C(int a1, __int16 a2, __int16 a3, char a4, _BYTE *a5)
{
  int v5; // r3
  unsigned int v6; // r0
  int v7; // r5
  int v8; // r6
  unsigned int v9; // r0
  int v10; // r5
  int v11; // r6
  unsigned int v12; // r0
  int v13; // r5
  int v14; // r6
  unsigned int v15; // r0
  int v17; // [sp+4h] [bp-1140h]
  _BYTE v21[64]; // [sp+44h] [bp-1100h] BYREF
  int v22; // [sp+1044h] [bp-100h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-FCh] BYREF
  _DWORD v24[7]; // [sp+1058h] [bp-ECh] BYREF
  int v25; // [sp+1074h] [bp-D0h]
  _DWORD v26[7]; // [sp+1078h] [bp-CCh] BYREF
  int v27; // [sp+1094h] [bp-B0h]
  _DWORD v28[7]; // [sp+1098h] [bp-ACh] BYREF
  int v29; // [sp+10B4h] [bp-90h]
  _DWORD v30[7]; // [sp+10B8h] [bp-8Ch] BYREF
  int v31; // [sp+10D4h] [bp-70h]
  _DWORD v32[7]; // [sp+10D8h] [bp-6Ch] BYREF
  int v33; // [sp+10F4h] [bp-50h]
  _DWORD v34[7]; // [sp+10F8h] [bp-4Ch] BYREF
  int v35; // [sp+1114h] [bp-30h]
  int v36; // [sp+1118h] [bp-2Ch]
  int v37; // [sp+111Ch] [bp-28h]
  int i; // [sp+1120h] [bp-24h]
  int v39; // [sp+1124h] [bp-20h]
  int v40; // [sp+1128h] [bp-1Ch]
  _DWORD *v41; // [sp+112Ch] [bp-18h]

  v39 = 0;
  v40 = *(_DWORD *)(a1 + 464);
  if ( a2 == 255 )
    v40 = -*(_DWORD *)(a1 + 464);
  V_LOCK();
  sub_EC020((int)v24, *(int *)(a1 + 272));
  logfmt_raw(
    v21,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s core_num %d",
    "ChipSetting_check_2282_dag_reg_DCR_1727",
    v40);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_check_2282_dag_reg_DCR_1727",
    39,
    1547,
    20,
    v21);
  memset(s, 0, sizeof(s));
  s[4] = 1;
  v41 = malloc(12 * v40);
  s[5] = a3;
  LOBYTE(s[6]) = 0;
  if ( a4 == 1 )
    HIBYTE(s[6]) = 71;
  memset(a5, 0, 0x450u);
  v22 = 0;
  v37 = (*(int (__fastcall **)(int, _WORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 336))(
          a1,
          s,
          v40,
          v41,
          &v22,
          v17,
          9000,
          0);
  if ( !v37 && v40 == v22 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = v40;
      if ( i >= v40 )
        break;
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          if ( (sub_EC404(v41[3 * i]) & 1) != 1 )
          {
            V_LOCK();
            sub_EC020((int)v34, *(int *)(a1 + 272));
            v13 = LOBYTE(v41[3 * i + 1]);
            v14 = LOBYTE(v41[3 * i + 2]);
            v15 = sub_EC404(v41[3 * i]);
            logfmt_raw(
              v21,
              0x1000u,
              0,
              v35,
              v34[0],
              v34[1],
              v34[2],
              v34[3],
              v34[4],
              v34[5],
              v34[6],
              v35,
              "check dag failed for chip-%d core-%d: %08x",
              v13,
              v14,
              v15);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/chip_setting.c",
              150,
              "ChipSetting_check_2282_dag_reg_DCR_1727",
              39,
              1588,
              40,
              v21);
            return v5;
          }
          V_LOCK();
          sub_EC020((int)v32, *(int *)(a1 + 272));
          logfmt_raw(
            v21,
            0x1000u,
            0,
            v33,
            v32[0],
            v32[1],
            v32[2],
            v32[3],
            v32[4],
            v32[5],
            v32[6],
            v33,
            "check dag for chip-%d core-%d: succeed",
            LOBYTE(v41[3 * i + 1]),
            LOBYTE(v41[3 * i + 2]));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_check_2282_dag_reg_DCR_1727",
            39,
            1582,
            20,
            v21);
          if ( i == v40 - 1 )
          {
            *a5 = 1;
            return v37;
          }
        }
      }
      else
      {
        v36 = 2;
        v6 = sub_EC404(v41[3 * i]);
        if ( (v36 & v6) >> 1 != 1 )
        {
          V_LOCK();
          sub_EC020((int)v30, *(int *)(a1 + 272));
          v10 = LOBYTE(v41[3 * i + 1]);
          v11 = LOBYTE(v41[3 * i + 2]);
          v12 = sub_EC404(v41[3 * i]);
          logfmt_raw(
            v21,
            0x1000u,
            0,
            v31,
            v30[0],
            v30[1],
            v30[2],
            v30[3],
            v30[4],
            v30[5],
            v30[6],
            v31,
            "check cache failed for chip-%d core-%d: %08x",
            v10,
            v11,
            v12);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_check_2282_dag_reg_DCR_1727",
            39,
            1576,
            40,
            v21);
          return v5;
        }
        V_LOCK();
        sub_EC020((int)v28, *(int *)(a1 + 272));
        v7 = LOBYTE(v41[3 * i + 1]);
        v8 = LOBYTE(v41[3 * i + 2]);
        v9 = sub_EC404(v41[3 * i]);
        logfmt_raw(
          v21,
          0x1000u,
          0,
          v29,
          v28[0],
          v28[1],
          v28[2],
          v28[3],
          v28[4],
          v28[5],
          v28[6],
          v29,
          "check cache succeed for chip-%d core-%d: %08x",
          v7,
          v8,
          v9);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_check_2282_dag_reg_DCR_1727",
          39,
          1570,
          20,
          v21);
        if ( i == v40 - 1 )
        {
          *a5 = 1;
          return v37;
        }
      }
    }
  }
  else
  {
    V_LOCK();
    sub_EC020((int)v26, *(int *)(a1 + 272));
    logfmt_raw(
      v21,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "check_2282_core_reg read failed for resp_num: %d",
      v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_check_2282_dag_reg_DCR_1727",
      39,
      1562,
      40,
      v21);
    return v37;
  }
  return v5;
}
