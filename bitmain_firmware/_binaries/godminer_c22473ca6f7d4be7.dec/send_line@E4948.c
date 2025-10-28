int __fastcall send_line(int a1, char *s)
{
  int v3; // r9
  size_t v5; // r0
  int v6; // r8
  int v7; // r3
  int v8; // r8
  signed int v9; // r7
  fd_set *p_tv_usec; // r3
  ssize_t v11; // r0
  int v13; // r3
  int *v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // [sp+14h] [bp-1010h]
  struct timeval timeout; // [sp+18h] [bp-100Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-1004h] BYREF

  if ( a1 == -1 )
  {
    V_LOCK();
    LOWORD(v13) = 7068;
    HIWORD(v13) = (unsigned int)"%s  bits=%u\n" >> 16;
    logfmt_raw((char *)&writefds, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v14) = -14512;
    HIWORD(v14) = (unsigned int)&unk_16B55C >> 16;
    v15 = *v14;
    LOWORD(v14) = 7044;
    LOWORD(v16) = 7084;
    HIWORD(v14) = (unsigned int)"oot=%s\n" >> 16;
    HIWORD(v16) = (unsigned int)&algn_140EC1[3] >> 16;
    zlog(v15, v16, 144, v14, 9, 12, 20, &writefds);
    return 0;
  }
  else
  {
    v3 = 0;
    v5 = strlen(s);
    v6 = a1 + 31;
    if ( a1 >= 0 )
      v6 = a1;
    LOBYTE(v7) = a1 & 0x1F;
    if ( a1 <= 0 )
      v7 = -(-a1 & 0x1F);
    v8 = v6 >> 5;
    v9 = v5 + 1;
    v17 = 1 << v7;
    s[v5] = 10;
    while ( 1 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 0;
      p_tv_usec = (fd_set *)&timeout.tv_usec;
      do
      {
        p_tv_usec->__fds_bits[1] = 0;
        p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
      }
      while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
      writefds.__fds_bits[v8] |= v17;
      if ( select(a1 + 1, 0, &writefds, 0, &timeout) <= 0 )
        break;
      v11 = send(a1, &s[v3], v9, 0x4000);
      if ( v11 < 0 )
      {
        if ( *_errno_location() != 11 )
          return 0;
      }
      else
      {
        v9 -= v11;
        v3 += v11;
        if ( v9 <= 0 )
          return 1;
      }
    }
    return 0;
  }
}
