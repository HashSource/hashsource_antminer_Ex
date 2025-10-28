int task_check_miner_status()
{
  char *v0; // r8
  int all_created_runtime; // r0
  int v2; // r8
  int v3; // r2
  bool v4; // zf
  __int64 v5; // r0
  int v6; // r0
  int v7; // r0
  int flag_from_monitor; // r0
  int v9; // r3
  int v10; // r4
  unsigned int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r4
  int v15; // r0
  _DWORD *v16; // r5
  int v17; // t1
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r4
  int v27; // r0
  __int64 v28; // r10
  int v29; // r9
  unsigned int v30; // r2
  int v31; // r4
  int v32; // r1
  int v33; // r4
  int v34; // r3
  int v35; // r0
  char v36; // r6
  int v37; // r0
  char *v38; // r1
  char *v39; // r2
  char *v40; // r3
  char **v41; // r10
  char *v42; // r1
  char *v43; // r2
  char *v44; // r3
  int v45; // r0
  int v46; // r3
  int v47; // r4
  int v48; // r0
  _DWORD *v49; // r10
  int v50; // t1
  int v51; // r0
  int v52; // r0
  unsigned int v53; // r0
  int v54; // r0
  int v55; // r3
  int v56; // r0
  int v57; // r2
  int v58; // r0
  int v60; // r0
  char *v61; // r1
  char *v62; // r2
  char *v63; // r3
  char **v64; // r10
  char *v65; // r1
  char *v66; // r2
  char *v67; // r3
  int v68; // r0
  unsigned int v69; // r10
  int v70; // r9
  char *v71; // r1
  char *v72; // r2
  char *v73; // r3
  char **v74; // r11
  char *v75; // r1
  char *v76; // r2
  char *v77; // r3
  int v78; // r0
  int v79; // r9
  char *v80; // r1
  char *v81; // r2
  char *v82; // r3
  char **v83; // r12
  char *v84; // r1
  char *v85; // r2
  char *v86; // r3
  int v87; // r0
  char *v88; // r1
  char *v89; // r2
  char *v90; // r3
  char **v91; // r12
  char *v92; // r1
  char *v93; // r2
  char *v94; // r3
  int v95; // r0
  unsigned int v96; // r9
  unsigned int v97; // r11
  int v98; // r0
  int v99; // r0
  int v100; // r0
  int v101; // r0
  char *v102; // [sp+20h] [bp-137Ch] BYREF
  char **v103; // [sp+24h] [bp-1378h]
  unsigned int v104; // [sp+28h] [bp-1374h]
  int v105; // [sp+2Ch] [bp-1370h]
  int v106; // [sp+30h] [bp-136Ch]
  int v107; // [sp+34h] [bp-1368h]
  int v108; // [sp+38h] [bp-1364h]
  int v109; // [sp+40h] [bp-135Ch]
  const char *v110; // [sp+44h] [bp-1358h]
  int v111; // [sp+4Ch] [bp-1350h]
  int v112; // [sp+50h] [bp-134Ch]
  int v113; // [sp+54h] [bp-1348h]
  __int64 v114; // [sp+58h] [bp-1344h]
  __int64 v115; // [sp+60h] [bp-133Ch]
  unsigned int v116; // [sp+68h] [bp-1334h]
  int v117; // [sp+6Ch] [bp-1330h]
  int v118; // [sp+70h] [bp-132Ch]
  char **v119; // [sp+74h] [bp-1328h]
  __int64 v120; // [sp+78h] [bp-1324h]
  int v121; // [sp+80h] [bp-131Ch]
  int v122; // [sp+84h] [bp-1318h]
  const char *v123; // [sp+88h] [bp-1314h]
  int *v124; // [sp+8Ch] [bp-1310h]
  int v125; // [sp+90h] [bp-130Ch]
  int v126; // [sp+94h] [bp-1308h]
  int v127; // [sp+98h] [bp-1304h]
  int v128; // [sp+9Ch] [bp-1300h]
  char *v129; // [sp+A0h] [bp-12FCh]
  char *s; // [sp+A4h] [bp-12F8h]
  int v131; // [sp+A8h] [bp-12F4h]
  int v132; // [sp+ACh] [bp-12F0h]
  int v133; // [sp+B0h] [bp-12ECh]
  int v134; // [sp+B4h] [bp-12E8h]
  int v135; // [sp+B8h] [bp-12E4h]
  int v136; // [sp+BCh] [bp-12E0h]
  int v137; // [sp+C0h] [bp-12DCh]
  int v138; // [sp+C4h] [bp-12D8h]
  int v139; // [sp+C8h] [bp-12D4h]
  int v140; // [sp+CCh] [bp-12D0h]
  int v141; // [sp+D0h] [bp-12CCh]
  int v142; // [sp+D4h] [bp-12C8h]
  const char *v143; // [sp+D8h] [bp-12C4h]
  char *v144; // [sp+DCh] [bp-12C0h]
  int v145; // [sp+E0h] [bp-12BCh]
  int v146; // [sp+E4h] [bp-12B8h]
  int v147; // [sp+E8h] [bp-12B4h]
  int v148; // [sp+ECh] [bp-12B0h]
  int v149; // [sp+F8h] [bp-12A4h]
  int v150; // [sp+FCh] [bp-12A0h]
  int v151; // [sp+100h] [bp-129Ch]
  int v152; // [sp+104h] [bp-1298h]
  int v153; // [sp+108h] [bp-1294h] BYREF
  _DWORD v154[8]; // [sp+128h] [bp-1274h] BYREF
  int v155; // [sp+148h] [bp-1254h] BYREF
  _DWORD v156[8]; // [sp+168h] [bp-1234h] BYREF
  _DWORD v157[8]; // [sp+188h] [bp-1214h] BYREF
  int v158; // [sp+1A8h] [bp-11F4h] BYREF
  _DWORD v159[8]; // [sp+1C8h] [bp-11D4h] BYREF
  int v160; // [sp+1E8h] [bp-11B4h] BYREF
  _DWORD v161[8]; // [sp+208h] [bp-1194h] BYREF
  int v162; // [sp+228h] [bp-1174h] BYREF
  _DWORD v163[8]; // [sp+248h] [bp-1154h] BYREF
  int v164; // [sp+268h] [bp-1134h] BYREF
  _DWORD v165[8]; // [sp+288h] [bp-1114h] BYREF
  int v166; // [sp+2A8h] [bp-10F4h] BYREF
  __int64 v167; // [sp+2C8h] [bp-10D4h] BYREF
  int v168; // [sp+2D0h] [bp-10CCh]
  int v169; // [sp+2D4h] [bp-10C8h]
  _DWORD v170[1025]; // [sp+398h] [bp-1004h] BYREF

  v0 = &byte_1673C4;
  if ( !byte_1673C4 )
  {
    byte_1673C8 = 0;
    byte_1673C9 = 0;
    byte_1673CA = 0;
    byte_1673CB = 0;
    byte_1673CC = 0;
    byte_1673CD = 0;
    byte_1673CE = 0;
    byte_1673CF = 0;
    byte_1673D0 = 0;
    byte_1673C4 = 1;
  }
  pthread_mutex_lock(&stru_1673D4);
  v156[0] = 0;
  v111 = (unsigned __int8)byte_1673D0 ^ 1;
  all_created_runtime = get_all_created_runtime(v156);
  v167 = 0;
  v168 = 0;
  v169 = 0;
  if ( v156[0] <= 0 )
  {
    v119 = 0;
    v114 = 0;
    v116 = 0;
    goto LABEL_27;
  }
  v144 = &byte_1673C4;
  v129 = "chain";
  v2 = 0;
  v143 = "uneffective temp exceed limit";
  s = "error";
  v118 = all_created_runtime - 4;
  do
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v118 + 4);
      v118 += 4;
      flag_from_monitor = get_flag_from_monitor(v7);
      v9 = *(_DWORD *)(flag_from_monitor + 16);
      v10 = flag_from_monitor;
      v113 = 0;
      v112 = v9 & 1;
      if ( (v9 & 1) == 0 )
      {
        v117 = 0;
        v116 = v9 & 2;
        v11 = v116;
        if ( (v9 & 2) == 0 )
        {
          v132 = 0;
          v131 = v9 & 4;
          v37 = v131;
          if ( (v9 & 4) != 0 )
          {
            v4 = v111 == 0;
            *(_DWORD *)(v10 + 24) |= 4u;
            if ( v4 )
              goto LABEL_10;
            v123 = "check_temp";
            v97 = HIDWORD(v167);
            v96 = v167;
            LODWORD(v120) = "%s";
            v124 = &g_zc;
            v119 = &v102;
            goto LABEL_100;
          }
          goto LABEL_21;
        }
        v4 = v111 == 0;
        *(_DWORD *)(v10 + 24) |= 2u;
        if ( v4 )
        {
          LODWORD(v115) = v9 & 4;
          HIDWORD(v115) = v111;
          if ( (unsigned int)v115 | v111 )
          {
LABEL_9:
            *(_DWORD *)(v10 + 24) |= 4u;
LABEL_10:
            v127 = v9 & 8;
            v128 = 0;
            v6 = v127;
            if ( (v9 & 8) != 0 )
              *(_DWORD *)(v10 + 24) |= 8u;
LABEL_12:
            v114 = v9 & 0x10;
            if ( (v9 & 0x10) == 0 )
              goto LABEL_15;
            v4 = v111 == 0;
            *(_DWORD *)(v10 + 24) |= 0x10u;
            if ( v4 )
              goto LABEL_15;
            v123 = "check_temp";
            LODWORD(v120) = "%s";
            v124 = &g_zc;
            v119 = &v102;
            goto LABEL_107;
          }
          goto LABEL_21;
        }
        v123 = "check_temp";
        v97 = HIDWORD(v167);
        v96 = v167;
        LODWORD(v120) = "%s";
        v124 = &g_zc;
        v119 = &v102;
        goto LABEL_98;
      }
      v3 = *(_DWORD *)(flag_from_monitor + 24);
      v4 = v111 == 0;
      *(_DWORD *)(flag_from_monitor + 24) = v3 | 1;
      if ( v4 )
        break;
      V_LOCK(v9 & 1);
      v119 = &v102;
      LODWORD(v120) = "%s";
      v124 = &g_zc;
      v123 = "check_temp";
      V_INT((int)&v166, v129);
      V_STR((int)v165, s);
      v38 = (char *)v165[1];
      v39 = (char *)v165[2];
      v40 = (char *)v165[3];
      v41 = v119;
      v110 = "check_temp";
      v109 = v120;
      *v119 = (char *)v165[0];
      v41[1] = v38;
      v41[2] = v39;
      v41[3] = v40;
      v41 += 4;
      v42 = (char *)v165[5];
      v43 = (char *)v165[6];
      v44 = (char *)v165[7];
      *v41 = (char *)v165[4];
      v41[1] = v42;
      v41[2] = v43;
      v41[3] = v44;
      v45 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v45);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        35,
        20,
        v170);
      v136 = 0;
      v97 = HIDWORD(v167);
      v96 = v167 | 1;
      LODWORD(v167) = v167 | 1;
      v46 = *(_DWORD *)(v10 + 16);
      v135 = v46 & 2;
      v11 = v135;
      if ( (v46 & 2) != 0 )
      {
        *(_DWORD *)(v10 + 24) |= 2u;
LABEL_98:
        V_LOCK(v11);
        v96 |= 2u;
        V_INT((int)&v164, v129);
        V_STR((int)v163, s);
        v61 = (char *)v163[1];
        v62 = (char *)v163[2];
        v63 = (char *)v163[3];
        v110 = v123;
        v64 = v119;
        v109 = v120;
        *v119 = (char *)v163[0];
        v64[1] = v61;
        v64[2] = v62;
        v64[3] = v63;
        v64 += 4;
        v65 = (char *)v163[5];
        v66 = (char *)v163[6];
        v67 = (char *)v163[7];
        *v64 = (char *)v163[4];
        v64[1] = v65;
        v64[2] = v66;
        v64[3] = v67;
        v68 = logfmt_raw((int)v170, 0x1000u);
        V_UNLOCK(v68);
        zlog(
          *v124,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          43,
          100,
          v170);
        v167 = __PAIR64__(v97, v96);
        v9 = *(_DWORD *)(v10 + 16);
        v137 = v9 & 4;
        v138 = 0;
        v37 = v137;
        if ( (v9 & 4) != 0 )
          goto LABEL_99;
        goto LABEL_21;
      }
      v148 = 0;
      v147 = v46 & 4;
      v37 = v147;
      if ( (v46 & 4) == 0 )
      {
        v150 = 0;
        v149 = v46 & 8;
        v6 = v149;
        if ( (v46 & 8) == 0 )
        {
          v152 = 0;
          v151 = v46 & 0x10;
          if ( (v46 & 0x10) == 0 )
            goto LABEL_15;
          *(_DWORD *)(v10 + 24) |= 0x10u;
LABEL_107:
          v69 = HIDWORD(v167);
          v79 = v167;
          goto LABEL_104;
        }
        *(_DWORD *)(v10 + 24) |= 8u;
        goto LABEL_108;
      }
LABEL_99:
      *(_DWORD *)(v10 + 24) |= 4u;
LABEL_100:
      V_LOCK(v37);
      v69 = v97;
      v70 = v96 | 4;
      V_INT((int)&v162, v129);
      V_STR((int)v161, s);
      v71 = (char *)v161[1];
      v72 = (char *)v161[2];
      v73 = (char *)v161[3];
      v110 = v123;
      v74 = v119;
      v109 = v120;
      *v119 = (char *)v161[0];
      v74[1] = v71;
      v74[2] = v72;
      v74[3] = v73;
      v74 += 4;
      v75 = (char *)v161[5];
      v76 = (char *)v161[6];
      v77 = (char *)v161[7];
      *v74 = (char *)v161[4];
      v74[1] = v75;
      v74[2] = v76;
      v74[3] = v77;
      v78 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v78);
      zlog(
        *v124,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        51,
        100,
        v170);
      v167 = __PAIR64__(v69, v70);
      v9 = *(_DWORD *)(v10 + 16);
      v139 = v9 & 8;
      v140 = 0;
      v6 = v139;
      if ( (v9 & 8) == 0 )
        goto LABEL_12;
      *(_DWORD *)(v10 + 24) |= 8u;
LABEL_102:
      V_LOCK(v6);
      v79 = v70 | 8;
      V_INT((int)&v160, v129);
      V_STR((int)v159, s);
      v80 = (char *)v159[1];
      v81 = (char *)v159[2];
      v82 = (char *)v159[3];
      v83 = v119;
      v110 = v123;
      v109 = v120;
      *v119 = (char *)v159[0];
      v83[1] = v80;
      v83[2] = v81;
      v83[3] = v82;
      v83 += 4;
      v84 = (char *)v159[5];
      v85 = (char *)v159[6];
      v86 = (char *)v159[7];
      *v83 = (char *)v159[4];
      v83[1] = v84;
      v83[2] = v85;
      v83[3] = v86;
      v87 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v87);
      v6 = zlog(
             *v124,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-"
             "origin_master/miner_util/miner_monitor/check_miner_status.c",
             166,
             "check_temp",
             10,
             59,
             100,
             v170);
      v167 = __PAIR64__(v69, v79);
      v141 = *(_DWORD *)(v10 + 16) & 0x10;
      v142 = 0;
      if ( v141 )
      {
        *(_DWORD *)(v10 + 24) |= 0x10u;
LABEL_104:
        V_LOCK(v6);
        V_INT((int)&v158, v129);
        V_STR((int)v157, s);
        v88 = (char *)v157[1];
        v89 = (char *)v157[2];
        v90 = (char *)v157[3];
        v91 = v119;
        v110 = v123;
        v109 = v120;
        *v119 = (char *)v157[0];
        v91[1] = v88;
        v91[2] = v89;
        v91[3] = v90;
        v91 += 4;
        v92 = (char *)v157[5];
        v93 = (char *)v157[6];
        v94 = (char *)v157[7];
        *v91 = (char *)v157[4];
        v91[1] = v92;
        v91[2] = v93;
        v91[3] = v94;
        v95 = logfmt_raw((int)v170, 0x1000u);
        V_UNLOCK(v95);
        zlog(
          *v124,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          67,
          100,
          v170);
        HIDWORD(v167) = v69;
        LODWORD(v167) = v79 | 0x10;
      }
LABEL_15:
      if ( ++v2 >= v156[0] )
        goto LABEL_26;
    }
    v125 = v9 & 2;
    LODWORD(v115) = v9 & 4;
    v126 = v111;
    HIDWORD(v115) = v111;
    if ( !(v125 | v111) )
    {
      if ( v115 )
      {
        *(_DWORD *)(flag_from_monitor + 24) = v3 | 5;
        goto LABEL_10;
      }
      v145 = v9 & 8;
      v146 = v111;
      v6 = v145;
      if ( !(v145 | v111) )
        goto LABEL_12;
      *(_DWORD *)(v10 + 24) = v3 | 9;
      goto LABEL_24;
    }
    v5 = v115;
    *(_DWORD *)(v10 + 24) = v3 | 3;
    if ( v5 )
      goto LABEL_9;
LABEL_21:
    v121 = v9 & 8;
    v122 = 0;
    v6 = v121;
    if ( (v9 & 8) == 0 )
      goto LABEL_12;
    v4 = v111 == 0;
    *(_DWORD *)(v10 + 24) |= 8u;
    if ( !v4 )
    {
      v123 = "check_temp";
      LODWORD(v120) = "%s";
      v124 = &g_zc;
      v119 = &v102;
LABEL_108:
      v69 = HIDWORD(v167);
      v70 = v167;
      goto LABEL_102;
    }
LABEL_24:
    v133 = v9 & 0x10;
    v134 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_15;
    ++v2;
    *(_DWORD *)(v10 + 24) |= 0x10u;
  }
  while ( v2 < v156[0] );
LABEL_26:
  v0 = v144;
  v114 = v167;
  v116 = ((unsigned int)v167 >> 2) & 1;
  v119 = (char **)((v167 >> 1) & 1);
LABEL_27:
  LODWORD(v167) = 0;
  v12 = (_DWORD *)get_all_created_runtime(&v167);
  v13 = get_flag_from_monitor(*v12);
  if ( (*(_DWORD *)(v13 + 32) & 4) == 0 || (v4 = v111 == 0, *(_DWORD *)(v13 + 40) |= 4u, v4) )
  {
    v118 = 0;
  }
  else
  {
    V_LOCK(v13);
    V_STR((int)v156, "error");
    v102 = "%s";
    v103 = (char **)"check_fan_err";
    v118 = v111;
    v98 = logfmt_raw((int)v170, 0x1000u);
    V_UNLOCK(v98);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_fan_err",
      13,
      84,
      100,
      v170);
  }
  v14 = 0;
  v154[0] = 0;
  v15 = get_all_created_runtime(v154);
  v112 = 0;
  if ( v154[0] > 0 )
  {
    v16 = (_DWORD *)(v15 - 4);
    LODWORD(v115) = "chain";
    LODWORD(v120) = v0;
    do
    {
      while ( 1 )
      {
        v17 = v16[1];
        ++v16;
        v18 = (_DWORD *)get_flag_from_monitor(v17);
        if ( (*v18 & 1) != 0 )
        {
          v4 = v111 == 0;
          v18[2] |= 1u;
          if ( !v4 )
            break;
        }
        if ( ++v14 >= v154[0] )
          goto LABEL_37;
      }
      V_LOCK(v18);
      ++v14;
      V_INT((int)&v155, (char *)v115);
      v102 = "%s low hashrate happened!";
      v103 = (char **)"check_low_hashrate";
      v112 = v111;
      v19 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        103,
        80,
        v170);
      v20 = read_status_from_monitor(&v167, *v16);
      V_LOCK(v20);
      v21 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v21);
      v22 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/miner_monitor/check_miner_status.c",
              166,
              "check_low_hashrate",
              18,
              106,
              80,
              v170);
      V_LOCK(v22);
      v23 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v23);
      v24 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer"
              "-origin_master/miner_util/miner_monitor/check_miner_status.c",
              166,
              "check_low_hashrate",
              18,
              107,
              80,
              v170);
      V_LOCK(v24);
      v25 = logfmt_raw((int)v170, 0x1000u);
      V_UNLOCK(v25);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        108,
        80,
        v170);
    }
    while ( v14 < v154[0] );
LABEL_37:
    v0 = (char *)v120;
  }
  if ( !v0[40] )
  {
    clock_gettime(1, &stru_1673F0);
    v0[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v26 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v26),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v26) + 2072))
           || !pools_active )
      {
        if ( ++v26 >= total_pools )
          goto LABEL_46;
      }
      clock_gettime(1, &stru_1673F0);
      ++v26;
    }
    while ( v26 < total_pools );
  }
LABEL_46:
  clock_gettime(1, &stru_1673F8);
  v27 = *((_DWORD *)v0 + 13) - *((_DWORD *)v0 + 11);
  v28 = 1000LL * v27 + (*((_DWORD *)v0 + 14) - *((_DWORD *)v0 + 12)) / 1000000;
  if ( v28 <= 59999 )
    v29 = v0[60] & 1;
  else
    v29 = 0;
  if ( v29 )
  {
    V_LOCK(v27);
    v101 = logfmt_raw((int)v170, 0x1000u);
    V_UNLOCK(v101);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      139,
      60,
      v170);
    exit(1);
  }
  v30 = v114;
  v31 = v114 & 0x1E;
  LODWORD(v114) = ((unsigned int)v114 >> 3) & 1;
  v32 = v118;
  LODWORD(v115) = (v30 >> 4) & 1;
  if ( v31 )
    v32 = v118 | 1;
  v33 = v32;
  LODWORD(v120) = v112 | v32;
  if ( !v111 )
    goto LABEL_71;
  if ( v28 <= 60000 )
  {
    *((_DWORD *)v0 + 16) = 0;
LABEL_71:
    v36 = v0[12];
    if ( v36 )
      goto LABEL_81;
    if ( !v32 )
    {
      if ( (_DWORD)v120 )
      {
        LOBYTE(v29) = 0;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v29 = (unsigned __int8)v0[12];
LABEL_74:
    v47 = 0;
    v0[12] = 1;
    v170[0] = 0;
    v48 = get_all_created_runtime(v170);
    if ( v170[0] > 0 )
    {
      v49 = (_DWORD *)(v48 - 4);
      do
      {
        v50 = v49[1];
        ++v49;
        ++v47;
        v51 = (*(int (**)(void))(v50 + 8))();
        v52 = dev_ctrl(v51);
        (*(void (__fastcall **)(_DWORD))(v52 + 28))(*(_DWORD *)(*v49 + 144));
      }
      while ( v47 < v170[0] );
    }
    v53 = power_off();
    V_LOCK(v53);
    V_BOOL((int)&v153, "poweroff");
    v108 = v29;
    v102 = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
    v107 = v115;
    v106 = v114;
    v105 = v118;
    v104 = v116;
    v103 = v119;
    v54 = logfmt_raw((int)v170, 0x1000u);
    V_UNLOCK(v54);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "task_check_miner_status",
      23,
      296,
      120,
      v170);
    if ( (_DWORD)v120 || v0[12] )
      goto LABEL_80;
LABEL_79:
    LOBYTE(v29) = v36;
    v0[11] = 0;
    goto LABEL_82;
  }
  v34 = *((_DWORD *)v0 + 16);
  v35 = -2004318071 * v34;
  *((_DWORD *)v0 + 16) = v34 + 1;
  if ( !(v34 % 60) )
  {
    V_LOCK(v35);
    V_STR((int)&v167, "error");
    v120 = 274877907LL * (int)v28;
    v102 = "lost internet for %d seconds";
    v103 = (char **)((int)v28 / 1000);
    v100 = logfmt_raw((int)v170, 0x1000u);
    V_UNLOCK(v100);
    v35 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/miner_monitor/check_miner_status.c",
            166,
            "check_lost_connection_to_pool",
            29,
            146,
            100,
            v170);
  }
  if ( (unsigned int)&loc_124F80 >= v28 )
  {
    v29 = (unsigned __int8)v0[12];
    if ( v0[12] )
      goto LABEL_81;
    if ( !v33 )
    {
      LOBYTE(v29) = v111;
      goto LABEL_81;
    }
LABEL_60:
    LODWORD(v120) = v33;
    v36 = v33;
    goto LABEL_74;
  }
  v36 = v0[60];
  if ( !v36 )
  {
    V_LOCK(v35);
    V_STR((int)v154, "error");
    v102 = "lost internet %d seconds > 20 minutes, poweroff.";
    v103 = (char **)((int)v28 / 1000);
    v99 = logfmt_raw((int)v170, 0x1000u);
    V_UNLOCK(v99);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      156,
      120,
      v170);
    v29 = (unsigned __int8)v0[12];
    v0[60] = 1;
    if ( v29 )
      goto LABEL_81;
    v36 = v111;
    v29 = 1;
    LODWORD(v120) = v111;
    goto LABEL_74;
  }
  v29 = (unsigned __int8)v0[12];
  if ( !v0[12] )
  {
    if ( v33 )
      goto LABEL_60;
LABEL_80:
    LOBYTE(v29) = v36;
  }
LABEL_81:
  v0[11] = 1;
LABEL_82:
  if ( v111 )
  {
    v55 = v112;
    v0[10] = v29;
    v0[4] = (char)v119;
    v0[5] = v116;
    v0[8] = v118;
    if ( !v55 )
      v112 = (unsigned __int8)v0[12];
    v0[9] = v112;
    v0[6] = v114;
    v0[7] = v115;
  }
  v56 = pthread_mutex_unlock(&stru_1673D4);
  v57 = (unsigned __int8)v0[11];
  byte_164410 ^= 1u;
  if ( v57 )
  {
    v58 = green_led_off(v56);
    if ( byte_164410 )
    {
      red_led_on(v58);
      if ( v0[11] )
        return fan_pwm_set_max();
      return set_pwm_by_temp();
    }
    red_led_off(v58);
  }
  else
  {
    v60 = red_led_off(v56);
    if ( byte_164410 )
      green_led_on(v60);
    else
      green_led_off(v60);
  }
  if ( !v0[11] )
    return set_pwm_by_temp();
  return fan_pwm_set_max();
}
