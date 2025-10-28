int httpListenThread()
{
  int v0; // r10
  int v1; // r0
  int v2; // r3
  int v3; // r1
  int v4; // r11
  int v5; // r3
  int v6; // r0
  int v7; // r4
  int v8; // r10
  int v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // [sp+14h] [bp-1030h]
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr v18; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1014h] BYREF
  char v20[4100]; // [sp+40h] [bp-1004h] BYREF

  LOWORD(v0) = -27824;
  do
  {
    v1 = socket(2, 1, 6);
    listen_sockfd = v1;
    if ( v1 < 0 )
    {
      V_LOCK();
      LOWORD(v10) = -27920;
      HIWORD(v10) = (unsigned int)"client disconnected!" >> 16;
      logfmt_raw(v20, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v11) = -28736;
      HIWORD(v11) = (unsigned int)"ceThread recvfrom<=0" >> 16;
      zlog(g_zc, v11, 152, "httpListenThread", 16, 198, 80, v20);
      sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&v18.sa_family = -1407778814;
      memset(&v18.sa_data[2], 0, 12);
      if ( bind(v1, &v18, 0x10u) < 0 )
      {
        V_LOCK();
        LOWORD(v12) = -27872;
        HIWORD(v12) = (unsigned int)"try again after 10s..." >> 16;
        logfmt_raw(v20, 0x1000u, 0, v12);
        V_UNLOCK();
        v13 = g_zc;
        v14 = 211;
      }
      else
      {
        if ( listen(listen_sockfd, 100) >= 0 )
          break;
        V_LOCK();
        HIWORD(v0) = (unsigned int)"ry again after 10s..." >> 16;
        logfmt_raw(v20, 0x1000u, 0, v0);
        V_UNLOCK();
        v13 = g_zc;
        v14 = 222;
      }
      LOWORD(v15) = -28736;
      HIWORD(v15) = (unsigned int)"ceThread recvfrom<=0" >> 16;
      zlog(v13, v15, 152, "httpListenThread", 16, v14, 80, v20);
      close(listen_sockfd);
      listen_sockfd = -1;
      sleep(0xAu);
    }
  }
  while ( !ExitServer );
  V_LOCK();
  LOWORD(v2) = -27780;
  HIWORD(v2) = (unsigned int)"try again after 10s..." >> 16;
  logfmt_raw(v20, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v3) = -28736;
  HIWORD(v3) = (unsigned int)"ceThread recvfrom<=0" >> 16;
  zlog(g_zc, v3, 152, "httpListenThread", 16, 235, 60, v20);
  if ( !ExitServer )
  {
    LOWORD(v4) = -27752;
    LOWORD(v5) = -28736;
    HIWORD(v5) = (unsigned int)"ceThread recvfrom<=0" >> 16;
    v16 = v5;
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v6 = accept(listen_sockfd, &addr, &addr_len);
        v7 = v6;
        if ( v6 != -1 )
          break;
        if ( ExitServer )
          goto LABEL_12;
      }
      v8 = (unsigned __int8)ExitServer;
      if ( ExitServer )
        break;
      V_LOCK();
      HIWORD(v4) = (unsigned int)"t listen on 6060 ..." >> 16;
      logfmt_raw(v20, 0x1000u, v8, v4, v7);
      V_UNLOCK();
      zlog(g_zc, v16, 152, "httpListenThread", 16, 257, 20, v20);
      statusServiceThread(v7);
      if ( ExitServer )
        goto LABEL_12;
    }
    close(v6);
  }
LABEL_12:
  close(listen_sockfd);
  listen_sockfd = -1;
  return 0;
}
