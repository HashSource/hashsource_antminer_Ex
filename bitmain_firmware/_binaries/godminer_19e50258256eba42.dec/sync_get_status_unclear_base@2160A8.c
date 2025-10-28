int __fastcall sync_get_status_unclear_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v6; // r2
  int v7; // r4
  _DWORD v13[2]; // [sp+14h] [bp-28h] BYREF
  char v14[2]; // [sp+1Ch] [bp-20h] BYREF
  int v15; // [sp+1Eh] [bp-1Eh] BYREF
  char v16; // [sp+22h] [bp-1Ah]
  unsigned __int8 v17; // [sp+23h] [bp-19h]
  char v18; // [sp+25h] [bp-17h]
  int v19; // [sp+28h] [bp-14h]
  int v20; // [sp+2Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 276) != 1 )
    return 4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 944));
  v20 = 0;
  v19 = 0;
  sub_34579C(a5, 0x3E8u);
  v13[1] = 1000000 * v6;
  v13[0] = sub_34579C(a5, 0x3E8u);
  while ( v20 < a2 )
  {
    if ( queue_dequeue_for(*(_DWORD *)(a1 + 908), v14, 0xAu, v13) == 110 )
    {
      v19 = 3;
      break;
    }
    if ( (unsigned __int8)v14[0] != 170 || v14[1] != 85 )
    {
      v19 = 1;
      break;
    }
    v7 = v18 & 0x1F;
    if ( v7 == BM_CRC5(&v15, 0x3Bu) )
    {
      *(_BYTE *)(a3 + 12 * v20 + 4) = v16;
      *(_WORD *)(a3 + 12 * v20 + 6) = v17;
      *(_DWORD *)(a3 + 12 * v20++) = v15;
    }
    else
    {
      v19 = 2;
    }
  }
  *a4 = v20;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 944));
  return v19;
}
