int __fastcall scanhash_1(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  void *v5; // r8
  void *v6; // r11
  int v8; // r3
  unsigned int v9; // r10
  int v10; // r10
  int v11; // r9
  int v13; // r0
  int v14; // r3
  char v15; // [sp+0h] [bp-1234h]
  int v16; // [sp+10h] [bp-1224h]
  unsigned int v17; // [sp+14h] [bp-1220h]
  char v18; // [sp+1Ch] [bp-1218h]
  char v19; // [sp+27h] [bp-120Dh] BYREF
  int v20; // [sp+28h] [bp-120Ch] BYREF
  int v21; // [sp+2Ch] [bp-1208h] BYREF
  char s[512]; // [sp+30h] [bp-1204h] BYREF
  char v23[4100]; // [sp+230h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash_1", *(_DWORD *)(a1 + 240));
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v23, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_base.c",
    153,
    "scanhash_1",
    10,
    118,
    40,
    v23);
  v17 = 1;
  prctl(15, v2);
  v16 = 0;
  v4 = *(_DWORD *)(a1 + 860);
  v5 = calloc(1u, *(_DWORD *)(a1 + 832));
  v6 = calloc(1u, *(_DWORD *)(a1 + 836));
LABEL_2:
  memset(s, 0, sizeof(s));
  queue_dequeue(v4, s, 1u);
  if ( !*(_BYTE *)(a1 + 896) )
  {
    while ( 1 )
    {
      while ( (unsigned __int8)s[0] != 170 )
      {
        queue_dequeue(v4, s, 1u);
        check_and_print_uart_debug_log(a1 + 1016, 1, (unsigned __int8 *)s, *(_DWORD *)(a1 + 248), 0);
        if ( *(_BYTE *)(a1 + 896) )
          goto LABEL_5;
      }
      queue_dequeue(v4, &s[1], 1u);
      if ( *(_BYTE *)(a1 + 896) )
        break;
      if ( s[1] == 85 )
      {
        v18 = *(_BYTE *)(a1 + 896);
        queue_dequeue(v4, &s[2], 1u);
        v9 = (*(int (__fastcall **)(_DWORD))(a1 + 172))((unsigned __int8)s[2]);
        queue_dequeue(v4, &s[3], v9);
        v10 = v9 + 3;
        check_and_print_uart_debug_log(a1 + 1016, v10, (unsigned __int8 *)s, *(_DWORD *)(a1 + 248), v18);
        v11 = *(unsigned __int8 *)(a1 + 896);
        if ( *(_BYTE *)(a1 + 896) )
          break;
        memset(v5, *(unsigned __int8 *)(a1 + 896), *(_DWORD *)(a1 + 832));
        v20 = v11;
        v21 = v11;
        v19 = v11;
        if ( (*(int (__fastcall **)(int, char *, void *, char *, void *, int *, int *))(a1 + 68))(
               a1,
               s,
               v5,
               &v19,
               v6,
               &v20,
               &v21) == 10
          && !queue_enqueue(*(_DWORD *)(a1 + 868), s, v10)
          && v17 <= ++v16 )
        {
          V_LOCK();
          logfmt_raw(
            v23,
            0x1000u,
            0,
            "chain[%d], queue_enqueue of __low_priority_dag_packet_queue is false",
            *(_DWORD *)(a1 + 248));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_base.c",
            153,
            "scanhash_1",
            10,
            174,
            40,
            v23);
          V_LOCK();
          v13 = v16;
          v16 = 0;
          logfmt_raw(
            v23,
            0x1000u,
            0,
            "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
            v13,
            v17);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/backend/backend_base.c",
            153,
            "scanhash_1",
            10,
            175,
            40,
            v23);
          v14 = 10 * v17;
          if ( 10 * v17 >= 0x989680 )
            v14 = 10000000;
          v17 = v14;
        }
        goto LABEL_2;
      }
      v8 = *(_DWORD *)(a1 + 248);
      v15 = *(_BYTE *)(a1 + 896);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1016, 2, (unsigned __int8 *)s, v8, v15);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 896) = 0;
  free(v5);
  free(v6);
  return 0;
}
