int __fastcall socket_full(int a1, __time_t a2)
{
  int v2; // r4
  fd_set *p_tv_usec; // r3
  _DWORD *v4; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v10; // r3
  int v11; // r1
  int v12; // r3
  _DWORD *v13; // r3
  int v14; // r1
  struct timeval timeout; // [sp+10h] [bp-108Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-1084h] BYREF
  char v17[4100]; // [sp+98h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    LOWORD(v12) = 7068;
    HIWORD(v12) = (unsigned int)"%s  bits=%u\n" >> 16;
    logfmt_raw(v17, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v13) = -14512;
    HIWORD(v13) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v14) = 7084;
    HIWORD(v14) = (unsigned int)&algn_140EC1[3] >> 16;
    zlog(*v13, v14, 144, "socket_full", 11, 47, 20, v17);
    return 0;
  }
  else
  {
    v2 = a1;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
    timeout.tv_usec = 0;
    timeout.tv_sec = a2;
    LOBYTE(a1) = a1 & 0x1F;
    if ( v2 <= 0 )
      a1 = -(-v2 & 0x1F);
    LOWORD(v4) = -14512;
    HIWORD(v4) = (unsigned int)&unk_16B55C >> 16;
    readfds.__fds_bits[v2 / 32] |= 1 << a1;
    V_LOCK();
    LOWORD(v5) = 7232;
    HIWORD(v5) = (unsigned int)&unk_140F58 >> 16;
    logfmt_raw(v17, 0x1000u, 0, v5);
    V_UNLOCK();
    LOWORD(v6) = 7084;
    HIWORD(v6) = (unsigned int)&algn_140EC1[3] >> 16;
    zlog(*v4, v6, 144, "socket_full", 11, 55, 20, v17);
    if ( select(v2 + 1, &readfds, 0, 0, &timeout) <= 0 )
    {
      V_LOCK();
      LOWORD(v10) = 7284;
      HIWORD(v10) = (unsigned int)&unk_140F8C >> 16;
      logfmt_raw(v17, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v11) = 7084;
      HIWORD(v11) = (unsigned int)&algn_140EC1[3] >> 16;
      zlog(*v4, v11, 144, "socket_full", 11, 60, 20, v17);
      return 0;
    }
    else
    {
      V_LOCK();
      LOWORD(v7) = 7260;
      HIWORD(v7) = (unsigned int)&unk_140F74 >> 16;
      logfmt_raw(v17, 0x1000u, 0, v7);
      V_UNLOCK();
      LOWORD(v8) = 7084;
      HIWORD(v8) = (unsigned int)&algn_140EC1[3] >> 16;
      zlog(*v4, v8, 144, "socket_full", 11, 57, 20, v17);
      return 1;
    }
  }
}
