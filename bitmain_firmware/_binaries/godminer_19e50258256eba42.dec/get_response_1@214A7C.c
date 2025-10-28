int __fastcall get_response_1(int a1)
{
  int v1; // r0
  int (**v2)(); // r0
  int v3; // r3
  __useconds_t v4; // r3
  _BYTE v6[40]; // [sp+1Ch] [bp-2028h] BYREF
  char v7[4096]; // [sp+101Ch] [bp-1028h] BYREF
  size_t n; // [sp+201Ch] [bp-28h]
  __useconds_t v9; // [sp+2020h] [bp-24h]
  __useconds_t useconds; // [sp+2024h] [bp-20h]
  int v11; // [sp+2028h] [bp-1Ch]
  unsigned int v12; // [sp+202Ch] [bp-18h]
  int v13; // [sp+2030h] [bp-14h]
  char *s; // [sp+2034h] [bp-10h]

  v13 = a1;
  s = (char *)calloc(1u, 0x40u);
  snprintf(s, 0x40u, "%.10s_%d", "get_response_1", *(_DWORD *)(v13 + 268));
  V_LOCK();
  v1 = syscall(224);
  logfmt_raw(v6, 0x1000u, 0, "%s on pid %ld", s, v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_base.c",
    150,
    "get_response_1",
    14,
    390,
    40,
    v6);
  prctl(15, s);
  memset(v7, 0, sizeof(v7));
  v9 = 64;
  useconds = 64;
  v11 = 0;
  v12 = 1;
  while ( 1 )
  {
    v2 = dev_ctrl();
    n = ((int (__fastcall *)(int, char *, int))v2[20])(14, v7, 256);
    getresponce_1_len += n;
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s, %d, %d\n", "get_response_1", n, getresponce_1_len);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_base.c",
      150,
      "get_response_1",
      14,
      405,
      20,
      v6);
    if ( *(_BYTE *)(v13 + 937) )
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
      if ( (unsigned __int8)queue_enqueue(*(_DWORD *)(v13 + 900), v7, n) != 1 && ++v11 >= v12 )
      {
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "chain[%d], queue_enqueue of __resp_packet_queue is false", *(_DWORD *)(v13 + 272));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response_1",
          14,
          417,
          40,
          v6);
        V_LOCK();
        logfmt_raw(v6, 0x1000u, 0, "enqueue_fail_cnt = %d, enqueue_fail_limit = %d", v11, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_base.c",
          150,
          "get_response_1",
          14,
          418,
          40,
          v6);
        v3 = (int)&unk_989680;
        if ( 10 * v12 < (unsigned int)&unk_989680 )
          v3 = 10 * v12;
        v12 = v3;
        v11 = 0;
      }
      useconds = v9;
      memset(v7, 0, n);
    }
  }
  *(_BYTE *)(v13 + 937) = 0;
  return 0;
}
