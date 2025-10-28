int __fastcall nonce_pop_handler_grin29(int a1, _DWORD *a2, int a3)
{
  __int64 v5; // r6
  int v6; // r3
  int *v7; // r3
  int v8; // r0
  int v9; // r1
  int v11; // r3
  void *v12; // r0
  char v13[4100]; // [sp+10h] [bp-1004h] BYREF

  v5 = *(_QWORD *)(a3 + 17);
  if ( v5 == strtoll((const char *)a2[288], 0, 10) )
  {
    v11 = *(_DWORD *)(a3 + 29);
    a2[284] = *(_DWORD *)(a3 + 25);
    a2[285] = v11;
    v12 = calloc(0x2Au, 4u);
    a2[291] = v12;
    if ( !v12 )
    {
      puts("calloc work->sols failed!");
      v12 = (void *)a2[291];
    }
    memcpy(v12, (const void *)(a3 + 35), 0xA8u);
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v6) = 10816;
    HIWORD(v6) = (unsigned int)"tum method %s!" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v6);
    V_UNLOCK();
    LOWORD(v7) = -14512;
    HIWORD(v7) = (unsigned int)&unk_16B55C >> 16;
    v8 = *v7;
    LOWORD(v7) = 10964;
    LOWORD(v9) = 11324;
    HIWORD(v7) = (unsigned int)"GodMiner/1.0.0\", null]}" >> 16;
    HIWORD(v9) = (unsigned int)"tranonce_ckb" >> 16;
    zlog(v8, v9, 163, v7, 24, 723, 20, v13);
    return 1;
  }
}
