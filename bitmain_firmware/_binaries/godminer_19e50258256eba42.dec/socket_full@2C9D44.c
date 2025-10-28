int __fastcall socket_full(int a1, __time_t a2)
{
  int v3; // r3
  _BYTE v6[20]; // [sp+18h] [bp-1094h] BYREF
  fd_set readfds; // [sp+1018h] [bp-94h] BYREF
  struct timeval timeout; // [sp+1098h] [bp-14h] BYREF
  unsigned int i; // [sp+10A0h] [bp-Ch]
  fd_set *p_readfds; // [sp+10A4h] [bp-8h]

  if ( a1 == -1 )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "socket invalid!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/socket.c",
      151,
      "socket_full",
      11,
      53,
      20,
      v6);
    return 0;
  }
  else
  {
    p_readfds = &readfds;
    for ( i = 0; i <= 0x1F; ++i )
      p_readfds->__fds_bits[i] = 0;
    LOBYTE(v3) = a1 & 0x1F;
    if ( a1 <= 0 )
      v3 = -(-a1 & 0x1F);
    readfds.__fds_bits[a1 / 32] |= 1 << v3;
    timeout.tv_sec = a2;
    timeout.tv_usec = 0;
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "socket_full before select");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/socket.c",
      151,
      "socket_full",
      11,
      61,
      20,
      v6);
    if ( select(a1 + 1, &readfds, 0, 0, &timeout) <= 0 )
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "socket_full select false");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/socket.c",
        151,
        "socket_full",
        11,
        66,
        20,
        v6);
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "socket_full select true");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/socket.c",
        151,
        "socket_full",
        11,
        63,
        20,
        v6);
      return 1;
    }
  }
}
