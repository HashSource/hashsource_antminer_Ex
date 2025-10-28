int __fastcall scanhash(int a1)
{
  char *v2; // r5
  int v3; // r0
  int v4; // r5
  void *v5; // r10
  int v7; // r3
  unsigned int v8; // r0
  int v9; // r9
  int v10; // r11
  int v11; // r0
  unsigned int v12; // r0
  int v13; // r1
  _QWORD *v14; // r9
  __int64 v15; // kr08_8
  int v16; // r1
  bool v17; // cc
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r3
  char v22; // [sp+0h] [bp-123Ch]
  char *ptr; // [sp+14h] [bp-1228h]
  int v24; // [sp+18h] [bp-1224h]
  unsigned int v25; // [sp+1Ch] [bp-1220h]
  int v26; // [sp+20h] [bp-121Ch]
  unsigned int v27; // [sp+24h] [bp-1218h]
  char v28; // [sp+2Fh] [bp-120Dh] BYREF
  int v29; // [sp+30h] [bp-120Ch] BYREF
  int v30; // [sp+34h] [bp-1208h] BYREF
  char s[512]; // [sp+38h] [bp-1204h] BYREF
  char v32[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "scanhash", *(_DWORD *)(a1 + 240));
  V_LOCK();
  v25 = 1;
  v3 = syscall(224);
  v24 = 0;
  logfmt_raw(v32, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_base.c",
    153,
    "scanhash",
    8,
    199,
    40,
    v32);
  prctl(15, v2);
  v4 = *(_DWORD *)(a1 + 856);
  v27 = 1;
  v5 = calloc(1u, *(_DWORD *)(a1 + 832));
  v26 = 0;
  ptr = (char *)calloc(1u, *(_DWORD *)(a1 + 836));
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
        queue_dequeue(v4, &s[2], 1u);
        v8 = (*(int (__fastcall **)(_DWORD))(a1 + 172))((unsigned __int8)s[2]);
        v9 = v8 + 3;
        queue_dequeue(v4, &s[3], v8);
        check_and_print_uart_debug_log(a1 + 1016, v9, (unsigned __int8 *)s, *(_DWORD *)(a1 + 248), 0);
        v10 = *(unsigned __int8 *)(a1 + 896);
        if ( *(_BYTE *)(a1 + 896) )
          break;
        memset(v5, *(unsigned __int8 *)(a1 + 896), *(_DWORD *)(a1 + 832));
        v29 = v10;
        v30 = v10;
        v28 = v10;
        v11 = (*(int (__fastcall **)(int, char *, void *, char *, char *, int *, int *))(a1 + 68))(
                a1,
                s,
                v5,
                &v28,
                ptr,
                &v29,
                &v30);
        if ( v11 == 10 )
        {
          if ( !queue_enqueue(*(_DWORD *)(a1 + 868), s, v9) )
          {
            v17 = v27 > ++v26;
            if ( !v17 )
            {
              V_LOCK();
              logfmt_raw(
                v32,
                0x1000u,
                0,
                "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false",
                *(_DWORD *)(a1 + 248));
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/backend_base.c",
                153,
                "scanhash",
                8,
                320,
                40,
                v32);
              V_LOCK();
              v20 = v26;
              v26 = 0;
              logfmt_raw(
                v32,
                0x1000u,
                0,
                "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
                v20,
                v27);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/backend_base.c",
                153,
                "scanhash",
                8,
                321,
                40,
                v32);
              v21 = 10 * v27;
              if ( 10 * v27 >= 0x989680 )
                v21 = 10000000;
              v27 = v21;
            }
          }
        }
        else if ( v11 == 11 )
        {
          ++*(_QWORD *)(*(_DWORD *)(a1 + 456) + 40);
        }
        else if ( !v11 && *(_BYTE *)(a1 + 254) )
        {
          if ( !*(_BYTE *)(a1 + v30 + 536) && v28 && platform_check_repeat_nonce((int *)a1, v29, ptr) )
          {
            ++*(_QWORD *)(*(_DWORD *)(a1 + 456) + 48 * v29 + 32);
          }
          else
          {
            v12 = (*(int (__fastcall **)(int, void *))(a1 + 72))(a1, v5);
            if ( v12 <= 5 )
            {
              v13 = v29;
              v14 = (_QWORD *)(*(_DWORD *)(a1 + 456) + 8 * v12 + 48 * v29);
              ++*v14;
              if ( v12 <= 1 )
              {
                v15 = *(_QWORD *)(a1 + 448) + 1LL;
                ++*(_DWORD *)(*(_DWORD *)(a1 + 480) + 4 * v13);
                v16 = v30;
                *(_QWORD *)(a1 + 448) = v15;
                ++*(_QWORD *)(a1 + 8 * v16 + 568);
                if ( !v12
                  && !*(_BYTE *)(a1 + v16 + 536)
                  && !queue_enqueue(*(_DWORD *)(*(_DWORD *)(a1 + 872) + 864), (char *)v5, 1) )
                {
                  v17 = v25 > ++v24;
                  if ( !v17 )
                  {
                    V_LOCK();
                    logfmt_raw(
                      v32,
                      0x1000u,
                      0,
                      "chain[%d], queue_enqueue of __nonce_retrieve_queue is false",
                      *(_DWORD *)(a1 + 248));
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/backend/backend_base.c",
                      153,
                      "scanhash",
                      8,
                      291,
                      40,
                      v32);
                    V_LOCK();
                    v18 = v24;
                    v24 = 0;
                    logfmt_raw(v32, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v18, v25);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/bu"
                      "ild/godminer-origin_godminer-new/backend/backend_base.c",
                      153,
                      "scanhash",
                      8,
                      292,
                      40,
                      v32);
                    v19 = 10 * v25;
                    if ( 10 * v25 >= 0x989680 )
                      v19 = 10000000;
                    v25 = v19;
                  }
                }
              }
            }
          }
        }
        goto LABEL_2;
      }
      v7 = *(_DWORD *)(a1 + 248);
      v22 = *(_BYTE *)(a1 + 896);
      s[0] = s[1];
      check_and_print_uart_debug_log(a1 + 1016, 2, (unsigned __int8 *)s, v7, v22);
    }
  }
LABEL_5:
  *(_BYTE *)(a1 + 896) = 0;
  free(v5);
  free(ptr);
  return 0;
}
