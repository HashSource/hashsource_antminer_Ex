int __fastcall get_response(int a1)
{
  unsigned int v2; // r8
  char *v3; // r4
  int v4; // r0
  int v5; // r0
  void *v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r7
  size_t v10; // r4
  __useconds_t v11; // r0
  _BYTE v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v2 = 64;
  v3 = (char *)calloc(1u, 0x40u);
  v4 = snprintf(v3, 0x40u, "%.10s_%d", "get_response", *(_DWORD *)(a1 + 144));
  V_LOCK(v4);
  syscall(224);
  v5 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v5);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_base.c",
    143,
    "get_response",
    12,
    189,
    60,
    v13);
  prctl(15, v3);
  v6 = memset(v13, 0, 0x100u);
  while ( 1 )
  {
    v7 = dev_ctrl((int)v6);
    v8 = (*(int (__fastcall **)(_DWORD, _BYTE *, int))(v7 + 52))(*(_DWORD *)(a1 + 144), v13, 256);
    v9 = *(unsigned __int8 *)(a1 + 693);
    v10 = v8;
    if ( *(_BYTE *)(a1 + 693) )
      break;
    if ( v8 <= 0 )
    {
      v11 = v2;
      v2 *= 2;
      v6 = (void *)usleep(v11);
      if ( v2 >= 0x3E8 )
        v2 = 1000;
    }
    else
    {
      v2 = 64;
      queue_enqueue(*(_DWORD *)(a1 + 664), v13, v8);
      v6 = memset(v13, v9, v10);
    }
  }
  *(_BYTE *)(a1 + 693) = 0;
  return 0;
}
