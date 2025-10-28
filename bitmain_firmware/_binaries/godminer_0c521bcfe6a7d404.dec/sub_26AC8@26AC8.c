ssize_t __fastcall sub_26AC8(int *a1, char *s)
{
  int v3; // r9
  char *v4; // r7
  signed int v5; // r6
  fd_set *p_tv_usec; // r3
  int v7; // r0
  int v8; // lr
  int v9; // r0
  ssize_t result; // r0
  _BOOL4 v11; // r3
  int *v12; // r0
  int *v13; // r10
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r0
  struct timeval timeout; // [sp+18h] [bp-108Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-1084h] BYREF
  _BYTE v20[4100]; // [sp+A0h] [bp-1004h] BYREF

  v3 = 0;
  v4 = s;
  v5 = strlen(s) + 1;
  while ( 1 )
  {
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( p_tv_usec != (fd_set *)&writefds.__fds_bits[31] );
    v7 = *a1;
    LOBYTE(v8) = *a1 & 0x1F;
    if ( *a1 <= 0 )
      v8 = -(-v7 & 0x1F);
    writefds.__fds_bits[*a1 / 32] |= 1 << v8;
    v9 = select(v7 + 1, 0, &writefds, 0, &timeout);
    if ( v9 <= 0 )
      break;
    result = send(*a1, v4, v5, 0);
    if ( result < 0 )
    {
      v12 = _errno_location();
      if ( *v12 != 11 )
      {
        v13 = v12;
        V_LOCK(v12);
        strerror(*v13);
        v14 = logfmt_raw((int)v20, 0x1000u);
        V_UNLOCK(v14);
        v15 = 2443;
        return zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/api_new.c",
                 140,
                 "send_api_result",
                 15,
                 v15,
                 100,
                 v20);
      }
      V_LOCK(v12);
      ++v3;
      v16 = logfmt_raw((int)v20, 0x1000u);
      V_UNLOCK(v16);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/api_new.c",
                 140,
                 "send_api_result",
                 15,
                 2439,
                 20,
                 v20);
      v11 = v3 > 2;
      if ( v5 <= 0 )
        v11 = 1;
    }
    else
    {
      if ( !result )
        ++v3;
      v5 -= result;
      v4 += result;
      v11 = v3 > 2;
      if ( v5 <= 0 )
        v11 = 1;
    }
    if ( v11 )
      return result;
  }
  V_LOCK(v9);
  v17 = logfmt_raw((int)v20, 0x1000u);
  V_UNLOCK(v17);
  v15 = 2429;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/api_new.c",
           140,
           "send_api_result",
           15,
           v15,
           100,
           v20);
}
