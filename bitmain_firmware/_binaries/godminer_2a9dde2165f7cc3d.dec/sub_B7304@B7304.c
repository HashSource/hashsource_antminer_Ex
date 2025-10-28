int __fastcall sub_B7304(int a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  pthread_mutex_t *v6; // r9
  int v10; // r6
  int v11; // r8
  int v12; // r2
  int v13; // r7
  __int16 v15; // r2
  int v16; // r3
  _DWORD v18[2]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v19[2]; // [sp+14h] [bp-10h] BYREF
  char v20; // [sp+16h] [bp-Eh] BYREF
  int v21; // [sp+17h] [bp-Dh]
  char v22; // [sp+1Bh] [bp-9h]
  unsigned __int8 v23; // [sp+1Ch] [bp-8h]
  char v24; // [sp+1Dh] [bp-7h]

  v6 = (pthread_mutex_t *)(a1 + 848);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  v10 = 0;
  queue_clear(*(_DWORD *)(a1 + 824));
  v11 = 0;
  sub_12E934(a5, a6, 1000, 0);
  v18[1] = (_DWORD)&loc_F4240 * v12;
  v18[0] = sub_12E934(a5, a6, 1000, 0);
  while ( a2 > v11 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v19, 10, v18) == 110 )
      {
        v10 = 3;
        goto LABEL_11;
      }
      if ( v19[0] != 170 || v19[1] != 85 || v20 != 8 )
      {
        v10 = 1;
        goto LABEL_11;
      }
      v13 = v24 & 0x1F;
      if ( v13 == BM_CRC5(&v20, 59) )
        break;
      v10 = 2;
    }
    ++v11;
    v15 = v23;
    v16 = v21;
    *(_BYTE *)(a3 + 4) = v22;
    *(_WORD *)(a3 + 6) = v15;
    *(_DWORD *)a3 = v16;
    a3 += 12;
  }
LABEL_11:
  *a4 = v11;
  pthread_mutex_unlock(v6);
  return v10;
}
