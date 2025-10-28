int __fastcall sync_get_status_base4(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r4
  _DWORD v13[2]; // [sp+14h] [bp-28h] BYREF
  char v14[2]; // [sp+1Ch] [bp-20h] BYREF
  char v15; // [sp+1Eh] [bp-1Eh] BYREF
  int v16; // [sp+1Fh] [bp-1Dh]
  char v17; // [sp+23h] [bp-19h]
  unsigned __int8 v18; // [sp+24h] [bp-18h]
  char v19; // [sp+25h] [bp-17h]
  int v20; // [sp+28h] [bp-14h]
  int v21; // [sp+2Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v21 = 0;
  v20 = 0;
  sub_34579C(a5, 0x3E8u);
  v13[1] = 1000000 * v6;
  v13[0] = sub_34579C(a5, 0x3E8u);
  while ( v21 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), v14, 0xAu, v13) == 110 )
    {
      v20 = 3;
      break;
    }
    if ( (unsigned __int8)v14[0] != 170 || v14[1] != 85 || v15 != 8 )
    {
      v20 = 1;
      break;
    }
    v7 = v19 & 0x1F;
    if ( v7 == BM_CRC5(&v15, 0x3Bu) )
    {
      *(_BYTE *)(a3 + 12 * v21 + 4) = v17;
      *(_WORD *)(a3 + 12 * v21 + 6) = v18;
      *(_DWORD *)(a3 + 12 * v21++) = v16;
    }
    else
    {
      v20 = 2;
    }
  }
  *a4 = v21;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v20;
}
