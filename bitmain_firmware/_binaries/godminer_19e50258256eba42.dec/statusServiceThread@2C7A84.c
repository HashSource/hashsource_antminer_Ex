size_t __fastcall statusServiceThread(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  size_t v9; // r0
  _BYTE v11[80]; // [sp+1Ch] [bp-7050h] BYREF
  char v12[8]; // [sp+101Ch] [bp-6050h] BYREF
  char v13[4]; // [sp+1024h] [bp-6048h] BYREF
  socklen_t addr_len; // [sp+1028h] [bp-6044h] BYREF
  char v15[64]; // [sp+102Ch] [bp-6040h] BYREF
  char v16[4096]; // [sp+382Ch] [bp-3840h] BYREF
  struct sockaddr addr; // [sp+482Ch] [bp-2840h] BYREF
  char v18[10240]; // [sp+483Ch] [bp-2830h] BYREF
  _DWORD optval[2]; // [sp+703Ch] [bp-30h] BYREF
  int fd; // [sp+7044h] [bp-28h]
  int v21; // [sp+7048h] [bp-24h]
  signed int v22; // [sp+704Ch] [bp-20h]
  size_t v23; // [sp+7050h] [bp-1Ch]
  void *buf; // [sp+7054h] [bp-18h]
  int v25; // [sp+7058h] [bp-14h]
  ssize_t v26; // [sp+705Ch] [bp-10h]

  fd = a1;
  optval[0] = 3;
  optval[1] = 0;
  buf = v18;
  v26 = -1;
  memset(v16, 0, sizeof(v16));
  v22 = 0;
  v21 = 0;
  v25 = 0;
  addr_len = 0;
  v23 = 0;
  strcpy(v13, "\r\n");
  strcpy(v12, "\r\n\r\n");
  memset(v18, 0, sizeof(v18));
  while ( ExitServer != 1 )
  {
    v26 = recvfrom(fd, buf, 10239 - v25, 0, &addr, &addr_len);
    if ( v26 <= 0 )
    {
      close(fd);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, ":statusServiceThread recvfrom<=0");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        52,
        20,
        v11);
      return 0;
    }
    v25 += v26;
    if ( v25 > 10238 )
    {
      close(fd);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "BUFSIZE is too small!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        60,
        20,
        v11);
      return 0;
    }
    buf = &v18[v25];
    if ( strstr(v18, v12) )
    {
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "find http request end flag!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        67,
        20,
        v11);
      break;
    }
  }
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "get http=%s", v18);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/common/general/http.c",
    149,
    "statusServiceThread",
    19,
    72,
    20,
    v11);
  if ( v18[0] == 71 && v18[1] == 69 && v18[2] == 84 && v18[3] == 32 )
  {
    v26 = setsockopt(fd, 1, 21, optval, 8u);
    if ( v26 )
    {
      close(fd);
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, "setsockopt SO_SNDTIMEO failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/http.c",
        149,
        "statusServiceThread",
        19,
        87,
        20,
        v11);
      return 0;
    }
    else
    {
      v26 = setsockopt(fd, 1, 20, optval, 8u);
      if ( v26 )
      {
        close(fd);
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "setsockopt SO_RCVTIMEO failed");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "statusServiceThread",
          19,
          95,
          20,
          v11);
        return 0;
      }
      else
      {
        if ( http_test_case )
        {
          if ( http_test_case(v18, v16, 4096) )
          {
            close(fd);
            V_LOCK();
            logfmt_raw(v11, 0x1000u, 0, "statusServiceThread exit for Error cmd!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/common/general/http.c",
              149,
              "statusServiceThread",
              19,
              108,
              20,
              v11);
            return 0;
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "No 6060 test case found.");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/common/general/http.c",
            149,
            "statusServiceThread",
            19,
            103,
            20,
            v11);
        }
        v22 = strlen(v16);
        v26 = 0;
        v2 = sprintf(v15, "HTTP/1.0  200  OK%s", v13);
        v26 += v2;
        v3 = sprintf(&v15[v26], "Server: SearchFreqServer%s", v13);
        v26 += v3;
        v4 = sprintf(&v15[v26], "Cache-Control: no-cache%s", v13);
        v26 += v4;
        v5 = sprintf(&v15[v26], "Pragma: no-cache%s", v13);
        v26 += v5;
        v6 = sprintf(&v15[v26], "Content-Type: text/plain%s", v13);
        v26 += v6;
        v7 = sprintf(&v15[v26], "Content-Length: %d%s", v22, v13);
        v26 += v7;
        v8 = sprintf(&v15[v26], "Connection: Keep-Alive%s", v12);
        v26 += v8;
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "send http response...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "statusServiceThread",
          19,
          123,
          20,
          v11);
        do
        {
          if ( ExitServer == 1 )
            break;
          v23 = 0;
          do
          {
            v9 = strlen(v15);
            v26 = send(fd, &v15[v23], v9 - v23, 0x4000);
            if ( v26 == -1 && *_errno_location() == 11 )
            {
              V_LOCK();
              logfmt_raw(v11, 0x1000u, 0, "statusServiceThread send http timeout, try again...");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/common/general/http.c",
                149,
                "statusServiceThread",
                19,
                132,
                20,
                v11);
              usleep((__useconds_t)&stru_186A0);
            }
            else
            {
              if ( v26 <= 0 )
              {
                close(fd);
                V_LOCK();
                logfmt_raw(v11, 0x1000u, 0, "statusServiceThread send http response error");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/common/general/http.c",
                  149,
                  "statusServiceThread",
                  19,
                  139,
                  20,
                  v11);
                return 0;
              }
              v23 += v26;
            }
          }
          while ( strlen(v15) > v23 && ExitServer != 1 );
        }
        while ( strlen(v15) > v23 && !ExitServer );
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "send http data...");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "statusServiceThread",
          19,
          153,
          20,
          v11);
        v23 = 0;
        while ( 1 )
        {
          v26 = send(fd, &v16[v23], v22 - v23, 0);
          V_LOCK();
          logfmt_raw(v11, 0x1000u, 0, "send http data ret=%d", v26);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/common/general/http.c",
            149,
            "statusServiceThread",
            19,
            159,
            20,
            v11);
          if ( v26 <= 0 )
            break;
          v23 += v26;
          if ( (int)v23 >= v22 || v21 || ExitServer == 1 )
            goto LABEL_41;
        }
        v21 = 1;
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "statusServiceThread send http data error");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "statusServiceThread",
          19,
          163,
          20,
          v11);
LABEL_41:
        V_LOCK();
        logfmt_raw(v11, 0x1000u, 0, "one client disconnected!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/http.c",
          149,
          "statusServiceThread",
          19,
          173,
          20,
          v11);
        close(fd);
        return v23;
      }
    }
  }
  else
  {
    close(fd);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "statusServiceThread not support http command");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/http.c",
      149,
      "statusServiceThread",
      19,
      79,
      20,
      v11);
    return 0;
  }
}
