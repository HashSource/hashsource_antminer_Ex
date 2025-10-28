int __fastcall statusServiceThread(int a1)
{
  char *v2; // r9
  int v3; // r7
  ssize_t v4; // r3
  char *v5; // r0
  int v6; // r11
  int v7; // r0
  int v8; // r0
  int v9; // r4
  int v10; // r4
  int v11; // r4
  int v12; // r4
  int v13; // r4
  int v14; // r0
  int v15; // r0
  int v16; // r0
  size_t v17; // r0
  unsigned int v18; // r4
  ssize_t v19; // r0
  int *v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r12
  int v25; // r3
  int v26; // r1
  int v27; // r0
  int v28; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r12
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r5
  ssize_t v38; // r8
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r2
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r0
  char *v53; // [sp+Ch] [bp-7040h]
  struct sockaddr *v54; // [sp+14h] [bp-7038h]
  int v55; // [sp+18h] [bp-7034h]
  char v56[4]; // [sp+20h] [bp-702Ch] BYREF
  socklen_t addr_len; // [sp+24h] [bp-7028h] BYREF
  char needle[8]; // [sp+28h] [bp-7024h] BYREF
  _DWORD optval[2]; // [sp+30h] [bp-701Ch] BYREF
  struct sockaddr addr; // [sp+38h] [bp-7014h] BYREF
  char s[4096]; // [sp+48h] [bp-7004h] BYREF
  _BYTE v62[4088]; // [sp+1048h] [bp-6004h] BYREF
  char v63[10240]; // [sp+2048h] [bp-5004h] BYREF
  char v64[10244]; // [sp+4848h] [bp-2804h] BYREF

  optval[0] = 3;
  optval[1] = 0;
  v2 = v63;
  memset(s, 0, sizeof(s));
  strcpy(v56, "\r\n");
  addr_len = 0;
  v3 = 0;
  strcpy(needle, "\r\n\r\n");
  memset(v63, 0, sizeof(v63));
  do
  {
    v6 = (unsigned __int8)ExitServer;
    v7 = a1;
    if ( ExitServer )
      goto LABEL_6;
    v4 = recvfrom(a1, v2, 10239 - v3, 0, &addr, &addr_len);
    v3 += v4;
    if ( v4 <= 0 )
    {
      v30 = close(a1);
      V_LOCK(v30);
      v31 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v31);
      v32 = 52;
LABEL_25:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/common/general/http.c",
        152,
        "statusServiceThread",
        19,
        v32,
        20,
        v64);
      return v6;
    }
    v2 = &v63[v3];
    if ( v3 > 10238 )
    {
      v33 = close(a1);
      V_LOCK(v33);
      v34 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v34);
      v32 = 60;
      goto LABEL_25;
    }
    v5 = strstr(v63, needle);
  }
  while ( !v5 );
  V_LOCK(v5);
  v35 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v35);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/common/general/http.c",
         152,
         "statusServiceThread",
         19,
         67,
         20,
         v64);
LABEL_6:
  V_LOCK(v7);
  v8 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/common/general/http.c",
    152,
    "statusServiceThread",
    19,
    72,
    20,
    v64);
  if ( v63[0] == 71 && v63[1] == 69 && v63[2] == 84 && v63[3] == 32 )
  {
    if ( setsockopt(a1, 1, 21, optval, 8u) )
    {
      v45 = close(a1);
      V_LOCK(v45);
      v46 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v46);
      v47 = g_zc;
      v48 = 87;
      goto LABEL_38;
    }
    if ( setsockopt(a1, 1, 20, optval, 8u) )
    {
      v49 = close(a1);
      V_LOCK(v49);
      v50 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v50);
      v47 = g_zc;
      v48 = 95;
      goto LABEL_38;
    }
    if ( http_test_case )
    {
      if ( !((int (__fastcall *)(char *, char *, int))http_test_case)(v63, s, 4096) )
        goto LABEL_14;
      v51 = close(a1);
      V_LOCK(v51);
      v52 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v52);
      v47 = g_zc;
      v48 = 108;
LABEL_38:
      zlog(
        v47,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/common/general/http.c",
        152,
        "statusServiceThread",
        19,
        v48,
        20,
        v64);
      return 0;
    }
    else
    {
      V_LOCK(0);
      v44 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v44);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/common/general/http.c",
        152,
        "statusServiceThread",
        19,
        103,
        20,
        v64);
LABEL_14:
      v54 = (struct sockaddr *)strlen(s);
      v9 = sprintf(v64, "HTTP/1.0  200  OK%s", v56);
      v10 = v9 + sprintf(&v64[v9], "Server: SearchFreqServer%s", v56);
      v11 = v10 + sprintf(&v64[v10], "Cache-Control: no-cache%s", v56);
      v12 = v11 + sprintf(&v64[v11], "Pragma: no-cache%s", v56);
      v13 = v12 + sprintf(&v64[v12], "Content-Type: text/plain%s", v56);
      v14 = sprintf(&v64[v13], "Content-Length: %d%s", v54, v56);
      v15 = sprintf(&v64[v13 + v14], "Connection: Keep-Alive%s", needle);
      V_LOCK(v15);
      v16 = logfmt_raw((int)v62, 0x1000u);
      V_UNLOCK(v16);
      v17 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/common/general/http.c",
              152,
              "statusServiceThread",
              19,
              123,
              20,
              v62);
      v18 = (unsigned __int8)ExitServer;
      if ( !ExitServer )
      {
        v17 = strlen(v64);
        do
        {
          v19 = send(a1, &v64[v18], v17 - v18, 0x4000);
          if ( v19 == -1 )
          {
            v20 = _errno_location();
            if ( *v20 != 11 )
            {
LABEL_21:
              v21 = close(a1);
              V_LOCK(v21);
              v22 = logfmt_raw((int)v62, 0x1000u);
              V_UNLOCK(v22);
              v23 = g_zc;
              v24 = 139;
              LOWORD(v25) = (unsigned __int16)"statusServiceThread";
              LOWORD(v26) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/"
                                              "buildroot/tmp/release/build/godminer-origin_godminer-new/common/general/http.c";
              v53 = v62;
              goto LABEL_23;
            }
            V_LOCK(v20);
            v43 = logfmt_raw((int)v62, 0x1000u);
            V_UNLOCK(v43);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/common/general/http.c",
              152,
              "statusServiceThread",
              19,
              132,
              20,
              v62);
            usleep((__useconds_t)&stru_1869C.st_value);
          }
          else
          {
            v18 += v19;
            if ( v19 <= 0 )
              goto LABEL_21;
          }
          v17 = strlen(v64);
        }
        while ( v17 > v18 && !ExitServer );
      }
      V_LOCK(v17);
      v36 = logfmt_raw((int)v62, 0x1000u);
      V_UNLOCK(v36);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/common/general/http.c",
        152,
        "statusServiceThread",
        19,
        153,
        20,
        v62);
      v37 = 0;
      do
      {
        v38 = send(a1, &s[v37], (size_t)v54 - v37, 0);
        V_LOCK(v38);
        v39 = logfmt_raw((int)v62, 0x1000u);
        V_UNLOCK(v39);
        v40 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/common/general/http.c",
                152,
                "statusServiceThread",
                19,
                159,
                20,
                v62);
        if ( v38 <= 0 )
        {
          v55 = v37;
          V_LOCK(v40);
          v41 = logfmt_raw((int)v62, 0x1000u);
          V_UNLOCK(v41);
          v40 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/common/general/http.c",
                  152,
                  "statusServiceThread",
                  19,
                  163,
                  20,
                  v62);
          goto LABEL_33;
        }
        v37 += v38;
      }
      while ( (int)v54 > v37 && !ExitServer );
      v55 = v37;
LABEL_33:
      V_LOCK(v40);
      v42 = logfmt_raw((int)v62, 0x1000u);
      V_UNLOCK(v42);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/common/general/http.c",
        152,
        "statusServiceThread",
        19,
        173,
        20,
        v62);
      close(a1);
      return v55;
    }
  }
  else
  {
    v27 = close(a1);
    V_LOCK(v27);
    v28 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v28);
    v24 = 79;
    LOWORD(v25) = -31184;
    LOWORD(v26) = -31088;
    v23 = g_zc;
    v53 = v64;
LABEL_23:
    HIWORD(v25) = (unsigned int)"statusServiceThread" >> 16;
    HIWORD(v26) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/"
                                "release/build/godminer-origin_godminer-new/common/general/http.c" >> 16;
    zlog(v23, v26, 152, v25, 19, v24, 20, v53);
    return 0;
  }
}
