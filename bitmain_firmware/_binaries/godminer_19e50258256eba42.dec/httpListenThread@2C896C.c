int httpListenThread()
{
  _BYTE v1[48]; // [sp+1Ch] [bp-1030h] BYREF
  socklen_t addr_len; // [sp+101Ch] [bp-30h] BYREF
  struct sockaddr addr; // [sp+1020h] [bp-2Ch] BYREF
  struct sockaddr s; // [sp+1030h] [bp-1Ch] BYREF
  int v5; // [sp+1040h] [bp-Ch]
  int fd; // [sp+1044h] [bp-8h]

  v5 = 0;
  fd = -1;
  do
  {
    listen_sockfd = socket(2, 1, 6);
    if ( listen_sockfd >= 0 )
    {
      memset(&s, 0, sizeof(s));
      s.sa_family = 2;
      *(_DWORD *)&s.sa_data[2] = htonl(0);
      *(_WORD *)s.sa_data = htons(0x17ACu);
      if ( bind(listen_sockfd, &s, 0x10u) >= 0 )
      {
        if ( listen(listen_sockfd, 100) >= 0 )
          break;
        V_LOCK();
        logfmt_raw(v1, 0x1000u, 0, "http listen failed! try again after 10s...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "httpListenThread",
          16,
          222,
          80,
          v1);
        close(listen_sockfd);
        listen_sockfd = -1;
        sleep(0xAu);
      }
      else
      {
        V_LOCK();
        logfmt_raw(v1, 0x1000u, 0, "http port bind failed! try again after 10s...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "httpListenThread",
          16,
          211,
          80,
          v1);
        close(listen_sockfd);
        listen_sockfd = -1;
        sleep(0xAu);
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(v1, 0x1000u, 0, "socket creating failed, try again after 10s...");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "httpListenThread",
        16,
        198,
        80,
        v1);
      sleep(0xAu);
    }
  }
  while ( ExitServer != 1 );
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "start listen on 6060 ...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "httpListenThread",
    16,
    235,
    60,
    v1);
  while ( ExitServer != 1 )
  {
    for ( fd = -1; fd == -1 && ExitServer != 1; fd = accept(listen_sockfd, &addr, &addr_len) )
    {
      usleep(0x2710u);
      addr_len = 16;
    }
    if ( ExitServer )
    {
      if ( fd != -1 )
      {
        close(fd);
        fd = -1;
      }
      break;
    }
    V_LOCK();
    logfmt_raw(v1, 0x1000u, 0, "one client connected sock=%d", fd);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/http.c",
      149,
      "httpListenThread",
      16,
      257,
      20,
      v1);
    statusServiceThread(fd);
  }
  close(listen_sockfd);
  listen_sockfd = -1;
  return v5;
}
