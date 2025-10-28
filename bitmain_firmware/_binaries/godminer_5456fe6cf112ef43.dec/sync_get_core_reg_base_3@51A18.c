int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r6
  char v13; // r0
  __int16 v14; // lr
  unsigned __int8 v15; // r12
  char v16; // r0
  int v17; // r2
  int v18; // r2
  int v19; // r0
  int v20; // r11
  int v21; // r0
  __int16 v23; // r1
  int v24; // r3
  char v25; // r2
  int v26; // [sp+24h] [bp-1030h]
  int v27; // [sp+2Ch] [bp-1028h]
  _BYTE v28[2]; // [sp+34h] [bp-1020h] BYREF
  int v29; // [sp+36h] [bp-101Eh] BYREF
  __int16 v30; // [sp+3Ah] [bp-101Ah]
  _DWORD v31[2]; // [sp+3Ch] [bp-1018h] BYREF
  _BYTE v32[2]; // [sp+44h] [bp-1010h] BYREF
  _BYTE v33[6]; // [sp+46h] [bp-100Eh] BYREF
  char v34; // [sp+4Ch] [bp-1008h]
  _BYTE v35[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 144) )
    return 4;
  v29 = 0;
  v13 = *(_BYTE *)(a2 + 8);
  v28[0] = 85;
  v28[1] = -86;
  v14 = *(_WORD *)(a2 + 10);
  v15 = *(_BYTE *)(a2 + 12);
  v29 = (16 * (v13 & 1)) & 0x1A | 0x45;
  BYTE1(v29) = 6;
  HIBYTE(v29) = v14;
  v30 = v15;
  v16 = BM_CRC5(&v29, 40);
  v17 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v30) = HIBYTE(v30) & 0xE0 | v16 & 0x1F;
  if ( !v17 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v27 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  v9 = 0;
  send_command_packet(a1, v28, 8);
  sub_12D53C(a7, a8, 1000, 0);
  v31[1] = 1000000 * v18;
  v26 = 0;
  v31[0] = sub_12D53C(a7, a8, 1000, 0);
  while ( v26 < a3 )
  {
    while ( 1 )
    {
      v21 = queue_dequeue_for(*(_DWORD *)(a1 + 664), v32, 9, v31);
      if ( v21 == 110 )
      {
        v9 = 3;
        goto LABEL_14;
      }
      V_LOCK(v21);
      v19 = logfmt_raw((int)v35, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/chip_reg_io_base.c",
        147,
        "sync_get_core_reg_base_3",
        24,
        588,
        20,
        v35);
      if ( v32[0] != 170 || v32[1] != 85 || (v34 & 0x40) == 0 )
      {
        v9 = 1;
        goto LABEL_14;
      }
      v20 = v34 & 0x1F;
      if ( v20 == BM_CRC5(v33, 51) )
        break;
      v9 = 2;
    }
    ++v26;
    v23 = v33[5];
    v24 = (v33[2] << 16) | (v33[3] << 24) | v33[1];
    v25 = v33[0];
    *(_BYTE *)(v27 + 4) = v33[4];
    *(_WORD *)(v27 + 6) = v23;
    *(_BYTE *)(v27 + 8) = v25;
    *(_DWORD *)v27 = v24;
    v27 += 12;
  }
LABEL_14:
  *a5 = v26;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v9;
}
