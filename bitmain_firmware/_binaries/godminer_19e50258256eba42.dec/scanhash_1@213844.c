int __fastcall scanhash_1(int a1)
{
  int v1; // r0
  int v2; // r3
  _BYTE v4[68]; // [sp+18h] [bp-1244h] BYREF
  char v5; // [sp+101Bh] [bp-241h] BYREF
  int v6; // [sp+101Ch] [bp-240h] BYREF
  int v7; // [sp+1020h] [bp-23Ch] BYREF
  char v8[512]; // [sp+1024h] [bp-238h] BYREF
  int v9; // [sp+1224h] [bp-38h]
  int v10; // [sp+1228h] [bp-34h]
  int v11; // [sp+122Ch] [bp-30h]
  int v12; // [sp+1230h] [bp-2Ch]
  void *v13; // [sp+1234h] [bp-28h]
  void *ptr; // [sp+1238h] [bp-24h]
  int v15; // [sp+123Ch] [bp-20h]
  char *s; // [sp+1240h] [bp-1Ch]
  int v17; // [sp+1244h] [bp-18h]
  unsigned int v18; // [sp+1248h] [bp-14h]
  int v19; // [sp+124Ch] [bp-10h]

  v19 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "scanhash_1", *(_DWORD *)(v19 + 264));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v4, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "scanhash_1",
    10,
    118,
    40,
    v4);
  prctl(15, s);
  v15 = *(_DWORD *)(v19 + 900);
  memset(v8, 0, sizeof(v8));
  ptr = calloc(1u, *(_DWORD *)(v19 + 872));
  v13 = calloc(1u, *(_DWORD *)(v19 + 876));
  v17 = 0;
  v18 = 1;
  v12 = 0;
  v11 = 1;
  while ( 1 )
  {
    memset(v8, 0, sizeof(v8));
    queue_dequeue(v15, v8, 1u);
    if ( *(_BYTE *)(v19 + 938) )
    {
      *(_BYTE *)(v19 + 938) = 0;
      goto LABEL_21;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)v8[0] != 170 )
      {
        queue_dequeue(v15, v8, 1u);
        sub_213264(v19 + 1072, 1, (unsigned __int8 *)v8, *(_DWORD *)(v19 + 272));
        if ( *(_BYTE *)(v19 + 938) )
        {
          *(_BYTE *)(v19 + 938) = 0;
          goto LABEL_21;
        }
      }
      queue_dequeue(v15, &v8[1], 1u);
      if ( *(_BYTE *)(v19 + 938) )
      {
        *(_BYTE *)(v19 + 938) = 0;
        goto LABEL_21;
      }
      if ( v8[1] == 85 )
        break;
      v8[0] = v8[1];
      sub_213264(v19 + 1072, 2, (unsigned __int8 *)v8, *(_DWORD *)(v19 + 272));
    }
    queue_dequeue(v15, &v8[2], 1u);
    v10 = (*(int (__fastcall **)(_DWORD))(v19 + 188))((unsigned __int8)v8[2]);
    queue_dequeue(v15, &v8[3], v10 - 1);
    sub_213264(v19 + 1072, v10 + 3, (unsigned __int8 *)v8, *(_DWORD *)(v19 + 272));
    if ( *(_BYTE *)(v19 + 938) )
      break;
    memset(ptr, 0, *(_DWORD *)(v19 + 872));
    v7 = 0;
    v6 = 0;
    v5 = 0;
    v9 = (*(int (__fastcall **)(int, char *, void *, char *, void *, int *, int *))(v19 + 84))(
           v19,
           v8,
           ptr,
           &v5,
           v13,
           &v7,
           &v6);
    if ( v9 == 10 && (unsigned __int8)queue_enqueue(*(_DWORD *)(v19 + 908), v8, v10 + 3) != 1 && ++v17 >= v18 )
    {
      V_LOCK();
      logfmt_raw(
        v4,
        0x1000u,
        0,
        "chain[%d], queue_enqueue of __low_priority_dag_packet_queue is false",
        *(_DWORD *)(v19 + 272));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_base.c",
        150,
        "scanhash_1",
        10,
        174,
        40,
        v4);
      V_LOCK();
      logfmt_raw(v4, 0x1000u, 0, "low_priority_enqueue_fail_cnt = %d, low_priority_enqueue_fail_limit = %d", v17, v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_base.c",
        150,
        "scanhash_1",
        10,
        175,
        40,
        v4);
      v2 = (int)&unk_989680;
      if ( 10 * v18 < (unsigned int)&unk_989680 )
        v2 = 10 * v18;
      v18 = v2;
      v17 = 0;
    }
  }
  *(_BYTE *)(v19 + 938) = 0;
LABEL_21:
  free(ptr);
  free(v13);
  return 0;
}
