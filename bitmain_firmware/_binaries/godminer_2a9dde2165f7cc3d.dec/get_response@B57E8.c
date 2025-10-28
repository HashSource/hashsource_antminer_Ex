int __fastcall get_response(int a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r10
  unsigned int v6; // r6
  int v7; // r7
  void *v8; // r0
  int v9; // r0
  int v10; // r0
  size_t v11; // r4
  __useconds_t v12; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _BYTE s[256]; // [sp+20h] [bp-1104h] BYREF
  _BYTE v18[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  v3 = snprintf(v2, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 220));
  V_LOCK(v3);
  syscall(224);
  v4 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_base.c",
    153,
    "get_response",
    12,
    253,
    40,
    v18);
  v5 = 1;
  v6 = 64;
  prctl(15, v2);
  v7 = 0;
  v8 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v9 = dev_ctrl((int)v8);
    v10 = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(v9 + 60))(*(_DWORD *)(a1 + 220), s, 256);
    v11 = v10;
    if ( *(_BYTE *)(a1 + 845) )
      break;
    if ( v10 <= 0 )
    {
      v12 = v6;
      v6 *= 2;
      v8 = (void *)usleep(v12);
      if ( v6 >= 0x3E8 )
        v6 = 1000;
    }
    else
    {
      v6 = 64;
      if ( !queue_enqueue(*(_DWORD *)(a1 + 816), s, v10) && v5 <= ++v7 )
      {
        V_LOCK(0);
        v14 = logfmt_raw((int)v18, 0x1000u);
        V_UNLOCK(v14);
        v15 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/backend/backend_base.c",
                153,
                "get_response",
                12,
                276,
                40,
                v18);
        V_LOCK(v15);
        v7 = 0;
        v5 *= 10;
        v16 = logfmt_raw((int)v18, 0x1000u);
        V_UNLOCK(v16);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_base.c",
          153,
          "get_response",
          12,
          277,
          40,
          v18);
        if ( v5 >= 0x989680 )
          v5 = 10000000;
      }
      v8 = memset(s, 0, v11);
    }
  }
  *(_BYTE *)(a1 + 845) = 0;
  return 0;
}
