int __fastcall sync_get_core_reg_base3(int a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r5
  char v12; // r1
  __int16 v14; // r3
  char v15; // r2
  char v16; // r1
  char v17; // lr
  char v18; // r0
  int v19; // r3
  int v20; // r9
  int v21; // r2
  int v22; // r11
  int v24; // r2
  int v25; // r3
  __int16 v26; // r1
  int v27; // r3
  _BYTE v28[2]; // [sp+4h] [bp-20h] BYREF
  int v29; // [sp+6h] [bp-1Eh] BYREF
  __int16 v30; // [sp+Ah] [bp-1Ah]
  _DWORD v31[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v32[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v33[7]; // [sp+16h] [bp-Eh] BYREF
  char v34; // [sp+1Dh] [bp-7h]

  if ( !*(_BYTE *)(a1 + 144) )
    return 4;
  v29 = 0;
  v12 = *(_BYTE *)(a2 + 8);
  v30 = 0;
  v14 = *(_WORD *)(a2 + 10);
  v15 = (16 * (v12 & 1)) & 0x1A | 0x45;
  v16 = *(_BYTE *)(a2 + 12);
  v17 = *(_BYTE *)(a2 + 9);
  LOBYTE(v29) = v15;
  HIBYTE(v29) = v14;
  LOBYTE(v30) = v16;
  v28[1] = -86;
  BYTE1(v29) = 6;
  BYTE2(v29) = v17;
  v28[0] = 85;
  v18 = BM_CRC5(&v29, 40);
  v19 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v30) = HIBYTE(v30) & 0xE0 | v18 & 0x1F;
  if ( !v19 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v9 = 0;
  v20 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 688));
  queue_clear(*(_DWORD *)(a1 + 664));
  send_command_packet(a1, v28, 8);
  sub_12D53C(a7, a8, 1000, 0);
  v31[1] = (_DWORD)&loc_F4240 * v21;
  v31[0] = sub_12D53C(a7, a8, 1000, 0);
  while ( v20 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 664), v32, 10, v31) == 110 )
      {
        v9 = 3;
        goto LABEL_15;
      }
      if ( v32[0] != 170 || v32[1] != 85 || v33[0] != 8 || (v34 & 0xC0) != 0x40 )
      {
        v9 = 1;
        *a5 = v20;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
        return v9;
      }
      v22 = v34 & 0x1F;
      if ( v22 == BM_CRC5(v33, 59) )
        break;
      v9 = 2;
    }
    ++v20;
    v24 = v33[4];
    v25 = (v33[3] << 8) | (v33[2] << 16);
    v26 = v33[6];
    *(_BYTE *)(a4 + 4) = v33[5];
    v27 = v25 | v24;
    LOBYTE(v24) = v33[1];
    *(_WORD *)(a4 + 6) = v26;
    *(_BYTE *)(a4 + 8) = v24;
    *(_DWORD *)a4 = v27;
    a4 += 12;
  }
LABEL_15:
  *a5 = v20;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 688));
  return v9;
}
