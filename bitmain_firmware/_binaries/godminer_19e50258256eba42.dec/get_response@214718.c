int __fastcall get_response(int a1)
{
  int v1; // r0
  int (**v2)(); // r0
  int v3; // r3
  __useconds_t v4; // r3
  _BYTE v6[32]; // [sp+1Ch] [bp-1120h] BYREF
  char v7[256]; // [sp+101Ch] [bp-120h] BYREF
  size_t n; // [sp+111Ch] [bp-20h]
  __useconds_t v9; // [sp+1120h] [bp-1Ch]
  char *s; // [sp+1124h] [bp-18h]
  __useconds_t useconds; // [sp+1128h] [bp-14h]
  int v12; // [sp+112Ch] [bp-10h]
  unsigned int v13; // [sp+1130h] [bp-Ch]
  int v14; // [sp+1134h] [bp-8h]

  v14 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(v14 + 264));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v6, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "get_response",
    12,
    346,
    40,
    v6);
  prctl(15, s);
  memset(v7, 0, sizeof(v7));
  v9 = 64;
  useconds = 64;
  v12 = 0;
  v13 = 1;
  while ( 1 )
  {
    v2 = dev_ctrl();
    n = ((int (__fastcall *)(_DWORD, char *, int))v2[19])(*(_DWORD *)(v14 + 264), v7, 256);
    if ( *(_BYTE *)(v14 + 937) )
      break;
    if ( (int)n <= 0 )
    {
      usleep(useconds);
      useconds *= 2;
      v4 = useconds;
      if ( useconds >= 0x3E8 )
        v4 = 1000;
      useconds = v4;
    }
    else
    {
      if ( (unsigned __int8)queue_enqueue(*(_DWORD *)(v14 + 896), v7, n) != 1 && ++v12 >= v13 )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(v14 + 272));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response",
          12,
          366,
          40,
          v6);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "enqueue_fail_cnt = %d, enqueue_fail_limit = %d", v12, v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response",
          12,
          367,
          40,
          v6);
        v3 = (int)&unk_989680;
        if ( 10 * v13 < (unsigned int)&unk_989680 )
          v3 = 10 * v13;
        v13 = v3;
        v12 = 0;
      }
      useconds = v9;
      memset(v7, 0, n);
    }
  }
  *(_BYTE *)(v14 + 937) = 0;
  return 0;
}
