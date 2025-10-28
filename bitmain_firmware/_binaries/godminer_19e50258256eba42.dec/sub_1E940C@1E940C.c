int __fastcall sub_1E940C(int a1, char a2, __int16 a3, __int16 a4, char a5, _BYTE *a6)
{
  int v6; // r3
  unsigned int v7; // r0
  int v8; // r5
  int v9; // r6
  unsigned int v10; // r0
  int v11; // r5
  int v12; // r6
  unsigned int v13; // r0
  int v14; // r5
  int v15; // r6
  unsigned int v16; // r0
  int v18; // [sp+4h] [bp-1140h]
  _BYTE v22[64]; // [sp+44h] [bp-1100h] BYREF
  int v23; // [sp+1044h] [bp-100h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-FCh] BYREF
  _DWORD v25[7]; // [sp+1058h] [bp-ECh] BYREF
  int v26; // [sp+1074h] [bp-D0h]
  _DWORD v27[7]; // [sp+1078h] [bp-CCh] BYREF
  int v28; // [sp+1094h] [bp-B0h]
  _DWORD v29[7]; // [sp+1098h] [bp-ACh] BYREF
  int v30; // [sp+10B4h] [bp-90h]
  _DWORD v31[7]; // [sp+10B8h] [bp-8Ch] BYREF
  int v32; // [sp+10D4h] [bp-70h]
  _DWORD v33[7]; // [sp+10D8h] [bp-6Ch] BYREF
  int v34; // [sp+10F4h] [bp-50h]
  _DWORD v35[7]; // [sp+10F8h] [bp-4Ch] BYREF
  int v36; // [sp+1114h] [bp-30h]
  int v37; // [sp+111Ch] [bp-28h]
  int v38; // [sp+1120h] [bp-24h]
  int i; // [sp+1124h] [bp-20h]
  int v40; // [sp+1128h] [bp-1Ch]
  void *ptr; // [sp+112Ch] [bp-18h]

  v40 = 1;
  if ( a3 == 255 )
    v40 = -1;
  V_LOCK();
  sub_1E0BC0((int)v25, *(int *)(a1 + 272));
  logfmt_raw(
    v22,
    0x1000u,
    0,
    v26,
    v25[0],
    v25[1],
    v25[2],
    v25[3],
    v25[4],
    v25[5],
    v25[6],
    v26,
    "%s core_num %d",
    "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
    v40);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
    51,
    1490,
    20,
    v22);
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = 0;
  HIBYTE(s[4]) = a2;
  ptr = malloc(12 * v40);
  s[5] = a4;
  LOBYTE(s[6]) = 0;
  if ( a5 == 1 )
    HIBYTE(s[6]) = 71;
  memset(a6, 0, 0x48u);
  v23 = 0;
  v38 = (*(int (__fastcall **)(int, _WORD *, int, void *, int *, int, int, _DWORD))(a1 + 336))(
          a1,
          s,
          v40,
          ptr,
          &v23,
          v18,
          9000,
          0);
  if ( !v38 && v40 == v23 )
  {
    for ( i = 0; i < v40; ++i )
    {
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          if ( (sub_1E0FA4(*((_DWORD *)ptr + 3 * i)) & 1) == 1 )
          {
            V_LOCK();
            sub_1E0BC0((int)v33, *(int *)(a1 + 272));
            logfmt_raw(
              v22,
              0x1000u,
              0,
              v34,
              v33[0],
              v33[1],
              v33[2],
              v33[3],
              v33[4],
              v33[5],
              v33[6],
              v34,
              "check dag for chip-%d core-%d: succeed",
              *((unsigned __int8 *)ptr + 12 * i + 4),
              *((unsigned __int8 *)ptr + 12 * i + 8));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/chip_setting.c",
              150,
              "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
              51,
              1525,
              20,
              v22);
            if ( i == v40 - 1 )
            {
              *a6 = 1;
              return v38;
            }
          }
          else
          {
            V_LOCK();
            sub_1E0BC0((int)v35, *(int *)(a1 + 272));
            v14 = *((unsigned __int8 *)ptr + 12 * i + 4);
            v15 = *((unsigned __int8 *)ptr + 12 * i + 8);
            v16 = sub_1E0FA4(*((_DWORD *)ptr + 3 * i));
            logfmt_raw(
              v22,
              0x1000u,
              0,
              v36,
              v35[0],
              v35[1],
              v35[2],
              v35[3],
              v35[4],
              v35[5],
              v35[6],
              v36,
              "check dag failed for chip-%d core-%d: %08x",
              v14,
              v15,
              v16);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/chip_setting.c",
              150,
              "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
              51,
              1531,
              40,
              v22);
          }
        }
      }
      else
      {
        v37 = 2;
        v7 = sub_1E0FA4(*((_DWORD *)ptr + 3 * i));
        if ( (v37 & v7) >> 1 == 1 )
        {
          V_LOCK();
          sub_1E0BC0((int)v29, *(int *)(a1 + 272));
          v8 = *((unsigned __int8 *)ptr + 12 * i + 4);
          v9 = *((unsigned __int8 *)ptr + 12 * i + 8);
          v10 = sub_1E0FA4(*((_DWORD *)ptr + 3 * i));
          logfmt_raw(
            v22,
            0x1000u,
            0,
            v30,
            v29[0],
            v29[1],
            v29[2],
            v29[3],
            v29[4],
            v29[5],
            v29[6],
            v30,
            "check cache succeed for chip-%d core-%d: %08x",
            v8,
            v9,
            v10);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
            51,
            1513,
            20,
            v22);
          if ( i == v40 - 1 )
          {
            *a6 = 1;
            return v38;
          }
        }
        else
        {
          V_LOCK();
          sub_1E0BC0((int)v31, *(int *)(a1 + 272));
          v11 = *((unsigned __int8 *)ptr + 12 * i + 4);
          v12 = *((unsigned __int8 *)ptr + 12 * i + 8);
          v13 = sub_1E0FA4(*((_DWORD *)ptr + 3 * i));
          logfmt_raw(
            v22,
            0x1000u,
            0,
            v32,
            v31[0],
            v31[1],
            v31[2],
            v31[3],
            v31[4],
            v31[5],
            v31[6],
            v32,
            "check cache failed for chip-%d core-%d: %08x",
            v11,
            v12,
            v13);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/chip_setting.c",
            150,
            "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
            51,
            1519,
            40,
            v22);
        }
      }
    }
    free(ptr);
  }
  else
  {
    V_LOCK();
    sub_1E0BC0((int)v27, *(int *)(a1 + 272));
    logfmt_raw(
      v22,
      0x1000u,
      0,
      v28,
      v27[0],
      v27[1],
      v27[2],
      v27[3],
      v27[4],
      v27[5],
      v27[6],
      v28,
      "check_2282_core_reg read failed for ret: %d, resp_num: %d",
      v38,
      v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_check_single_chip_2282_dag_reg_ZEC_1746",
      51,
      1505,
      40,
      v22);
    return v38;
  }
  return v6;
}
