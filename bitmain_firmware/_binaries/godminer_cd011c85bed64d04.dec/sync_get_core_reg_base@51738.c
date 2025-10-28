int __fastcall sync_get_core_reg_base(pthread_mutex_t *a1, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
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
  char v24; // r1
  __int16 v25; // r2
  _BYTE v26[2]; // [sp+4h] [bp-20h] BYREF
  int v27; // [sp+6h] [bp-1Eh] BYREF
  __int16 v28; // [sp+Ah] [bp-1Ah]
  _DWORD v29[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v30[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v31[2]; // [sp+16h] [bp-Eh] BYREF
  int v32; // [sp+18h] [bp-Ch]
  char v33; // [sp+1Ch] [bp-8h]
  unsigned __int8 v34; // [sp+1Dh] [bp-7h]
  char v35; // [sp+1Eh] [bp-6h]

  if ( !a1[6].__size[8] )
    return 4;
  v27 = 0;
  v12 = *(_BYTE *)(a2 + 8);
  v28 = 0;
  v14 = *(_WORD *)(a2 + 10);
  v15 = (16 * (v12 & 1)) & 0x1A | 0x45;
  v16 = *(_BYTE *)(a2 + 12);
  v17 = *(_BYTE *)(a2 + 9);
  LOBYTE(v27) = v15;
  HIBYTE(v27) = v14;
  LOBYTE(v28) = v16;
  v26[1] = -86;
  BYTE1(v27) = 6;
  BYTE2(v27) = v17;
  v26[0] = 85;
  v18 = BM_CRC5(&v27, 40);
  v19 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v28) = HIBYTE(v28) & 0xE0 | v18 & 0x1F;
  if ( !v19 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v9 = 0;
  v20 = 0;
  pthread_mutex_lock(a1 + 29);
  queue_clear(a1[28].__lock);
  send_command_packet(a1, v26, 8);
  sub_12E9C4(a7, a8, 1000, 0);
  v29[1] = (_DWORD)&loc_F4240 * v21;
  v29[0] = sub_12E9C4(a7, a8, 1000, 0);
  while ( a3 > v20 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[28].__lock, v30, 11, v29) == 110 )
      {
        v9 = 3;
        goto LABEL_15;
      }
      if ( v30[0] != 170 || v30[1] != 85 || v31[0] != 9 || (v35 & 0x40) == 0 )
      {
        v9 = 1;
        *a5 = v20;
        pthread_mutex_unlock(a1 + 29);
        return v9;
      }
      v22 = v35 & 0x1F;
      if ( v22 == BM_CRC5(v31, 67) )
        break;
      v9 = 2;
    }
    ++v20;
    v24 = v33;
    v25 = v34;
    *(_BYTE *)(a4 + 8) = v31[1];
    *(_BYTE *)(a4 + 4) = v24;
    *(_WORD *)(a4 + 6) = v25;
    *(_DWORD *)a4 = v32;
    a4 += 12;
  }
LABEL_15:
  *a5 = v20;
  pthread_mutex_unlock(a1 + 29);
  return v9;
}
