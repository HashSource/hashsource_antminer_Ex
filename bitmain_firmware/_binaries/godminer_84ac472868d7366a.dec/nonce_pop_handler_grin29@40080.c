int __fastcall nonce_pop_handler_grin29(int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r4
  __int64 v4; // r6
  __int64 v5; // r0
  int v6; // r0
  int v8; // r3
  void *v9; // r0
  _BYTE v10[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = __PAIR64__(a2, a3);
  v4 = *(_QWORD *)(a3 + 17);
  v5 = strtoll((const char *)*(_DWORD *)(a2 + 1152), 0, 10);
  if ( v4 == v5 )
  {
    v8 = *(_DWORD *)(v3 + 29);
    *(_DWORD *)(HIDWORD(v3) + 1136) = *(_DWORD *)(v3 + 25);
    *(_DWORD *)(HIDWORD(v3) + 1140) = v8;
    v9 = calloc(0x2Au, 4u);
    *(_DWORD *)(HIDWORD(v3) + 1164) = v9;
    if ( !v9 )
    {
      puts("calloc work->sols failed!");
      v9 = *(void **)(HIDWORD(v3) + 1164);
    }
    memcpy(v9, (const void *)(v3 + 35), 0xA8u);
    return 0;
  }
  else
  {
    V_LOCK(v5);
    v6 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/frontend/frontend_grin29/frontend_grin29.c",
      163,
      "nonce_pop_handler_grin29",
      24,
      723,
      20,
      v10);
    return 1;
  }
}
