int sub_35830()
{
  int *v1; // r0
  int *v2; // r0
  char *v3; // r0
  _BYTE v5[20]; // [sp+10h] [bp-1054h] BYREF
  int optval; // [sp+1010h] [bp-54h] BYREF
  struct addrinfo *pai; // [sp+1014h] [bp-50h] BYREF
  addrinfo req; // [sp+1018h] [bp-4Ch] BYREF
  char s[12]; // [sp+1038h] [bp-2Ch] BYREF
  time_t v10; // [sp+1044h] [bp-20h]
  socklen_t v11; // [sp+1048h] [bp-1Ch]
  char *v12; // [sp+104Ch] [bp-18h]
  __int16 v13; // [sp+1052h] [bp-12h]
  int v14; // [sp+1054h] [bp-10h]
  int fd; // [sp+1058h] [bp-Ch]
  struct addrinfo *i; // [sp+105Ch] [bp-8h]

  v13 = 4028;
  fd = 0;
  v14 = 0;
  sprintf(s, "%d", 4028);
  memset(&req, 0, sizeof(req));
  req.ai_flags = 1;
  req.ai_family = 0;
  if ( getaddrinfo("0.0.0.0", s, &req, &pai) )
  {
    V_LOCK();
    logfmt_raw(v5, 0x1000u, 0, "%s: exec getaddrinfo() failed", "api_init_socket");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "api_init_socket",
      15,
      2798,
      100,
      v5);
    return -2147483642;
  }
  else
  {
    for ( i = pai; i; i = i->ai_next )
    {
      fd = socket(pai->ai_family, 1, 0);
      if ( fd > 0 )
        break;
    }
    if ( fd == -1 )
    {
      V_LOCK();
      logfmt_raw(v5, 0x1000u, 0, "%s: exec socket() failed", "api_init_socket");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "api_init_socket",
        15,
        2813,
        100,
        v5);
      return -2147483642;
    }
    else
    {
      optval = 1;
      v11 = 4;
      setsockopt(fd, 1, 2, &optval, 4u);
      v10 = time(0);
      while ( !v14 )
      {
        if ( bind(fd, i->ai_addr, i->ai_addrlen) >= 0 )
        {
          v14 = 1;
        }
        else
        {
          v1 = _errno_location();
          v12 = strerror(*v1);
          if ( time(0) - v10 > 61 )
            break;
          V_LOCK();
          logfmt_raw(v5, 0x1000u, 0, "%s: api bind to port %d failed, trying again in 30sec", "api_init_socket", v13);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api_init_socket",
            15,
            2831,
            80,
            v5);
          sleep(0x1Eu);
        }
      }
      freeaddrinfo(pai);
      if ( v14 )
      {
        if ( listen(fd, 100) >= 0 )
        {
          return fd;
        }
        else
        {
          V_LOCK();
          v2 = _errno_location();
          v3 = strerror(*v2);
          logfmt_raw(v5, 0x1000u, 0, "%s: exec listen() failed (%s)", "api_init_socket", v3);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/api_new.c",
            137,
            "api_init_socket",
            15,
            2847,
            100,
            v5);
          close(fd);
          return -2147483642;
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v5, 0x1000u, 0, "api bind to port %d, failed (%s)", v13, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "api_init_socket",
          15,
          2841,
          100,
          v5);
        return -2147483642;
      }
    }
  }
}
