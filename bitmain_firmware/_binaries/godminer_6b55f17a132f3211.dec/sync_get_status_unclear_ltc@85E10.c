int __fastcall sync_get_status_unclear_ltc(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // r5
  pthread_mutex_t *v7; // r11
  int v11; // r10
  int v12; // r2
  int v13; // r9
  char v15; // r0
  __int16 v16; // r1
  int v17; // r2
  _DWORD v19[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v20[2]; // [sp+14h] [bp-10h] BYREF
  int v21; // [sp+16h] [bp-Eh] BYREF
  char v22; // [sp+1Ah] [bp-Ah]
  unsigned __int8 v23; // [sp+1Bh] [bp-9h]
  unsigned __int8 v24; // [sp+1Ch] [bp-8h]

  if ( !a1[9].__size[0] )
    return 4;
  v7 = a1 + 35;
  pthread_mutex_lock(a1 + 35);
  v6 = 0;
  sub_12232C(a5, a6, 1000, 0);
  v11 = 0;
  v19[1] = (_DWORD)&loc_F4240 * v12;
  v19[0] = sub_12232C(a5, a6, 1000, 0);
  while ( v11 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(a1[34].__lock, v20, 9, v19) == 110 )
      {
        v6 = 3;
        goto LABEL_13;
      }
      if ( v20[0] != 170 || v20[1] != 85 || (v24 & 0x80u) != 0 )
      {
        v6 = 1;
        *a4 = v11;
        pthread_mutex_unlock(v7);
        return v6;
      }
      v13 = v24 & 0x1F;
      if ( v13 == BM_CRC5(&v21, 51) )
        break;
      v6 = 2;
    }
    ++v11;
    v15 = v22;
    a3 += 12;
    v16 = v23;
    v17 = v21;
    *(_BYTE *)(a3 - 3) = (v24 >> 5) & 3;
    *(_BYTE *)(a3 - 8) = v15;
    *(_WORD *)(a3 - 6) = v16;
    *(_DWORD *)(a3 - 12) = v17;
  }
LABEL_13:
  *a4 = v11;
  pthread_mutex_unlock(v7);
  return v6;
}
