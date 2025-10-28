int __fastcall sync_get_status_base2(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r4
  _DWORD v13[2]; // [sp+14h] [bp-28h] BYREF
  char v14[2]; // [sp+1Ch] [bp-20h] BYREF
  _BYTE v15[3]; // [sp+1Eh] [bp-1Eh] BYREF
  int v16; // [sp+21h] [bp-1Bh]
  char v17; // [sp+25h] [bp-17h]
  int v18; // [sp+28h] [bp-14h]
  int v19; // [sp+2Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  queue_clear(*(_DWORD *)(a1 + 908));
  v19 = 0;
  v18 = 0;
  sub_34579C(a5, 0x3E8u);
  v13[1] = 1000000 * v6;
  v13[0] = sub_34579C(a5, 0x3E8u);
  while ( v19 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), v14, 0xAu, v13) == 110 )
    {
      v18 = 3;
      break;
    }
    if ( (unsigned __int8)v14[0] != 170 || v14[1] != 85 || (v15[0] & 0xF) != 0 || (v15[0] & 0xE0) != 0 )
    {
      v18 = 1;
      break;
    }
    v7 = v17 & 0x1F;
    if ( v7 == BM_CRC5(v15, 0x38u) )
    {
      *(_BYTE *)(a3 + 12 * v19 + 4) = v15[1];
      *(_WORD *)(a3 + 12 * v19 + 6) = v15[2];
      *(_DWORD *)(a3 + 12 * v19++) = v16;
    }
    else
    {
      v18 = 2;
    }
  }
  *a4 = v19;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v18;
}
