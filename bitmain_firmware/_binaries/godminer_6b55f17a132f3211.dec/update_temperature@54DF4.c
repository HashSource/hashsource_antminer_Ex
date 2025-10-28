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
  int v66; // r0
  int v67; // r2
  int v68; // r3
  int v69; // r12
  _DWORD *v70; // r12
  int v71; // lr
  int v72; // r1
  bool v73; // nf
  int v74; // r0
  char *v75; // r3
  int v76; // r2
  char *v77; // r4
  int v78; // r7
  int v79; // r8
  int v80; // r0
  int v81; // r0
  int v82; // r0
  int result; // r0
  char *v84; // r0
  int v85; // r1
  int v86; // r6
  int v87; // r0
  int v88; // r2
  int *v89; // r8
  unsigned int v90; // r9
  int v91; // r8
  int v92; // r9
  int v93; // r0
  int v94; // r0
  int v95; // r0
  int v96; // r2
  int v97; // r1
  int v98; // lr
  int v99; // r0
  int v100; // r0
  int *v101; // r5
  int v102; // r0
  int v103; // r0
  char *v104; // r6
  int v105; // r6
  int v106; // r0
  const char *v107; // [sp+20h] [bp-1334h] BYREF
  int v108; // [sp+24h] [bp-1330h]
  int v109; // [sp+28h] [bp-132Ch]
  unsigned int v110; // [sp+2Ch] [bp-1328h]
  char v111; // [sp+40h] [bp-1314h] BYREF
  char v112; // [sp+60h] [bp-12F4h] BYREF
  char *v113; // [sp+80h] [bp-12D4h]
  const char *v114; // [sp+84h] [bp-12D0h]
  int v115; // [sp+88h] [bp-12CCh]
  char *s; // [sp+8Ch] [bp-12C8h]
  const char *v117; // [sp+90h] [bp-12C4h]
  int *v118; // [sp+94h] [bp-12C0h]
  char *v119; // [sp+98h] [bp-12BCh]
  const char *v120; // [sp+9Ch] [bp-12B8h]
  char *v121; // [sp+A0h] [bp-12B4h]
  const char **v122; // [sp+A4h] [bp-12B0h]
  char *v123; // [sp+A8h] [bp-12ACh]
  char *v124; // [sp+ACh] [bp-12A8h]
  _DWORD *v125; // [sp+B0h] [bp-12A4h]
  int v126; // [sp+B4h] [bp-12A0h]
  int v127; // [sp+B8h] [bp-129Ch]
  unsigned int v128; // [sp+BCh] [bp-1298h]
  int v129; // [sp+C0h] [bp-1294h]
  int v130; // [sp+C4h] [bp-1290h]
  int v131; // [sp+C8h] [bp-128Ch]
  int v132; // [sp+CCh] [bp-1288h]
  int *v133; // [sp+D0h] [bp-1284h]
  int *v134; // [sp+D4h] [bp-1280h]
  const char *v135; // [sp+D8h] [bp-127Ch]
  int v136; // [sp+DCh] [bp-1278h]
  signed int v137; // [sp+E0h] [bp-1274h]
  void *ptr; // [sp+E4h] [bp-1270h]
  int v139; // [sp+E8h] [bp-126Ch]
  int v140; // [sp+ECh] [bp-1268h]
  int v141; // [sp+F0h] [bp-1264h] BYREF
  char v142[32]; // [sp+110h] [bp-1244h] BYREF
  char v143[32]; // [sp+130h] [bp-1224h] BYREF
  char v144[32]; // [sp+150h] [bp-1204h] BYREF
  char v145[32]; // [sp+170h] [bp-11E4h] BYREF
  char v146[32]; // [sp+190h] [bp-11C4h] BYREF
  _DWORD v147[8]; // [sp+1B0h] [bp-11A4h] BYREF
  _DWORD v148[8]; // [sp+1D0h] [bp-1184h] BYREF
  _DWORD v149[8]; // [sp+1F0h] [bp-1164h] BYREF
  _DWORD v150[8]; // [sp+210h] [bp-1144h] BYREF
  int v151; // [sp+230h] [bp-1124h] BYREF
  int v152; // [sp+234h] [bp-1120h]
  int v153; // [sp+238h] [bp-111Ch]
  int v154; // [sp+23Ch] [bp-1118h]
  int v155; // [sp+240h] [bp-1114h]
  int v156; // [sp+244h] [bp-1110h]
  int v157; // [sp+248h] [bp-110Ch]
  int v158; // [sp+24Ch] [bp-1108h]
  int v159; // [sp+250h] [bp-1104h] BYREF
  int v160; // [sp+254h] [bp-1100h]
  int v161; // [sp+258h] [bp-10FCh]
  int v162; // [sp+25Ch] [bp-10F8h]
  int v163; // [sp+260h] [bp-10F4h]
  int v164; // [sp+264h] [bp-10F0h]
  int v165; // [sp+268h] [bp-10ECh]
  int v166; // [sp+26Ch] [bp-10E8h]
  _DWORD v167[8]; // [sp+270h] [bp-10E4h] BYREF
  char v168[32]; // [sp+290h] [bp-10C4h] BYREF
  int v169; // [sp+2B0h] [bp-10A4h] BYREF
  int v170; // [sp+2B4h] [bp-10A0h]
  int v171; // [sp+2B8h] [bp-109Ch]
  int v172; // [sp+2BCh] [bp-1098h]
  int v173; // [sp+2C0h] [bp-1094h]
  int v174; // [sp+2C4h] [bp-1090h]
  int v175; // [sp+2C8h] [bp-108Ch]
  int v176; // [sp+2CCh] [bp-1088h]
  int v177; // [sp+2D0h] [bp-1084h] BYREF
  int v178; // [sp+2D4h] [bp-1080h]
  int v179; // [sp+2D8h] [bp-107Ch]
  int v180; // [sp+2DCh] [bp-1078h]
  int v181; // [sp+2E0h] [bp-1074h]
  int v182; // [sp+2E4h] [bp-1070h]
  int v183; // [sp+2E8h] [bp-106Ch]
  int v184; // [sp+2ECh] [bp-1068h]
  _DWORD v185[8]; // [sp+2F0h] [bp-1064h] BYREF
  char v186[32]; // [sp+310h] [bp-1044h] BYREF
  int v187; // [sp+330h] [bp-1024h] BYREF
  _BYTE v188[4100]; // [sp+350h] [bp-1004h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 218);
  v136 = a3 + 16;
  if ( !v3 )
    return v136;
  v4 = *(_DWORD *)(a1 + 352);
  v125 = a2;
  v6 = *(_DWORD *)(a1 + 344);
  v140 = a3;
  v137 = v4;
  v7 = calloc(v4, 8u);
  v8 = *(void (__fastcall **)(int, void *))(a1 + 196);
  ptr = v7;
  v8(a1, v7);
  if ( v4 <= 0 )
  {
    free(ptr);
    if ( !v137 )
    {
      v67 = *(_DWORD *)(a1 + 208);
      v128 = 0;
      v126 = 0;
      v129 = -150;
      goto LABEL_59;
    }
    v127 = 0;
    v126 = 0;
    v128 = 0;
    v129 = -150;
    v131 = -150;
    v118 = &g_zc;
    v130 = 150;
LABEL_68:
    V_LOCK(v66);
    V_INT((int)&v141, "chain");
    v110 = v128;
    v107 = "read temp error! pcb temp count %d chip temp count %d uneffective value count %d";
    v109 = v126;
    v108 = v127;
    v100 = logfmt_raw((int)v188, 0x1000u);
    V_UNLOCK(v100);
    v101 = v118;
    v102 = zlog(
             *v118,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
             192,
             "update_temperature",
             18,
             266,
             120,
             v188);
    V_LOCK(v102);
    v103 = logfmt_raw((int)v188, 0x1000u);
    V_UNLOCK(v103);
    zlog(
      *v101,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      192,
      "update_temperature",
      18,
      267,
      100,
      v188);
    *(_DWORD *)(v140 + 16) |= 1u;
    goto LABEL_33;
  }
  v9 = (int *)ptr;
  v120 = "check_temperature";
  v128 = 0;
  v126 = 0;
  v127 = 0;
  v139 = 0;
  v10 = &g_zc;
  v131 = -150;
  v132 = 0;
  v130 = 150;
  v121 = &v112;
  v119 = &v111;
  v133 = (int *)((char *)ptr + 8 * v137);
  v11 = v6;
  v129 = -150;
  v135 = "check_temperature, local:%d, remote:%d";
  v118 = &g_zc;
  v123 = "%s";
  v134 = &g_temp_zc;
  s = "chain";
  v117 = "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c";
  v124 = "sensor";
  v122 = &v107;
  do
  {
    V_LOCK(v10);
    V_INT((int)&v187, s);
    v57 = *v9;
    v109 = v9[1];
    v108 = v57;
    v107 = v135;
    v58 = logfmt_raw((int)v188, 0x1000u);
    V_UNLOCK(v58);
    v59 = zlog(*v118, v117, 192, "check_temperature", 17, 34, 20, v188);
    v60 = *v9;
    if ( *v9 == -64 )
    {
      v62 = 0;
      ++v128;
    }
    else
    {
      v61 = v131;
      v62 = 1;
      if ( v131 < v60 )
        v61 = *v9;
      v131 = v61;
      v63 = v130;
      ++v127;
      if ( v130 >= v60 )
        v63 = v60;
      v130 = v63;
    }
    v64 = v9[1];
    if ( v64 == -64 )
    {
      ++v128;
      v115 = 0;
    }
    else
    {
      if ( v129 >= v64 )
        v64 = v129;
      v59 = v126 + 1;
      v129 = v64;
      ++v126;
      v115 = 1;
    }
    if ( v125 )
    {
      v65 = *(_DWORD *)(v11 + 12);
      if ( v65 )
      {
        if ( v65 == 1 )
        {
          if ( v62 )
            *(_DWORD *)(v125[2] + 4 * v139) = v60;
          if ( v115 )
            *(_DWORD *)(v125[3] + 4 * v139) = v9[1];
          ++v139;
        }
      }
      else
      {
        if ( v62 )
          *(_DWORD *)(*v125 + 4 * v132) = v60;
        if ( v115 )
          *(_DWORD *)(v125[1] + 4 * v132) = v9[1];
        ++v132;
      }
    }
    V_LOCK(v59);
    V_INT((int)v186, s);
    V_INT((int)v185, v124);
    if ( v62 )
    {
      V_INT((int)&v177, "pcbtemp");
      if ( v115 )
        goto LABEL_5;
    }
    else
    {
      V_INT((int)v150, "pcbtemp");
      v177 = v150[0];
      v178 = v150[1];
      v179 = v150[2];
      v180 = v150[3];
      v181 = v150[4];
      v182 = v150[5];
      v183 = v150[6];
      v184 = v150[7];
      if ( v115 )
      {
LABEL_5:
        V_INT((int)&v169, "chiptemp");
        goto LABEL_6;
      }
    }
    V_INT((int)v149, "chiptemp");
    v169 = v149[0];
    v170 = v149[1];
    v171 = v149[2];
    v172 = v149[3];
    v173 = v149[4];
    v174 = v149[5];
    v175 = v149[6];
    v176 = v149[7];
LABEL_6:
    v12 = v170;
    v13 = v171;
    v14 = v172;
    v114 = v120;
    v15 = v121;
    v113 = v123;
    *(_DWORD *)v121 = v169;
    *((_DWORD *)v15 + 1) = v12;
    *((_DWORD *)v15 + 2) = v13;
    *((_DWORD *)v15 + 3) = v14;
    v15 += 16;
    v16 = v119;
    v17 = v174;
    v18 = v175;
    v19 = v176;
    v20 = v122;
    *(_DWORD *)v15 = v173;
    *((_DWORD *)v15 + 1) = v17;
    *((_DWORD *)v15 + 2) = v18;
    *((_DWORD *)v15 + 3) = v19;
    v21 = v178;
    v22 = v179;
    v23 = v180;
    *(_DWORD *)v16 = v177;
    *((_DWORD *)v16 + 1) = v21;
    *((_DWORD *)v16 + 2) = v22;
    *((_DWORD *)v16 + 3) = v23;
    v16 += 16;
    v24 = v182;
    v25 = v183;
    v26 = v184;
    *(_DWORD *)v16 = v181;
    *((_DWORD *)v16 + 1) = v24;
    *((_DWORD *)v16 + 2) = v25;
    *((_DWORD *)v16 + 3) = v26;
    v27 = (const char *)v185[1];
    v28 = (const char *)v185[2];
    v29 = (const char *)v185[3];
    *v20 = (const char *)v185[0];
    v20[1] = v27;
    v20[2] = v28;
    v20[3] = v29;
    v20 += 4;
    v30 = (const char *)v185[5];
    v31 = (const char *)v185[6];
    v32 = (const char *)v185[7];
    *v20 = (const char *)v185[4];
    v20[1] = v30;
    v20[2] = v31;
    v20[3] = v32;
    v33 = logfmt_raw((int)v188, 0x1000u);
    V_UNLOCK(v33);
    v34 = zlog(*v118, v117, 192, "check_temperature", 17, 76, 20, v188);
    V_LOCK(v34);
    V_INT((int)v168, s);
    V_INT((int)v167, v124);
    if ( v62 )
    {
      V_INT((int)&v159, "pcbtemp");
    }
    else
    {
      V_INT((int)v148, "pcbtemp");
      v159 = v148[0];
      v160 = v148[1];
      v161 = v148[2];
      v162 = v148[3];
      v163 = v148[4];
      v164 = v148[5];
      v165 = v148[6];
      v166 = v148[7];
    }
    if ( v115 )
    {
      V_INT((int)&v151, "chiptemp");
    }
    else
    {
      V_INT((int)v147, "chiptemp");
      v151 = v147[0];
      v152 = v147[1];
      v153 = v147[2];
      v154 = v147[3];
      v155 = v147[4];
      v156 = v147[5];
      v157 = v147[6];
      v158 = v147[7];
    }
    v35 = v152;
    v36 = v153;
    v37 = v154;
    v9 += 2;
    v11 += 24;
    v114 = v120;
    v38 = v121;
    v113 = v123;
    *(_DWORD *)v121 = v151;
    *((_DWORD *)v38 + 1) = v35;
    *((_DWORD *)v38 + 2) = v36;
    *((_DWORD *)v38 + 3) = v37;
    v38 += 16;
    v39 = v119;
    v40 = v156;
    v41 = v157;
    v42 = v158;
    v43 = v122;
    *(_DWORD *)v38 = v155;
    *((_DWORD *)v38 + 1) = v40;
    *((_DWORD *)v38 + 2) = v41;
    *((_DWORD *)v38 + 3) = v42;
    v44 = v160;
    v45 = v161;
    v46 = v162;
    *(_DWORD *)v39 = v159;
    *((_DWORD *)v39 + 1) = v44;
    *((_DWORD *)v39 + 2) = v45;
    *((_DWORD *)v39 + 3) = v46;
    v39 += 16;
    v47 = v164;
    v48 = v165;
    v49 = v166;
    *(_DWORD *)v39 = v163;
    *((_DWORD *)v39 + 1) = v47;
    *((_DWORD *)v39 + 2) = v48;
    *((_DWORD *)v39 + 3) = v49;
    v50 = (const char *)v167[1];
    v51 = (const char *)v167[2];
    v52 = (const char *)v167[3];
    *v43 = (const char *)v167[0];
    v43[1] = v50;
    v43[2] = v51;
    v43[3] = v52;
    v43 += 4;
    v53 = (const char *)v167[5];
    v54 = (const char *)v167[6];
    v55 = (const char *)v167[7];
    *v43 = (const char *)v167[4];
    v43[1] = v53;
    v43[2] = v54;
    v43[3] = v55;
    v56 = logfmt_raw((int)v188, 0x1000u);
    V_UNLOCK(v56);
    v10 = (int *)zlog(*v134, v117, 192, "check_temperature", 17, 78, 40, v188);
  }
  while ( v133 != v9 );
  free(ptr);
  if ( v127 != v137 || v127 != v126 )
    goto LABEL_68;
LABEL_33:
  v67 = *(_DWORD *)(a1 + 208);
  if ( v127 )
  {
    v68 = v67;
    v69 = v131;
    v125[5] = v130;
    dword_176C30[v67] = v69;
    dword_176C30[v67 + 16] = 0;
    goto LABEL_35;
  }
LABEL_59:
  v68 = v67;
  v84 = (char *)&dword_176C30[v67];
  v85 = *((_DWORD *)v84 + 16) + 1;
  v73 = *((_DWORD *)v84 + 16) - 1 < 0;
  *((_DWORD *)v84 + 16) = v85;
  if ( !(v73 ^ __OFSUB__(v85, 2) | (v85 == 2)) )
  {
    V_LOCK(v84);
    V_INT((int)v142, "chain");
    v86 = *(_DWORD *)(a1 + 208);
    v107 = "read no sensor pcb temp exceed limit! (%d)";
    v108 = dword_176C30[v86 + 16];
    v87 = logfmt_raw((int)v188, 0x1000u);
    V_UNLOCK(v87);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
      192,
      "update_temperature",
      18,
      279,
      120,
      v188);
    v67 = *(_DWORD *)(a1 + 208);
    v68 = v67;
    *(_DWORD *)(v140 + 16) |= 8u;
  }
LABEL_35:
  if ( v126 )
  {
    v70 = v125;
    v71 = v129;
    dword_176C30[v68 + 32] = 0;
    v70[4] = v71;
  }
  else
  {
    v97 = dword_176C30[v68 + 32] + 1;
    v73 = dword_176C30[v68 + 32] - 1 < 0;
    dword_176C30[v68 + 32] = v97;
    if ( !(v73 ^ __OFSUB__(v97, 2) | (v97 == 2)) )
    {
      V_LOCK(&dword_176C30[v68]);
      V_INT((int)v143, "chain");
      v98 = *(_DWORD *)(a1 + 208);
      v107 = "read no sensor chip temp exceed limit! (%d)";
      v108 = dword_176C30[v98 + 32];
      v99 = logfmt_raw((int)v188, 0x1000u);
      V_UNLOCK(v99);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        192,
        "update_temperature",
        18,
        292,
        120,
        v188);
      v67 = *(_DWORD *)(a1 + 208);
      v68 = v67;
      *(_DWORD *)(v140 + 16) |= 8u;
    }
  }
  if ( *(_DWORD *)(a1 + 368) >= v128 )
  {
    dword_176C30[v68 + 48] = 0;
  }
  else
  {
    v72 = dword_176C30[v68 + 48] + 1;
    v73 = dword_176C30[v68 + 48] - 1 < 0;
    dword_176C30[v68 + 48] = v72;
    if ( !(v73 ^ __OFSUB__(v72, 2) | (v72 == 2)) )
    {
      V_LOCK(&dword_176C30[v68]);
      V_INT((int)v144, "chain");
      v104 = (char *)&dword_176C30[*(_DWORD *)(a1 + 208)];
      v109 = v128;
      v105 = *((_DWORD *)v104 + 48);
      v107 = "uneffective temp exceed limit (%d), uneffective_value_count = %d!";
      v108 = v105;
      v106 = logfmt_raw((int)v188, 0x1000u);
      V_UNLOCK(v106);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        192,
        "update_temperature",
        18,
        301,
        120,
        v188);
      v67 = *(_DWORD *)(a1 + 208);
      *(_DWORD *)(v140 + 16) |= 0x10u;
      v68 = v67;
    }
  }
  v74 = v125[4];
  if ( v74 > *(_DWORD *)(a1 + 356) || dword_176C30[v67] > *(_DWORD *)(a1 + 360) )
  {
    v88 = dword_176C30[v68 + 64] + 1;
    v73 = dword_176C30[v68 + 64] - 1 < 0;
    dword_176C30[v68 + 64] = v88;
    if ( !(v73 ^ __OFSUB__(v88, 2) | (v88 == 2)) )
    {
      V_LOCK(v74);
      V_INT((int)v145, "chain");
      v89 = &dword_176C30[*(_DWORD *)(a1 + 208)];
      v90 = *v89;
      v107 = "high temp exceed limit (%d), max_chip_temp = %d, max_pcb_temp = %d!";
      v91 = v89[64];
      v110 = v90;
      v92 = v125[4];
      v108 = v91;
      v109 = v92;
      v93 = logfmt_raw((int)v188, 0x1000u);
      V_UNLOCK(v93);
      v94 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              192,
              "update_temperature",
              18,
              312,
              120,
              v188);
      V_LOCK(v94);
      v95 = logfmt_raw((int)v188, 0x1000u);
      V_UNLOCK(v95);
      v74 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              192,
              "update_temperature",
              18,
              313,
              100,
              v188);
      v96 = *(_DWORD *)(a1 + 208);
      *(_DWORD *)(v140 + 16) |= 2u;
      v68 = v96;
    }
  }
  else
  {
    dword_176C30[v68 + 64] = 0;
  }
  if ( v125[5] <= *(_DWORD *)(a1 + 364) )
  {
    v75 = (char *)&dword_176C30[v68];
    v76 = *((_DWORD *)v75 + 80) + 1;
    v73 = *((_DWORD *)v75 + 80) - 1 < 0;
    *((_DWORD *)v75 + 80) = v76;
    if ( !(v73 ^ __OFSUB__(v76, 2) | (v76 == 2)) )
    {
      V_LOCK(v74);
      V_INT((int)v146, "chain");
      v77 = (char *)&dword_176C30[*(_DWORD *)(a1 + 208)];
      v78 = v125[5];
      v79 = *((_DWORD *)v77 + 80);
      v107 = "low temp exceed limit (%d), min_pcb_temp = %d!";
      v109 = v78;
      v108 = v79;
      v80 = logfmt_raw((int)v188, 0x1000u);
      V_UNLOCK(v80);
      v81 = zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
              192,
              "update_temperature",
              18,
              324,
              120,
              v188);
      V_LOCK(v81);
      v82 = logfmt_raw((int)v188, 0x1000u);
      V_UNLOCK(v82);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c",
        192,
        "update_temperature",
        18,
        325,
        100,
        v188);
      *(_DWORD *)(v140 + 16) |= 4u;
    }
    return v136;
  }
  result = v136;
  dword_176C30[v68 + 80] = 0;
  return result;
}
