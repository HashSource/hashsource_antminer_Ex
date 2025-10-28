int __fastcall sync_get_core_reg_base3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+14h] [bp-30h] BYREF
  char v16[2]; // [sp+1Ch] [bp-28h] BYREF
  _BYTE v17[7]; // [sp+1Eh] [bp-26h] BYREF
  char v18; // [sp+25h] [bp-1Fh]
  int v19; // [sp+28h] [bp-1Ch] BYREF
  int v20; // [sp+2Ch] [bp-18h]
  int v21; // [sp+30h] [bp-14h]
  int v22; // [sp+34h] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v19 = 371285;
  v20 = 0;
  BYTE2(v19) = (16 * (*(_BYTE *)(a2 + 8) & 1)) | 5;
  BYTE2(v19) = BYTE2(v19) & 0x1F | 0x40;
  HIBYTE(v19) = 6;
  LOBYTE(v20) = *(_BYTE *)(a2 + 9);
  BYTE1(v20) = *(_WORD *)(a2 + 10);
  BYTE2(v20) = *(_BYTE *)(a2 + 12);
  v7 = BM_CRC5((_BYTE *)&v19 + 2, 0x28u);
  HIBYTE(v20) = HIBYTE(v20) & 0xE0 | v7 & 0x1F;
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  send_command_packet(a1, (unsigned __int8 *)&v19, 8u);
  v22 = 0;
  v21 = 0;
  sub_34579C(a6, 0x3E8u);
  v15[1] = 1000000 * v8;
  v15[0] = sub_34579C(a6, 0x3E8u);
  while ( v22 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), v16, 0xAu, v15) == 110 )
    {
      v21 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || v17[0] != 8 || (v18 & 0x40) == 0 || v18 < 0 )
    {
      v21 = 1;
      break;
    }
    v9 = v18 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x3Bu) )
    {
      *(_BYTE *)(a4 + 12 * v22 + 4) = v17[5];
      *(_WORD *)(a4 + 12 * v22 + 6) = v17[6];
      *(_BYTE *)(a4 + 12 * v22 + 8) = v17[1];
      *(_DWORD *)(a4 + 12 * v22++) = (v17[2] << 16) | (v17[3] << 8) | v17[4];
    }
    else
    {
      v21 = 2;
    }
  }
  *a5 = v22;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v21;
}
