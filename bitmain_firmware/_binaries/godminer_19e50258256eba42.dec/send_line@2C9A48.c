int __fastcall send_line(int a1, const char *a2)
{
  size_t v3; // r3
  int v4; // r3
  fd_set v8[32]; // [sp+1Ch] [bp-1020h] BYREF
  struct timeval timeout; // [sp+101Ch] [bp-20h] BYREF
  fd_set *v10; // [sp+1024h] [bp-18h]
  unsigned int i; // [sp+1028h] [bp-14h]
  ssize_t v12; // [sp+102Ch] [bp-10h]
  size_t n; // [sp+1030h] [bp-Ch]
  int v14; // [sp+1034h] [bp-8h]

  v14 = 0;
  if ( a1 == -1 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "socket invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/socket.c",
      151,
      "send_line",
      9,
      12,
      20,
      v8);
    return 0;
  }
  else
  {
    n = strlen(a2);
    if ( a2[n - 1] != 10 )
    {
      v3 = n++;
      a2[v3] = 10;
      a2[n] = 0;
    }
    while ( (int)n > 0 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 0;
      v10 = v8;
      for ( i = 0; i <= 0x1F; ++i )
        v10->__fds_bits[i] = 0;
      LOBYTE(v4) = a1 & 0x1F;
      if ( a1 <= 0 )
        v4 = -(-a1 & 0x1F);
      v8[0].__fds_bits[a1 / 32] |= 1 << v4;
      if ( select(a1 + 1, 0, v8, 0, &timeout) <= 0 )
        return 0;
      v12 = send(a1, &a2[v14], n, 0x4000);
      if ( v12 < 0 )
      {
        if ( !sub_2C99FC() )
          return 0;
        v12 = 0;
      }
      v14 += v12;
      n -= v12;
    }
    return 1;
  }
}
