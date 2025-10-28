int __fastcall scanhash(_DWORD *a1)
{
  int v1; // r0
  int v2; // r3
  int v3; // r1
  int v4; // r3
  int v6; // [sp+Ch] [bp-1280h]
  __int64 v7; // [sp+10h] [bp-127Ch]
  _BYTE v8[24]; // [sp+34h] [bp-1258h] BYREF
  char v9; // [sp+1037h] [bp-255h] BYREF
  int v10; // [sp+1038h] [bp-254h] BYREF
  int v11; // [sp+103Ch] [bp-250h] BYREF
  char v12[512]; // [sp+1040h] [bp-24Ch] BYREF
  unsigned int v13; // [sp+1240h] [bp-4Ch]
  int v14; // [sp+1244h] [bp-48h]
  int v15; // [sp+1248h] [bp-44h]
  void *v16; // [sp+124Ch] [bp-40h]
  void *ptr; // [sp+1250h] [bp-3Ch]
  int v18; // [sp+1254h] [bp-38h]
  char *s; // [sp+1258h] [bp-34h]
  _DWORD *v20; // [sp+125Ch] [bp-30h]
  int v21; // [sp+1260h] [bp-2Ch]
  unsigned int v22; // [sp+1264h] [bp-28h]
  int v23; // [sp+1268h] [bp-24h]
  unsigned int v24; // [sp+126Ch] [bp-20h]

  v20 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "scanhash", v20[66]);
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v8, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "scanhash",
    8,
    199,
    40,
    v8);
  prctl(15, s);
  v18 = v20[224];
  memset(v12, 0, sizeof(v12));
  ptr = calloc(1u, v20[218]);
  v16 = calloc(1u, v20[219]);
  v21 = 0;
  v22 = 1;
  v23 = 0;
  v24 = 1;
  while ( 1 )
  {
    memset(v12, 0, sizeof(v12));
    queue_dequeue(v18, v12, 1u);
    if ( *((_BYTE *)v20 + 936) )
    {
      *((_BYTE *)v20 + 936) = 0;
      goto LABEL_38;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)v12[0] != 170 )
      {
        queue_dequeue(v18, v12, 1u);
        sub_213264((int)(v20 + 268), 1, (unsigned __int8 *)v12, v20[68]);
        if ( *((_BYTE *)v20 + 936) )
        {
          *((_BYTE *)v20 + 936) = 0;
          goto LABEL_38;
        }
      }
      queue_dequeue(v18, &v12[1], 1u);
      if ( *((_BYTE *)v20 + 936) )
      {
        *((_BYTE *)v20 + 936) = 0;
        goto LABEL_38;
      }
      if ( v12[1] == 85 )
        break;
      v12[0] = v12[1];
      sub_213264((int)(v20 + 268), 2, (unsigned __int8 *)v12, v20[68]);
    }
    queue_dequeue(v18, &v12[2], 1u);
    v15 = ((int (__fastcall *)(_DWORD))v20[47])((unsigned __int8)v12[2]);
    queue_dequeue(v18, &v12[3], v15 - 1);
    sub_213264((int)(v20 + 268), v15 + 3, (unsigned __int8 *)v12, v20[68]);
    if ( *((_BYTE *)v20 + 936) )
      break;
    memset(ptr, 0, v20[218]);
    v11 = 0;
    v10 = 0;
    v9 = 0;
    v14 = ((int (__fastcall *)(_DWORD *, char *, void *, char *, void *, int *, int *, int, _DWORD, _DWORD))v20[21])(
            v20,
            v12,
            ptr,
            &v9,
            v16,
            &v11,
            &v10,
            v6,
            v7,
            HIDWORD(v7));
    switch ( v14 )
    {
      case 0:
        if ( *((_BYTE *)v20 + 279) == 1 )
        {
          if ( *((_BYTE *)v20 + v10 + 576) != 1 && v9 && platform_check_repeat_nonce(v20, v11, (unsigned __int8 *)v16) )
          {
            ++*(_QWORD *)(v20[124] + 48 * v11 + 32);
          }
          else
          {
            v13 = ((int (__fastcall *)(_DWORD *, void *))v20[22])(v20, ptr);
            if ( v13 <= 5 )
            {
              ++*(_QWORD *)(v20[124] + 48 * v11 + 8 * v13);
              if ( v13 <= 1 )
              {
                ++*(_DWORD *)(v20[130] + 4 * v11);
                ++*((_QWORD *)v20 + 61);
                ++*(_QWORD *)&v20[2 * v10 + 152];
                if ( !v13
                  && *((_BYTE *)v20 + v10 + 576) != 1
                  && (unsigned __int8)queue_enqueue(*(_DWORD *)(v20[228] + 904), (char *)ptr, 1) != 1
                  && ++v23 >= v24 )
                {
                  V_LOCK();
                  logfmt_raw(v8, 0x1000u, 0, "chain[%d], queue_enqueue of __nonce_retrieve_queue is false", v20[68]);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_base.c",
                    150,
                    "scanhash",
                    8,
                    291,
                    40,
                    v8);
                  V_LOCK();
                  logfmt_raw(v8, 0x1000u, 0, "nonce_enqueue_fail_cnt = %d, nonce_enqueue_fail_limit = %d", v23, v24);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_base.c",
                    150,
                    "scanhash",
                    8,
                    292,
                    40,
                    v8);
                  v2 = (int)&unk_989680;
                  if ( 10 * v24 < (unsigned int)&unk_989680 )
                    v2 = 10 * v24;
                  v24 = v2;
                  v23 = 0;
                }
              }
            }
          }
        }
        break;
      case 10:
        if ( (unsigned __int8)queue_enqueue(v20[227], v12, v15 + 2) != 1 && ++v21 >= v22 )
        {
          V_LOCK();
          logfmt_raw(v8, 0x1000u, 0, "chain[%d], queue_enqueue of __low_priority_resp_packet_queue is false", v20[68]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_base.c",
            150,
            "scanhash",
            8,
            320,
            40,
            v8);
          V_LOCK();
          logfmt_raw(
            v8,
            0x1000u,
            0,
            "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d",
            v21,
            v22);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_base.c",
            150,
            "scanhash",
            8,
            321,
            40,
            v8);
          v4 = (int)&unk_989680;
          if ( 10 * v22 < (unsigned int)&unk_989680 )
            v4 = 10 * v22;
          v22 = v4;
          v21 = 0;
        }
        break;
      case 11:
        v3 = v20[124];
        v7 = *(_QWORD *)(v3 + 40) + 1LL;
        *(_QWORD *)(v3 + 40) = v7;
        break;
      default:
        continue;
    }
  }
  *((_BYTE *)v20 + 936) = 0;
LABEL_38:
  free(ptr);
  free(v16);
  return 0;
}
