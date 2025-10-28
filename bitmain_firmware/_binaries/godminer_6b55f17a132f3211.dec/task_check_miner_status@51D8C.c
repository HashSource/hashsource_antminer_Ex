int task_check_miner_status()
{
  unsigned int v0; // r11
  int all_created_runtime; // r0
  int v2; // r11
  int v3; // r2
  bool v4; // zf
  __int64 v5; // r0
  int v6; // r0
  int v7; // r0
  int flag_from_monitor; // r0
  int v9; // r3
  int v10; // r4
  int v11; // r0
  __int64 v12; // r4
  int v13; // r0
  int v14; // r3
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int *v18; // r0
  int v19; // r3
  int *v20; // r2
  int v21; // t1
  int v22; // r4
  int v23; // r0
  _DWORD *v24; // r5
  int v25; // t1
  _DWORD *v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r4
  char v35; // r9
  int v36; // r9
  unsigned __int8 v37; // r4
  int v38; // r10
  _BOOL4 v39; // r8
  int v40; // r11
  int v41; // r3
  char v42; // r5
  int v43; // r0
  char *v44; // r1
  char *v45; // r2
  char *v46; // r3
  char **v47; // r10
  char *v48; // r1
  char *v49; // r2
  char *v50; // r3
  int v51; // r0
  int v52; // r3
  int v53; // r4
  int v54; // r0
  _DWORD *v55; // r9
  int v56; // t1
  int v57; // r0
  int v58; // r0
  unsigned int v59; // r0
  int v60; // r0
  char *v61; // r3
  char *v62; // r3
  char v63; // r2
  int v64; // r0
  int v65; // r2
  int v66; // r0
  int v68; // r0
  char *v69; // r1
  char *v70; // r2
  char *v71; // r3
  char **v72; // r12
  char *v73; // r1
  char *v74; // r2
  char *v75; // r3
  int v76; // r0
  int v77; // r0
  int v78; // r0
  int v79; // r10
  char *v80; // r1
  char *v81; // r2
  char *v82; // r3
  char **v83; // r12
  char *v84; // r1
  char *v85; // r2
  char *v86; // r3
  int v87; // r0
  int v88; // r0
  int v89; // r0
  char *v90; // r1
  char *v91; // r2
  char *v92; // r3
  char **v93; // r12
  char *v94; // r1
  char *v95; // r2
  char *v96; // r3
  int v97; // r0
  char *v98; // r1
  char *v99; // r2
  char *v100; // r3
  char **v101; // r12
  char *v102; // r1
  char *v103; // r2
  char *v104; // r3
  int v105; // r0
  int v106; // r0
  int v107; // r5
  int v108; // r10
  int v109; // r0
  int v110; // r0
  int v111; // r0
  int v112; // r0
  int v113; // r0
  int v114; // r1
  unsigned int v115; // r4
  int v116; // r0
  char *v117; // [sp+20h] [bp-138Ch] BYREF
  const char *v118; // [sp+24h] [bp-1388h]
  int v119; // [sp+28h] [bp-1384h]
  int v120; // [sp+2Ch] [bp-1380h]
  int v121; // [sp+30h] [bp-137Ch]
  int v122; // [sp+34h] [bp-1378h]
  int v123; // [sp+38h] [bp-1374h]
  int v124; // [sp+40h] [bp-136Ch]
  const char *v125; // [sp+44h] [bp-1368h]
  int v126; // [sp+4Ch] [bp-1360h]
  int v127; // [sp+50h] [bp-135Ch]
  int v128; // [sp+54h] [bp-1358h]
  __int64 v129; // [sp+58h] [bp-1354h]
  int v130; // [sp+60h] [bp-134Ch]
  char *v131; // [sp+64h] [bp-1348h]
  __int64 v132; // [sp+68h] [bp-1344h]
  int v133; // [sp+70h] [bp-133Ch]
  int v134; // [sp+74h] [bp-1338h]
  __int64 v135; // [sp+78h] [bp-1334h]
  int v136; // [sp+80h] [bp-132Ch]
  int v137; // [sp+84h] [bp-1328h]
  char **v138; // [sp+88h] [bp-1324h]
  const char *v139; // [sp+8Ch] [bp-1320h]
  int v140; // [sp+90h] [bp-131Ch]
  int v141; // [sp+94h] [bp-1318h]
  int v142; // [sp+98h] [bp-1314h]
  int v143; // [sp+9Ch] [bp-1310h]
  char *v144; // [sp+A0h] [bp-130Ch]
  char *s; // [sp+A4h] [bp-1308h]
  int v146; // [sp+A8h] [bp-1304h]
  int v147; // [sp+ACh] [bp-1300h]
  int v148; // [sp+B0h] [bp-12FCh]
  int v149; // [sp+B4h] [bp-12F8h]
  int v150; // [sp+B8h] [bp-12F4h]
  int v151; // [sp+BCh] [bp-12F0h]
  int v152; // [sp+C0h] [bp-12ECh]
  int v153; // [sp+C4h] [bp-12E8h]
  int v154; // [sp+C8h] [bp-12E4h]
  int v155; // [sp+CCh] [bp-12E0h]
  int v156; // [sp+D0h] [bp-12DCh]
  int v157; // [sp+D4h] [bp-12D8h]
  int v158; // [sp+D8h] [bp-12D4h]
  const char *v159; // [sp+DCh] [bp-12D0h]
  int v160; // [sp+E0h] [bp-12CCh]
  int v161; // [sp+E4h] [bp-12C8h]
  int v162; // [sp+E8h] [bp-12C4h]
  int v163; // [sp+ECh] [bp-12C0h]
  int v164; // [sp+F8h] [bp-12B4h]
  int v165; // [sp+FCh] [bp-12B0h]
  int v166; // [sp+100h] [bp-12ACh]
  int v167; // [sp+104h] [bp-12A8h]
  int v168; // [sp+10Ch] [bp-12A0h] BYREF
  int v169; // [sp+110h] [bp-129Ch] BYREF
  _DWORD v170[8]; // [sp+130h] [bp-127Ch] BYREF
  int v171; // [sp+150h] [bp-125Ch] BYREF
  _DWORD v172[8]; // [sp+170h] [bp-123Ch] BYREF
  int v173; // [sp+190h] [bp-121Ch] BYREF
  _DWORD v174[8]; // [sp+1B0h] [bp-11FCh] BYREF
  int v175; // [sp+1D0h] [bp-11DCh] BYREF
  _DWORD v176[8]; // [sp+1F0h] [bp-11BCh] BYREF
  int v177; // [sp+210h] [bp-119Ch] BYREF
  _DWORD v178[8]; // [sp+230h] [bp-117Ch] BYREF
  int v179; // [sp+250h] [bp-115Ch] BYREF
  int v180; // [sp+270h] [bp-113Ch] BYREF
  _DWORD v181[8]; // [sp+290h] [bp-111Ch] BYREF
  _DWORD v182[8]; // [sp+2B0h] [bp-10FCh] BYREF
  int v183; // [sp+2D0h] [bp-10DCh] BYREF
  int v184; // [sp+2D4h] [bp-10D8h]
  _DWORD v185[52]; // [sp+2D8h] [bp-10D4h] BYREF
  _DWORD v186[1025]; // [sp+3A8h] [bp-1004h] BYREF

  v131 = &byte_1660A4;
  if ( !byte_1660A4 )
  {
    byte_1660A8 = 0;
    byte_1660A9 = 0;
    byte_1660AA = 0;
    byte_1660AB = 0;
    byte_1660AC = 0;
    byte_1660AD = 0;
    byte_1660AE = 0;
    byte_1660AF = 0;
    byte_1660B0 = 0;
    byte_1660A4 = 1;
  }
  pthread_mutex_lock(&stru_1660B4);
  v182[0] = 0;
  v126 = (unsigned __int8)v131[12] ^ 1;
  all_created_runtime = get_all_created_runtime(v182);
  v183 = 0;
  v184 = 0;
  v185[0] = 0;
  if ( v182[0] <= 0 )
    v0 = 0;
  v185[1] = 0;
  if ( v182[0] <= 0 )
  {
    v133 = v0;
    LODWORD(v132) = v0;
    goto LABEL_36;
  }
  v144 = "chain";
  v159 = "uneffective temp exceed limit";
  v2 = 0;
  s = "error";
  v130 = all_created_runtime - 4;
  do
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v130 + 4);
      v130 += 4;
      flag_from_monitor = get_flag_from_monitor(v7);
      v9 = *(_DWORD *)(flag_from_monitor + 16);
      v10 = flag_from_monitor;
      v128 = 0;
      v127 = v9 & 1;
      if ( (v9 & 1) == 0 )
      {
        v134 = 0;
        v133 = v9 & 2;
        v11 = v133;
        if ( (v9 & 2) == 0 )
        {
          v147 = 0;
          v146 = v9 & 4;
          v43 = v146;
          if ( (v9 & 4) != 0 )
          {
            v4 = v126 == 0;
            *(_DWORD *)(v10 + 24) |= 4u;
            if ( v4 )
              goto LABEL_13;
            v139 = "check_temp";
            v107 = v184;
            v108 = v183;
            LODWORD(v135) = "%s";
            v138 = &v117;
            goto LABEL_113;
          }
          goto LABEL_24;
        }
        v4 = v126 == 0;
        *(_DWORD *)(v10 + 24) |= 2u;
        if ( v4 )
        {
          LODWORD(v132) = v9 & 4;
          HIDWORD(v132) = v126;
          if ( (unsigned int)v132 | v126 )
          {
LABEL_12:
            *(_DWORD *)(v10 + 24) |= 4u;
LABEL_13:
            v142 = v9 & 8;
            v143 = 0;
            v6 = v142;
            if ( (v9 & 8) != 0 )
              *(_DWORD *)(v10 + 24) |= 8u;
LABEL_15:
            v129 = v9 & 0x10;
            if ( (v9 & 0x10) == 0 )
              goto LABEL_18;
            v4 = v126 == 0;
            *(_DWORD *)(v10 + 24) |= 0x10u;
            if ( v4 )
              goto LABEL_18;
            v139 = "check_temp";
            LODWORD(v135) = "%s";
            v138 = &v117;
            goto LABEL_120;
          }
          goto LABEL_24;
        }
        v139 = "check_temp";
        v107 = v184;
        v108 = v183;
        LODWORD(v135) = "%s";
        v138 = &v117;
        goto LABEL_111;
      }
      v3 = *(_DWORD *)(flag_from_monitor + 24);
      v4 = v126 == 0;
      *(_DWORD *)(flag_from_monitor + 24) = v3 | 1;
      if ( v4 )
        break;
      V_LOCK(v9 & 1);
      v138 = &v117;
      v139 = "check_temp";
      LODWORD(v135) = "%s";
      V_INT((int)&v179, v144);
      V_STR((int)v178, s);
      v44 = (char *)v178[1];
      v45 = (char *)v178[2];
      v46 = (char *)v178[3];
      v47 = v138;
      v125 = "check_temp";
      v124 = v135;
      *v138 = (char *)v178[0];
      v47[1] = v44;
      v47[2] = v45;
      v47[3] = v46;
      v47 += 4;
      v48 = (char *)v178[5];
      v49 = (char *)v178[6];
      v50 = (char *)v178[7];
      *v47 = (char *)v178[4];
      v47[1] = v48;
      v47[2] = v49;
      v47[3] = v50;
      v51 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_temp",
        10,
        35,
        100,
        v186);
      v151 = 0;
      v108 = v183 | 1;
      v183 |= 1u;
      v107 = v184;
      v52 = *(_DWORD *)(v10 + 16);
      v150 = v52 & 2;
      v11 = v150;
      if ( (v52 & 2) != 0 )
      {
        *(_DWORD *)(v10 + 24) |= 2u;
LABEL_111:
        V_LOCK(v11);
        v108 |= 2u;
        V_INT((int)&v177, v144);
        V_STR((int)v176, s);
        v69 = (char *)v176[1];
        v70 = (char *)v176[2];
        v71 = (char *)v176[3];
        v72 = v138;
        v125 = v139;
        v124 = v135;
        *v138 = (char *)v176[0];
        v72[1] = v69;
        v72[2] = v70;
        v72[3] = v71;
        v72 += 4;
        v73 = (char *)v176[5];
        v74 = (char *)v176[6];
        v75 = (char *)v176[7];
        *v72 = (char *)v176[4];
        v72[1] = v73;
        v72[2] = v74;
        v72[3] = v75;
        v76 = logfmt_raw((int)v186, 0x1000u);
        V_UNLOCK(v76);
        v77 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
                172,
                "check_temp",
                10,
                43,
                100,
                v186);
        V_LOCK(v77);
        v78 = logfmt_raw((int)v186, 0x1000u);
        V_UNLOCK(v78);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          172,
          "check_temp",
          10,
          44,
          100,
          v186);
        v183 = v108;
        v184 = v107;
        v9 = *(_DWORD *)(v10 + 16);
        v152 = v9 & 4;
        v153 = 0;
        v43 = v152;
        if ( (v9 & 4) != 0 )
          goto LABEL_112;
        goto LABEL_24;
      }
      v163 = 0;
      v162 = v52 & 4;
      v43 = v162;
      if ( (v52 & 4) == 0 )
      {
        v165 = 0;
        v164 = v52 & 8;
        v6 = v164;
        if ( (v52 & 8) == 0 )
        {
          v167 = 0;
          v166 = v52 & 0x10;
          if ( (v52 & 0x10) == 0 )
            goto LABEL_18;
          *(_DWORD *)(v10 + 24) |= 0x10u;
LABEL_120:
          v79 = v184;
          v158 = v183;
          goto LABEL_117;
        }
        *(_DWORD *)(v10 + 24) |= 8u;
        goto LABEL_121;
      }
LABEL_112:
      *(_DWORD *)(v10 + 24) |= 4u;
LABEL_113:
      V_LOCK(v43);
      v158 = v108 | 4;
      v79 = v107;
      V_INT((int)&v175, v144);
      V_STR((int)v174, s);
      v80 = (char *)v174[1];
      v81 = (char *)v174[2];
      v82 = (char *)v174[3];
      v83 = v138;
      v125 = v139;
      v124 = v135;
      *v138 = (char *)v174[0];
      v83[1] = v80;
      v83[2] = v81;
      v83[3] = v82;
      v83 += 4;
      v84 = (char *)v174[5];
      v85 = (char *)v174[6];
      v86 = (char *)v174[7];
      *v83 = (char *)v174[4];
      v83[1] = v84;
      v83[2] = v85;
      v83[3] = v86;
      v87 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v87);
      v88 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              172,
              "check_temp",
              10,
              52,
              100,
              v186);
      V_LOCK(v88);
      v89 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v89);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_temp",
        10,
        53,
        100,
        v186);
      v184 = v107;
      v183 = v158;
      v9 = *(_DWORD *)(v10 + 16);
      v154 = v9 & 8;
      v155 = 0;
      v6 = v154;
      if ( (v9 & 8) == 0 )
        goto LABEL_15;
      *(_DWORD *)(v10 + 24) |= 8u;
LABEL_115:
      V_LOCK(v6);
      v158 |= 8u;
      V_INT((int)&v173, v144);
      V_STR((int)v172, s);
      v90 = (char *)v172[1];
      v91 = (char *)v172[2];
      v92 = (char *)v172[3];
      v93 = v138;
      v125 = v139;
      v124 = v135;
      *v138 = (char *)v172[0];
      v93[1] = v90;
      v93[2] = v91;
      v93[3] = v92;
      v93 += 4;
      v94 = (char *)v172[5];
      v95 = (char *)v172[6];
      v96 = (char *)v172[7];
      *v93 = (char *)v172[4];
      v93[1] = v94;
      v93[2] = v95;
      v93[3] = v96;
      v97 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v97);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
             172,
             "check_temp",
             10,
             61,
             100,
             v186);
      v184 = v79;
      v183 = v158;
      v156 = *(_DWORD *)(v10 + 16) & 0x10;
      v157 = 0;
      if ( v156 )
      {
        *(_DWORD *)(v10 + 24) |= 0x10u;
LABEL_117:
        V_LOCK(v6);
        V_INT((int)&v171, v144);
        V_STR((int)v170, s);
        v98 = (char *)v170[1];
        v99 = (char *)v170[2];
        v100 = (char *)v170[3];
        v101 = v138;
        v125 = v139;
        v124 = v135;
        *v138 = (char *)v170[0];
        v101[1] = v98;
        v101[2] = v99;
        v101[3] = v100;
        v101 += 4;
        v102 = (char *)v170[5];
        v103 = (char *)v170[6];
        v104 = (char *)v170[7];
        *v101 = (char *)v170[4];
        v101[1] = v102;
        v101[2] = v103;
        v101[3] = v104;
        v105 = logfmt_raw((int)v186, 0x1000u);
        V_UNLOCK(v105);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          172,
          "check_temp",
          10,
          69,
          100,
          v186);
        v184 = v79;
        v183 = v158 | 0x10;
      }
LABEL_18:
      if ( ++v2 >= v182[0] )
        goto LABEL_29;
    }
    v140 = v9 & 2;
    LODWORD(v132) = v9 & 4;
    v141 = v126;
    HIDWORD(v132) = v126;
    if ( !(v140 | v126) )
    {
      if ( v132 )
      {
        *(_DWORD *)(flag_from_monitor + 24) = v3 | 5;
        goto LABEL_13;
      }
      v160 = v9 & 8;
      v161 = v126;
      v6 = v160;
      if ( !(v160 | v126) )
        goto LABEL_15;
      *(_DWORD *)(v10 + 24) = v3 | 9;
      goto LABEL_27;
    }
    v5 = v132;
    *(_DWORD *)(v10 + 24) = v3 | 3;
    if ( v5 )
      goto LABEL_12;
LABEL_24:
    v136 = v9 & 8;
    v137 = 0;
    v6 = v136;
    if ( (v9 & 8) == 0 )
      goto LABEL_15;
    v4 = v126 == 0;
    *(_DWORD *)(v10 + 24) |= 8u;
    if ( !v4 )
    {
      v139 = "check_temp";
      LODWORD(v135) = "%s";
      v138 = &v117;
LABEL_121:
      v79 = v184;
      v158 = v183;
      goto LABEL_115;
    }
LABEL_27:
    v148 = v9 & 0x10;
    v149 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_18;
    ++v2;
    *(_DWORD *)(v10 + 24) |= 0x10u;
  }
  while ( v2 < v182[0] );
LABEL_29:
  v0 = v183;
  v127 = (int)v185;
  v12 = v183 & 4;
  v13 = v183 & 2;
  v14 = v183 & 4;
  if ( (v183 & 4) != 0 )
    v14 = 1;
  LODWORD(v132) = v14;
  if ( (v183 & 2) != 0 )
  {
    V_LOCK(v13);
    v15 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v15);
    v133 = 1;
    v13 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
            172,
            "task_check_miner_status",
            23,
            285,
            100,
            v186);
  }
  else
  {
    v133 = 0;
  }
  if ( v12 )
  {
    V_LOCK(v13);
    v106 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v106);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "task_check_miner_status",
      23,
      291,
      100,
      v186);
  }
LABEL_36:
  v183 = 0;
  v16 = (_DWORD *)get_all_created_runtime(&v183);
  v17 = get_flag_from_monitor(*v16);
  if ( (*(_DWORD *)(v17 + 32) & 4) == 0 || (v4 = v126 == 0, *(_DWORD *)(v17 + 40) |= 4u, v4) )
  {
    v130 = 0;
  }
  else
  {
    V_LOCK(v17);
    V_STR((int)&v180, "error");
    v117 = "%s";
    v118 = "check_fan_err";
    v130 = v126;
    v109 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v109);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_fan_err",
      13,
      86,
      100,
      v186);
  }
  v168 = 0;
  v18 = (int *)get_all_created_runtime(&v168);
  if ( v168 > 0 )
  {
    LOBYTE(v19) = v126;
    v20 = &v18[v168];
    do
    {
      v21 = *v18++;
      v19 = (unsigned __int8)(v19 & *(_BYTE *)(v21 + 218));
    }
    while ( v20 != v18 );
    v126 = v19;
  }
  v22 = 0;
  v181[0] = 0;
  v23 = get_all_created_runtime(v181);
  v127 = 0;
  if ( v181[0] > 0 )
  {
    v24 = (_DWORD *)(v23 - 4);
    LODWORD(v129) = "chain";
    LODWORD(v135) = v0;
    do
    {
      while ( 1 )
      {
        v25 = v24[1];
        ++v24;
        v26 = (_DWORD *)get_flag_from_monitor(v25);
        if ( (*v26 & 1) != 0 )
        {
          v4 = v126 == 0;
          v26[2] |= 1u;
          if ( !v4 )
            break;
        }
        if ( ++v22 >= v181[0] )
          goto LABEL_50;
      }
      V_LOCK(v26);
      ++v22;
      V_INT((int)v182, (char *)v129);
      v117 = "%s low hashrate happened!";
      v118 = "check_low_hashrate";
      v127 = v126;
      v27 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v27);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_low_hashrate",
        18,
        118,
        80,
        v186);
      v28 = read_status_from_monitor(&v183, *v24);
      V_LOCK(v28);
      v29 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v29);
      v30 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              172,
              "check_low_hashrate",
              18,
              121,
              80,
              v186);
      V_LOCK(v30);
      v31 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v31);
      v32 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              172,
              "check_low_hashrate",
              18,
              122,
              80,
              v186);
      V_LOCK(v32);
      v33 = logfmt_raw((int)v186, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        172,
        "check_low_hashrate",
        18,
        123,
        80,
        v186);
    }
    while ( v22 < v181[0] );
LABEL_50:
    v0 = v135;
  }
  if ( !v131[40] )
  {
    clock_gettime(1, &stru_1660D0);
    v131[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v34 = 0;
    do
    {
      while ( pool_tget(*(_DWORD *)(pools + 4 * v34), (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v34) + 1896))
           || !pools_active )
      {
        if ( ++v34 >= total_pools )
          goto LABEL_59;
      }
      clock_gettime(1, &stru_1660D0);
      ++v34;
    }
    while ( v34 < total_pools );
  }
LABEL_59:
  clock_gettime(1, &stru_1660D8);
  v35 = v131[60];
  v129 = 1000LL * (*((_DWORD *)v131 + 13) - *((_DWORD *)v131 + 11))
       + (*((_DWORD *)v131 + 14) - *((_DWORD *)v131 + 12)) / 1000000;
  if ( v129 <= 59999 )
    v36 = v35 & 1;
  else
    v36 = 0;
  if ( v36 )
  {
    v112 = rand();
    v113 = sub_121CDC(v112, 120);
    v115 = v114 + 60;
    V_LOCK(v113);
    v116 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v116);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_lost_connection_to_pool",
      29,
      156,
      80,
      v186);
    sleep(v115);
    exit(1);
  }
  v37 = v130;
  v38 = (v0 >> 3) & 1;
  if ( (v0 & 0x1E) != 0 )
    v37 = v130 | 1;
  v39 = (v0 & 0x1A) != 0;
  v40 = (v0 >> 4) & 1;
  LODWORD(v135) = (unsigned __int8)(v127 | v37);
  if ( !v126 )
    goto LABEL_84;
  if ( v129 <= 60000 )
  {
    *((_DWORD *)v131 + 16) = 0;
LABEL_84:
    v42 = v131[12];
    if ( v42 )
      goto LABEL_94;
    if ( !v37 )
    {
      if ( (_DWORD)v135 )
      {
        LOBYTE(v36) = 0;
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    LODWORD(v129) = (unsigned __int8)v131[12];
LABEL_87:
    v53 = 0;
    v186[0] = 0;
    v131[12] = 1;
    v54 = get_all_created_runtime(v186);
    if ( v186[0] > 0 )
    {
      v55 = (_DWORD *)(v54 - 4);
      do
      {
        v56 = v55[1];
        ++v55;
        ++v53;
        v57 = (*(int (**)(void))(v56 + 20))();
        v58 = dev_ctrl(v57);
        (*(void (__fastcall **)(_DWORD))(v58 + 28))(*(_DWORD *)(*v55 + 208));
      }
      while ( v53 < v186[0] );
    }
    v59 = power_off();
    V_LOCK(v59);
    V_BOOL((int)&v169, "poweroff");
    v123 = v129;
    v121 = v38;
    v122 = v40;
    v117 = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
    v120 = v130;
    v119 = v132;
    v118 = (const char *)v133;
    v60 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v60);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "task_check_miner_status",
      23,
      328,
      120,
      v186);
    if ( (_DWORD)v135 || v131[12] )
      goto LABEL_93;
LABEL_92:
    LOBYTE(v36) = v42;
    v131[11] = 0;
    goto LABEL_95;
  }
  v41 = *((_DWORD *)v131 + 16);
  *((_DWORD *)v131 + 16) = v41 + 1;
  v135 = -2004318071LL * v41;
  if ( !(v41 % 60) )
  {
    V_LOCK(v41 >> 31);
    V_STR((int)&v183, "error");
    v135 = 274877907LL * (int)v129;
    v117 = "lost internet for %d seconds";
    v118 = (const char *)((int)v129 / 1000);
    v111 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v111);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_lost_connection_to_pool",
      29,
      164,
      100,
      v186);
  }
  if ( (unsigned int)"l.com:9018" >= v129 )
  {
    v36 = (unsigned __int8)v131[12];
    if ( v131[12] )
      goto LABEL_94;
    if ( !v37 )
    {
      LOBYTE(v36) = v126;
      goto LABEL_94;
    }
LABEL_73:
    LODWORD(v135) = v37;
    LODWORD(v129) = v36;
    v42 = v37;
    goto LABEL_87;
  }
  v42 = v131[60];
  if ( !v42 )
  {
    V_LOCK(v129);
    V_STR((int)v181, "error");
    v117 = "lost internet %d seconds > 20 minutes, poweroff.";
    v118 = (const char *)((int)v129 / 1000);
    v110 = logfmt_raw((int)v186, 0x1000u);
    V_UNLOCK(v110);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/check_miner_status.c",
      172,
      "check_lost_connection_to_pool",
      29,
      174,
      120,
      v186);
    v36 = (unsigned __int8)v131[12];
    v131[60] = 1;
    if ( v36 )
    {
      v39 = v36;
      goto LABEL_94;
    }
    v42 = v126;
    LODWORD(v129) = 1;
    v39 = v126;
    LODWORD(v135) = v126;
    goto LABEL_87;
  }
  v36 = (unsigned __int8)v131[12];
  if ( !v131[12] )
  {
    if ( v37 )
      goto LABEL_73;
LABEL_93:
    LOBYTE(v36) = v42;
  }
LABEL_94:
  v131[11] = 1;
LABEL_95:
  if ( v126 )
  {
    v4 = v127 == 0;
    v61 = v131;
    v131[4] = v133;
    v61[5] = v132;
    v61[8] = v130;
    if ( v4 )
      v127 = (unsigned __int8)v61[12];
    v62 = v131;
    v63 = v127;
    v131[10] = v36;
    v62[9] = v63;
    v62[6] = v38;
    v62[7] = v40;
  }
  v64 = pthread_mutex_unlock(&stru_1660B4);
  v65 = (unsigned __int8)v131[11];
  byte_163498 ^= 1u;
  if ( v65 )
  {
    v66 = green_led_off(v64);
    if ( byte_163498 )
    {
      red_led_on(v66);
      if ( !v39 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off(v66);
  }
  else
  {
    v68 = red_led_off(v64);
    if ( byte_163498 )
      green_led_on(v68);
    else
      green_led_off(v68);
  }
  if ( v39 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
