int __fastcall work_2_packet_hns(int a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  int v7; // r5
  const char *v9; // r1
  _DWORD *v10; // r8
  int v11; // r12
  int v12; // r2
  _DWORD *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r3
  int v16; // r11
  int v17; // r10
  int v18; // lr
  int v19; // r12
  int v20; // r10
  int v21; // r12
  int v22; // r11
  char v23; // r12
  __int16 v24; // r0
  int v25; // r3
  int v26; // r3
  int v27; // r1
  void (__fastcall *v28)(int, _DWORD *); // r3
  int v30; // r3
  int v31; // r1
  _DWORD v32[2]; // [sp+10h] [bp-1004h] BYREF
  int v33; // [sp+18h] [bp-FFCh]
  int v34; // [sp+1Ch] [bp-FF8h]

  v7 = *(_DWORD *)(a1 + 824);
  *a3 = 85;
  a3[1] = -86;
  a3[2] = 32;
  v9 = (const char *)(a2 + 2);
  v10 = a2 + 10;
  if ( *(_DWORD *)(a1 + 492) == 1 )
    a3[2] = 48;
  v11 = *(unsigned __int8 *)(v7 + 42496);
  *(_QWORD *)(v7 + 8 * v11) = *((_QWORD *)v9 - 1);
  strcpy((char *)(v7 + 32 * (v11 + 32)), v9);
  v12 = *(unsigned __int8 *)(v7 + 42496);
  v13 = a2 + 10;
  *(_DWORD *)(v7 + 4 * (v12 + 9472)) = a2[74];
  v14 = (_DWORD *)(v7 + 32 * (v12 + 1200));
  v15 = a2 + 75;
  v16 = a2[75];
  v17 = a2[76];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[5];
  v21 = v15[7];
  v22 = v15[4];
  v14[6] = v15[6];
  v14[5] = v20;
  v14[7] = v21;
  v14[4] = v22;
  memcpy((void *)(v7 + ((*(unsigned __int8 *)(v7 + 42496) + 20) << 8)), v13, 0x100u);
  v23 = *(_BYTE *)(v7 + 42496);
  a3[3] = v23;
  *(_BYTE *)(v7 + 42496) = (v23 + 1) & 0x7F;
  memcpy(a3 + 4, v10, 0x100u);
  if ( !memcmp(&last_header_hns, v10, 0x100u) )
  {
    V_LOCK();
    LOWORD(v30) = -26652;
    HIWORD(v30) = (unsigned int)"mask reg %02x tm %02x" >> 16;
    logfmt_raw((char *)v32, 0x1000u, 0, v30);
    V_UNLOCK();
    LOWORD(v31) = -8280;
    HIWORD(v31) = (unsigned int)"e_cycle_limit" >> 16;
    zlog(g_zc, v31, 174, "work_2_packet_hns", 17, 124, 80, v32);
  }
  memcpy(&last_header_hns, v10, 0x100u);
  v24 = BM_CRC16(a3 + 2, 258);
  a3[261] = v24;
  a3[260] = HIBYTE(v24);
  v25 = *(unsigned __int8 *)(a1 + 253);
  *a4 = 262;
  if ( v25 && *(_BYTE *)(a1 + 254) )
  {
    memset(*(void **)(a1 + 456), 0, 48 * *(_DWORD *)(a1 + 336));
    sub_8C99C((int *)a1, 36);
    *(_BYTE *)(a1 + 253) = 0;
  }
  V_LOCK();
  LOWORD(v26) = -26400;
  HIWORD(v26) = (unsigned int)"nt %d" >> 16;
  logfmt_raw((char *)v32, 0x1000u, 0, v26, "ChipSetting_bridge_reset_HNS_2130", 68);
  V_UNLOCK();
  LOWORD(v27) = -26872;
  HIWORD(v27) = (unsigned int)"stdiv1:%d, postdiv2:%d" >> 16;
  zlog(g_zc, v27, 153, "ChipSetting_bridge_reset_HNS_2130", 33, 110, 20, v32);
  v32[1] = 0;
  v33 = 0;
  v34 = 0;
  v28 = *(void (__fastcall **)(int, _DWORD *))(a1 + 264);
  LOBYTE(v33) = 1;
  v32[0] = 2;
  HIWORD(v33) = 68;
  v28(a1, v32);
  usleep(0x14u);
  return 0;
}
