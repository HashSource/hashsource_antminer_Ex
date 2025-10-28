int task_check_miner_status()
{
  char *all_created_runtime; // r0
  int v1; // r8
  int v2; // r2
  bool v3; // zf
  __int64 v4; // r0
  int v5; // r0
  char *flag_from_monitor; // r0
  int v7; // r3
  char *v8; // r4
  int *v9; // r0
  char *v10; // r0
  int v11; // r4
  char *v12; // r0
  int *v13; // r5
  int v14; // t1
  char *v15; // r0
  int v16; // r4
  __int64 v17; // r10
  int v18; // r9
  unsigned int v19; // r2
  int v20; // r4
  int v21; // r1
  int v22; // r4
  int v23; // r8
  int v24; // r3
  int v25; // r6
  int v26; // r2
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int *v30; // r10
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r3
  int v35; // r4
  char *v36; // r0
  char *v37; // r10
  int v38; // t1
  int v39; // r0
  int v40; // r0
  char *v41; // r3
  char *v42; // r3
  char v43; // r2
  int v44; // r2
  int v46; // r1
  int v47; // r2
  int v48; // r3
  int *v49; // r10
  int v50; // r1
  int v51; // r2
  int v52; // r3
  unsigned int v53; // r10
  int v54; // r9
  int v55; // r1
  int v56; // r2
  int v57; // r3
  int *v58; // r11
  int v59; // r1
  int v60; // r2
  int v61; // r3
  int v62; // r9
  int v63; // r1
  int v64; // r2
  int v65; // r3
  int *v66; // r12
  int v67; // r1
  int v68; // r2
  int v69; // r3
  int v70; // r1
  int v71; // r2
  int v72; // r3
  int *v73; // r12
  int v74; // r1
  int v75; // r2
  int v76; // r3
  unsigned int v77; // r9
  unsigned int v78; // r11
  int v79; // [sp+20h] [bp-1374h] BYREF
  char *v80; // [sp+40h] [bp-1354h]
  const char *v81; // [sp+44h] [bp-1350h]
  int v82; // [sp+48h] [bp-134Ch]
  int v83; // [sp+4Ch] [bp-1348h]
  int v84; // [sp+50h] [bp-1344h]
  unsigned int v85; // [sp+54h] [bp-1340h]
  __int64 v86; // [sp+58h] [bp-133Ch]
  __int64 v87; // [sp+60h] [bp-1334h]
  unsigned int v88; // [sp+68h] [bp-132Ch]
  int v89; // [sp+6Ch] [bp-1328h]
  char *v90; // [sp+70h] [bp-1324h]
  int *v91; // [sp+74h] [bp-1320h]
  int v92; // [sp+78h] [bp-131Ch]
  int v93; // [sp+7Ch] [bp-1318h]
  char *v94; // [sp+80h] [bp-1314h]
  const char *v95; // [sp+84h] [bp-1310h]
  int v96; // [sp+88h] [bp-130Ch]
  int v97; // [sp+8Ch] [bp-1308h]
  int v98; // [sp+90h] [bp-1304h]
  int v99; // [sp+94h] [bp-1300h]
  int *v100; // [sp+98h] [bp-12FCh]
  char *v101; // [sp+9Ch] [bp-12F8h]
  int v102; // [sp+A0h] [bp-12F4h]
  int v103; // [sp+A4h] [bp-12F0h]
  int v104; // [sp+A8h] [bp-12ECh]
  int v105; // [sp+ACh] [bp-12E8h]
  int v106; // [sp+B0h] [bp-12E4h]
  int v107; // [sp+B4h] [bp-12E0h]
  int v108; // [sp+B8h] [bp-12DCh]
  int v109; // [sp+BCh] [bp-12D8h]
  int v110; // [sp+C0h] [bp-12D4h]
  int v111; // [sp+C4h] [bp-12D0h]
  int v112; // [sp+C8h] [bp-12CCh]
  int v113; // [sp+CCh] [bp-12C8h]
  char *s; // [sp+D0h] [bp-12C4h]
  const char *v115; // [sp+D4h] [bp-12C0h]
  int v116; // [sp+D8h] [bp-12BCh]
  int v117; // [sp+DCh] [bp-12B8h]
  int v118; // [sp+E0h] [bp-12B4h]
  int v119; // [sp+E4h] [bp-12B0h]
  int v120; // [sp+F0h] [bp-12A4h]
  int v121; // [sp+F4h] [bp-12A0h]
  int v122; // [sp+F8h] [bp-129Ch]
  int v123; // [sp+FCh] [bp-1298h]
  _DWORD v124[7]; // [sp+100h] [bp-1294h] BYREF
  int v125; // [sp+11Ch] [bp-1278h]
  _DWORD v126[7]; // [sp+120h] [bp-1274h] BYREF
  int v127; // [sp+13Ch] [bp-1258h]
  _DWORD v128[7]; // [sp+140h] [bp-1254h] BYREF
  int v129; // [sp+15Ch] [bp-1238h]
  _DWORD v130[7]; // [sp+160h] [bp-1234h] BYREF
  int v131; // [sp+17Ch] [bp-1218h]
  _DWORD v132[8]; // [sp+180h] [bp-1214h] BYREF
  _DWORD v133[7]; // [sp+1A0h] [bp-11F4h] BYREF
  int v134; // [sp+1BCh] [bp-11D8h]
  _DWORD v135[8]; // [sp+1C0h] [bp-11D4h] BYREF
  _DWORD v136[7]; // [sp+1E0h] [bp-11B4h] BYREF
  int v137; // [sp+1FCh] [bp-1198h]
  _DWORD v138[8]; // [sp+200h] [bp-1194h] BYREF
  _DWORD v139[7]; // [sp+220h] [bp-1174h] BYREF
  int v140; // [sp+23Ch] [bp-1158h]
  _DWORD v141[8]; // [sp+240h] [bp-1154h] BYREF
  _DWORD v142[7]; // [sp+260h] [bp-1134h] BYREF
  int v143; // [sp+27Ch] [bp-1118h]
  _DWORD v144[8]; // [sp+280h] [bp-1114h] BYREF
  _DWORD v145[7]; // [sp+2A0h] [bp-10F4h] BYREF
  int v146; // [sp+2BCh] [bp-10D8h]
  __int64 v147; // [sp+2C0h] [bp-10D4h] BYREF
  int v148; // [sp+2C8h] [bp-10CCh]
  int v149; // [sp+2CCh] [bp-10C8h]
  int v150; // [sp+2D0h] [bp-10C4h]
  int v151; // [sp+2D4h] [bp-10C0h]
  int v152; // [sp+2D8h] [bp-10BCh]
  int v153; // [sp+2DCh] [bp-10B8h]
  float v154; // [sp+2E0h] [bp-10B4h]
  float v155; // [sp+2E4h] [bp-10B0h]
  float v156; // [sp+2E8h] [bp-10ACh]
  _DWORD v157[1025]; // [sp+390h] [bp-1004h] BYREF

  v90 = &byte_1663AC;
  if ( !byte_1663AC )
  {
    byte_1663B0 = 0;
    byte_1663B1 = 0;
    byte_1663B2 = 0;
    byte_1663B3 = 0;
    byte_1663B4 = 0;
    byte_1663B5 = 0;
    byte_1663B6 = 0;
    byte_1663B7 = 0;
    byte_1663B8 = 0;
    byte_1663AC = 1;
  }
  pthread_mutex_lock(&stru_1663BC);
  v130[0] = 0;
  v84 = (unsigned __int8)v90[12] ^ 1;
  all_created_runtime = (char *)get_all_created_runtime(v130);
  v147 = 0;
  v148 = 0;
  v149 = 0;
  if ( v130[0] <= 0 )
  {
    v91 = 0;
    v86 = 0;
    v88 = 0;
    goto LABEL_27;
  }
  v101 = "chain";
  v115 = "uneffective temp exceed limit";
  v1 = 0;
  s = "error";
  v85 = (unsigned int)(all_created_runtime - 4);
  do
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v85 + 4);
      v85 += 4;
      flag_from_monitor = get_flag_from_monitor(v5);
      v7 = *((_DWORD *)flag_from_monitor + 4);
      v8 = flag_from_monitor;
      v83 = 0;
      v82 = v7 & 1;
      if ( (v7 & 1) == 0 )
      {
        v89 = 0;
        v88 = v7 & 2;
        if ( (v7 & 2) == 0 )
        {
          v103 = 0;
          v102 = v7 & 4;
          if ( (v7 & 4) != 0 )
          {
            v3 = v84 == 0;
            *((_DWORD *)flag_from_monitor + 6) |= 4u;
            if ( v3 )
              goto LABEL_10;
            v95 = "check_temp";
            v78 = HIDWORD(v147);
            v77 = v147;
            v94 = "%s";
            v100 = &g_zc;
            v91 = &v79;
            goto LABEL_99;
          }
          goto LABEL_21;
        }
        v3 = v84 == 0;
        *((_DWORD *)flag_from_monitor + 6) |= 2u;
        if ( v3 )
        {
          LODWORD(v87) = v7 & 4;
          HIDWORD(v87) = v84;
          if ( (unsigned int)v87 | v84 )
          {
LABEL_9:
            *((_DWORD *)v8 + 6) |= 4u;
LABEL_10:
            v98 = v7 & 8;
            v99 = 0;
            if ( (v7 & 8) != 0 )
              *((_DWORD *)v8 + 6) |= 8u;
LABEL_12:
            v86 = v7 & 0x10;
            if ( (v7 & 0x10) == 0 )
              goto LABEL_15;
            v3 = v84 == 0;
            *((_DWORD *)v8 + 6) |= 0x10u;
            if ( v3 )
              goto LABEL_15;
            v95 = "check_temp";
            v94 = "%s";
            v100 = &g_zc;
            v91 = &v79;
            goto LABEL_106;
          }
          goto LABEL_21;
        }
        v95 = "check_temp";
        v78 = HIDWORD(v147);
        v77 = v147;
        v94 = "%s";
        v100 = &g_zc;
        v91 = &v79;
        goto LABEL_97;
      }
      v2 = *((_DWORD *)flag_from_monitor + 6);
      v3 = v84 == 0;
      *((_DWORD *)flag_from_monitor + 6) = v2 | 1;
      if ( v3 )
        break;
      V_LOCK();
      v91 = &v79;
      v26 = *(_DWORD *)(*(_DWORD *)v85 + 140);
      v94 = "%s";
      v100 = &g_zc;
      v95 = "check_temp";
      V_INT((int)v145, v101, v26);
      V_STR(v144, s, "temp lost");
      v27 = v144[1];
      v28 = v144[2];
      v29 = v144[3];
      v30 = v91;
      v81 = "check_temp";
      v80 = v94;
      *v91 = v144[0];
      v30[1] = v27;
      v30[2] = v28;
      v30[3] = v29;
      v30 += 4;
      v31 = v144[5];
      v32 = v144[6];
      v33 = v144[7];
      *v30 = v144[4];
      v30[1] = v31;
      v30[2] = v32;
      v30[3] = v33;
      logfmt_raw((char *)v157, 0x1000u, 0, v146, v145[0], v145[1], v145[2], v145[3], v145[4], v145[5], v145[6], v146);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        35,
        20,
        v157);
      v107 = 0;
      v78 = HIDWORD(v147);
      v77 = v147 | 1;
      LODWORD(v147) = v147 | 1;
      v34 = *((_DWORD *)v8 + 4);
      v106 = v34 & 2;
      if ( (v34 & 2) != 0 )
      {
        *((_DWORD *)v8 + 6) |= 2u;
LABEL_97:
        V_LOCK();
        v77 |= 2u;
        V_INT((int)v142, v101, *(int *)(*(_DWORD *)v85 + 140));
        V_STR(v141, s, "temp too high");
        v46 = v141[1];
        v47 = v141[2];
        v48 = v141[3];
        v81 = v95;
        v49 = v91;
        v80 = v94;
        *v91 = v141[0];
        v49[1] = v46;
        v49[2] = v47;
        v49[3] = v48;
        v49 += 4;
        v50 = v141[5];
        v51 = v141[6];
        v52 = v141[7];
        *v49 = v141[4];
        v49[1] = v50;
        v49[2] = v51;
        v49[3] = v52;
        logfmt_raw((char *)v157, 0x1000u, 0, v143, v142[0], v142[1], v142[2], v142[3], v142[4], v142[5], v142[6], v143);
        V_UNLOCK();
        zlog(
          *v100,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          43,
          100,
          v157);
        v147 = __PAIR64__(v78, v77);
        v7 = *((_DWORD *)v8 + 4);
        v108 = v7 & 4;
        v109 = 0;
        if ( (v7 & 4) != 0 )
          goto LABEL_98;
        goto LABEL_21;
      }
      v119 = 0;
      v118 = v34 & 4;
      if ( (v34 & 4) == 0 )
      {
        v121 = 0;
        v120 = v34 & 8;
        if ( (v34 & 8) == 0 )
        {
          v123 = 0;
          v122 = v34 & 0x10;
          if ( (v34 & 0x10) == 0 )
            goto LABEL_15;
          *((_DWORD *)v8 + 6) |= 0x10u;
LABEL_106:
          v53 = HIDWORD(v147);
          v62 = v147;
          goto LABEL_103;
        }
        *((_DWORD *)v8 + 6) |= 8u;
        goto LABEL_107;
      }
LABEL_98:
      *((_DWORD *)v8 + 6) |= 4u;
LABEL_99:
      V_LOCK();
      v53 = v78;
      v54 = v77 | 4;
      V_INT((int)v139, v101, *(int *)(*(_DWORD *)v85 + 140));
      V_STR(v138, s, "temp too low");
      v55 = v138[1];
      v56 = v138[2];
      v57 = v138[3];
      v81 = v95;
      v58 = v91;
      v80 = v94;
      *v91 = v138[0];
      v58[1] = v55;
      v58[2] = v56;
      v58[3] = v57;
      v58 += 4;
      v59 = v138[5];
      v60 = v138[6];
      v61 = v138[7];
      *v58 = v138[4];
      v58[1] = v59;
      v58[2] = v60;
      v58[3] = v61;
      logfmt_raw((char *)v157, 0x1000u, 0, v140, v139[0], v139[1], v139[2], v139[3], v139[4], v139[5], v139[6], v140);
      V_UNLOCK();
      zlog(
        *v100,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        51,
        100,
        v157);
      v147 = __PAIR64__(v53, v54);
      v7 = *((_DWORD *)v8 + 4);
      v110 = v7 & 8;
      v111 = 0;
      if ( (v7 & 8) == 0 )
        goto LABEL_12;
      *((_DWORD *)v8 + 6) |= 8u;
LABEL_101:
      V_LOCK();
      v62 = v54 | 8;
      V_INT((int)v136, v101, *(int *)(*(_DWORD *)v85 + 140));
      V_STR(v135, s, "read no temp");
      v63 = v135[1];
      v64 = v135[2];
      v65 = v135[3];
      v66 = v91;
      v81 = v95;
      v80 = v94;
      *v91 = v135[0];
      v66[1] = v63;
      v66[2] = v64;
      v66[3] = v65;
      v66 += 4;
      v67 = v135[5];
      v68 = v135[6];
      v69 = v135[7];
      *v66 = v135[4];
      v66[1] = v67;
      v66[2] = v68;
      v66[3] = v69;
      logfmt_raw((char *)v157, 0x1000u, 0, v137, v136[0], v136[1], v136[2], v136[3], v136[4], v136[5], v136[6], v137);
      V_UNLOCK();
      zlog(
        *v100,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_temp",
        10,
        59,
        100,
        v157);
      v147 = __PAIR64__(v53, v62);
      v112 = *((_DWORD *)v8 + 4) & 0x10;
      v113 = 0;
      if ( v112 )
      {
        *((_DWORD *)v8 + 6) |= 0x10u;
LABEL_103:
        V_LOCK();
        V_INT((int)v133, v101, *(int *)(*(_DWORD *)v85 + 140));
        V_STR(v132, s, v115);
        v70 = v132[1];
        v71 = v132[2];
        v72 = v132[3];
        v73 = v91;
        v81 = v95;
        v80 = v94;
        *v91 = v132[0];
        v73[1] = v70;
        v73[2] = v71;
        v73[3] = v72;
        v73 += 4;
        v74 = v132[5];
        v75 = v132[6];
        v76 = v132[7];
        *v73 = v132[4];
        v73[1] = v74;
        v73[2] = v75;
        v73[3] = v76;
        logfmt_raw((char *)v157, 0x1000u, 0, v134, v133[0], v133[1], v133[2], v133[3], v133[4], v133[5], v133[6], v134);
        V_UNLOCK();
        zlog(
          *v100,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/check_miner_status.c",
          166,
          "check_temp",
          10,
          67,
          100,
          v157);
        HIDWORD(v147) = v53;
        LODWORD(v147) = v62 | 0x10;
      }
LABEL_15:
      if ( ++v1 >= v130[0] )
        goto LABEL_26;
    }
    v96 = v7 & 2;
    LODWORD(v87) = v7 & 4;
    v97 = v84;
    HIDWORD(v87) = v84;
    if ( !(v96 | v84) )
    {
      if ( v87 )
      {
        *((_DWORD *)flag_from_monitor + 6) = v2 | 5;
        goto LABEL_10;
      }
      v116 = v7 & 8;
      v117 = v84;
      if ( !(v116 | v84) )
        goto LABEL_12;
      *((_DWORD *)flag_from_monitor + 6) = v2 | 9;
      goto LABEL_24;
    }
    v4 = v87;
    *((_DWORD *)v8 + 6) = v2 | 3;
    if ( v4 )
      goto LABEL_9;
LABEL_21:
    v92 = v7 & 8;
    v93 = 0;
    if ( (v7 & 8) == 0 )
      goto LABEL_12;
    v3 = v84 == 0;
    *((_DWORD *)v8 + 6) |= 8u;
    if ( !v3 )
    {
      v95 = "check_temp";
      v94 = "%s";
      v100 = &g_zc;
      v91 = &v79;
LABEL_107:
      v53 = HIDWORD(v147);
      v54 = v147;
      goto LABEL_101;
    }
LABEL_24:
    v104 = v7 & 0x10;
    v105 = 0;
    if ( (v7 & 0x10) == 0 )
      goto LABEL_15;
    ++v1;
    *((_DWORD *)v8 + 6) |= 0x10u;
  }
  while ( v1 < v130[0] );
LABEL_26:
  v86 = v147;
  v88 = ((unsigned int)v147 >> 2) & 1;
  v91 = (int *)((v147 >> 1) & 1);
LABEL_27:
  LODWORD(v147) = 0;
  v9 = (int *)get_all_created_runtime(&v147);
  v10 = get_flag_from_monitor(*v9);
  if ( (*((_DWORD *)v10 + 8) & 4) == 0 || (v3 = v84 == 0, *((_DWORD *)v10 + 10) |= 4u, v3) )
  {
    v85 = 0;
  }
  else
  {
    V_LOCK();
    V_STR(v130, "error", "fan error exceed limit");
    v85 = v84;
    logfmt_raw(
      (char *)v157,
      0x1000u,
      0,
      v131,
      v130[0],
      v130[1],
      v130[2],
      v130[3],
      v130[4],
      v130[5],
      v130[6],
      v131,
      "%s",
      "check_fan_err");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_fan_err",
      13,
      84,
      100,
      v157);
  }
  v11 = 0;
  v126[0] = 0;
  v12 = (char *)get_all_created_runtime(v126);
  v82 = 0;
  if ( v126[0] > 0 )
  {
    v13 = (int *)(v12 - 4);
    LODWORD(v87) = "chain";
    do
    {
      while ( 1 )
      {
        v14 = v13[1];
        ++v13;
        v15 = get_flag_from_monitor(v14);
        if ( (*(_DWORD *)v15 & 1) != 0 )
        {
          v3 = v84 == 0;
          *((_DWORD *)v15 + 2) |= 1u;
          if ( !v3 )
            break;
        }
        if ( ++v11 >= v126[0] )
          goto LABEL_37;
      }
      V_LOCK();
      ++v11;
      V_INT((int)v128, (char *)v87, *(int *)(*v13 + 140));
      v82 = v84;
      logfmt_raw(
        (char *)v157,
        0x1000u,
        0,
        v129,
        v128[0],
        v128[1],
        v128[2],
        v128[3],
        v128[4],
        v128[5],
        v128[6],
        v129,
        "%s low hashrate happened!",
        "check_low_hashrate");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        103,
        80,
        v157);
      read_status_from_monitor(&v147, *v13);
      V_LOCK();
      logfmt_raw((char *)v157, 0x1000u, 0, "no ratio hashrate last_5s: %f", v154 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        106,
        80,
        v157);
      V_LOCK();
      logfmt_raw((char *)v157, 0x1000u, 0, "no ratio hashrate last_30min: %f", v155 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        107,
        80,
        v157);
      V_LOCK();
      logfmt_raw((char *)v157, 0x1000u, 0, "no ratio hashrate lifetime: %f", v156 / 1000000000.0);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/check_miner_status.c",
        166,
        "check_low_hashrate",
        18,
        108,
        80,
        v157);
    }
    while ( v11 < v126[0] );
  }
LABEL_37:
  if ( !v90[40] )
  {
    clock_gettime(1, &stru_1663D8);
    v90[40] = 1;
  }
  if ( total_pools > 0 )
  {
    v16 = 0;
    do
    {
      while ( pool_tget(*(_DWORD *)(pools + 4 * v16), (unsigned __int8 *)(*(_DWORD *)(pools + 4 * v16) + 2064))
           || !pools_active )
      {
        if ( ++v16 >= total_pools )
          goto LABEL_45;
      }
      clock_gettime(1, &stru_1663D8);
      ++v16;
    }
    while ( v16 < total_pools );
  }
LABEL_45:
  clock_gettime(1, &stru_1663E0);
  v17 = 1000LL * (*((_DWORD *)v90 + 13) - *((_DWORD *)v90 + 11))
      + (*((_DWORD *)v90 + 14) - *((_DWORD *)v90 + 12)) / 1000000;
  if ( v17 <= 59999 )
    v18 = v90[60] & 1;
  else
    v18 = 0;
  if ( v18 )
  {
    V_LOCK();
    logfmt_raw(
      (char *)v157,
      0x1000u,
      0,
      "The pool connection recovered after the system poweroff. Exit and restart mining!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      139,
      60,
      v157);
    exit(1);
  }
  v19 = v86;
  v20 = v86 & 0x1E;
  LODWORD(v86) = ((unsigned int)v86 >> 3) & 1;
  v21 = v85;
  LODWORD(v87) = (v19 >> 4) & 1;
  if ( v20 )
    v21 = v85 | 1;
  v22 = v21;
  v23 = v82 | v21;
  if ( !v84 )
    goto LABEL_70;
  if ( v17 <= 60000 )
  {
    *((_DWORD *)v90 + 16) = 0;
LABEL_70:
    LOBYTE(v25) = v90[12];
    if ( (_BYTE)v25 )
      goto LABEL_80;
    if ( !v21 )
    {
      if ( v23 )
      {
        LOBYTE(v18) = 0;
        goto LABEL_80;
      }
      goto LABEL_78;
    }
    v18 = (unsigned __int8)v90[12];
LABEL_73:
    v35 = 0;
    v157[0] = 0;
    v90[12] = 1;
    v36 = (char *)get_all_created_runtime(v157);
    if ( v157[0] > 0 )
    {
      v37 = v36 - 4;
      do
      {
        v38 = *((_DWORD *)v37 + 1);
        v37 += 4;
        ++v35;
        v39 = (*(int (**)(void))(v38 + 8))();
        v40 = dev_ctrl(v39);
        (*(void (__fastcall **)(_DWORD))(v40 + 28))(*(_DWORD *)(*(_DWORD *)v37 + 136));
      }
      while ( v35 < v157[0] );
    }
    power_off();
    V_LOCK();
    V_BOOL((int)v124, "poweroff", 1);
    logfmt_raw(
      (char *)v157,
      0x1000u,
      0,
      v125,
      v124[0],
      v124[1],
      v124[2],
      v124[3],
      v124[4],
      v124[5],
      v124[6],
      v125,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v91,
      v88,
      v85,
      (_DWORD)v86,
      (_DWORD)v87,
      v18);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "task_check_miner_status",
      23,
      296,
      120,
      v157);
    if ( v23 || v90[12] )
      goto LABEL_79;
LABEL_78:
    LOBYTE(v18) = v25;
    v90[11] = 0;
    goto LABEL_81;
  }
  v24 = *((_DWORD *)v90 + 16);
  *((_DWORD *)v90 + 16) = v24 + 1;
  if ( !(v24 % 60) )
  {
    V_LOCK();
    V_STR(&v147, "error", "net lost");
    logfmt_raw(
      (char *)v157,
      0x1000u,
      0,
      v153,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152,
      v153,
      "lost internet for %d seconds",
      (int)v17 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      146,
      100,
      v157);
  }
  if ( (unsigned int)&loc_124F80 >= v17 )
  {
    v18 = (unsigned __int8)v90[12];
    if ( v90[12] )
      goto LABEL_80;
    if ( !v22 )
    {
      LOBYTE(v18) = v84;
      goto LABEL_80;
    }
LABEL_59:
    v23 = v22;
    LOBYTE(v25) = v22;
    goto LABEL_73;
  }
  v25 = (unsigned __int8)v90[60];
  if ( !v90[60] )
  {
    V_LOCK();
    V_STR(v126, "error", "net lost");
    logfmt_raw(
      (char *)v157,
      0x1000u,
      v25,
      v127,
      v126[0],
      v126[1],
      v126[2],
      v126[3],
      v126[4],
      v126[5],
      v126[6],
      v127,
      "lost internet %d seconds > 20 minutes, poweroff.",
      (int)v17 / 1000);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/check_miner_status.c",
      166,
      "check_lost_connection_to_pool",
      29,
      156,
      120,
      v157);
    v18 = (unsigned __int8)v90[12];
    v90[60] = 1;
    if ( v18 )
      goto LABEL_80;
    LOBYTE(v25) = v84;
    v18 = 1;
    v23 = v84;
    goto LABEL_73;
  }
  v18 = (unsigned __int8)v90[12];
  if ( !v90[12] )
  {
    if ( v22 )
      goto LABEL_59;
LABEL_79:
    LOBYTE(v18) = v25;
  }
LABEL_80:
  v90[11] = 1;
LABEL_81:
  if ( v84 )
  {
    v3 = v82 == 0;
    v41 = v90;
    v90[4] = (char)v91;
    v41[5] = v88;
    v41[8] = v85;
    if ( v3 )
      v82 = (unsigned __int8)v41[12];
    v42 = v90;
    v43 = v82;
    v90[10] = v18;
    v42[9] = v43;
    v42[6] = v86;
    v42[7] = v87;
  }
  pthread_mutex_unlock(&stru_1663BC);
  v44 = (unsigned __int8)v90[11];
  byte_163410 ^= 1u;
  if ( v44 )
  {
    green_led_off();
    if ( byte_163410 )
    {
      red_led_on();
      if ( v90[11] )
        return fan_pwm_set_max();
      return set_pwm_by_temp();
    }
    red_led_off();
  }
  else
  {
    red_led_off();
    if ( byte_163410 )
      green_led_on();
    else
      green_led_off();
  }
  if ( !v90[11] )
    return set_pwm_by_temp();
  return fan_pwm_set_max();
}
