int __fastcall sub_B71DC(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r9
  int v10; // r6
  int v11; // r8
  int v12; // r2
  int v13; // r7
  __int16 v15; // r3
  _DWORD v17[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v18[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v19[3]; // [sp+16h] [bp-Eh] BYREF
  int v20; // [sp+19h] [bp-Bh]
  char v21; // [sp+1Dh] [bp-7h]

  v6 = (pthread_mutex_t *)(a1 + 848);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  v10 = 0;
  queue_clear(*(_DWORD *)(a1 + 824));
  v11 = 0;
  sub_12E934(a5, a6, 1000, 0);
  v17[1] = (_DWORD)&loc_F4240 * v12;
  v17[0] = sub_12E934(a5, a6, 1000, 0);
  while ( a2 > v11 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v18, 10, v17) == 110 )
      {
        v10 = 3;
        goto LABEL_11;
      }
      if ( v18[0] != 170 || v18[1] != 85 || (v19[0] & 0xEF) != 0 )
      {
        v10 = 1;
        goto LABEL_11;
      }
      v13 = v21 & 0x1F;
      if ( v13 == BM_CRC5(v19, 56) )
        break;
      v10 = 2;
    }
    ++v11;
    v15 = v19[2];
    *(_BYTE *)(a3 + 4) = v19[1];
    *(_WORD *)(a3 + 6) = v15;
    *(_DWORD *)a3 = v20;
    a3 += 12;
  }
LABEL_11:
  *a4 = v11;
  pthread_mutex_unlock(v6);
  return v10;
}
