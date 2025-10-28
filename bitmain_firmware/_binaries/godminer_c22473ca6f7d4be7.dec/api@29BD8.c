int api()
{
  struct addrinfo *v0; // r4
  struct addrinfo *i; // r3
  int v2; // r0
  int v3; // r6
  time_t v4; // r9
  int *v5; // r0
  char *v6; // r5
  int servlen; // r4
  int v8; // r0
  ssize_t v9; // r3
  double *v10; // r0
  double *v11; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r6
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  _DWORD *v17; // r4
  double *v18; // r0
  double *v19; // r5
  char *v20; // r0
  char *v21; // r5
  unsigned int *v22; // r3
  unsigned int v23; // r2
  unsigned int v24; // r2
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r8
  int v28; // r0
  int v29; // r6
  size_t v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int *v34; // r4
  char **v35; // r6
  unsigned int v36; // r5
  const char *v37; // r7
  char *v38; // t1
  _DWORD *v39; // r0
  unsigned int *v40; // r3
  unsigned int v41; // r2
  unsigned int v42; // r2
  _DWORD *v43; // r0
  unsigned int *v44; // r3
  unsigned int v45; // r2
  unsigned int v46; // r2
  _DWORD *v47; // r0
  unsigned int v48; // r4
  _DWORD *v49; // r8
  _DWORD *v50; // r0
  bool v51; // zf
  int v52; // r7
  const char *v53; // r0
  char *v54; // r0
  char *v55; // r4
  unsigned int *v56; // r3
  unsigned int v57; // r2
  unsigned int v58; // r2
  unsigned int *v59; // r3
  unsigned int v60; // r2
  unsigned int v61; // r2
  int *v62; // r0
  char *v63; // r0
  _DWORD *v65; // r8
  _DWORD *v66; // r9
  unsigned int v67; // r6
  _DWORD *v68; // r0
  _DWORD *v69; // r7
  int v70; // r0
  int v71; // r5
  size_t v72; // r0
  int v73; // r0
  int v74; // r0
  int v75; // r0
  int *v76; // r8
  char *v77; // r6
  int v78; // r12
  const char *v79; // r0
  _DWORD *v80; // r0
  _DWORD *v81; // r0
  unsigned int v82; // r1
  unsigned int *v83; // r3
  unsigned int v84; // r2
  unsigned int v85; // r2
  const char *v86; // r0
  int *v87; // r0
  char *v88; // r0
  unsigned int v89; // [sp+10h] [bp-F554h]
  unsigned int protocol; // [sp+18h] [bp-F54Ch]
  unsigned int v91; // [sp+1Ch] [bp-F548h]
  int v92; // [sp+20h] [bp-F544h]
  _DWORD *v93; // [sp+28h] [bp-F53Ch]
  _DWORD *v94; // [sp+30h] [bp-F534h]
  _DWORD *v95; // [sp+40h] [bp-F524h]
  int v96; // [sp+4Ch] [bp-F518h] BYREF
  int fd; // [sp+50h] [bp-F514h] BYREF
  socklen_t addr_len; // [sp+54h] [bp-F510h] BYREF
  struct addrinfo *pai; // [sp+58h] [bp-F50Ch] BYREF
  int optval; // [sp+5Ch] [bp-F508h] BYREF
  char service[12]; // [sp+60h] [bp-F504h] BYREF
  char v102[4]; // [sp+6Ch] [bp-F4F8h] BYREF
  int v103; // [sp+70h] [bp-F4F4h]
  int v104; // [sp+74h] [bp-F4F0h]
  int v105; // [sp+78h] [bp-F4ECh]
  char v106[4]; // [sp+7Ch] [bp-F4E8h] BYREF
  int v107; // [sp+80h] [bp-F4E4h]
  int v108; // [sp+84h] [bp-F4E0h]
  int v109; // [sp+88h] [bp-F4DCh]
  char s1[4]; // [sp+8Ch] [bp-F4D8h] BYREF
  int v111; // [sp+90h] [bp-F4D4h]
  int v112; // [sp+94h] [bp-F4D0h]
  int v113; // [sp+98h] [bp-F4CCh]
  _DWORD v114[5]; // [sp+9Ch] [bp-F4C8h] BYREF
  struct addrinfo v115; // [sp+B0h] [bp-F4B4h] BYREF
  struct sockaddr addr; // [sp+D0h] [bp-F494h] BYREF
  char v117[16]; // [sp+150h] [bp-F414h] BYREF
  char v118[252]; // [sp+24Ch] [bp-F318h] BYREF
  char src[256]; // [sp+348h] [bp-F21Ch] BYREF
  _DWORD v120[70]; // [sp+448h] [bp-F11Ch] BYREF
  char s[4096]; // [sp+560h] [bp-F004h] BYREF
  char v122[4064]; // [sp+1560h] [bp-E004h] BYREF
  char v123[4064]; // [sp+2560h] [bp-D004h] BYREF
  char v124[4000]; // [sp+3560h] [bp-C004h] BYREF
  char v125[4000]; // [sp+4560h] [bp-B004h] BYREF
  char v126[4000]; // [sp+5560h] [bp-A004h] BYREF
  char v127[4000]; // [sp+6560h] [bp-9004h] BYREF
  char v128[4000]; // [sp+7560h] [bp-8004h] BYREF
  char v129[4000]; // [sp+8560h] [bp-7004h] BYREF
  char v130[4000]; // [sp+9560h] [bp-6004h] BYREF
  char v131[4000]; // [sp+A560h] [bp-5004h] BYREF
  char v132[4000]; // [sp+B560h] [bp-4004h] BYREF
  char v133[4000]; // [sp+C560h] [bp-3004h] BYREF
  char v134[8196]; // [sp+D560h] [bp-2004h] BYREF

  v96 = -1;
  fd = -1;
  memset(v134, 0, 0x2000u);
  memset(s, 0, sizeof(s));
  v103 = 0;
  v107 = 0;
  v104 = 0;
  v105 = 0;
  v108 = 0;
  v109 = 0;
  *(_DWORD *)v102 = 0;
  *(_DWORD *)v106 = 0;
  V_LOCK();
  logfmt_raw(v122, 0x1000u, 0, "Start %s function", "api");
  V_UNLOCK();
  v89 = 2;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "api",
    3,
    2271,
    60,
    v122);
  v0 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v120, 0);
  if ( v0 )
  {
    sub_25534(&v96);
    _pthread_unwind_next((__pthread_unwind_buf_t *)v120);
LABEL_137:
    v3 = (int)v0;
    goto LABEL_9;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)v120);
  sprintf(service, "%d", 4028);
  memset(&v115.ai_family, 0, 28);
  v115.ai_flags = 1;
  protocol = getaddrinfo("0.0.0.0", service, &v115, &pai);
  if ( protocol )
  {
    V_LOCK();
    v77 = v128;
    logfmt_raw(v128, 0x1000u, 0, "%s: exec getaddrinfo() failed", "api_init_socket");
    V_UNLOCK();
    v78 = 1890;
    goto LABEL_122;
  }
  v0 = pai;
  if ( !pai )
    goto LABEL_137;
  for ( i = pai; ; i = pai )
  {
    v2 = socket(i->ai_family, 1, protocol);
    if ( v2 > 0 )
    {
      v3 = v2;
      goto LABEL_9;
    }
    v0 = v0->ai_next;
    if ( !v0 )
      break;
  }
  v3 = v2;
  if ( v2 == -1 )
  {
    V_LOCK();
    v77 = v129;
    logfmt_raw(v129, 0x1000u, 0, "%s: exec socket() failed", "api_init_socket");
    V_UNLOCK();
    v78 = 1903;
LABEL_122:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      v78,
      100,
      v77);
    goto LABEL_119;
  }
LABEL_9:
  optval = 1;
  setsockopt(v3, 1, 2, &optval, 4u);
  v4 = time(0);
  while ( bind(v3, v0->ai_addr, v0->ai_addrlen) < 0 )
  {
    v5 = _errno_location();
    v6 = strerror(*v5);
    if ( time(0) - v4 > 61 )
    {
      freeaddrinfo(pai);
      V_LOCK();
      logfmt_raw(v131, 0x1000u, 0, "api bind to port %d, failed (%s)", 4028, v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/api_new.c",
        130,
        "api_init_socket",
        15,
        1926,
        100,
        v131);
      goto LABEL_119;
    }
    V_LOCK();
    logfmt_raw(v130, 0x1000u, 0, "%s: api bind to port %d failed, trying again in 30sec", "api_init_socket", 4028);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      1918,
      80,
      v130);
    sleep(0x1Eu);
  }
  freeaddrinfo(pai);
  if ( listen(v3, 100) < 0 )
  {
    V_LOCK();
    v87 = _errno_location();
    v88 = strerror(*v87);
    logfmt_raw(v132, 0x1000u, 0, "%s: exec listen() failed (%s)", "api_init_socket", v88);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      1931,
      100,
      v132);
    close(v3);
    goto LABEL_119;
  }
  if ( v3 >= 0 )
  {
    v96 = v3;
    while ( 1 )
    {
      servlen = (unsigned __int8)byte_164FDC;
      if ( byte_164FDC )
      {
LABEL_102:
        _pthread_unregister_cancel((__pthread_unwind_buf_t *)v120);
        sub_25534(&v96);
        V_LOCK();
        logfmt_raw(v127, 0x1000u, 0, "End %s function !!!", "api");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2342,
          60,
          v127);
        return close(v96);
      }
      addr_len = 128;
      v8 = accept(v96, &addr, &addr_len);
      fd = v8;
      if ( v8 < 0 )
      {
        V_LOCK();
        v62 = _errno_location();
        v63 = strerror(*v62);
        logfmt_raw(v124, 0x1000u, servlen, "%s: exec accept failed (%s)", "api", v63);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2285,
          100,
          v124);
        goto LABEL_102;
      }
      v9 = recv(v8, v134, 0xFFFu, servlen);
      if ( v9 < 0 )
      {
        v134[0] = servlen;
        goto LABEL_17;
      }
      *(_DWORD *)::s1 = servlen;
      dword_164FD0 = servlen;
      dword_164FD4 = servlen;
      dword_164FD8 = servlen;
      v134[v9] = servlen;
      *(_DWORD *)v102 = servlen;
      *(_DWORD *)v106 = servlen;
      v103 = servlen;
      v104 = servlen;
      v105 = servlen;
      v107 = servlen;
      v108 = servlen;
      v109 = servlen;
      dword_164FC8 = time((time_t *)servlen);
      getnameinfo(&addr, 0x80u, ::s1, 0x10u, (char *)servlen, servlen, 1u);
      V_LOCK();
      logfmt_raw(v125, 0x1000u, servlen, "connect_addr: %s", ::s1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/api_new.c",
        130,
        "api",
        3,
        2301,
        20,
        v125);
      v111 = servlen;
      *(_DWORD *)s1 = servlen;
      v112 = servlen;
      v113 = servlen;
      v10 = json_loads((int)v134, servlen, v117);
      v11 = v10;
      if ( v10 && !*(_DWORD *)v10 )
      {
        v12 = (_DWORD *)json_object_get(v10, "command");
        v13 = v12;
        if ( v12 && *v12 == 1 )
        {
          v47 = (_DWORD *)json_object_get(v11, "new_api");
          if ( v47 )
            v91 = *v47 != 5;
          else
            v91 = 1;
          v48 = protocol;
          v92 = protocol;
          v49 = json_object();
          while ( (unsigned int)json_array_size(v13) > v48 )
          {
            v50 = json_array_get(v13, v48);
            v51 = v50 == 0;
            if ( v50 )
              v51 = v48 == 11;
            v52 = v51;
            if ( v51 )
              break;
            if ( *v50 == 2 )
            {
              *(_DWORD *)s1 = v52;
              v111 = v52;
              v112 = v52;
              v113 = v52;
              v53 = (const char *)json_string_value(v50);
              snprintf(s1, 0x10u, "%s", v53);
              if ( strcmp(s1, "reload") | v91 )
              {
                v94 = json_object();
                sub_25578(v94, s1, v52, v91);
                json_object_set_new(v49, s1, v94);
              }
              else
              {
                v92 = 1;
              }
            }
            ++v48;
          }
          v54 = json_dumps(v49, 24576);
          v55 = v54;
          if ( v54 )
            sub_25A34(&fd, v54);
          free(v55);
          if ( v92 == 1 )
            sub_25578(v49, "reload", 0, 0);
          if ( v49 )
          {
            if ( v49[1] != -1 )
            {
              v56 = v49 + 1;
              __dmb(0xBu);
              do
              {
                v57 = __ldrex(v56);
                v58 = v57 - 1;
              }
              while ( __strex(v58, v56) );
              if ( !v58 )
                json_delete(v49);
            }
          }
          if ( *((_DWORD *)v11 + 1) != -1 )
          {
            v59 = (unsigned int *)v11 + 1;
            __dmb(0xBu);
            do
            {
              v60 = __ldrex(v59);
              v61 = v60 - 1;
            }
            while ( __strex(v61, v59) );
            if ( !v61 )
              json_delete(v11);
          }
          goto LABEL_17;
        }
        if ( *((_DWORD *)v11 + 1) != -1 )
        {
          v14 = (unsigned int *)v11 + 1;
          __dmb(0xBu);
          do
          {
            v15 = __ldrex(v14);
            v16 = v15 - 1;
          }
          while ( __strex(v16, v14) );
          if ( !v16 )
            json_delete(v11);
        }
      }
      v17 = json_object();
      v18 = json_loads((int)v134, 0, v118);
      v19 = v18;
      if ( !v18 || *(_DWORD *)v18 )
      {
        v89 = 2;
        snprintf(v102, 0x10u, "%s", v134);
        sub_25578(v17, v102, (int)v106, 2u);
        goto LABEL_33;
      }
      v43 = (_DWORD *)json_object_get(v18, "command");
      if ( v43 && *v43 == 2 )
      {
        v79 = (const char *)json_string_value(v43);
        snprintf(v102, 0x10u, "%s", v79);
        v80 = (_DWORD *)json_object_get(v19, "new_api");
        if ( v80 && *v80 == 5 )
        {
          if ( *((_DWORD *)v19 + 1) == -1 )
          {
            v89 = protocol;
            sub_25578(v17, v102, (int)v106, protocol);
            goto LABEL_33;
          }
          v82 = protocol;
        }
        else
        {
          v81 = (_DWORD *)json_object_get(v19, "parameter");
          if ( v81 && *v81 == 2 )
          {
            v86 = (const char *)json_string_value(v81);
            snprintf(v106, 0x10u, "%s", v86);
          }
          if ( *((_DWORD *)v19 + 1) == -1 )
          {
            v89 = 1;
            sub_25578(v17, v102, (int)v106, 1u);
            goto LABEL_33;
          }
          v82 = 1;
        }
        v83 = (unsigned int *)v19 + 1;
        __dmb(0xBu);
        do
        {
          v84 = __ldrex(v83);
          v85 = v84 - 1;
        }
        while ( __strex(v85, v83) );
        v89 = v82;
        if ( v85 )
        {
          sub_25578(v17, v102, (int)v106, v82);
        }
        else
        {
          json_delete(v19);
          sub_25578(v17, v102, (int)v106, v89);
        }
      }
      else
      {
        V_LOCK();
        logfmt_raw(v133, 0x1000u, 0, "%s error: format error about command", "parse_recv_buf");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "parse_recv_buf",
          14,
          1964,
          100,
          v133);
        if ( *((_DWORD *)v19 + 1) != -1 )
        {
          v44 = (unsigned int *)v19 + 1;
          __dmb(0xBu);
          do
          {
            v45 = __ldrex(v44);
            v46 = v45 - 1;
          }
          while ( __strex(v46, v44) );
          if ( !v46 )
            json_delete(v19);
        }
        V_LOCK();
        logfmt_raw(v126, 0x1000u, 0, "%s: input invaild param format", "api");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2314,
          100,
          v126);
        sub_23578(v17, 0, 24, "Missing JSON 'command'");
      }
LABEL_33:
      if ( v89 == 2 )
      {
        memset(s, 0, sizeof(s));
        if ( v17 )
        {
          v25 = (_DWORD *)json_object_get(v17, "STATUS");
          if ( v25 )
          {
            if ( *v25 == 1 )
            {
              v26 = json_array_get(v25, 0);
              v27 = v26;
              if ( v26 )
              {
                if ( !*v26 )
                {
                  v28 = json_object_iter(v26);
                  v29 = json_object_iter_key(v28);
                  if ( v29 )
                  {
                    v93 = v17;
                    do
                    {
                      v33 = json_object_key_to_iter(v29);
                      v34 = (int *)json_object_iter_value(v33);
                      if ( !v34 )
                        break;
                      v30 = strlen(s);
                      *(_WORD *)stpcpy(&s[v30], v29) = 61;
                      sub_2573C(s, v34);
                      *(_WORD *)&s[strlen(s)] = 44;
                      v31 = json_object_key_to_iter(v29);
                      v32 = json_object_iter_next(v27, v31);
                      v29 = json_object_iter_key(v32);
                    }
                    while ( v29 );
                    v17 = v93;
                  }
                  v35 = (char **)v114;
                  *((_BYTE *)&v120[69] + strlen(s) + 3) = 124;
                  memset(src, 0, sizeof(src));
                  v36 = protocol;
                  v114[0] = "SUMMARY";
                  v114[1] = "POOLS";
                  v114[2] = "STATS";
                  v114[3] = "DEVS";
                  v114[4] = "VERSION";
                  while ( 1 )
                  {
                    v38 = *v35++;
                    v37 = v38;
                    v39 = (_DWORD *)json_object_get(v17, v38);
                    if ( v39 )
                    {
                      if ( *v39 == 1 )
                        break;
                    }
                    if ( ++v36 == 5 )
                      goto LABEL_57;
                  }
                  v65 = v39;
                  if ( (v36 & 0xFFFFFFFB) == 0 )
                  {
                    snprintf(src, 0x100u, "%s,", v37);
                    strcat(s, src);
                  }
                  v66 = json_array_size(v65);
                  if ( (int)v66 > 0 )
                  {
                    v67 = protocol;
                    do
                    {
                      v68 = json_array_get(v65, v67);
                      v69 = v68;
                      if ( v68 && !*v68 )
                      {
                        v70 = json_object_iter(v68);
                        v71 = json_object_iter_key(v70);
                        if ( v71 )
                        {
                          v95 = v65;
                          do
                          {
                            v75 = json_object_key_to_iter(v71);
                            v76 = (int *)json_object_iter_value(v75);
                            if ( !v76 )
                              break;
                            v72 = strlen(s);
                            *(_WORD *)stpcpy(&s[v72], v71) = 61;
                            sub_2573C(s, v76);
                            *(_WORD *)&s[strlen(s)] = 44;
                            v73 = json_object_key_to_iter(v71);
                            v74 = json_object_iter_next(v69, v73);
                            v71 = json_object_iter_key(v74);
                          }
                          while ( v71 );
                          v65 = v95;
                        }
                        *((_BYTE *)&v120[69] + strlen(s) + 3) = 124;
                        if ( (_DWORD *)((char *)v66 - 1) != (_DWORD *)v67 )
                          s[strlen(s)] = 44;
                      }
                      ++v67;
                    }
                    while ( v66 != (_DWORD *)v67 );
                  }
                }
              }
            }
          }
        }
LABEL_57:
        sub_25A34(&fd, s);
        if ( v17 )
        {
          if ( v17[1] != -1 )
          {
            v40 = v17 + 1;
            __dmb(0xBu);
            do
            {
              v41 = __ldrex(v40);
              v42 = v41 - 1;
            }
            while ( __strex(v42, v40) );
            if ( !v42 )
              json_delete(v17);
          }
        }
      }
      else
      {
        v20 = json_dumps(v17, 24576);
        v21 = v20;
        if ( v20 )
          sub_25A34(&fd, v20);
        if ( v17 && v17[1] != -1 )
        {
          v22 = v17 + 1;
          __dmb(0xBu);
          do
          {
            v23 = __ldrex(v22);
            v24 = v23 - 1;
          }
          while ( __strex(v24, v22) );
          if ( !v24 )
            json_delete(v17);
        }
        free(v21);
      }
LABEL_17:
      close(fd);
    }
  }
LABEL_119:
  V_LOCK();
  logfmt_raw(v123, 0x1000u, 0, "%s: init socket failed", "api");
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/api_new.c",
           130,
           "api",
           3,
           2277,
           100,
           v123);
}
