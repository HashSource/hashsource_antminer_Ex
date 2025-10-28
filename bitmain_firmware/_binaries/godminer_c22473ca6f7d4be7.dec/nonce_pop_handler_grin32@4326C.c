int __fastcall nonce_pop_handler_grin32(int a1, _DWORD *a2, int a3)
{
  __int64 v5; // r6
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r1
  int v10; // r3
  void *v11; // r0
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = *(_QWORD *)(a3 + 17);
  if ( v5 == strtoll((const char *)a2[288], 0, 10) )
  {
    v10 = *(_DWORD *)(a3 + 29);
    a2[284] = *(_DWORD *)(a3 + 25);
    a2[285] = v10;
    v11 = calloc(0x2Au, 4u);
    a2[291] = v11;
    if ( !v11 )
    {
      puts("calloc work->sols failed!");
      v11 = (void *)a2[291];
    }
    memcpy(v11, (const void *)(a3 + 35), 0xA8u);
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v6) = 10816;
    HIWORD(v6) = (unsigned int)"tum method %s!" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v6);
    V_UNLOCK();
    LOWORD(v7) = -14512;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v8) = 13148;
    HIWORD(v8) = (unsigned int)"handle_method_eth" >> 16;
    zlog(*v7, v8, 163, "nonce_pop_handler_grin32", 24, 716, 20, v12);
    return 1;
  }
}
