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
  int servlen; // r4
  int v14; // r0
  ssize_t v15; // r3
  int v16; // r0
  int v17; // r0
  __int64 v18; // r0
  unsigned int v19; // r2
  unsigned int *v20; // r3
  int v21; // r5
  int v22; // r6
  unsigned int v23; // r2
  int v24; // r4
  _DWORD *v25; // r0
  _DWORD *v26; // r5
  char *v27; // r0
  char *v28; // r5
  unsigned int *v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // r2
  _DWORD *v32; // r0
  _DWORD *v33; // r0
  _DWORD *v34; // r8
  int v35; // r0
  int v36; // r6
  size_t v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int *v41; // r4
  const char **v42; // r6
  int v43; // r5
  const char *v44; // r7
  const char *v45; // t1
  _DWORD *v46; // r0
  unsigned int *v47; // r3
  unsigned int v48; // r2
  unsigned int v49; // r2
  _DWORD *v50; // r0
  int v51; // r0
  int v52; // r0
  unsigned int *v53; // r3
  unsigned int v54; // r2
  unsigned int v55; // r2
  int v56; // r0
  _DWORD *v57; // r0
  int v58; // r1
  int v59; // r2
  _BOOL4 v60; // r3
  unsigned int v61; // r4
  int v62; // r8
  _DWORD *v63; // r0
  bool v64; // zf
  int v65; // r7
  const char *v66; // r0
  int v67; // r0
  int v68; // r1
  char *v69; // r0
  char *v70; // r4
  unsigned int *v71; // r3
  unsigned int v72; // r2
  unsigned int v73; // r2
  unsigned int *v74; // r3
  unsigned int v75; // r2
  unsigned int v76; // r2
  int *v77; // r0
  int v78; // r0
  int *v79; // r0
  int v80; // r0
  _DWORD *v81; // r8
  int v82; // r6
  _DWORD *v83; // r0
  _DWORD *v84; // r7
  int v85; // r0
  int v86; // r5
  size_t v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int *v91; // r8
  int v92; // r0
  int v93; // r0
  int v94; // r0
  _BYTE *v95; // r6
  int v96; // r0
  int v97; // r12
  const char *v98; // r0
  _DWORD *v99; // r0
  _DWORD *v100; // r0
  unsigned int v101; // r1
  unsigned int *v102; // r3
  unsigned int v103; // r2
  unsigned int v104; // r2
  const char *v105; // r0
  int v106; // r0
  int *v107; // r0
  int v108; // r0
  unsigned int v109; // [sp+10h] [bp-F554h]
  int protocol; // [sp+18h] [bp-F54Ch]
  int v111; // [sp+1Ch] [bp-F548h]
  unsigned int v112; // [sp+20h] [bp-F544h]
  int v113; // [sp+24h] [bp-F540h]
  int v114; // [sp+2Ch] [bp-F538h]
  int v115; // [sp+34h] [bp-F530h]
  _DWORD *v116; // [sp+40h] [bp-F524h]
  int v117; // [sp+4Ch] [bp-F518h] BYREF
  int fd; // [sp+50h] [bp-F514h] BYREF
  socklen_t addr_len; // [sp+54h] [bp-F510h] BYREF
  struct addrinfo *pai; // [sp+58h] [bp-F50Ch] BYREF
  int optval; // [sp+5Ch] [bp-F508h] BYREF
  char service[12]; // [sp+60h] [bp-F504h] BYREF
  char v123[4]; // [sp+6Ch] [bp-F4F8h] BYREF
  int v124; // [sp+70h] [bp-F4F4h]
  int v125; // [sp+74h] [bp-F4F0h]
  int v126; // [sp+78h] [bp-F4ECh]
  char v127[4]; // [sp+7Ch] [bp-F4E8h] BYREF
  int v128; // [sp+80h] [bp-F4E4h]
  int v129; // [sp+84h] [bp-F4E0h]
  int v130; // [sp+88h] [bp-F4DCh]
  char s1[4]; // [sp+8Ch] [bp-F4D8h] BYREF
  int v132; // [sp+90h] [bp-F4D4h]
  int v133; // [sp+94h] [bp-F4D0h]
  int v134; // [sp+98h] [bp-F4CCh]
  _DWORD v135[5]; // [sp+9Ch] [bp-F4C8h] BYREF
  struct addrinfo v136; // [sp+B0h] [bp-F4B4h] BYREF
  struct sockaddr addr; // [sp+D0h] [bp-F494h] BYREF
  char v138[16]; // [sp+150h] [bp-F414h] BYREF
  char v139[252]; // [sp+24Ch] [bp-F318h] BYREF
  char src[256]; // [sp+348h] [bp-F21Ch] BYREF
  _DWORD v141[70]; // [sp+448h] [bp-F11Ch] BYREF
  char s[4096]; // [sp+560h] [bp-F004h] BYREF
  _BYTE v143[4064]; // [sp+1560h] [bp-E004h] BYREF
  _BYTE v144[4064]; // [sp+2560h] [bp-D004h] BYREF
  _BYTE v145[4000]; // [sp+3560h] [bp-C004h] BYREF
  _BYTE v146[4000]; // [sp+4560h] [bp-B004h] BYREF
  _BYTE v147[4000]; // [sp+5560h] [bp-A004h] BYREF
  _BYTE v148[4000]; // [sp+6560h] [bp-9004h] BYREF
  _BYTE v149[4000]; // [sp+7560h] [bp-8004h] BYREF
  _BYTE v150[4000]; // [sp+8560h] [bp-7004h] BYREF
  _BYTE v151[4000]; // [sp+9560h] [bp-6004h] BYREF
  _BYTE v152[4000]; // [sp+A560h] [bp-5004h] BYREF
  _BYTE v153[4000]; // [sp+B560h] [bp-4004h] BYREF
  _BYTE v154[4000]; // [sp+C560h] [bp-3004h] BYREF
  char v155[8196]; // [sp+D560h] [bp-2004h] BYREF

  v117 = -1;
  fd = -1;
  v109 = 2;
  memset(v155, 0, 0x2000u);
  result = memset(s, 0, sizeof(s));
  v1 = (unsigned __int8)byte_164F08;
  v124 = 0;
  v128 = 0;
  *(_DWORD *)v123 = 0;
  v125 = 0;
  v126 = 0;
  *(_DWORD *)v127 = 0;
  v129 = 0;
  v130 = 0;
  if ( !byte_164F08 )
  {
    V_LOCK(result);
    v2 = logfmt_raw((int)v143, 0x1000u);
    V_UNLOCK(v2);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "api",
      3,
      2707,
      60,
      v143);
    v3 = (struct addrinfo *)_sigsetjmp((struct __jmp_buf_tag *)v141, v1);
    if ( v3 )
    {
      sub_2553C(&v117);
      _pthread_unwind_next((__pthread_unwind_buf_t *)v141);
    }
    else
    {
      _pthread_register_cancel((__pthread_unwind_buf_t *)v141);
      sprintf(service, "%d", 4028);
      memset(&v136.ai_family, 0, 28);
      v136.ai_flags = 1;
      v4 = getaddrinfo("0.0.0.0", service, &v136, &pai);
      protocol = v4;
      if ( v4 )
      {
        V_LOCK(v4);
        v95 = v149;
        v106 = logfmt_raw((int)v149, 0x1000u);
        V_UNLOCK(v106);
        v97 = 2259;
LABEL_123:
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/api_new.c",
                136,
                "api_init_socket",
                15,
                v97,
                100,
                v95);
LABEL_120:
        V_LOCK(v12);
        v94 = logfmt_raw((int)v144, 0x1000u);
        V_UNLOCK(v94);
        return (void *)zlog(
                         g_zc,
                         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/bui"
                         "ld/godminer-origin_godminer-new/api_new.c",
                         136,
                         "api",
                         3,
                         2714,
                         100,
                         v144);
      }
      v3 = pai;
      if ( pai )
      {
        for ( i = pai; ; i = pai )
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
          v95 = v150;
          v96 = logfmt_raw((int)v150, 0x1000u);
          V_UNLOCK(v96);
          v97 = 2274;
          goto LABEL_123;
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
        freeaddrinfo(pai);
        V_LOCK(v92);
        v93 = logfmt_raw((int)v152, 0x1000u);
        V_UNLOCK(v93);
        v12 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/api_new.c",
                136,
                "api_init_socket",
                15,
                2302,
                100,
                v152);
        goto LABEL_120;
      }
      V_LOCK(v10);
      v11 = logfmt_raw((int)v151, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/api_new.c",
        136,
        "api_init_socket",
        15,
        2292,
        80,
        v151);
      sleep(0x1Eu);
    }
    freeaddrinfo(pai);
    v12 = listen(v7, 100);
    if ( v12 >= 0 )
    {
      if ( v7 < 0 )
        goto LABEL_120;
      v117 = v7;
      byte_164F08 = 1;
      while ( 1 )
      {
        servlen = (unsigned __int8)byte_164EE4;
        if ( byte_164EE4 )
        {
LABEL_103:
          _pthread_unregister_cancel((__pthread_unwind_buf_t *)v141);
          v79 = sub_2553C(&v117);
          byte_164F08 = 0;
          V_LOCK(v79);
          v80 = logfmt_raw((int)v148, 0x1000u);
          V_UNLOCK(v80);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/api_new.c",
            136,
            "api",
            3,
            2790,
            60,
            v148);
          return (void *)close(v117);
        }
        addr_len = 128;
        v14 = accept(v117, &addr, &addr_len);
        fd = v14;
        if ( v14 < 0 )
        {
          V_LOCK(v14);
          v77 = _errno_location();
          strerror(*v77);
          v78 = logfmt_raw((int)v145, 0x1000u);
          V_UNLOCK(v78);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/api_new.c",
            136,
            "api",
            3,
            2727,
            100,
            v145);
          goto LABEL_103;
        }
        v15 = recv(v14, v155, 0xFFFu, servlen);
        if ( v15 < 0 )
        {
          v155[0] = servlen;
          goto LABEL_18;
        }
        *(_DWORD *)::s1 = servlen;
        dword_164ED8 = servlen;
        dword_164EDC = servlen;
        dword_164EE0 = servlen;
        v155[v15] = servlen;
        *(_DWORD *)v123 = servlen;
        *(_DWORD *)v127 = servlen;
        v124 = servlen;
        v125 = servlen;
        v126 = servlen;
        v128 = servlen;
        v129 = servlen;
        v130 = servlen;
        dword_164ED0 = time((time_t *)servlen);
        v16 = getnameinfo(&addr, 0x80u, ::s1, 0x10u, (char *)servlen, servlen, 1u);
        V_LOCK(v16);
        v17 = logfmt_raw((int)v146, 0x1000u);
        V_UNLOCK(v17);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/api_new.c",
          136,
          "api",
          3,
          2744,
          20,
          v146);
        v132 = servlen;
        *(_DWORD *)s1 = servlen;
        v133 = servlen;
        v134 = servlen;
        LODWORD(v18) = json_loads(v155, servlen, v138);
        v21 = v18;
        if ( (_DWORD)v18 )
        {
          v20 = *(unsigned int **)v18;
          if ( !*(_DWORD *)v18 )
          {
            LODWORD(v18) = ((int (*)(void))json_object_get)();
            v22 = v18;
            if ( (_DWORD)v18 && *(_DWORD *)v18 == 1 )
            {
              v57 = (_DWORD *)json_object_get(v21, "new_api");
              if ( v57 )
              {
                v60 = *v57 != 5;
                v112 = v60;
              }
              else
              {
                v112 = 1;
              }
              v61 = protocol;
              v113 = protocol;
              v62 = json_object(v57, v58, v59, v60);
              while ( json_array_size(v22) > v61 )
              {
                v63 = (_DWORD *)json_array_get(v22, v61);
                v64 = v63 == 0;
                if ( v63 )
                  v64 = v61 == 11;
                v65 = v64;
                if ( v64 )
                  break;
                if ( *v63 == 2 )
                {
                  *(_DWORD *)s1 = v65;
                  v132 = v65;
                  v133 = v65;
                  v134 = v65;
                  v66 = (const char *)json_string_value(v63);
                  snprintf(s1, 0x10u, "%s", v66);
                  v67 = strcmp(s1, "reload");
                  if ( v67 | v112 )
                  {
                    v115 = json_object(v67, v68, v67 | v112, v112);
                    sub_25580(v115, s1, v65, v112);
                    json_object_set_new(v62, s1, v115);
                  }
                  else
                  {
                    v113 = 1;
                  }
                }
                ++v61;
              }
              v69 = (char *)json_dumps(v62, 24576);
              v70 = v69;
              if ( v69 )
                sub_25A3C(&fd, v69);
              free(v70);
              if ( v113 == 1 )
                sub_25580(v62, "reload", 0, 0);
              if ( v62 )
              {
                if ( *(_DWORD *)(v62 + 4) != -1 )
                {
                  v71 = (unsigned int *)(v62 + 4);
                  __dmb(0xBu);
                  do
                  {
                    v72 = __ldrex(v71);
                    v73 = v72 - 1;
                  }
                  while ( __strex(v73, v71) );
                  if ( !v73 )
                    json_delete(v62);
                }
              }
              if ( *(_DWORD *)(v21 + 4) != -1 )
              {
                v74 = (unsigned int *)(v21 + 4);
                __dmb(0xBu);
                do
                {
                  v75 = __ldrex(v74);
                  v76 = v75 - 1;
                }
                while ( __strex(v76, v74) );
                if ( !v76 )
                  json_delete(v21);
              }
              goto LABEL_18;
            }
            v20 = *(unsigned int **)(v21 + 4);
            if ( v20 != (unsigned int *)-1 )
            {
              v20 = (unsigned int *)(v21 + 4);
              __dmb(0xBu);
              do
              {
                v23 = __ldrex(v20);
                v19 = v23 - 1;
                HIDWORD(v18) = __strex(v19, v20);
              }
              while ( HIDWORD(v18) );
              if ( !v19 )
                v18 = json_delete(v21);
            }
          }
        }
        v24 = json_object(v18, HIDWORD(v18), v19, v20);
        v25 = (_DWORD *)json_loads(v155, 0, v139);
        v26 = v25;
        if ( !v25 || *v25 )
        {
          v109 = 2;
          snprintf(v123, 0x10u, "%s", v155);
          sub_25580(v24, v123, (int)v127, 2u);
          goto LABEL_34;
        }
        v50 = (_DWORD *)json_object_get(v25, "command");
        if ( v50 && *v50 == 2 )
        {
          v98 = (const char *)json_string_value(v50);
          snprintf(v123, 0x10u, "%s", v98);
          v99 = (_DWORD *)json_object_get(v26, "new_api");
          if ( v99 && *v99 == 5 )
          {
            if ( v26[1] == -1 )
            {
              v109 = protocol;
              sub_25580(v24, v123, (int)v127, protocol);
              goto LABEL_34;
            }
            v101 = protocol;
          }
          else
          {
            v100 = (_DWORD *)json_object_get(v26, "parameter");
            if ( v100 && *v100 == 2 )
            {
              v105 = (const char *)json_string_value(v100);
              snprintf(v127, 0x10u, "%s", v105);
            }
            if ( v26[1] == -1 )
            {
              v109 = 1;
              sub_25580(v24, v123, (int)v127, 1u);
              goto LABEL_34;
            }
            v101 = 1;
          }
          v102 = v26 + 1;
          __dmb(0xBu);
          do
          {
            v103 = __ldrex(v102);
            v104 = v103 - 1;
          }
          while ( __strex(v104, v102) );
          v109 = v101;
          if ( v104 )
          {
            sub_25580(v24, v123, (int)v127, v101);
          }
          else
          {
            json_delete(v26);
            sub_25580(v24, v123, (int)v127, v109);
          }
        }
        else
        {
          V_LOCK(v50);
          v51 = logfmt_raw((int)v154, 0x1000u);
          V_UNLOCK(v51);
          v52 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/api_new.c",
                  136,
                  "parse_recv_buf",
                  14,
                  2346,
                  100,
                  v154);
          if ( v26[1] != -1 )
          {
            v53 = v26 + 1;
            __dmb(0xBu);
            do
            {
              v54 = __ldrex(v53);
              v55 = v54 - 1;
            }
            while ( __strex(v55, v53) );
            if ( !v55 )
              v52 = json_delete(v26);
          }
          V_LOCK(v52);
          v56 = logfmt_raw((int)v147, 0x1000u);
          V_UNLOCK(v56);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/api_new.c",
            136,
            "api",
            3,
            2759,
            100,
            v147);
          sub_22E5C(v24, 0, 24, "Missing JSON 'command'");
        }
LABEL_34:
        if ( v109 == 2 )
        {
          memset(s, 0, sizeof(s));
          if ( v24 )
          {
            v32 = (_DWORD *)json_object_get(v24, "STATUS");
            if ( v32 )
            {
              if ( *v32 == 1 )
              {
                v33 = (_DWORD *)json_array_get(v32, 0);
                v34 = v33;
                if ( v33 )
                {
                  if ( !*v33 )
                  {
                    v35 = json_object_iter();
                    v36 = json_object_iter_key(v35);
                    if ( v36 )
                    {
                      v114 = v24;
                      do
                      {
                        v40 = json_object_key_to_iter(v36);
                        v41 = (int *)json_object_iter_value(v40);
                        if ( !v41 )
                          break;
                        v37 = strlen(s);
                        *(_WORD *)stpcpy(&s[v37]) = 61;
                        sub_25744(s, v41);
                        *(_WORD *)&s[strlen(s)] = 44;
                        v38 = json_object_key_to_iter(v36);
                        v39 = json_object_iter_next(v34, v38);
                        v36 = json_object_iter_key(v39);
                      }
                      while ( v36 );
                      v24 = v114;
                    }
                    v42 = (const char **)v135;
                    *((_BYTE *)&v141[69] + strlen(s) + 3) = 124;
                    memset(src, 0, sizeof(src));
                    v43 = protocol;
                    v135[0] = "SUMMARY";
                    v135[1] = "POOLS";
                    v135[2] = "STATS";
                    v135[3] = "DEVS";
                    v135[4] = "VERSION";
                    while ( 1 )
                    {
                      v45 = *v42++;
                      v44 = v45;
                      v46 = (_DWORD *)json_object_get(v24, v45);
                      if ( v46 )
                      {
                        if ( *v46 == 1 )
                          break;
                      }
                      if ( ++v43 == 5 )
                        goto LABEL_58;
                    }
                    v81 = v46;
                    if ( (v43 & 0xFFFFFFFB) == 0 )
                    {
                      snprintf(src, 0x100u, "%s,", v44);
                      strcat(s, src);
                    }
                    v111 = json_array_size(v81);
                    if ( v111 > 0 )
                    {
                      v82 = protocol;
                      do
                      {
                        v83 = (_DWORD *)json_array_get(v81, v82);
                        v84 = v83;
                        if ( v83 && !*v83 )
                        {
                          v85 = json_object_iter();
                          v86 = json_object_iter_key(v85);
                          if ( v86 )
                          {
                            v116 = v81;
                            do
                            {
                              v90 = json_object_key_to_iter(v86);
                              v91 = (int *)json_object_iter_value(v90);
                              if ( !v91 )
                                break;
                              v87 = strlen(s);
                              *(_WORD *)stpcpy(&s[v87]) = 61;
                              sub_25744(s, v91);
                              *(_WORD *)&s[strlen(s)] = 44;
                              v88 = json_object_key_to_iter(v86);
                              v89 = json_object_iter_next(v84, v88);
                              v86 = json_object_iter_key(v89);
                            }
                            while ( v86 );
                            v81 = v116;
                          }
                          *((_BYTE *)&v141[69] + strlen(s) + 3) = 124;
                          if ( v111 - 1 != v82 )
                            s[strlen(s)] = 44;
                        }
                        ++v82;
                      }
                      while ( v111 != v82 );
                    }
                  }
                }
              }
            }
          }
LABEL_58:
          sub_25A3C(&fd, s);
          if ( v24 )
          {
            if ( *(_DWORD *)(v24 + 4) != -1 )
            {
              v47 = (unsigned int *)(v24 + 4);
              __dmb(0xBu);
              do
              {
                v48 = __ldrex(v47);
                v49 = v48 - 1;
              }
              while ( __strex(v49, v47) );
              if ( !v49 )
                json_delete(v24);
            }
          }
        }
        else
        {
          v27 = (char *)json_dumps(v24, 24576);
          v28 = v27;
          if ( v27 )
            sub_25A3C(&fd, v27);
          if ( v24 && *(_DWORD *)(v24 + 4) != -1 )
          {
            v29 = (unsigned int *)(v24 + 4);
            __dmb(0xBu);
            do
            {
              v30 = __ldrex(v29);
              v31 = v30 - 1;
            }
            while ( __strex(v31, v29) );
            if ( !v31 )
              json_delete(v24);
          }
          free(v28);
        }
LABEL_18:
        close(fd);
      }
    }
    V_LOCK(v12);
    v107 = _errno_location();
    strerror(*v107);
    v108 = logfmt_raw((int)v153, 0x1000u);
    V_UNLOCK(v108);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "api_init_socket",
      15,
      2308,
      100,
      v153);
    v12 = close(v7);
    goto LABEL_120;
  }
  return result;
}
