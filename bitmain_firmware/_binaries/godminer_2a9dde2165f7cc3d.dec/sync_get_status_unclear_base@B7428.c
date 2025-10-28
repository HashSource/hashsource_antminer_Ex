int __fastcall sync_get_status_unclear_base(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r5
  pthread_mutex_t *v7; // r11
  int v11; // r10
  int v12; // r2
  int v13; // r7
  __int16 v15; // r2
  int v16; // r3
  _DWORD v18[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v19[2]; // [sp+14h] [bp-10h] BYREF
  int v20; // [sp+16h] [bp-Eh] BYREF
  char v21; // [sp+1Ah] [bp-Ah]
  unsigned __int8 v22; // [sp+1Bh] [bp-9h]
  char v23; // [sp+1Dh] [bp-7h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v7 = (pthread_mutex_t *)(a1 + 848);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  v6 = 0;
  sub_12E934(a5, a6, 1000, 0);
  v11 = 0;
  v18[1] = (_DWORD)&loc_F4240 * v12;
  v18[0] = sub_12E934(a5, a6, 1000, 0);
  while ( v11 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v19, 10, v18) == 110 )
      {
        v6 = 3;
        goto LABEL_12;
      }
      if ( v19[0] != 170 || v19[1] != 85 )
      {
        *a4 = v11;
        v6 = 1;
        pthread_mutex_unlock(v7);
        return v6;
      }
      v13 = v23 & 0x1F;
      if ( v13 == BM_CRC5(&v20, 59) )
        break;
      v6 = 2;
    }
    ++v11;
    v15 = v22;
    v16 = v20;
    *(_BYTE *)(a3 + 4) = v21;
    *(_WORD *)(a3 + 6) = v15;
    *(_DWORD *)a3 = v16;
    a3 += 12;
  }
LABEL_12:
  *a4 = v11;
  pthread_mutex_unlock(v7);
  return v6;
}
