int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int v7; // r5
  void *v8; // r8
  char *v9; // r9
  int v10; // r3
  unsigned int v12; // r11
  int v13; // r10
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r1
  _QWORD *v17; // r10
  __int64 v18; // kr08_8
  int v19; // r1
  char v20; // [sp+17h] [bp-100Dh] BYREF
  int v21; // [sp+18h] [bp-100Ch] BYREF
  int v22; // [sp+1Ch] [bp-1008h] BYREF
  char v23[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 136));
  V_LOCK();
  v3 = syscall(224);
  LOWORD(v4) = -3872;
  HIWORD(v4) = (unsigned int)"gain in 30sec" >> 16;
  logfmt_raw(v23, 0x1000u, 0, v4, v2, v3);
  V_UNLOCK();
  LOWORD(v5) = -14512;
  HIWORD(v5) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v6) = -1592;
  HIWORD(v6) = (unsigned int)"ase/build/godminer-origin_master/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(*v5, v6, 143, "scanhash", 8, 99, 60, v23);
  prctl(15, v2);
  v7 = *(_DWORD *)(a1 + 656);
  v8 = calloc(1u, *(_DWORD *)(a1 + 632));
  v9 = (char *)calloc(1u, *(_DWORD *)(a1 + 636));
  while ( 1 )
  {
    memset(v23, 0, 0x200u);
    queue_dequeue(v7, v23, 1u);
    if ( *(_BYTE *)(a1 + 684) )
      break;
LABEL_5:
    v10 = (unsigned __int8)v23[0];
    while ( 1 )
    {
      if ( v10 != 170 )
      {
        queue_dequeue(v7, v23, 1u);
        if ( *(_BYTE *)(a1 + 684) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v7, &v23[1], 1u);
      if ( *(_BYTE *)(a1 + 684) )
        goto LABEL_10;
      v10 = (unsigned __int8)v23[1];
      if ( v23[1] == 85 )
        break;
      v23[0] = v23[1];
    }
    queue_dequeue(v7, &v23[2], 1u);
    v12 = (*(int (__fastcall **)(_DWORD))(a1 + 120))((unsigned __int8)v23[2]);
    queue_dequeue(v7, &v23[3], v12);
    v13 = *(unsigned __int8 *)(a1 + 684);
    if ( *(_BYTE *)(a1 + 684) )
      break;
    memset(v8, *(unsigned __int8 *)(a1 + 684), *(_DWORD *)(a1 + 632));
    v21 = v13;
    v22 = v13;
    v20 = v13;
    v14 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 60))(
            a1,
            v23,
            v8,
            &v20,
            v9,
            &v21,
            &v22);
    if ( v14 == 1 )
    {
      queue_enqueue(*(_DWORD *)(a1 + 664), v23, v12 + 3);
    }
    else if ( v14 )
    {
      if ( v14 == 2 )
        ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 40);
    }
    else if ( !*(_BYTE *)(a1 + v22 + 336) && v20 && platform_check_repeat_nonce((int *)a1, v21, v9) )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v21 + 32);
    }
    else
    {
      v15 = (*(int (__fastcall **)(int, void *))(a1 + 64))(a1, v8);
      if ( v15 <= 5 )
      {
        v16 = v21;
        v17 = (_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v21 + 8 * v15);
        ++*v17;
        if ( v15 <= 1 )
        {
          v18 = *(_QWORD *)(a1 + 256) + 1LL;
          ++*(_DWORD *)(*(_DWORD *)(a1 + 288) + 4 * v16);
          v19 = v22;
          *(_QWORD *)(a1 + 256) = v18;
          ++*(_QWORD *)(a1 + 8 * v19 + 368);
          if ( !v15 && !*(_BYTE *)(a1 + v19 + 336) )
            queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 668) + 660), (char *)v8, 1);
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 684) = 0;
  free(v8);
  free(v9);
  return 0;
}
