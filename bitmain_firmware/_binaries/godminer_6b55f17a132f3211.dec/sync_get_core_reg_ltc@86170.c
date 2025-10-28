int __fastcall sync_get_core_reg_ltc(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r6
  __int16 v10; // r1
  __int16 v14; // r1
  char v15; // r0
  char v16; // r12
  char v17; // r2
  char v18; // r12
  int v19; // r0
  char v20; // r2
  char v21; // r0
  int v22; // r2
  int v23; // r2
  char v24; // r11
  int v25; // r0
  int v26; // r0
  unsigned __int8 v28; // r2
  char v29; // r1
  int v30; // r3
  int v31; // [sp+14h] [bp-1038h]
  int v32; // [sp+1Ch] [bp-1030h]
  int v33; // [sp+24h] [bp-1028h]
  __int16 v34; // [sp+26h] [bp-1026h]
  _DWORD v35[2]; // [sp+28h] [bp-1024h] BYREF
  _BYTE v36[2]; // [sp+30h] [bp-101Ch] BYREF
  _BYTE v37[5]; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v38; // [sp+37h] [bp-1015h]
  char v39; // [sp+38h] [bp-1014h]
  _BYTE v40[2]; // [sp+3Ch] [bp-1010h] BYREF
  int v41; // [sp+3Eh] [bp-100Eh] BYREF
  int v42; // [sp+42h] [bp-100Ah]
  char v43; // [sp+46h] [bp-1006h]
  _BYTE v44[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !a1[9].__size[0] )
    return 4;
  v10 = *(_WORD *)(a2 + 10);
  v41 = 0;
  LOBYTE(v34) = v34 & 0xF0 | v10 & 0xF;
  LOWORD(v33) = 0;
  v14 = v34 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  v15 = *(_BYTE *)(a2 + 14);
  v16 = *(_BYTE *)(a2 + 8);
  BYTE2(v33) = v34 & 0xF | (16 * *(_BYTE *)(a2 + 12));
  v42 = 0;
  v17 = (16 * (v16 & 1)) | 1;
  v18 = *(_BYTE *)(a2 + 9);
  HIBYTE(v33) = HIBYTE(v14) & 0xF | ((v15 & 1) << 7);
  v40[0] = 85;
  LOBYTE(v41) = v17 & 0x1F | 0x40;
  v40[1] = -86;
  BYTE1(v41) = 9;
  BYTE2(v41) = v18;
  HIBYTE(v41) = 60;
  v43 = 0;
  v19 = reverse_byte_order_32(v33);
  v20 = *(_BYTE *)(a2 + 15);
  v42 = v19;
  v43 = 32 * (v20 & 3);
  v21 = BM_CRC5(&v41, 64);
  v22 = *(unsigned __int8 *)(a2 + 8);
  v43 = v43 & 0xE0 | v21 & 0x1F;
  if ( !v22 && !*(_BYTE *)(a2 + 14) )
    a3 = 1;
  v32 = a4;
  pthread_mutex_lock(a1 + 35);
  queue_clear(a1[34].__lock);
  v9 = 0;
  send_command_packet(a1, v40, 11);
  sub_12232C(a7, a8, 1000, 0);
  v35[1] = 1000000 * v23;
  v31 = 0;
  v35[0] = sub_12232C(a7, a8, 1000, 0);
  while ( a3 > v31 )
  {
    while ( 1 )
    {
      v25 = queue_dequeue_for(a1[34].__lock, v36, 9, v35);
      if ( v25 == 110 )
      {
        v9 = 3;
        goto LABEL_16;
      }
      if ( v36[0] != 170 || v36[1] != 85 || (v39 & 0xE0) != 0xC0 )
      {
        v9 = 1;
        goto LABEL_16;
      }
      if ( (v38 & 0x10) != 0 )
      {
        V_LOCK(v25);
        v26 = logfmt_raw((int)v44, 0x1000u);
        V_UNLOCK(v26);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c",
          174,
          "sync_get_core_reg_ltc",
          21,
          370,
          100,
          v44);
      }
      v24 = v39;
      if ( (v24 & 0x1F) == BM_CRC5(v37, 51) )
        break;
      v9 = 2;
    }
    ++v31;
    v28 = v38;
    v29 = v37[4];
    v30 = (v37[0] << 16) | (((v38 >> 5) & 1) << 24) | v37[2] | (v37[1] << 8);
    *(_BYTE *)(v32 + 4) = v37[3];
    *(_DWORD *)v32 = v30;
    *(_WORD *)(v32 + 6) = v28 & 0xF;
    *(_BYTE *)(v32 + 9) = v28 >> 6;
    *(_BYTE *)(v32 + 8) = v29;
    v32 += 12;
  }
LABEL_16:
  *a5 = v31;
  pthread_mutex_unlock(a1 + 35);
  return v9;
}
