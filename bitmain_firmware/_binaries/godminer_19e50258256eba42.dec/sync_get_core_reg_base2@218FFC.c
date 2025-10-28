int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  char v7; // r0
  int v8; // r2
  int v9; // r4
  _DWORD v15[2]; // [sp+10h] [bp-3Ch] BYREF
  char v16[2]; // [sp+18h] [bp-34h] BYREF
  _BYTE v17[3]; // [sp+1Ah] [bp-32h] BYREF
  __int16 v18; // [sp+1Dh] [bp-2Fh]
  int v19; // [sp+1Fh] [bp-2Dh]
  char v20; // [sp+23h] [bp-29h]
  __int64 v21; // [sp+24h] [bp-28h] BYREF
  char v22; // [sp+2Ch] [bp-20h]
  void *s; // [sp+30h] [bp-1Ch]
  size_t nmemb; // [sp+34h] [bp-18h]
  int v25; // [sp+38h] [bp-14h]
  int v26; // [sp+3Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  v21 = 371285;
  v22 = 0;
  BYTE2(v21) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1A | 0x45;
  BYTE3(v21) = 7;
  BYTE4(v21) = *(_BYTE *)(a2 + 9);
  BYTE5(v21) = *(_BYTE *)(a2 + 12);
  HIWORD(v21) = reverse_byte_order_16(*(_WORD *)(a2 + 10));
  nmemb = 8;
  s = calloc(8u, 1u);
  memset(s, 0, 4u);
  memcpy(s, (char *)&v21 + 2, 6u);
  v7 = BM_CRC5(s, 8 * nmemb);
  v22 = v22 & 0xE0 | v7 & 0x1F;
  free(s);
  if ( *(_BYTE *)(a2 + 8) != 1 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  send_command_packet(a1, (unsigned __int8 *)&v21, 9u);
  v26 = 0;
  v25 = 0;
  sub_34579C(a6, 0x3E8u);
  v15[1] = 1000000 * v8;
  v15[0] = sub_34579C(a6, 0x3E8u);
  while ( v26 < a3 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), v16, 0xCu, v15) == 110 )
    {
      v25 = 3;
      break;
    }
    if ( (unsigned __int8)v16[0] != 170 || v16[1] != 85 || (v17[0] & 0xF) != 1 || (v17[0] & 0xE0) != 0 )
    {
      v25 = 1;
      break;
    }
    v9 = v20 & 0x1F;
    if ( v9 == BM_CRC5(v17, 0x48u) )
    {
      *(_BYTE *)(a4 + 12 * v26 + 4) = v17[1];
      *(_WORD *)(a4 + 12 * v26 + 6) = v18;
      *(_BYTE *)(a4 + 12 * v26 + 8) = v17[2];
      *(_DWORD *)(a4 + 12 * v26++) = v19;
    }
    else
    {
      v25 = 2;
    }
  }
  *a5 = v26;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v25;
}
