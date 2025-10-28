void *api()
{
  void *result; // r0
  int v1; // r4
  int v2; // r0
  struct addrinfo *v3; // r4
  int v4; // r0
  struct addrinfo *i; // r3
  int v6; // r0
  int v7; // r6
  time_t v8; // r9
  int *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  ssize_t v19; // r3
  int v20; // r0
  int v21; // r0
  __int64 v22; // r0
  unsigned int v23; // r2
  unsigned int *v24; // r3
  int v25; // r5
  int v26; // r6
  unsigned int v27; // r2
  int v28; // r4
  _DWORD *v29; // r0
  _DWORD *v30; // r5
  char *v31; // r0
  char *v32; // r5
  unsigned int *v33; // r3
  unsigned int v34; // r2
  unsigned int v35; // r2
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  _DWORD *v38; // r8
  int v39; // r0
  int v40; // r6
  size_t v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int *v45; // r4
  const char **v46; // r6
  int v47; // r5
  const char *v48; // r7
  const char *v49; // t1
  _DWORD *v50; // r0
  unsigned int *v51; // r3
  unsigned int v52; // r2
  unsigned int v53; // r2
  _DWORD *v54; // r0
  int v55; // r0
  int v56; // r0
  unsigned int *v57; // r3
  unsigned int v58; // r2
  unsigned int v59; // r2
  int v60; // r0
  _DWORD *v61; // r0
  int v62; // r1
  int v63; // r2
  _BOOL4 v64; // r3
  unsigned int v65; // r4
  int v66; // r8
  _DWORD *v67; // r0
  bool v68; // zf
  int v69; // r7
  const char *v70; // r0
  int v71; // r0
  int v72; // r1
  char *v73; // r0
  char *v74; // r4
  unsigned int *v75; // r3
  unsigned int v76; // r2
  unsigned int v77; // r2
  unsigned int *v78; // r3
  unsigned int v79; // r2
  unsigned int v80; // r2
  int *v81; // r0
  int v82; // r0
  int *v83; // r0
  int v84; // r0
  _DWORD *v85; // r8
  int v86; // r6
  _DWORD *v87; // r0
  _DWORD *v88; // r7
  int v89; // r0
  int v90; // r0
  int v91; // r0
  int v92; // r0
  int v93; // r5
  size_t v94; // r0
  int v95; // r0
  int v96; // r0
  int v97; // r0
  int *v98; // r8
  _BYTE *v99; // r6
  int v100; // r0
  int v101; // r12
  const char *v102; // r0
  _DWORD *v103; // r0
  _DWORD *v104; // r0
  unsigned int v105; // r1
  unsigned int *v106; // r3
  unsigned int v107; // r2
  unsigned int v108; // r2
  const char *v109; // r0
  int v110; // r0
  int *v111; // r0
  int v112; // r0
  unsigned int v113; // [sp+10h] [bp-11564h]
  int protocol; // [sp+14h] [bp-11560h]
  int v115; // [sp+18h] [bp-1155Ch]
  unsigned int v116; // [sp+20h] [bp-11554h]
  int v117; // [sp+24h] [bp-11550h]
  int v118; // [sp+2Ch] [bp-11548h]
  int v119; // [sp+34h] [bp-11540h]
  _DWORD *v120; // [sp+40h] [bp-11534h]
  int v121; // [sp+48h] [bp-1152Ch] BYREF
  int fd; // [sp+4Ch] [bp-11528h] BYREF
  socklen_t addr_len; // [sp+50h] [bp-11524h] BYREF
  int v124; // [sp+54h] [bp-11520h] BYREF
  int v125; // [sp+58h] [bp-1151Ch] BYREF
  int v126; // [sp+5Ch] [bp-11518h] BYREF
  struct addrinfo *ai; // [sp+60h] [bp-11514h] BYREF
  int optval; // [sp+64h] [bp-11510h] BYREF
  _DWORD v129[2]; // [sp+68h] [bp-1150Ch] BYREF
  char service[12]; // [sp+70h] [bp-11504h] BYREF
  char v131[4]; // [sp+7Ch] [bp-114F8h] BYREF
  int v132; // [sp+80h] [bp-114F4h]
  int v133; // [sp+84h] [bp-114F0h]
  int v134; // [sp+88h] [bp-114ECh]
  char v135[4]; // [sp+8Ch] [bp-114E8h] BYREF
  int v136; // [sp+90h] [bp-114E4h]
  int v137; // [sp+94h] [bp-114E0h]
  int v138; // [sp+98h] [bp-114DCh]
  char s1[4]; // [sp+9Ch] [bp-114D8h] BYREF
  int v140; // [sp+A0h] [bp-114D4h]
  int v141; // [sp+A4h] [bp-114D0h]
  int v142; // [sp+A8h] [bp-114CCh]
  _DWORD v143[5]; // [sp+ACh] [bp-114C8h] BYREF
  struct addrinfo req; // [sp+C0h] [bp-114B4h] BYREF
  struct sockaddr addr; // [sp+E0h] [bp-11494h] BYREF
  char v146[16]; // [sp+160h] [bp-11414h] BYREF
  char v147[252]; // [sp+25Ch] [bp-11318h] BYREF
  char src[256]; // [sp+358h] [bp-1121Ch] BYREF
  _DWORD v149[70]; // [sp+458h] [bp-1111Ch] BYREF
  char s[4096]; // [sp+570h] [bp-11004h] BYREF
  _BYTE v151[4048]; // [sp+1570h] [bp-10004h] BYREF
  _BYTE v152[4048]; // [sp+2570h] [bp-F004h] BYREF
  _BYTE v153[3984]; // [sp+3570h] [bp-E004h] BYREF
  _BYTE v154[3984]; // [sp+4570h] [bp-D004h] BYREF
  _BYTE v155[3984]; // [sp+5570h] [bp-C004h] BYREF
  _BYTE v156[3984]; // [sp+6570h] [bp-B004h] BYREF
  _BYTE v157[3984]; // [sp+7570h] [bp-A004h] BYREF
  _BYTE v158[3984]; // [sp+8570h] [bp-9004h] BYREF
  _BYTE v159[3984]; // [sp+9570h] [bp-8004h] BYREF
  _BYTE v160[3984]; // [sp+A570h] [bp-7004h] BYREF
  _BYTE v161[3984]; // [sp+B570h] [bp-6004h] BYREF
  _BYTE v162[3984]; // [sp+C570h] [bp-5004h] BYREF
  _BYTE v163[3984]; // [sp+D570h] [bp-4004h] BYREF
  _BYTE v164[3984]; // [sp+E570h] [bp-3004h] BYREF
  char v165[8196]; // [sp+F570h] [bp-2004h] BYREF

  v121 = -1;
  fd = -1;
  v113 = 2;
  memset(v165, 0, 0x2000u);
  result = memset(s, 0, sizeof(s));
  v1 = (unsigned __int8)byte_1731D0;
  v132 = 0;
  v136 = 0;
  *(_DWORD *)v131 = 0;
  v133 = 0;
  v134 = 0;
  *(_DWORD *)v135 = 0;
  v137 = 0;
  v138 = 0;
  if ( !byte_1731D0 )
  {
    V_LOCK(result);
    v2 = logfmt_raw((int)v151, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "api",
      3,
      2740,
      60,
      v151);
    v3 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v149, v1);
    if ( v3 )
    {
      sub_265C8(&v121);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v149);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v149);
      sprintf(service, "%d", 4028);
      memset(&req.ai_family, 0, 28);
      req.ai_flags = 1;
      v4 = getaddrinfo("0.0.0.0", service, &req, &ai);
      protocol = v4;
      if ( v4 )
      {
        V_LOCK(v4);
        v99 = v159;
        v110 = logfmt_raw((int)v159, 0x1000u);
        V_UNLOCK(v110);
        v101 = 2292;
LABEL_127:
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "api_init_socket",
                15,
                v101,
                100,
                v99);
LABEL_117:
        V_LOCK(v12);
        v91 = logfmt_raw((int)v152, 0x1000u);
        V_UNLOCK(v91);
        return (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release"
                         "/build/godminer-origin_godminer-new/api_new.c",
                         140,
                         "api",
                         3,
                         2747,
                         100,
                         v152);
      }
      v3 = ai;
      if ( ai )
      {
        for ( i = ai; ; i = ai )
        {
          v6 = socket(i->ai_family, 1, protocol);
          if ( v6 > 0 )
          {
            v7 = v6;
            goto LABEL_10;
          }
          v3 = v3->ai_next;
          if ( !v3 )
            break;
        }
        v7 = v6;
        if ( v6 == -1 )
        {
          V_LOCK(-1);
          v99 = v160;
          v100 = logfmt_raw((int)v160, 0x1000u);
          V_UNLOCK(v100);
          v101 = 2307;
          goto LABEL_127;
        }
        goto LABEL_10;
      }
    }
    v7 = (int)v3;
LABEL_10:
    optval = 1;
    setsockopt(v7, 1, 2, &optval, 4u);
    v8 = time(0);
    while ( bind(v7, v3->ai_addr, v3->ai_addrlen) < 0 )
    {
      v9 = _errno_location();
      strerror(*v9);
      v10 = time(0) - v8;
      if ( v10 > 61 )
      {
        freeaddrinfo(ai);
        V_LOCK(v89);
        v90 = logfmt_raw((int)v162, 0x1000u);
        V_UNLOCK(v90);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "api_init_socket",
                15,
                2335,
                100,
                v162);
        goto LABEL_117;
      }
      V_LOCK(v10);
      v11 = logfmt_raw((int)v161, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/api_new.c",
        140,
        "api_init_socket",
        15,
        2325,
        80,
        v161);
      sleep(0x1Eu);
    }
    freeaddrinfo(ai);
    v12 = listen(v7, 100);
    if ( v12 >= 0 )
    {
      if ( v7 < 0 )
        goto LABEL_117;
      v121 = v7;
      byte_1731D0 = 1;
      while ( 1 )
      {
        v13 = (unsigned __int8)byte_1731AC;
        if ( byte_1731AC )
        {
LABEL_107:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v149);
          v83 = sub_265C8(&v121);
          byte_1731D0 = 0;
          V_LOCK(v83);
          v84 = logfmt_raw((int)v158, 0x1000u);
          V_UNLOCK(v84);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "api",
            3,
            2848,
            60,
            v158);
          return (void *)close(v121);
        }
        addr_len = 128;
        v14 = accept(v121, &addr, &addr_len);
        fd = v14;
        if ( v14 < 0 )
        {
          V_LOCK(v14);
          v81 = _errno_location();
          strerror(*v81);
          v82 = logfmt_raw((int)v153, 0x1000u);
          V_UNLOCK(v82);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "api",
            3,
            2760,
            100,
            v153);
          goto LABEL_107;
        }
        v126 = 2;
        v124 = 1;
        v125 = 5;
        setsockopt(v14, 1, 9, &v124, 4u);
        setsockopt(fd, 6, 1, &v124, 4u);
        setsockopt(fd, 6, 6, &v124, 4u);
        setsockopt(fd, 6, 4, &v125, 4u);
        setsockopt(fd, 6, 5, &v126, 4u);
        v129[1] = v13;
        v129[0] = 10;
        v15 = setsockopt(fd, 1, 21, v129, 8u);
        if ( v15 )
        {
          V_LOCK(v15);
          v16 = logfmt_raw((int)v154, 0x1000u);
          V_UNLOCK(v16);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "api",
            3,
            2779,
            100,
            v154);
          close(fd);
        }
        v17 = setsockopt(fd, 1, 20, v129, 8u);
        if ( v17 )
        {
          V_LOCK(v17);
          v18 = logfmt_raw((int)v155, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "api",
            3,
            2785,
            100,
            v155);
          close(fd);
        }
        v19 = recv(fd, v165, 0xFFFu, 0);
        if ( v19 < 0 )
        {
          v165[0] = 0;
          goto LABEL_18;
        }
        *(_DWORD *)::s1 = 0;
        dword_1731A0 = 0;
        dword_1731A4 = 0;
        dword_1731A8 = 0;
        v165[v19] = 0;
        v132 = 0;
        v133 = 0;
        v134 = 0;
        *(_DWORD *)v131 = 0;
        *(_DWORD *)v135 = 0;
        v136 = 0;
        v137 = 0;
        v138 = 0;
        dword_173198 = time(0);
        v20 = getnameinfo(&addr, 0x80u, ::s1, 0x10u, 0, 0, 1u);
        V_LOCK(v20);
        v21 = logfmt_raw((int)v156, 0x1000u);
        V_UNLOCK(v21);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "api",
          3,
          2802,
          20,
          v156);
        v140 = 0;
        *(_DWORD *)s1 = 0;
        v141 = 0;
        v142 = 0;
        LODWORD(v22) = json_loads(v165, 0, v146);
        v25 = v22;
        if ( (_DWORD)v22 )
        {
          v24 = *(unsigned int **)v22;
          if ( !*(_DWORD *)v22 )
          {
            LODWORD(v22) = ((int (*)(void))json_object_get)();
            v26 = v22;
            if ( (_DWORD)v22 && *(_DWORD *)v22 == 1 )
            {
              v61 = (_DWORD *)json_object_get(v25, "new_api");
              if ( v61 )
              {
                v64 = *v61 != 5;
                v116 = v64;
              }
              else
              {
                v116 = 1;
              }
              v65 = protocol;
              v117 = protocol;
              v66 = json_object(v61, v62, v63, v64);
              while ( json_array_size(v26) > v65 )
              {
                v67 = (_DWORD *)json_array_get(v26, v65);
                v68 = v67 == 0;
                if ( v67 )
                  v68 = v65 == 11;
                v69 = v68;
                if ( v68 )
                  break;
                if ( *v67 == 2 )
                {
                  *(_DWORD *)s1 = v69;
                  v140 = v69;
                  v141 = v69;
                  v142 = v69;
                  v70 = (const char *)json_string_value(v67);
                  snprintf(s1, 0x10u, "%s", v70);
                  v71 = strcmp(s1, "reload");
                  if ( v71 | v116 )
                  {
                    v119 = json_object(v71, v72, v71 | v116, v116);
                    sub_2660C(v119, s1, v69, v116);
                    json_object_set_new(v66, s1, v119);
                  }
                  else
                  {
                    v117 = 1;
                  }
                }
                ++v65;
              }
              v73 = (char *)json_dumps(v66, 24576);
              v74 = v73;
              if ( v73 )
                sub_26AC8(&fd, v73);
              free(v74);
              if ( v117 == 1 )
                sub_2660C(v66, "reload", 0, 0);
              if ( v66 )
              {
                if ( *(_DWORD *)(v66 + 4) != -1 )
                {
                  v75 = (unsigned int *)(v66 + 4);
                  __dmb(0xBu);
                  do
                  {
                    v76 = __ldrex(v75);
                    v77 = v76 - 1;
                  }
                  while ( __strex(v77, v75) );
                  if ( !v77 )
                    json_delete(v66);
                }
              }
              if ( *(_DWORD *)(v25 + 4) != -1 )
              {
                v78 = (unsigned int *)(v25 + 4);
                __dmb(0xBu);
                do
                {
                  v79 = __ldrex(v78);
                  v80 = v79 - 1;
                }
                while ( __strex(v80, v78) );
                if ( !v80 )
                  json_delete(v25);
              }
              goto LABEL_18;
            }
            v24 = *(unsigned int **)(v25 + 4);
            if ( v24 != (unsigned int *)-1 )
            {
              v24 = (unsigned int *)(v25 + 4);
              __dmb(0xBu);
              do
              {
                v27 = __ldrex(v24);
                v23 = v27 - 1;
                HIDWORD(v22) = __strex(v23, v24);
              }
              while ( HIDWORD(v22) );
              if ( !v23 )
                v22 = json_delete(v25);
            }
          }
        }
        v28 = json_object(v22, HIDWORD(v22), v23, v24);
        v29 = (_DWORD *)json_loads(v165, 0, v147);
        v30 = v29;
        if ( !v29 || *v29 )
        {
          v113 = 2;
          snprintf(v131, 0x10u, "%s", v165);
          sub_2660C(v28, v131, (int)v135, 2u);
          goto LABEL_38;
        }
        v54 = (_DWORD *)json_object_get(v29, "command");
        if ( v54 && *v54 == 2 )
        {
          v102 = (const char *)json_string_value(v54);
          snprintf(v131, 0x10u, "%s", v102);
          v103 = (_DWORD *)json_object_get(v30, "new_api");
          if ( v103 && *v103 == 5 )
          {
            if ( v30[1] == -1 )
            {
              v113 = protocol;
              sub_2660C(v28, v131, (int)v135, protocol);
              goto LABEL_38;
            }
            v105 = protocol;
          }
          else
          {
            v104 = (_DWORD *)json_object_get(v30, "parameter");
            if ( v104 && *v104 == 2 )
            {
              v109 = (const char *)json_string_value(v104);
              snprintf(v135, 0x10u, "%s", v109);
            }
            if ( v30[1] == -1 )
            {
              v113 = 1;
              sub_2660C(v28, v131, (int)v135, 1u);
              goto LABEL_38;
            }
            v105 = 1;
          }
          v106 = v30 + 1;
          __dmb(0xBu);
          do
          {
            v107 = __ldrex(v106);
            v108 = v107 - 1;
          }
          while ( __strex(v108, v106) );
          v113 = v105;
          if ( v108 )
          {
            sub_2660C(v28, v131, (int)v135, v105);
          }
          else
          {
            json_delete(v30);
            sub_2660C(v28, v131, (int)v135, v113);
          }
        }
        else
        {
          V_LOCK(v54);
          v55 = logfmt_raw((int)v164, 0x1000u);
          V_UNLOCK(v55);
          v56 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/api_new.c",
                  140,
                  "parse_recv_buf",
                  14,
                  2379,
                  100,
                  v164);
          if ( v30[1] != -1 )
          {
            v57 = v30 + 1;
            __dmb(0xBu);
            do
            {
              v58 = __ldrex(v57);
              v59 = v58 - 1;
            }
            while ( __strex(v59, v57) );
            if ( !v59 )
              v56 = json_delete(v30);
          }
          V_LOCK(v56);
          v60 = logfmt_raw((int)v157, 0x1000u);
          V_UNLOCK(v60);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "api",
            3,
            2817,
            100,
            v157);
          sub_23EE4(v28, 0, 24, "Missing JSON 'command'");
        }
LABEL_38:
        if ( v113 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v28 )
          {
            v36 = (_DWORD *)json_object_get(v28, "STATUS");
            if ( v36 )
            {
              if ( *v36 == 1 )
              {
                v37 = (_DWORD *)json_array_get(v36, 0);
                v38 = v37;
                if ( v37 )
                {
                  if ( !*v37 )
                  {
                    v39 = json_object_iter();
                    v40 = json_object_iter_key(v39);
                    if ( v40 )
                    {
                      v118 = v28;
                      do
                      {
                        v44 = json_object_key_to_iter(v40);
                        v45 = (int *)json_object_iter_value(v44);
                        if ( !v45 )
                          break;
                        v41 = strlen(s);
                        *(_WORD *)stpcpy(&s[v41]) = 61;
                        sub_267D0(s, v45);
                        *(_WORD *)&s[strlen(s)] = 44;
                        v42 = json_object_key_to_iter(v40);
                        v43 = json_object_iter_next(v38, v42);
                        v40 = json_object_iter_key(v43);
                      }
                      while ( v40 );
                      v28 = v118;
                    }
                    v46 = (const char **)v143;
                    *((_BYTE *)&v149[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v47 = protocol;
                    v143[0] = "SUMMARY";
                    v143[1] = "POOLS";
                    v143[2] = "STATS";
                    v143[3] = "DEVS";
                    v143[4] = "VERSION";
                    while ( 1 )
                    {
                      v49 = *v46++;
                      v48 = v49;
                      v50 = (_DWORD *)json_object_get(v28, v49);
                      if ( v50 )
                      {
                        if ( *v50 == 1 )
                          break;
                      }
                      if ( ++v47 == 5 )
                        goto LABEL_62;
                    }
                    v85 = v50;
                    if ( (v47 & 0xFFFFFFFB) == 0 )
                    {
                      snprintf(src, 0x100u, "%s,", v48);
                      strcat(s, src);
                    }
                    v115 = json_array_size(v85);
                    if ( v115 > 0 )
                    {
                      v86 = protocol;
                      do
                      {
                        v87 = (_DWORD *)json_array_get(v85, v86);
                        v88 = v87;
                        if ( v87 && !*v87 )
                        {
                          v92 = json_object_iter();
                          v93 = json_object_iter_key(v92);
                          if ( v93 )
                          {
                            v120 = v85;
                            do
                            {
                              v97 = json_object_key_to_iter(v93);
                              v98 = (int *)json_object_iter_value(v97);
                              if ( !v98 )
                                break;
                              v94 = strlen(s);
                              *(_WORD *)stpcpy(&s[v94]) = 61;
                              sub_267D0(s, v98);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v95 = json_object_key_to_iter(v93);
                              v96 = json_object_iter_next(v88, v95);
                              v93 = json_object_iter_key(v96);
                            }
                            while ( v93 );
                            v85 = v120;
                          }
                          *((_BYTE *)&v149[69] + strlen(s) + 3) = 124;
                          if ( v115 - 1 != v86 )
                            s[strlen(s)] = 44;
                        }
                        ++v86;
                      }
                      while ( v115 != v86 );
                    }
                  }
                }
              }
            }
          }
LABEL_62:
          sub_26AC8(&fd, s);
          if ( v28 )
          {
            if ( *(_DWORD *)(v28 + 4) != -1 )
            {
              v51 = (unsigned int *)(v28 + 4);
              __dmb(0xBu);
              do
              {
                v52 = __ldrex(v51);
                v53 = v52 - 1;
              }
              while ( __strex(v53, v51) );
              if ( !v53 )
                json_delete(v28);
            }
          }
        }
        else
        {
          v31 = (char *)json_dumps(v28, 24576);
          v32 = v31;
          if ( v31 )
            sub_26AC8(&fd, v31);
          if ( v28 && *(_DWORD *)(v28 + 4) != -1 )
          {
            v33 = (unsigned int *)(v28 + 4);
            __dmb(0xBu);
            do
            {
              v34 = __ldrex(v33);
              v35 = v34 - 1;
            }
            while ( __strex(v35, v33) );
            if ( !v35 )
              json_delete(v28);
          }
          free(v32);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK(v12);
    v111 = _errno_location();
    strerror(*v111);
    v112 = logfmt_raw((int)v163, 0x1000u);
    V_UNLOCK(v112);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "api_init_socket",
      15,
      2341,
      100,
      v163);
    v12 = close(v7);
    goto LABEL_117;
  }
  return result;
}
