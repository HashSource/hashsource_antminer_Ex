int __fastcall update_temperature(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  signed int v4; // r5
  int v6; // r4
  void *v7; // r0
  void (__fastcall *v8)(int, void *); // r3
  int *v9; // r6
  int *v10; // r0
  int v11; // r10
  int v12; // r1
  int v13; // r2
  int v14; // r3
  char *v15; // lr
  char *v16; // r11
  int v17; // r1
  int v18; // r2
  int v19; // r3
  const char **v20; // r5
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  const char *v27; // r1
  const char *v28; // r2
  const char *v29; // r3
  const char *v30; // r1
  const char *v31; // r2
  const char *v32; // r3
  int v33; // r0
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  char *v38; // lr
  char *v39; // r9
  int v40; // r1
  int v41; // r2
  int v42; // r3
  const char **v43; // r5
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  const char *v50; // r1
  const char *v51; // r2
  const char *v52; // r3
  const char *v53; // r1
  const char *v54; // r2
  const char *v55; // r3
  int v56; // r0
  int v57; // r8
  int v58; // r0
  int v59; // r0
  int v60; // r3
  int v61; // r2
  int v62; // r8
  int v63; // r2
  int v64; // r2
  int v65; // r2
  int v66; // r2
  int v67; // r3
  int v68; // r12
  _DWORD *v69; // r12
  int v70; // lr
  int v71; // r1
  bool v72; // nf
  int v73; // r0
  char *v74; // r3
  int v75; // r2
  char *v76; // r4
  int v77; // r7
  int v78; // r8
  int v79; // r0
  int v80; // r0
  int v81; // r0
  int result; // r0
  char *v83; // r0
  int v84; // r1
  int v85; // r6
  int v86; // r0
  int v87; // r2
  int *v88; // r8
  int v89; // r9
  int v90; // r8
  int v91; // r9
  int v92; // r0
  int v93; // r0
  int v94; // r0
  int v95; // r2
  int v96; // r1
  int v97; // lr
  int v98; // r0
  char *v99; // r6
  int v100; // r6
  int v101; // r0
  const char *v102; // [sp+20h] [bp-1314h] BYREF
  int v103; // [sp+24h] [bp-1310h]
  int v104; // [sp+28h] [bp-130Ch]
  int v105; // [sp+2Ch] [bp-1308h]
  char v106; // [sp+40h] [bp-12F4h] BYREF
  char v107; // [sp+60h] [bp-12D4h] BYREF
  char *v108; // [sp+80h] [bp-12B4h]
  const char *v109; // [sp+84h] [bp-12B0h]
  int v110; // [sp+88h] [bp-12ACh]
  char *s; // [sp+8Ch] [bp-12A8h]
  const char *v112; // [sp+90h] [bp-12A4h]
  char *v113; // [sp+94h] [bp-12A0h]
  int *v114; // [sp+98h] [bp-129Ch]
  const char **v115; // [sp+9Ch] [bp-1298h]
  const char *v116; // [sp+A0h] [bp-1294h]
  char *v117; // [sp+A4h] [bp-1290h]
  char *v118; // [sp+A8h] [bp-128Ch]
  char *v119; // [sp+ACh] [bp-1288h]
  _DWORD *v120; // [sp+B0h] [bp-1284h]
  int v121; // [sp+B4h] [bp-1280h]
  int v122; // [sp+B8h] [bp-127Ch]
  unsigned int v123; // [sp+BCh] [bp-1278h]
  int v124; // [sp+C0h] [bp-1274h]
  int v125; // [sp+C4h] [bp-1270h]
  int v126; // [sp+C8h] [bp-126Ch]
  int v127; // [sp+CCh] [bp-1268h]
  int *v128; // [sp+D0h] [bp-1264h]
  int *v129; // [sp+D4h] [bp-1260h]
  const char *v130; // [sp+D8h] [bp-125Ch]
  int v131; // [sp+DCh] [bp-1258h]
  signed int v132; // [sp+E0h] [bp-1254h]
  void *ptr; // [sp+E4h] [bp-1250h]
  int v134; // [sp+E8h] [bp-124Ch]
  int v135; // [sp+ECh] [bp-1248h]
  char v136[32]; // [sp+F0h] [bp-1244h] BYREF
  char v137[32]; // [sp+110h] [bp-1224h] BYREF
  char v138[32]; // [sp+130h] [bp-1204h] BYREF
  char v139[32]; // [sp+150h] [bp-11E4h] BYREF
  char v140[32]; // [sp+170h] [bp-11C4h] BYREF
  _DWORD v141[8]; // [sp+190h] [bp-11A4h] BYREF
  _DWORD v142[8]; // [sp+1B0h] [bp-1184h] BYREF
  _DWORD v143[8]; // [sp+1D0h] [bp-1164h] BYREF
  _DWORD v144[8]; // [sp+1F0h] [bp-1144h] BYREF
  int v145; // [sp+210h] [bp-1124h] BYREF
  int v146; // [sp+214h] [bp-1120h]
  int v147; // [sp+218h] [bp-111Ch]
  int v148; // [sp+21Ch] [bp-1118h]
  int v149; // [sp+220h] [bp-1114h]
  int v150; // [sp+224h] [bp-1110h]
  int v151; // [sp+228h] [bp-110Ch]
  int v152; // [sp+22Ch] [bp-1108h]
  int v153; // [sp+230h] [bp-1104h] BYREF
  int v154; // [sp+234h] [bp-1100h]
  int v155; // [sp+238h] [bp-10FCh]
  int v156; // [sp+23Ch] [bp-10F8h]
  int v157; // [sp+240h] [bp-10F4h]
  int v158; // [sp+244h] [bp-10F0h]
  int v159; // [sp+248h] [bp-10ECh]
  int v160; // [sp+24Ch] [bp-10E8h]
  _DWORD v161[8]; // [sp+250h] [bp-10E4h] BYREF
  char v162[32]; // [sp+270h] [bp-10C4h] BYREF
  int v163; // [sp+290h] [bp-10A4h] BYREF
  int v164; // [sp+294h] [bp-10A0h]
  int v165; // [sp+298h] [bp-109Ch]
  int v166; // [sp+29Ch] [bp-1098h]
  int v167; // [sp+2A0h] [bp-1094h]
  int v168; // [sp+2A4h] [bp-1090h]
  int v169; // [sp+2A8h] [bp-108Ch]
  int v170; // [sp+2ACh] [bp-1088h]
  int v171; // [sp+2B0h] [bp-1084h] BYREF
  int v172; // [sp+2B4h] [bp-1080h]
  int v173; // [sp+2B8h] [bp-107Ch]
  int v174; // [sp+2BCh] [bp-1078h]
  int v175; // [sp+2C0h] [bp-1074h]
  int v176; // [sp+2C4h] [bp-1070h]
  int v177; // [sp+2C8h] [bp-106Ch]
  int v178; // [sp+2CCh] [bp-1068h]
  _DWORD v179[8]; // [sp+2D0h] [bp-1064h] BYREF
  char v180[32]; // [sp+2F0h] [bp-1044h] BYREF
  int v181; // [sp+310h] [bp-1024h] BYREF
  _BYTE v182[4100]; // [sp+330h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 230);
  v131 = a3 + 16;
  if ( !v3 )
    return v131;
  v4 = *(_DWORD *)(a1 + 364);
  v120 = a2;
  v6 = *(_DWORD *)(a1 + 356);
  v135 = a3;
  v132 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 204);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v132 )
    {
      v66 = *(_DWORD *)(a1 + 220);
      v123 = 0;
      v121 = 0;
      v124 = -150;
      goto LABEL_59;
    }
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v125 = -150;
    v124 = -150;
    v126 = 150;
LABEL_64:
    *(_DWORD *)(v135 + 16) |= 1u;
    goto LABEL_33;
  }
  v9 = (int *)ptr;
  v123 = 0;
  v121 = 0;
  v122 = 0;
  v10 = &g_zc;
  v134 = 0;
  v127 = 0;
  v126 = 150;
  v118 = &v107;
  v116 = "check_temperature";
  v117 = &v106;
  v128 = (int *)((char *)ptr + 8 * v132);
  v11 = v6;
  v124 = -150;
  v125 = -150;
  v130 = "check_temperature, local:%d, remote:%d";
  v114 = &g_zc;
  v113 = "%s";
  v129 = &g_temp_zc;
  s = "chain";
  v112 = "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v119 = "sensor";
  v115 = &v102;
  do
  {
    V_LOCK(v10);
    V_INT((int)&v181, s);
    v57 = *v9;
    v104 = v9[1];
    v103 = v57;
    v102 = v130;
    v58 = logfmt_raw((int)v182, 0x1000u);
    V_UNLOCK(v58);
    v59 = zlog(*v114, v112, 196, "check_temperature", 17, 36, 20, v182);
    v60 = *v9;
    if ( *v9 == -64 )
    {
      v62 = 0;
      ++v123;
    }
    else
    {
      v61 = v125;
      v62 = 1;
      if ( v125 < v60 )
        v61 = *v9;
      v125 = v61;
      v63 = v126;
      ++v122;
      if ( v126 >= v60 )
        v63 = v60;
      v126 = v63;
    }
    v64 = v9[1];
    if ( v64 == -64 )
    {
      ++v123;
      v110 = 0;
    }
    else
    {
      if ( v124 >= v64 )
        v64 = v124;
      v59 = v121 + 1;
      v124 = v64;
      ++v121;
      v110 = 1;
    }
    if ( v120 )
    {
      v65 = *(_DWORD *)(v11 + 12);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          if ( v62 )
            *(_DWORD *)(v120[2] + 4 * v134) = v60;
          if ( v110 )
            *(_DWORD *)(v120[3] + 4 * v134) = v9[1];
          ++v134;
        }
      }
      else
      {
        if ( v62 )
          *(_DWORD *)(*v120 + 4 * v127) = v60;
        if ( v110 )
          *(_DWORD *)(v120[1] + 4 * v127) = v9[1];
        ++v127;
      }
    }
    V_LOCK(v59);
    V_INT((int)v180, s);
    V_INT((int)v179, v119);
    if ( v62 )
    {
      V_INT((int)&v171, "pcbtemp");
      if ( v110 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v144, "pcbtemp");
      v171 = v144[0];
      v172 = v144[1];
      v173 = v144[2];
      v174 = v144[3];
      v175 = v144[4];
      v176 = v144[5];
      v177 = v144[6];
      v178 = v144[7];
      if ( v110 )
      {
LABEL_5:
        V_INT((int)&v163, "chiptemp");
        goto LABEL_6;
      }
    }
    V_INT((int)v143, "chiptemp");
    v163 = v143[0];
    v164 = v143[1];
    v165 = v143[2];
    v166 = v143[3];
    v167 = v143[4];
    v168 = v143[5];
    v169 = v143[6];
    v170 = v143[7];
LABEL_6:
    v12 = v164;
    v13 = v165;
    v14 = v166;
    v109 = v116;
    v15 = v118;
    v108 = v113;
    *(_DWORD *)v118 = v163;
    *((_DWORD *)v15 + 1) = v12;
    *((_DWORD *)v15 + 2) = v13;
    *((_DWORD *)v15 + 3) = v14;
    v15 += 16;
    v16 = v117;
    v17 = v168;
    v18 = v169;
    v19 = v170;
    v20 = v115;
    *(_DWORD *)v15 = v167;
    *((_DWORD *)v15 + 1) = v17;
    *((_DWORD *)v15 + 2) = v18;
    *((_DWORD *)v15 + 3) = v19;
    v21 = v172;
    v22 = v173;
    v23 = v174;
    *(_DWORD *)v16 = v171;
    *((_DWORD *)v16 + 1) = v21;
    *((_DWORD *)v16 + 2) = v22;
    *((_DWORD *)v16 + 3) = v23;
    v16 += 16;
    v24 = v176;
    v25 = v177;
    v26 = v178;
    *(_DWORD *)v16 = v175;
    *((_DWORD *)v16 + 1) = v24;
    *((_DWORD *)v16 + 2) = v25;
    *((_DWORD *)v16 + 3) = v26;
    v27 = (const char *)v179[1];
    v28 = (const char *)v179[2];
    v29 = (const char *)v179[3];
    *v20 = (const char *)v179[0];
    v20[1] = v27;
    v20[2] = v28;
    v20[3] = v29;
    v20 += 4;
    v30 = (const char *)v179[5];
    v31 = (const char *)v179[6];
    v32 = (const char *)v179[7];
    *v20 = (const char *)v179[4];
    v20[1] = v30;
    v20[2] = v31;
    v20[3] = v32;
    v33 = logfmt_raw((int)v182, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(*v114, v112, 196, "check_temperature", 17, 92, 20, v182);
    V_LOCK(v34);
    V_INT((int)v162, s);
    V_INT((int)v161, v119);
    if ( v62 )
    {
      V_INT((int)&v153, "pcbtemp");
    }
    else
    {
      V_INT((int)v142, "pcbtemp");
      v153 = v142[0];
      v154 = v142[1];
      v155 = v142[2];
      v156 = v142[3];
      v157 = v142[4];
      v158 = v142[5];
      v159 = v142[6];
      v160 = v142[7];
    }
    if ( v110 )
    {
      V_INT((int)&v145, "chiptemp");
    }
    else
    {
      V_INT((int)v141, "chiptemp");
      v145 = v141[0];
      v146 = v141[1];
      v147 = v141[2];
      v148 = v141[3];
      v149 = v141[4];
      v150 = v141[5];
      v151 = v141[6];
      v152 = v141[7];
    }
    v35 = v146;
    v36 = v147;
    v37 = v148;
    v9 += 2;
    v11 += 24;
    v109 = v116;
    v38 = v118;
    v108 = v113;
    *(_DWORD *)v118 = v145;
    *((_DWORD *)v38 + 1) = v35;
    *((_DWORD *)v38 + 2) = v36;
    *((_DWORD *)v38 + 3) = v37;
    v38 += 16;
    v39 = v117;
    v40 = v150;
    v41 = v151;
    v42 = v152;
    v43 = v115;
    *(_DWORD *)v38 = v149;
    *((_DWORD *)v38 + 1) = v40;
    *((_DWORD *)v38 + 2) = v41;
    *((_DWORD *)v38 + 3) = v42;
    v44 = v154;
    v45 = v155;
    v46 = v156;
    *(_DWORD *)v39 = v153;
    *((_DWORD *)v39 + 1) = v44;
    *((_DWORD *)v39 + 2) = v45;
    *((_DWORD *)v39 + 3) = v46;
    v39 += 16;
    v47 = v158;
    v48 = v159;
    v49 = v160;
    *(_DWORD *)v39 = v157;
    *((_DWORD *)v39 + 1) = v47;
    *((_DWORD *)v39 + 2) = v48;
    *((_DWORD *)v39 + 3) = v49;
    v50 = (const char *)v161[1];
    v51 = (const char *)v161[2];
    v52 = (const char *)v161[3];
    *v43 = (const char *)v161[0];
    v43[1] = v50;
    v43[2] = v51;
    v43[3] = v52;
    v43 += 4;
    v53 = (const char *)v161[5];
    v54 = (const char *)v161[6];
    v55 = (const char *)v161[7];
    *v43 = (const char *)v161[4];
    v43[1] = v53;
    v43[2] = v54;
    v43[3] = v55;
    v56 = logfmt_raw((int)v182, 0x1000u);
    V_UNLOCK(v56);
    v10 = (int *)zlog(*v129, v112, 196, "check_temperature", 17, 94, 40, v182);
  }
  while ( v9 != v128 );
  free(ptr);
  if ( v122 != v132 || v122 != v121 )
    goto LABEL_64;
LABEL_33:
  v66 = *(_DWORD *)(a1 + 220);
  if ( v122 )
  {
    v67 = v66;
    v68 = v125;
    v120[5] = v126;
    dword_184F80[v66] = v68;
    dword_184F80[v66 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v67 = v66;
  v83 = (char *)&dword_184F80[v66];
  v84 = *((_DWORD *)v83 + 16) + 1;
  v72 = *((_DWORD *)v83 + 16) - 1 < 0;
  *((_DWORD *)v83 + 16) = v84;
  if ( !(v72 ^ __OFSUB__(v84, 2) | (v84 == 2)) )
  {
    V_LOCK(v83);
    V_INT((int)v136, "chain");
    v85 = *(_DWORD *)(a1 + 220);
    v102 = "read no sensor pcb temp exceed limit! (%d)";
    v103 = dword_184F80[v85 + 16];
    v86 = logfmt_raw((int)v182, 0x1000u);
    V_UNLOCK(v86);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      196,
      "update_temperature",
      18,
      335,
      120,
      v182);
    v66 = *(_DWORD *)(a1 + 220);
    v67 = v66;
    *(_DWORD *)(v135 + 16) |= 8u;
  }
LABEL_35:
  if ( v121 )
  {
    v69 = v120;
    v70 = v124;
    dword_184F80[v67 + 32] = 0;
    v69[4] = v70;
  }
  else
  {
    v96 = dword_184F80[v67 + 32] + 1;
    v72 = dword_184F80[v67 + 32] - 1 < 0;
    dword_184F80[v67 + 32] = v96;
    if ( !(v72 ^ __OFSUB__(v96, 2) | (v96 == 2)) )
    {
      V_LOCK(&dword_184F80[v67]);
      V_INT((int)v137, "chain");
      v97 = *(_DWORD *)(a1 + 220);
      v102 = "read no sensor chip temp exceed limit! (%d)";
      v103 = dword_184F80[v97 + 32];
      v98 = logfmt_raw((int)v182, 0x1000u);
      V_UNLOCK(v98);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        196,
        "update_temperature",
        18,
        352,
        120,
        v182);
      v66 = *(_DWORD *)(a1 + 220);
      v67 = v66;
      *(_DWORD *)(v135 + 16) |= 8u;
    }
  }
  if ( *(_DWORD *)(a1 + 380) >= v123 )
  {
    dword_184F80[v67 + 48] = 0;
  }
  else
  {
    v71 = dword_184F80[v67 + 48] + 1;
    v72 = dword_184F80[v67 + 48] - 1 < 0;
    dword_184F80[v67 + 48] = v71;
    if ( !(v72 ^ __OFSUB__(v71, 2) | (v71 == 2)) )
    {
      V_LOCK(&dword_184F80[v67]);
      V_INT((int)v138, "chain");
      v99 = (char *)&dword_184F80[*(_DWORD *)(a1 + 220)];
      v104 = v123;
      v100 = *((_DWORD *)v99 + 48);
      v102 = "uneffective temp exceed limit (%d), uneffective_value_count = %d!";
      v103 = v100;
      v101 = logfmt_raw((int)v182, 0x1000u);
      V_UNLOCK(v101);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        196,
        "update_temperature",
        18,
        363,
        120,
        v182);
      v66 = *(_DWORD *)(a1 + 220);
      *(_DWORD *)(v135 + 16) |= 0x10u;
      v67 = v66;
    }
  }
  v73 = v120[4];
  if ( v73 > *(_DWORD *)(a1 + 368) || dword_184F80[v66] > *(_DWORD *)(a1 + 372) )
  {
    v87 = dword_184F80[v67 + 64] + 1;
    v72 = dword_184F80[v67 + 64] - 1 < 0;
    dword_184F80[v67 + 64] = v87;
    if ( !(v72 ^ __OFSUB__(v87, 2) | (v87 == 2)) )
    {
      V_LOCK(v73);
      V_INT((int)v139, "chain");
      v88 = &dword_184F80[*(_DWORD *)(a1 + 220)];
      v89 = *v88;
      v102 = "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!";
      v90 = v88[64];
      v105 = v89;
      v91 = v120[4];
      v103 = v90;
      v104 = v91;
      v92 = logfmt_raw((int)v182, 0x1000u);
      V_UNLOCK(v92);
      v93 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              196,
              "update_temperature",
              18,
              378,
              120,
              v182);
      V_LOCK(v93);
      v94 = logfmt_raw((int)v182, 0x1000u);
      V_UNLOCK(v94);
      v73 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              196,
              "update_temperature",
              18,
              379,
              100,
              v182);
      v95 = *(_DWORD *)(a1 + 220);
      *(_DWORD *)(v135 + 16) |= 2u;
      v67 = v95;
    }
  }
  else
  {
    dword_184F80[v67 + 64] = 0;
  }
  if ( v120[5] <= *(_DWORD *)(a1 + 376) )
  {
    v74 = (char *)&dword_184F80[v67];
    v75 = *((_DWORD *)v74 + 80) + 1;
    v72 = *((_DWORD *)v74 + 80) - 1 < 0;
    *((_DWORD *)v74 + 80) = v75;
    if ( !(v72 ^ __OFSUB__(v75, 2) | (v75 == 2)) )
    {
      V_LOCK(v73);
      V_INT((int)v140, "chain");
      v76 = (char *)&dword_184F80[*(_DWORD *)(a1 + 220)];
      v77 = v120[5];
      v78 = *((_DWORD *)v76 + 80);
      v102 = "low temp exceed limit (%d), min_pcb_temp = %d!";
      v104 = v77;
      v103 = v78;
      v79 = logfmt_raw((int)v182, 0x1000u);
      V_UNLOCK(v79);
      v80 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godm"
              "iner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              196,
              "update_temperature",
              18,
              394,
              120,
              v182);
      V_LOCK(v80);
      v81 = logfmt_raw((int)v182, 0x1000u);
      V_UNLOCK(v81);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        196,
        "update_temperature",
        18,
        395,
        100,
        v182);
      *(_DWORD *)(v135 + 16) |= 4u;
    }
    return v131;
  }
  result = v131;
  dword_184F80[v67 + 80] = 0;
  return result;
}
