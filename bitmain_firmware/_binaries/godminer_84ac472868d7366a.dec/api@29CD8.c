int api()
{
  void *v0; // r0
  int v1; // r0
  struct addrinfo *v2; // r4
  int v3; // r0
  struct addrinfo *i; // r3
  int v5; // r0
  int v6; // r6
  time_t v7; // r9
  int *v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int servlen; // r4
  int v13; // r0
  ssize_t v14; // r3
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r5
  _DWORD *v19; // r6
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r4
  _DWORD *v24; // r0
  _DWORD *v25; // r5
  char *v26; // r0
  char *v27; // r5
  unsigned int *v28; // r3
  unsigned int v29; // r2
  unsigned int v30; // r2
  _DWORD *v31; // r0
  _DWORD *v32; // r0
  _DWORD *v33; // r8
  int v34; // r0
  int v35; // r6
  size_t v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int *v40; // r4
  const char **v41; // r6
  int v42; // r5
  const char *v43; // r7
  const char *v44; // t1
  _DWORD *v45; // r0
  unsigned int *v46; // r3
  unsigned int v47; // r2
  unsigned int v48; // r2
  _DWORD *v49; // r0
  int v50; // r0
  int v51; // r0
  unsigned int *v52; // r3
  unsigned int v53; // r2
  unsigned int v54; // r2
  int v55; // r0
  _DWORD *v56; // r0
  unsigned int v57; // r4
  int v58; // r8
  _DWORD *v59; // r0
  bool v60; // zf
  int v61; // r7
  const char *v62; // r0
  int v63; // r0
  char *v64; // r0
  char *v65; // r4
  unsigned int *v66; // r3
  unsigned int v67; // r2
  unsigned int v68; // r2
  unsigned int *v69; // r3
  unsigned int v70; // r2
  unsigned int v71; // r2
  int *v72; // r0
  int v73; // r0
  int *v74; // r0
  int v75; // r0
  _DWORD *v77; // r8
  int v78; // r9
  int v79; // r6
  _DWORD *v80; // r0
  _DWORD *v81; // r7
  int v82; // r0
  int v83; // r5
  size_t v84; // r0
  int v85; // r0
  int v86; // r0
  int v87; // r0
  int *v88; // r8
  int v89; // r0
  int v90; // r0
  int v91; // r0
  _BYTE *v92; // r6
  int v93; // r0
  int v94; // r12
  const char *v95; // r0
  _DWORD *v96; // r0
  _DWORD *v97; // r0
  unsigned int v98; // r1
  unsigned int *v99; // r3
  unsigned int v100; // r2
  unsigned int v101; // r2
  const char *v102; // r0
  int v103; // r0
  int *v104; // r0
  int v105; // r0
  unsigned int v106; // [sp+10h] [bp-F554h]
  int protocol; // [sp+18h] [bp-F54Ch]
  unsigned int v108; // [sp+1Ch] [bp-F548h]
  int v109; // [sp+20h] [bp-F544h]
  int v110; // [sp+28h] [bp-F53Ch]
  int v111; // [sp+30h] [bp-F534h]
  _DWORD *v112; // [sp+40h] [bp-F524h]
  int v113; // [sp+4Ch] [bp-F518h] BYREF
  int fd; // [sp+50h] [bp-F514h] BYREF
  socklen_t addr_len; // [sp+54h] [bp-F510h] BYREF
  struct addrinfo *pai; // [sp+58h] [bp-F50Ch] BYREF
  int optval; // [sp+5Ch] [bp-F508h] BYREF
  char service[12]; // [sp+60h] [bp-F504h] BYREF
  char v119[4]; // [sp+6Ch] [bp-F4F8h] BYREF
  int v120; // [sp+70h] [bp-F4F4h]
  int v121; // [sp+74h] [bp-F4F0h]
  int v122; // [sp+78h] [bp-F4ECh]
  char v123[4]; // [sp+7Ch] [bp-F4E8h] BYREF
  int v124; // [sp+80h] [bp-F4E4h]
  int v125; // [sp+84h] [bp-F4E0h]
  int v126; // [sp+88h] [bp-F4DCh]
  char s1[4]; // [sp+8Ch] [bp-F4D8h] BYREF
  int v128; // [sp+90h] [bp-F4D4h]
  int v129; // [sp+94h] [bp-F4D0h]
  int v130; // [sp+98h] [bp-F4CCh]
  _DWORD v131[5]; // [sp+9Ch] [bp-F4C8h] BYREF
  struct addrinfo v132; // [sp+B0h] [bp-F4B4h] BYREF
  struct sockaddr addr; // [sp+D0h] [bp-F494h] BYREF
  char v134[16]; // [sp+150h] [bp-F414h] BYREF
  char v135[252]; // [sp+24Ch] [bp-F318h] BYREF
  char src[256]; // [sp+348h] [bp-F21Ch] BYREF
  _DWORD v137[70]; // [sp+448h] [bp-F11Ch] BYREF
  char s[4096]; // [sp+560h] [bp-F004h] BYREF
  _BYTE v139[4064]; // [sp+1560h] [bp-E004h] BYREF
  _BYTE v140[4064]; // [sp+2560h] [bp-D004h] BYREF
  _BYTE v141[4000]; // [sp+3560h] [bp-C004h] BYREF
  _BYTE v142[4000]; // [sp+4560h] [bp-B004h] BYREF
  _BYTE v143[4000]; // [sp+5560h] [bp-A004h] BYREF
  _BYTE v144[4000]; // [sp+6560h] [bp-9004h] BYREF
  _BYTE v145[4000]; // [sp+7560h] [bp-8004h] BYREF
  _BYTE v146[4000]; // [sp+8560h] [bp-7004h] BYREF
  _BYTE v147[4000]; // [sp+9560h] [bp-6004h] BYREF
  _BYTE v148[4000]; // [sp+A560h] [bp-5004h] BYREF
  _BYTE v149[4000]; // [sp+B560h] [bp-4004h] BYREF
  _BYTE v150[4000]; // [sp+C560h] [bp-3004h] BYREF
  char v151[8196]; // [sp+D560h] [bp-2004h] BYREF

  v113 = -1;
  fd = -1;
  memset(v151, 0, 0x2000u);
  v0 = memset(s, 0, sizeof(s));
  v120 = 0;
  v124 = 0;
  v121 = 0;
  v122 = 0;
  v125 = 0;
  v126 = 0;
  *(_DWORD *)v119 = 0;
  *(_DWORD *)v123 = 0;
  V_LOCK(v0);
  v1 = logfmt_raw((int)v139, 0x1000u);
  V_UNLOCK(v1);
  v106 = 2;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "api",
    3,
    2275,
    60,
    v139);
  v2 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v137, 0);
  if ( v2 )
  {
    sub_25608(&v113);
    _pthread_unwind_next((__pthread_unwind_buf_t *)v137);
LABEL_137:
    v6 = (int)v2;
    goto LABEL_9;
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)v137);
  sprintf(service, "%d", 4028);
  memset(&v132.ai_family, 0, 28);
  v132.ai_flags = 1;
  v3 = getaddrinfo("0.0.0.0", service, &v132, &pai);
  protocol = v3;
  if ( v3 )
  {
    V_LOCK(v3);
    v92 = v145;
    v103 = logfmt_raw((int)v145, 0x1000u);
    V_UNLOCK(v103);
    v94 = 1894;
    goto LABEL_122;
  }
  v2 = pai;
  if ( !pai )
    goto LABEL_137;
  for ( i = pai; ; i = pai )
  {
    v5 = socket(i->ai_family, 1, protocol);
    if ( v5 > 0 )
    {
      v6 = v5;
      goto LABEL_9;
    }
    v2 = v2->ai_next;
    if ( !v2 )
      break;
  }
  v6 = v5;
  if ( v5 == -1 )
  {
    V_LOCK(-1);
    v92 = v146;
    v93 = logfmt_raw((int)v146, 0x1000u);
    V_UNLOCK(v93);
    v94 = 1907;
LABEL_122:
    v11 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "api_init_socket",
            15,
            v94,
            100,
            v92);
    goto LABEL_119;
  }
LABEL_9:
  optval = 1;
  setsockopt(v6, 1, 2, &optval, 4u);
  v7 = time(0);
  while ( bind(v6, v2->ai_addr, v2->ai_addrlen) < 0 )
  {
    v8 = _errno_location();
    strerror(*v8);
    v9 = time(0) - v7;
    if ( v9 > 61 )
    {
      freeaddrinfo(pai);
      V_LOCK(v89);
      v90 = logfmt_raw((int)v148, 0x1000u);
      V_UNLOCK(v90);
      v11 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/api_new.c",
              130,
              "api_init_socket",
              15,
              1930,
              100,
              v148);
      goto LABEL_119;
    }
    V_LOCK(v9);
    v10 = logfmt_raw((int)v147, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      1922,
      80,
      v147);
    sleep(0x1Eu);
  }
  freeaddrinfo(pai);
  v11 = listen(v6, 100);
  if ( v11 < 0 )
  {
    V_LOCK(v11);
    v104 = _errno_location();
    strerror(*v104);
    v105 = logfmt_raw((int)v149, 0x1000u);
    V_UNLOCK(v105);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "api_init_socket",
      15,
      1935,
      100,
      v149);
    v11 = close(v6);
    goto LABEL_119;
  }
  if ( v6 >= 0 )
  {
    v113 = v6;
    while ( 1 )
    {
      servlen = (unsigned __int8)byte_164FDC;
      if ( byte_164FDC )
      {
LABEL_102:
        _pthread_unregister_cancel((__pthread_unwind_buf_t *)v137);
        v74 = sub_25608(&v113);
        V_LOCK(v74);
        v75 = logfmt_raw((int)v144, 0x1000u);
        V_UNLOCK(v75);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2346,
          60,
          v144);
        return close(v113);
      }
      addr_len = 128;
      v13 = accept(v113, &addr, &addr_len);
      fd = v13;
      if ( v13 < 0 )
      {
        V_LOCK(v13);
        v72 = _errno_location();
        strerror(*v72);
        v73 = logfmt_raw((int)v141, 0x1000u);
        V_UNLOCK(v73);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2289,
          100,
          v141);
        goto LABEL_102;
      }
      v14 = recv(v13, v151, 0xFFFu, servlen);
      if ( v14 < 0 )
      {
        v151[0] = servlen;
        goto LABEL_17;
      }
      *(_DWORD *)::s1 = servlen;
      dword_164FD0 = servlen;
      dword_164FD4 = servlen;
      dword_164FD8 = servlen;
      v151[v14] = servlen;
      *(_DWORD *)v119 = servlen;
      *(_DWORD *)v123 = servlen;
      v120 = servlen;
      v121 = servlen;
      v122 = servlen;
      v124 = servlen;
      v125 = servlen;
      v126 = servlen;
      dword_164FC8 = time((time_t *)servlen);
      v15 = getnameinfo(&addr, 0x80u, ::s1, 0x10u, (char *)servlen, servlen, 1u);
      V_LOCK(v15);
      v16 = logfmt_raw((int)v142, 0x1000u);
      V_UNLOCK(v16);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/api_new.c",
        130,
        "api",
        3,
        2305,
        20,
        v142);
      v128 = servlen;
      *(_DWORD *)s1 = servlen;
      v129 = servlen;
      v130 = servlen;
      v17 = (_DWORD *)json_loads(v151, servlen, v134);
      v18 = v17;
      if ( v17 && !*v17 )
      {
        v17 = (_DWORD *)((int (*)(void))json_object_get)();
        v19 = v17;
        if ( v17 && *v17 == 1 )
        {
          v56 = (_DWORD *)json_object_get(v18, "new_api");
          if ( v56 )
            v108 = *v56 != 5;
          else
            v108 = 1;
          v57 = protocol;
          v109 = protocol;
          v58 = json_object(v56);
          while ( json_array_size(v19) > v57 )
          {
            v59 = (_DWORD *)json_array_get(v19, v57);
            v60 = v59 == 0;
            if ( v59 )
              v60 = v57 == 11;
            v61 = v60;
            if ( v60 )
              break;
            if ( *v59 == 2 )
            {
              *(_DWORD *)s1 = v61;
              v128 = v61;
              v129 = v61;
              v130 = v61;
              v62 = (const char *)json_string_value(v59);
              snprintf(s1, 0x10u, "%s", v62);
              v63 = strcmp(s1, "reload");
              if ( v63 | v108 )
              {
                v111 = json_object(v63);
                sub_2564C(v111, s1, v61, v108);
                json_object_set_new(v58, s1, v111);
              }
              else
              {
                v109 = 1;
              }
            }
            ++v57;
          }
          v64 = (char *)json_dumps(v58, 24576);
          v65 = v64;
          if ( v64 )
            sub_25B08(&fd, v64);
          free(v65);
          if ( v109 == 1 )
            sub_2564C(v58, "reload", 0, 0);
          if ( v58 )
          {
            if ( *(_DWORD *)(v58 + 4) != -1 )
            {
              v66 = (unsigned int *)(v58 + 4);
              __dmb(0xBu);
              do
              {
                v67 = __ldrex(v66);
                v68 = v67 - 1;
              }
              while ( __strex(v68, v66) );
              if ( !v68 )
                json_delete(v58);
            }
          }
          if ( v18[1] != -1 )
          {
            v69 = v18 + 1;
            __dmb(0xBu);
            do
            {
              v70 = __ldrex(v69);
              v71 = v70 - 1;
            }
            while ( __strex(v71, v69) );
            if ( !v71 )
              json_delete(v18);
          }
          goto LABEL_17;
        }
        if ( v18[1] != -1 )
        {
          v20 = v18 + 1;
          __dmb(0xBu);
          do
          {
            v21 = __ldrex(v20);
            v22 = v21 - 1;
          }
          while ( __strex(v22, v20) );
          if ( !v22 )
            v17 = (_DWORD *)json_delete(v18);
        }
      }
      v23 = json_object(v17);
      v24 = (_DWORD *)json_loads(v151, 0, v135);
      v25 = v24;
      if ( !v24 || *v24 )
      {
        v106 = 2;
        snprintf(v119, 0x10u, "%s", v151);
        sub_2564C(v23, v119, (int)v123, 2u);
        goto LABEL_33;
      }
      v49 = (_DWORD *)json_object_get(v24, "command");
      if ( v49 && *v49 == 2 )
      {
        v95 = (const char *)json_string_value(v49);
        snprintf(v119, 0x10u, "%s", v95);
        v96 = (_DWORD *)json_object_get(v25, "new_api");
        if ( v96 && *v96 == 5 )
        {
          if ( v25[1] == -1 )
          {
            v106 = protocol;
            sub_2564C(v23, v119, (int)v123, protocol);
            goto LABEL_33;
          }
          v98 = protocol;
        }
        else
        {
          v97 = (_DWORD *)json_object_get(v25, "parameter");
          if ( v97 && *v97 == 2 )
          {
            v102 = (const char *)json_string_value(v97);
            snprintf(v123, 0x10u, "%s", v102);
          }
          if ( v25[1] == -1 )
          {
            v106 = 1;
            sub_2564C(v23, v119, (int)v123, 1u);
            goto LABEL_33;
          }
          v98 = 1;
        }
        v99 = v25 + 1;
        __dmb(0xBu);
        do
        {
          v100 = __ldrex(v99);
          v101 = v100 - 1;
        }
        while ( __strex(v101, v99) );
        v106 = v98;
        if ( v101 )
        {
          sub_2564C(v23, v119, (int)v123, v98);
        }
        else
        {
          json_delete(v25);
          sub_2564C(v23, v119, (int)v123, v106);
        }
      }
      else
      {
        V_LOCK(v49);
        v50 = logfmt_raw((int)v150, 0x1000u);
        V_UNLOCK(v50);
        v51 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "parse_recv_buf",
                14,
                1968,
                100,
                v150);
        if ( v25[1] != -1 )
        {
          v52 = v25 + 1;
          __dmb(0xBu);
          do
          {
            v53 = __ldrex(v52);
            v54 = v53 - 1;
          }
          while ( __strex(v54, v52) );
          if ( !v54 )
            v51 = json_delete(v25);
        }
        V_LOCK(v51);
        v55 = logfmt_raw((int)v143, 0x1000u);
        V_UNLOCK(v55);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "api",
          3,
          2318,
          100,
          v143);
        sub_23650(v23, 0, 24, "Missing JSON 'command'");
      }
LABEL_33:
      if ( v106 == 2 )
      {
        memset(s, 0, sizeof(s));
        if ( v23 )
        {
          v31 = (_DWORD *)json_object_get(v23, "STATUS");
          if ( v31 )
          {
            if ( *v31 == 1 )
            {
              v32 = (_DWORD *)json_array_get(v31, 0);
              v33 = v32;
              if ( v32 )
              {
                if ( !*v32 )
                {
                  v34 = json_object_iter();
                  v35 = json_object_iter_key(v34);
                  if ( v35 )
                  {
                    v110 = v23;
                    do
                    {
                      v39 = json_object_key_to_iter(v35);
                      v40 = (int *)json_object_iter_value(v39);
                      if ( !v40 )
                        break;
                      v36 = strlen(s);
                      *(_WORD *)stpcpy(&s[v36]) = 61;
                      sub_25810(s, v40);
                      *(_WORD *)&s[strlen(s)] = 44;
                      v37 = json_object_key_to_iter(v35);
                      v38 = json_object_iter_next(v33, v37);
                      v35 = json_object_iter_key(v38);
                    }
                    while ( v35 );
                    v23 = v110;
                  }
                  v41 = (const char **)v131;
                  *((_BYTE *)&v137[69] + strlen(s) + 3) = 124;
                  memset(src, 0, sizeof(src));
                  v42 = protocol;
                  v131[0] = "SUMMARY";
                  v131[1] = "POOLS";
                  v131[2] = "STATS";
                  v131[3] = "DEVS";
                  v131[4] = "VERSION";
                  while ( 1 )
                  {
                    v44 = *v41++;
                    v43 = v44;
                    v45 = (_DWORD *)json_object_get(v23, v44);
                    if ( v45 )
                    {
                      if ( *v45 == 1 )
                        break;
                    }
                    if ( ++v42 == 5 )
                      goto LABEL_57;
                  }
                  v77 = v45;
                  if ( (v42 & 0xFFFFFFFB) == 0 )
                  {
                    snprintf(src, 0x100u, "%s,", v43);
                    strcat(s, src);
                  }
                  v78 = json_array_size(v77);
                  if ( v78 > 0 )
                  {
                    v79 = protocol;
                    do
                    {
                      v80 = (_DWORD *)json_array_get(v77, v79);
                      v81 = v80;
                      if ( v80 && !*v80 )
                      {
                        v82 = json_object_iter();
                        v83 = json_object_iter_key(v82);
                        if ( v83 )
                        {
                          v112 = v77;
                          do
                          {
                            v87 = json_object_key_to_iter(v83);
                            v88 = (int *)json_object_iter_value(v87);
                            if ( !v88 )
                              break;
                            v84 = strlen(s);
                            *(_WORD *)stpcpy(&s[v84]) = 61;
                            sub_25810(s, v88);
                            *(_WORD *)&s[strlen(s)] = 44;
                            v85 = json_object_key_to_iter(v83);
                            v86 = json_object_iter_next(v81, v85);
                            v83 = json_object_iter_key(v86);
                          }
                          while ( v83 );
                          v77 = v112;
                        }
                        *((_BYTE *)&v137[69] + strlen(s) + 3) = 124;
                        if ( v78 - 1 != v79 )
                          s[strlen(s)] = 44;
                      }
                      ++v79;
                    }
                    while ( v78 != v79 );
                  }
                }
              }
            }
          }
        }
LABEL_57:
        sub_25B08(&fd, s);
        if ( v23 )
        {
          if ( *(_DWORD *)(v23 + 4) != -1 )
          {
            v46 = (unsigned int *)(v23 + 4);
            __dmb(0xBu);
            do
            {
              v47 = __ldrex(v46);
              v48 = v47 - 1;
            }
            while ( __strex(v48, v46) );
            if ( !v48 )
              json_delete(v23);
          }
        }
      }
      else
      {
        v26 = (char *)json_dumps(v23, 24576);
        v27 = v26;
        if ( v26 )
          sub_25B08(&fd, v26);
        if ( v23 && *(_DWORD *)(v23 + 4) != -1 )
        {
          v28 = (unsigned int *)(v23 + 4);
          __dmb(0xBu);
          do
          {
            v29 = __ldrex(v28);
            v30 = v29 - 1;
          }
          while ( __strex(v30, v28) );
          if ( !v30 )
            json_delete(v23);
        }
        free(v27);
      }
LABEL_17:
      close(fd);
    }
  }
LABEL_119:
  V_LOCK(v11);
  v91 = logfmt_raw((int)v140, 0x1000u);
  V_UNLOCK(v91);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
           "igin_master/api_new.c",
           130,
           "api",
           3,
           2281,
           100,
           v140);
}
