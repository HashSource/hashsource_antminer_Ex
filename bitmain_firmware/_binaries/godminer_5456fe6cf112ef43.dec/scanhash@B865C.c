int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r5
  void *v6; // r8
  char *v7; // r9
  int v8; // r3
  int v10; // r11
  int v11; // r10
  int v12; // r0
  unsigned int v13; // r0
  int v14; // r1
  _QWORD *v15; // r10
  __int64 v16; // kr08_8
  int v17; // r1
  char v18; // [sp+17h] [bp-100Dh] BYREF
  int v19; // [sp+18h] [bp-100Ch] BYREF
  int v20; // [sp+1Ch] [bp-1008h] BYREF
  _BYTE v21[4100]; // [sp+20h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 136));
  V_LOCK(v3);
  syscall(224);
  v4 = logfmt_raw((int)v21, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "scanhash",
    8,
    99,
    60,
    v21);
  prctl(15, v2);
  v5 = *(_DWORD *)(a1 + 656);
  v6 = calloc(1u, *(_DWORD *)(a1 + 632));
  v7 = (char *)calloc(1u, *(_DWORD *)(a1 + 636));
  while ( 1 )
  {
    memset(v21, 0, 0x200u);
    queue_dequeue(v5, v21, 1);
    if ( *(_BYTE *)(a1 + 684) )
      break;
LABEL_5:
    v8 = v21[0];
    while ( 1 )
    {
      if ( v8 != 170 )
      {
        queue_dequeue(v5, v21, 1);
        if ( *(_BYTE *)(a1 + 684) )
          goto LABEL_10;
        goto LABEL_5;
      }
      queue_dequeue(v5, &v21[1], 1);
      if ( *(_BYTE *)(a1 + 684) )
        goto LABEL_10;
      v8 = v21[1];
      if ( v21[1] == 85 )
        break;
      v21[0] = v21[1];
    }
    queue_dequeue(v5, &v21[2], 1);
    v10 = (*(int (__fastcall **)(_DWORD))(a1 + 120))(v21[2]);
    queue_dequeue(v5, &v21[3], v10);
    v11 = *(unsigned __int8 *)(a1 + 684);
    if ( *(_BYTE *)(a1 + 684) )
      break;
    memset(v6, *(unsigned __int8 *)(a1 + 684), *(_DWORD *)(a1 + 632));
    v19 = v11;
    v20 = v11;
    v18 = v11;
    v12 = (*(int (__fastcall **)(int, _BYTE *, void *, char *, char *, int *, int *))(a1 + 60))(
            a1,
            v21,
            v6,
            &v18,
            v7,
            &v19,
            &v20);
    if ( v12 == 1 )
    {
      queue_enqueue(*(_DWORD *)(a1 + 664), v21, v10 + 3);
    }
    else if ( v12 )
    {
      if ( v12 == 2 )
        ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 40);
    }
    else if ( !*(_BYTE *)(a1 + v20 + 336) && v18 && platform_check_repeat_nonce(a1, v19, v7) )
    {
      ++*(_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v19 + 32);
    }
    else
    {
      v13 = (*(int (__fastcall **)(int, void *))(a1 + 64))(a1, v6);
      if ( v13 <= 5 )
      {
        v14 = v19;
        v15 = (_QWORD *)(*(_DWORD *)(a1 + 264) + 48 * v19 + 8 * v13);
        ++*v15;
        if ( v13 <= 1 )
        {
          v16 = *(_QWORD *)(a1 + 256) + 1LL;
          ++*(_DWORD *)(*(_DWORD *)(a1 + 288) + 4 * v14);
          v17 = v20;
          *(_QWORD *)(a1 + 256) = v16;
          ++*(_QWORD *)(a1 + 8 * v17 + 368);
          if ( !v13 && !*(_BYTE *)(a1 + v17 + 336) )
            queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 668) + 660), v6, 1);
        }
      }
    }
  }
LABEL_10:
  *(_BYTE *)(a1 + 684) = 0;
  free(v6);
  free(v7);
  return 0;
}
