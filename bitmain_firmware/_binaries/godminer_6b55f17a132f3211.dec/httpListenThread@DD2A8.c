int httpListenThread()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r0
  socklen_t addr_len; // [sp+1Ch] [bp-1028h] BYREF
  struct sockaddr v14; // [sp+20h] [bp-1024h] BYREF
  struct sockaddr addr; // [sp+30h] [bp-1014h] BYREF
  _BYTE v16[4100]; // [sp+40h] [bp-1004h] BYREF

  do
  {
    v0 = socket(2, 1, 6);
    listen_sockfd = v0;
    if ( v0 < 0 )
    {
      V_LOCK(v0);
      v8 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/common/general/http.c",
        148,
        "httpListenThread",
        16,
        198,
        80,
        v16);
      v2 = sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&v14.sa_family = -1407778814;
      memset(&v14.sa_data[2], 0, 12);
      v1 = bind(v0, &v14, 0x10u);
      if ( v1 < 0 )
      {
        V_LOCK(v1);
        v9 = logfmt_raw((int)v16, 0x1000u);
        V_UNLOCK(v9);
        v10 = g_zc;
        v11 = 211;
      }
      else
      {
        v2 = listen(listen_sockfd, 100);
        if ( v2 >= 0 )
          break;
        V_LOCK(v2);
        v12 = logfmt_raw((int)v16, 0x1000u);
        V_UNLOCK(v12);
        v10 = g_zc;
        v11 = 222;
      }
      zlog(
        v10,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/common/general/http.c",
        148,
        "httpListenThread",
        16,
        v11,
        80,
        v16);
      close(listen_sockfd);
      listen_sockfd = -1;
      v2 = sleep(0xAu);
    }
  }
  while ( !ExitServer );
  V_LOCK(v2);
  v3 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v3);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/common/general/http.c",
    148,
    "httpListenThread",
    16,
    235,
    60,
    v16);
  if ( !ExitServer )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v4 = accept(listen_sockfd, &addr, &addr_len);
        v5 = v4;
        if ( v4 != -1 )
          break;
        if ( ExitServer )
          goto LABEL_10;
      }
      if ( ExitServer )
        break;
      V_LOCK(v4);
      v6 = logfmt_raw((int)v16, 0x1000u);
      V_UNLOCK(v6);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/common/general/http.c",
        148,
        "httpListenThread",
        16,
        257,
        20,
        v16);
      statusServiceThread(v5);
      if ( ExitServer )
        goto LABEL_10;
    }
    close(v4);
  }
LABEL_10:
  close(listen_sockfd);
  listen_sockfd = -1;
  return 0;
}
