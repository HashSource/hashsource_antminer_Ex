int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v9; // r5
  char v12; // r1
  int v14; // r0
  void *v15; // r10
  char v16; // r0
  int v17; // r9
  int v18; // r2
  char v19; // r11
  char v21; // r2
  unsigned int v22; // r3
  _DWORD v23[2]; // [sp+0h] [bp-24h] BYREF
  _BYTE v24[2]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD src[2]; // [sp+Ah] [bp-1Ah] BYREF
  _BYTE v26[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v27[2]; // [sp+16h] [bp-Eh] BYREF
  _BYTE v28[7]; // [sp+18h] [bp-Ch]
  char v29; // [sp+1Fh] [bp-5h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  memset(src, 0, 7);
  v12 = *(_BYTE *)(a2 + 8);
  v24[0] = 85;
  v14 = *(unsigned __int16 *)(a2 + 10);
  src[0] = (16 * (v12 & 1)) & 0x1A | 0x45;
  v24[1] = -86;
  BYTE1(src[0]) = 7;
  LOWORD(src[1]) = reverse_byte_order_16(v14);
  v15 = calloc(8u, 1u);
  memcpy(v15, src, 6u);
  v16 = BM_CRC5(v15, 64);
  BYTE2(src[1]) = BYTE2(src[1]) & 0xE0 | v16 & 0x1F;
  free(v15);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v9 = 0;
  v17 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  queue_clear(*(_DWORD *)(a1 + 824));
  send_command_packet(a1, v24, 9);
  sub_12E944(a7, a8, 1000, 0);
  v23[1] = (_DWORD)&loc_F4240 * v18;
  v23[0] = sub_12E944(a7, a8, 1000, 0);
  while ( v17 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v26, 12, v23) == 110 )
      {
        v9 = 3;
        goto LABEL_14;
      }
      if ( v26[0] != 170 || v26[1] != 85 || (v27[0] & 0xEF) != 1 )
      {
        v9 = 1;
        *a5 = v17;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
        return v9;
      }
      v19 = v29;
      if ( (v19 & 0x1F) == BM_CRC5(v27, 72) )
        break;
      v9 = 2;
    }
    ++v17;
    v21 = v28[0];
    *(_BYTE *)(a4 + 4) = v27[1];
    v22 = *(_DWORD *)v28;
    *(_BYTE *)(a4 + 8) = v21;
    *(_WORD *)(a4 + 6) = v22 >> 8;
    *(_DWORD *)a4 = *(_DWORD *)&v28[3];
    a4 += 12;
  }
LABEL_14:
  *a5 = v17;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
  return v9;
}
