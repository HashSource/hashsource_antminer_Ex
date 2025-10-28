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
  char v35; // r10
  int v36; // r10
  unsigned __int8 v37; // r4
  _BOOL4 v38; // r9
  int v39; // r11
  int v40; // r5
  int v41; // r3
  char v42; // r8
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  _DWORD *v47; // r10
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r0
  int v52; // r3
  int v53; // r4
  int v54; // r0
  _DWORD *v55; // r10
  int v56; // t1
  int v57; // r0
  int v58; // r0
  unsigned int v59; // r0
  int v60; // r0
  char *v61; // r3
  char *v62; // r3
  char v63; // r2
  char v64; // r2
  int v65; // r0
  int v66; // r2
  int v67; // r0
  int v69; // r0
  int v70; // r1
  int v71; // r2
  int v72; // r3
  _DWORD *v73; // r12
  int v74; // r1
  int v75; // r2
  int v76; // r3
  int v77; // r0
  int v78; // r0
  int v79; // r0
  int v80; // r10
  int v81; // r1
  int v82; // r2
  int v83; // r3
  _DWORD *v84; // r12
  int v85; // r1
  int v86; // r2
  int v87; // r3
  int v88; // r0
  int v89; // r0
  int v90; // r0
  int v91; // r1
  int v92; // r2
  int v93; // r3
  _DWORD *v94; // r12
  int v95; // r1
  int v96; // r2
  int v97; // r3
  int v98; // r0
  int v99; // r1
  int v100; // r2
  int v101; // r3
  _DWORD *v102; // r12
  int v103; // r1
  int v104; // r2
  int v105; // r3
  int v106; // r0
  int v107; // r0
  int v108; // r5
  int v109; // r10
  int v110; // r0
  int v111; // r0
  int v112; // r0
  int v113; // r0
  int v114; // r0
  int v115; // r1
  unsigned int v116; // r4
  int v117; // r0
  char *v118; // [sp+20h] [bp-138Ch] BYREF
  const char *v119; // [sp+24h] [bp-1388h]
  int v120; // [sp+28h] [bp-1384h]
  int v121; // [sp+2Ch] [bp-1380h]
  int v122; // [sp+30h] [bp-137Ch]
  int v123; // [sp+34h] [bp-1378h]
  int v124; // [sp+38h] [bp-1374h]
  int v125; // [sp+40h] [bp-136Ch]
  const char *v126; // [sp+44h] [bp-1368h]
  int v127; // [sp+4Ch] [bp-1360h]
  int v128; // [sp+50h] [bp-135Ch]
  int v129; // [sp+54h] [bp-1358h]
  __int64 v130; // [sp+58h] [bp-1354h]
  int v131; // [sp+60h] [bp-134Ch]
  char *v132; // [sp+64h] [bp-1348h]
  __int64 v133; // [sp+68h] [bp-1344h]
  int v134; // [sp+70h] [bp-133Ch]
  int v135; // [sp+74h] [bp-1338h]
  __int64 v136; // [sp+78h] [bp-1334h]
  int v137; // [sp+80h] [bp-132Ch]
  int v138; // [sp+84h] [bp-1328h]
  int v139; // [sp+88h] [bp-1324h]
  const char *v140; // [sp+8Ch] [bp-1320h]
  int v141; // [sp+90h] [bp-131Ch]
  int v142; // [sp+94h] [bp-1318h]
  int v143; // [sp+98h] [bp-1314h]
  int v144; // [sp+9Ch] [bp-1310h]
  char *v145; // [sp+A0h] [bp-130Ch]
  char *s; // [sp+A4h] [bp-1308h]
  int v147; // [sp+A8h] [bp-1304h]
  int v148; // [sp+ACh] [bp-1300h]
  int v149; // [sp+B0h] [bp-12FCh]
  int v150; // [sp+B4h] [bp-12F8h]
  int v151; // [sp+B8h] [bp-12F4h]
  int v152; // [sp+BCh] [bp-12F0h]
  int v153; // [sp+C0h] [bp-12ECh]
  int v154; // [sp+C4h] [bp-12E8h]
  int v155; // [sp+C8h] [bp-12E4h]
  int v156; // [sp+CCh] [bp-12E0h]
  int v157; // [sp+D0h] [bp-12DCh]
  int v158; // [sp+D4h] [bp-12D8h]
  int v159; // [sp+D8h] [bp-12D4h]
  const char *v160; // [sp+DCh] [bp-12D0h]
  int v161; // [sp+E0h] [bp-12CCh]
  int v162; // [sp+E4h] [bp-12C8h]
  int v163; // [sp+E8h] [bp-12C4h]
  int v164; // [sp+ECh] [bp-12C0h]
  int v165; // [sp+F8h] [bp-12B4h]
  int v166; // [sp+FCh] [bp-12B0h]
  int v167; // [sp+100h] [bp-12ACh]
  int v168; // [sp+104h] [bp-12A8h]
  int v169; // [sp+10Ch] [bp-12A0h] BYREF
  int v170; // [sp+110h] [bp-129Ch] BYREF
  _DWORD v171[8]; // [sp+130h] [bp-127Ch] BYREF
  int v172; // [sp+150h] [bp-125Ch] BYREF
  _DWORD v173[8]; // [sp+170h] [bp-123Ch] BYREF
  int v174; // [sp+190h] [bp-121Ch] BYREF
  _DWORD v175[8]; // [sp+1B0h] [bp-11FCh] BYREF
  int v176; // [sp+1D0h] [bp-11DCh] BYREF
  _DWORD v177[8]; // [sp+1F0h] [bp-11BCh] BYREF
  int v178; // [sp+210h] [bp-119Ch] BYREF
  _DWORD v179[8]; // [sp+230h] [bp-117Ch] BYREF
  int v180; // [sp+250h] [bp-115Ch] BYREF
  int v181; // [sp+270h] [bp-113Ch] BYREF
  _DWORD v182[8]; // [sp+290h] [bp-111Ch] BYREF
  _DWORD v183[8]; // [sp+2B0h] [bp-10FCh] BYREF
  int v184; // [sp+2D0h] [bp-10DCh] BYREF
  int v185; // [sp+2D4h] [bp-10D8h]
  _DWORD v186[52]; // [sp+2D8h] [bp-10D4h] BYREF
  _DWORD v187[1025]; // [sp+3A8h] [bp-1004h] BYREF

  v132 = &byte_1743BC;
  if ( !byte_1743BC )
  {
    byte_1743C0 = 0;
    byte_1743C1 = 0;
    byte_1743C2 = 0;
    byte_1743C3 = 0;
    byte_1743C4 = 0;
    byte_1743C5 = 0;
    byte_1743C6 = 0;
    byte_1743C7 = 0;
    byte_1743C8 = 0;
    byte_1743BC = 1;
  }
  pthread_mutex_lock(&stru_1743CC);
  v183[0] = 0;
  v127 = (unsigned __int8)v132[12] ^ 1;
  all_created_runtime = get_all_created_runtime(v183);
  v184 = 0;
  v185 = 0;
  v186[0] = 0;
  if ( v183[0] <= 0 )
    v0 = 0;
  v186[1] = 0;
  if ( v183[0] <= 0 )
  {
    v139 = v0;
    v134 = v0;
    goto LABEL_36;
  }
  v145 = "chain";
  v160 = "uneffective temp exceed limit";
  v2 = 0;
  s = "error";
  v131 = all_created_runtime - 4;
  do
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v131 + 4);
      v131 += 4;
      flag_from_monitor = get_flag_from_monitor(v7);
      v9 = *(_DWORD *)(flag_from_monitor + 16);
      v10 = flag_from_monitor;
      v129 = 0;
      v128 = v9 & 1;
      if ( (v9 & 1) == 0 )
      {
        v135 = 0;
        v134 = v9 & 2;
        v11 = v134;
        if ( (v9 & 2) == 0 )
        {
          v148 = 0;
          v147 = v9 & 4;
          v43 = v147;
          if ( (v9 & 4) != 0 )
          {
            v4 = v127 == 0;
            *(_DWORD *)(v10 + 24) |= 4u;
            if ( v4 )
              goto LABEL_13;
            v140 = "check_temp";
            v108 = v185;
            v109 = v184;
            v139 = (int)"%s";
            LODWORD(v136) = &v118;
            goto LABEL_113;
          }
          goto LABEL_24;
        }
        v4 = v127 == 0;
        *(_DWORD *)(v10 + 24) |= 2u;
        if ( v4 )
        {
          LODWORD(v133) = v9 & 4;
          HIDWORD(v133) = v127;
          if ( (unsigned int)v133 | v127 )
          {
LABEL_12:
            *(_DWORD *)(v10 + 24) |= 4u;
LABEL_13:
            v143 = v9 & 8;
            v144 = 0;
            v6 = v143;
            if ( (v9 & 8) != 0 )
              *(_DWORD *)(v10 + 24) |= 8u;
LABEL_15:
            v130 = v9 & 0x10;
            if ( (v9 & 0x10) == 0 )
              goto LABEL_18;
            v4 = v127 == 0;
            *(_DWORD *)(v10 + 24) |= 0x10u;
            if ( v4 )
              goto LABEL_18;
            v140 = "check_temp";
            v139 = (int)"%s";
            LODWORD(v136) = &v118;
            goto LABEL_120;
          }
          goto LABEL_24;
        }
        v140 = "check_temp";
        v108 = v185;
        v109 = v184;
        v139 = (int)"%s";
        LODWORD(v136) = &v118;
        goto LABEL_111;
      }
      v3 = *(_DWORD *)(flag_from_monitor + 24);
      v4 = v127 == 0;
      *(_DWORD *)(flag_from_monitor + 24) = v3 | 1;
      if ( v4 )
        break;
      V_LOCK(v9 & 1);
      LODWORD(v136) = &v118;
      v140 = "check_temp";
      v139 = (int)"%s";
      V_INT((int)&v180, v145);
      V_STR((int)v179, s);
      v44 = v179[1];
      v45 = v179[2];
      v46 = v179[3];
      v47 = (_DWORD *)v136;
      v126 = "check_temp";
      v125 = v139;
      *(_DWORD *)v136 = v179[0];
      v47[1] = v44;
      v47[2] = v45;
      v47[3] = v46;
      v47 += 4;
      v48 = v179[5];
      v49 = v179[6];
      v50 = v179[7];
      *v47 = v179[4];
      v47[1] = v48;
      v47[2] = v49;
      v47[3] = v50;
      v51 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v51);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        176,
        "check_temp",
        10,
        36,
        100,
        v187);
      v152 = 0;
      v109 = v184 | 1;
      v184 |= 1u;
      v108 = v185;
      v52 = *(_DWORD *)(v10 + 16);
      v151 = v52 & 2;
      v11 = v151;
      if ( (v52 & 2) != 0 )
      {
        *(_DWORD *)(v10 + 24) |= 2u;
LABEL_111:
        V_LOCK(v11);
        v109 |= 2u;
        V_INT((int)&v178, v145);
        V_STR((int)v177, s);
        v70 = v177[1];
        v71 = v177[2];
        v72 = v177[3];
        v73 = (_DWORD *)v136;
        v126 = v140;
        v125 = v139;
        *(_DWORD *)v136 = v177[0];
        v73[1] = v70;
        v73[2] = v71;
        v73[3] = v72;
        v73 += 4;
        v74 = v177[5];
        v75 = v177[6];
        v76 = v177[7];
        *v73 = v177[4];
        v73[1] = v74;
        v73[2] = v75;
        v73[3] = v76;
        v77 = logfmt_raw((int)v187, 0x1000u);
        V_UNLOCK(v77);
        v78 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
                176,
                "check_temp",
                10,
                44,
                100,
                v187);
        V_LOCK(v78);
        v79 = logfmt_raw((int)v187, 0x1000u);
        V_UNLOCK(v79);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          176,
          "check_temp",
          10,
          45,
          100,
          v187);
        v184 = v109;
        v185 = v108;
        v9 = *(_DWORD *)(v10 + 16);
        v153 = v9 & 4;
        v154 = 0;
        v43 = v153;
        if ( (v9 & 4) != 0 )
          goto LABEL_112;
        goto LABEL_24;
      }
      v164 = 0;
      v163 = v52 & 4;
      v43 = v163;
      if ( (v52 & 4) == 0 )
      {
        v166 = 0;
        v165 = v52 & 8;
        v6 = v165;
        if ( (v52 & 8) == 0 )
        {
          v168 = 0;
          v167 = v52 & 0x10;
          if ( (v52 & 0x10) == 0 )
            goto LABEL_18;
          *(_DWORD *)(v10 + 24) |= 0x10u;
LABEL_120:
          v80 = v185;
          v159 = v184;
          goto LABEL_117;
        }
        *(_DWORD *)(v10 + 24) |= 8u;
        goto LABEL_121;
      }
LABEL_112:
      *(_DWORD *)(v10 + 24) |= 4u;
LABEL_113:
      V_LOCK(v43);
      v159 = v109 | 4;
      v80 = v108;
      V_INT((int)&v176, v145);
      V_STR((int)v175, s);
      v81 = v175[1];
      v82 = v175[2];
      v83 = v175[3];
      v84 = (_DWORD *)v136;
      v126 = v140;
      v125 = v139;
      *(_DWORD *)v136 = v175[0];
      v84[1] = v81;
      v84[2] = v82;
      v84[3] = v83;
      v84 += 4;
      v85 = v175[5];
      v86 = v175[6];
      v87 = v175[7];
      *v84 = v175[4];
      v84[1] = v85;
      v84[2] = v86;
      v84[3] = v87;
      v88 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v88);
      v89 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              176,
              "check_temp",
              10,
              53,
              100,
              v187);
      V_LOCK(v89);
      v90 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v90);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        176,
        "check_temp",
        10,
        54,
        100,
        v187);
      v185 = v108;
      v184 = v159;
      v9 = *(_DWORD *)(v10 + 16);
      v155 = v9 & 8;
      v156 = 0;
      v6 = v155;
      if ( (v9 & 8) == 0 )
        goto LABEL_15;
      *(_DWORD *)(v10 + 24) |= 8u;
LABEL_115:
      V_LOCK(v6);
      v159 |= 8u;
      V_INT((int)&v174, v145);
      V_STR((int)v173, s);
      v91 = v173[1];
      v92 = v173[2];
      v93 = v173[3];
      v94 = (_DWORD *)v136;
      v126 = v140;
      v125 = v139;
      *(_DWORD *)v136 = v173[0];
      v94[1] = v91;
      v94[2] = v92;
      v94[3] = v93;
      v94 += 4;
      v95 = v173[5];
      v96 = v173[6];
      v97 = v173[7];
      *v94 = v173[4];
      v94[1] = v95;
      v94[2] = v96;
      v94[3] = v97;
      v98 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v98);
      v6 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
             176,
             "check_temp",
             10,
             62,
             100,
             v187);
      v185 = v80;
      v184 = v159;
      v157 = *(_DWORD *)(v10 + 16) & 0x10;
      v158 = 0;
      if ( v157 )
      {
        *(_DWORD *)(v10 + 24) |= 0x10u;
LABEL_117:
        V_LOCK(v6);
        V_INT((int)&v172, v145);
        V_STR((int)v171, s);
        v99 = v171[1];
        v100 = v171[2];
        v101 = v171[3];
        v102 = (_DWORD *)v136;
        v126 = v140;
        v125 = v139;
        *(_DWORD *)v136 = v171[0];
        v102[1] = v99;
        v102[2] = v100;
        v102[3] = v101;
        v102 += 4;
        v103 = v171[5];
        v104 = v171[6];
        v105 = v171[7];
        *v102 = v171[4];
        v102[1] = v103;
        v102[2] = v104;
        v102[3] = v105;
        v106 = logfmt_raw((int)v187, 0x1000u);
        V_UNLOCK(v106);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
          176,
          "check_temp",
          10,
          70,
          100,
          v187);
        v185 = v80;
        v184 = v159 | 0x10;
      }
LABEL_18:
      if ( ++v2 >= v183[0] )
        goto LABEL_29;
    }
    v141 = v9 & 2;
    LODWORD(v133) = v9 & 4;
    v142 = v127;
    HIDWORD(v133) = v127;
    if ( !(v141 | v127) )
    {
      if ( v133 )
      {
        *(_DWORD *)(flag_from_monitor + 24) = v3 | 5;
        goto LABEL_13;
      }
      v161 = v9 & 8;
      v162 = v127;
      v6 = v161;
      if ( !(v161 | v127) )
        goto LABEL_15;
      *(_DWORD *)(v10 + 24) = v3 | 9;
      goto LABEL_27;
    }
    v5 = v133;
    *(_DWORD *)(v10 + 24) = v3 | 3;
    if ( v5 )
      goto LABEL_12;
LABEL_24:
    v137 = v9 & 8;
    v138 = 0;
    v6 = v137;
    if ( (v9 & 8) == 0 )
      goto LABEL_15;
    v4 = v127 == 0;
    *(_DWORD *)(v10 + 24) |= 8u;
    if ( !v4 )
    {
      v140 = "check_temp";
      v139 = (int)"%s";
      LODWORD(v136) = &v118;
LABEL_121:
      v80 = v185;
      v159 = v184;
      goto LABEL_115;
    }
LABEL_27:
    v149 = v9 & 0x10;
    v150 = 0;
    if ( (v9 & 0x10) == 0 )
      goto LABEL_18;
    ++v2;
    *(_DWORD *)(v10 + 24) |= 0x10u;
  }
  while ( v2 < v183[0] );
LABEL_29:
  v0 = v184;
  v128 = (int)v186;
  v12 = v184 & 4;
  v13 = v184 & 2;
  v14 = v184 & 4;
  if ( (v184 & 4) != 0 )
    v14 = 1;
  v134 = v14;
  if ( (v184 & 2) != 0 )
  {
    V_LOCK(v13);
    v15 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v15);
    v139 = 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "task_check_miner_status",
      23,
      286,
      100,
      v187);
    v13 = set_miner_6060info_status_high_temp_err(1);
  }
  else
  {
    v139 = 0;
  }
  if ( v12 )
  {
    V_LOCK(v13);
    v107 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v107);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "task_check_miner_status",
      23,
      293,
      100,
      v187);
  }
LABEL_36:
  v184 = 0;
  v16 = (_DWORD *)get_all_created_runtime(&v184);
  v17 = get_flag_from_monitor(*v16);
  if ( (*(_DWORD *)(v17 + 32) & 4) == 0 || (v4 = v127 == 0, *(_DWORD *)(v17 + 40) |= 4u, v4) )
  {
    v131 = 0;
  }
  else
  {
    V_LOCK(v17);
    V_STR((int)&v181, "error");
    v118 = "%s";
    v119 = "check_fan_err";
    v131 = v127;
    v110 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v110);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "check_fan_err",
      13,
      87,
      100,
      v187);
  }
  v169 = 0;
  v18 = (int *)get_all_created_runtime(&v169);
  if ( v169 > 0 )
  {
    LOBYTE(v19) = v127;
    v20 = &v18[v169];
    do
    {
      v21 = *v18++;
      v19 = (unsigned __int8)(v19 & *(_BYTE *)(v21 + 230));
    }
    while ( v20 != v18 );
    v127 = v19;
  }
  v22 = 0;
  v182[0] = 0;
  v23 = get_all_created_runtime(v182);
  v128 = 0;
  if ( v182[0] > 0 )
  {
    v24 = (_DWORD *)(v23 - 4);
    LODWORD(v130) = "chain";
    LODWORD(v133) = v0;
    do
    {
      while ( 1 )
      {
        v25 = v24[1];
        ++v24;
        v26 = (_DWORD *)get_flag_from_monitor(v25);
        if ( (*v26 & 1) != 0 )
        {
          v4 = v127 == 0;
          v26[2] |= 1u;
          if ( !v4 )
            break;
        }
        if ( ++v22 >= v182[0] )
          goto LABEL_50;
      }
      V_LOCK(v26);
      ++v22;
      V_INT((int)v183, (char *)v130);
      v118 = "%s low hashrate happened!";
      v119 = "check_low_hashrate";
      v128 = v127;
      v27 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v27);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        176,
        "check_low_hashrate",
        18,
        119,
        80,
        v187);
      v28 = read_status_from_monitor(&v184, *v24);
      V_LOCK(v28);
      v29 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v29);
      v30 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              176,
              "check_low_hashrate",
              18,
              122,
              80,
              v187);
      V_LOCK(v30);
      v31 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v31);
      v32 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
              176,
              "check_low_hashrate",
              18,
              123,
              80,
              v187);
      V_LOCK(v32);
      v33 = logfmt_raw((int)v187, 0x1000u);
      V_UNLOCK(v33);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
        176,
        "check_low_hashrate",
        18,
        124,
        80,
        v187);
    }
    while ( v22 < v182[0] );
LABEL_50:
    v0 = v133;
  }
  if ( !v132[40] )
  {
    clock_gettime(1, &stru_1743E8);
    v132[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v34 = 0;
    do
    {
      while ( pool_tget(
                *(pthread_mutex_t **)(pools + 4 * v34),
                (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v34) + 1904))
           || !pools_active )
      {
        if ( ++v34 >= total_pools )
          goto LABEL_59;
      }
      clock_gettime(1, &stru_1743E8);
      ++v34;
    }
    while ( v34 < total_pools );
  }
LABEL_59:
  clock_gettime(1, &stru_1743F0);
  v35 = v132[60];
  v130 = 1000LL * (*((_DWORD *)v132 + 13) - *((_DWORD *)v132 + 11))
       + (*((_DWORD *)v132 + 14) - *((_DWORD *)v132 + 12)) / 1000000;
  if ( v130 <= 59999 )
    v36 = v35 & 1;
  else
    v36 = 0;
  if ( v36 )
  {
    v113 = rand();
    v114 = sub_12E2E4(v113, 120);
    v116 = v115 + 60;
    V_LOCK(v114);
    v117 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v117);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "check_lost_connection_to_pool",
      29,
      157,
      80,
      v187);
    sleep(v116);
    exit(1);
  }
  v37 = v131;
  LODWORD(v133) = (v0 >> 3) & 1;
  if ( (v0 & 0x1E) != 0 )
    v37 = v131 | 1;
  v38 = (v0 & 0x1A) != 0;
  v39 = (v0 >> 4) & 1;
  v40 = (unsigned __int8)(v128 | v37);
  if ( !v127 )
    goto LABEL_84;
  if ( v130 <= 60000 )
  {
    *((_DWORD *)v132 + 16) = 0;
LABEL_84:
    v42 = v132[12];
    if ( v42 )
      goto LABEL_94;
    if ( !v37 )
    {
      if ( v40 )
      {
        LOBYTE(v36) = 0;
        goto LABEL_94;
      }
      goto LABEL_92;
    }
    LODWORD(v130) = (unsigned __int8)v132[12];
LABEL_87:
    v53 = 0;
    v187[0] = 0;
    v132[12] = 1;
    v54 = get_all_created_runtime(v187);
    if ( v187[0] > 0 )
    {
      v55 = (_DWORD *)(v54 - 4);
      do
      {
        v56 = v55[1];
        ++v55;
        ++v53;
        v57 = (*(int (**)(void))(v56 + 20))();
        v58 = dev_ctrl(v57);
        (*(void (__fastcall **)(_DWORD))(v58 + 28))(*(_DWORD *)(*v55 + 220));
      }
      while ( v53 < v187[0] );
    }
    v59 = power_off();
    V_LOCK(v59);
    V_BOOL((int)&v170, "poweroff");
    v124 = v130;
    v123 = v39;
    v118 = "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d";
    v122 = v133;
    v121 = v131;
    v120 = v134;
    v119 = (const char *)v139;
    v60 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v60);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "task_check_miner_status",
      23,
      331,
      120,
      v187);
    if ( v40 || v132[12] )
      goto LABEL_93;
LABEL_92:
    LOBYTE(v36) = v42;
    v132[11] = 0;
    goto LABEL_95;
  }
  v41 = *((_DWORD *)v132 + 16);
  *((_DWORD *)v132 + 16) = v41 + 1;
  if ( !(v41 % 60) )
  {
    V_LOCK(-2004318071 * v41);
    V_STR((int)&v184, "error");
    v136 = 274877907LL * (int)v130;
    v118 = "lost internet for %d seconds";
    v119 = (const char *)((int)v130 / 1000);
    v112 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v112);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "check_lost_connection_to_pool",
      29,
      165,
      100,
      v187);
  }
  if ( v130 <= 1200000 )
  {
    v36 = (unsigned __int8)v132[12];
    if ( v132[12] )
      goto LABEL_94;
    if ( !v37 )
    {
      LOBYTE(v36) = v127;
      goto LABEL_94;
    }
LABEL_73:
    v40 = v37;
    LODWORD(v130) = v36;
    v42 = v37;
    goto LABEL_87;
  }
  v42 = v132[60];
  if ( !v42 )
  {
    V_LOCK(v130);
    V_STR((int)v182, "error");
    v118 = "lost internet %d seconds > 20 minutes, poweroff.";
    v119 = (const char *)((int)v130 / 1000);
    v111 = logfmt_raw((int)v187, 0x1000u);
    V_UNLOCK(v111);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      176,
      "check_lost_connection_to_pool",
      29,
      175,
      120,
      v187);
    v36 = (unsigned __int8)v132[12];
    v132[60] = 1;
    if ( v36 )
    {
      v38 = v36;
      goto LABEL_94;
    }
    v42 = v127;
    LODWORD(v130) = 1;
    v38 = v127;
    v40 = v127;
    goto LABEL_87;
  }
  v36 = (unsigned __int8)v132[12];
  if ( !v132[12] )
  {
    if ( v37 )
      goto LABEL_73;
LABEL_93:
    LOBYTE(v36) = v42;
  }
LABEL_94:
  v132[11] = 1;
LABEL_95:
  if ( v127 )
  {
    v4 = v128 == 0;
    v61 = v132;
    v132[4] = v139;
    v61[5] = v134;
    v61[8] = v131;
    if ( v4 )
      v128 = (unsigned __int8)v61[12];
    v62 = v132;
    v63 = v128;
    v132[10] = v36;
    v62[9] = v63;
    v64 = v133;
    v62[7] = v39;
    v62[6] = v64;
  }
  v65 = pthread_mutex_unlock(&stru_1743CC);
  v66 = (unsigned __int8)v132[11];
  byte_17170C ^= 1u;
  if ( v66 )
  {
    v67 = green_led_off(v65);
    if ( byte_17170C )
    {
      red_led_on(v67);
      if ( !v38 )
        return set_pwm_by_temp();
      return fan_pwm_set_max();
    }
    red_led_off(v67);
  }
  else
  {
    v69 = red_led_off(v65);
    if ( byte_17170C )
      green_led_on(v69);
    else
      green_led_off(v69);
  }
  if ( v38 )
    return fan_pwm_set_max();
  return set_pwm_by_temp();
}
