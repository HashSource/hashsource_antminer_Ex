int __fastcall work_2_packet_dcr(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r5
  char *v8; // r7
  const char *v9; // r1
  const void *v10; // r8
  int v11; // r12
  int v12; // r1
  _DWORD *v13; // r0
  _DWORD *v14; // r3
  int v15; // r11
  int v16; // r10
  int v17; // lr
  int v18; // r12
  int v19; // r12
  int v20; // r11
  int v21; // r10
  char v22; // r12
  int v23; // r0
  int v24; // r3
  int v25; // r0
  void (__fastcall *v26)(int, _DWORD *); // r3
  int v28; // r0
  _DWORD v30[2]; // [sp+18h] [bp-1004h] BYREF
  int v31; // [sp+20h] [bp-FFCh]
  int v32; // [sp+24h] [bp-FF8h]

  v6 = *(_DWORD *)(a1 + 776);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v8 = (char *)(v6 + 0x8000);
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 452) == 1 )
    a3[2] = 48;
  v11 = (unsigned __int8)*v8;
  *(_QWORD *)(v6 + 8 * v11) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v6 + 32 * (v11 + 32)), v9);
  v12 = (unsigned __int8)*v8;
  *(_DWORD *)(v6 + 4 * (v12 + 7040)) = a2[55];
  v13 = (_DWORD *)(v6 + 32 * (v12 + 896));
  v14 = a2 + 56;
  v15 = a2[56];
  v16 = a2[57];
  v17 = v14[2];
  v18 = v14[3];
  *v13 = v15;
  v13[1] = v16;
  v13[2] = v17;
  v13[3] = v18;
  v19 = v14[7];
  v20 = v14[4];
  v21 = v14[5];
  v13[6] = v14[6];
  v13[7] = v19;
  v13[4] = v20;
  v13[5] = v21;
  memcpy((void *)(v6 + 180 * (unsigned __int8)*v8 + 5120), v10, 0xB4u);
  v22 = *v8;
  a3[3] = *v8;
  *v8 = (v22 + 1) & 0x7F;
  memcpy(a3 + 4, v10, 0xB4u);
  if ( !memcmp(&last_header_dcr, v10, 0xB4u) )
  {
    V_LOCK(0);
    v28 = logfmt_raw((int)v30, 0x1000u);
    V_UNLOCK(v28);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      170,
      "work_2_packet_dcr",
      17,
      119,
      80,
      v30);
  }
  memcpy(&last_header_dcr, v10, 0xB4u);
  v23 = BM_CRC16(a3 + 2, 182);
  a3[185] = v23;
  a3[184] = BYTE1(v23);
  v24 = *(unsigned __int8 *)(a1 + 217);
  *a4 = 186;
  if ( v24 && *(_BYTE *)(a1 + 218) )
  {
    memset(*(void **)(a1 + 416), 0, 48 * *(_DWORD *)(a1 + 292));
    v23 = sub_64ABC((_DWORD *)a1, 39);
    *(_BYTE *)(a1 + 217) = 0;
  }
  V_LOCK(v23);
  v25 = logfmt_raw((int)v30, 0x1000u);
  V_UNLOCK(v25);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/chip_setting.c",
    149,
    "ChipSetting_bridge_reset_DCR_1727",
    33,
    94,
    20,
    v30);
  v30[1] = 0;
  v31 = 0;
  v32 = 0;
  v26 = *(void (__fastcall **)(int, _DWORD *))(a1 + 228);
  LOBYTE(v31) = 1;
  v30[0] = 2;
  HIWORD(v31) = 68;
  v26(a1, v30);
  usleep(0x14u);
  return 0;
}
