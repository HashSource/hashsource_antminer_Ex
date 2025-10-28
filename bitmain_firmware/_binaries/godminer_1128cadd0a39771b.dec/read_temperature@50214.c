int __fastcall read_temperature(
        int a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int *v9; // r4
  void (*v13)(void); // r2
  int v14; // r0
  int v15; // r7
  int v16; // r1
  int v17; // r2
  int v18; // r3
  char *v19; // lr
  char *v20; // r10
  int v21; // r1
  int v22; // r2
  int v23; // r3
  char *v24; // r5
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r3
  char *v42; // lr
  char *v43; // r9
  int v44; // r1
  int v45; // r2
  int v46; // r3
  char *v47; // r5
  int v48; // r1
  int v49; // r2
  int v50; // r3
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r0
  void (__fastcall *v61)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int); // r12
  int v62; // r9
  _DWORD *v63; // r8
  int v64; // r3
  int v65; // r0
  int v66; // r1
  int v67; // r2
  int v68; // r3
  int v69; // r0
  int v70; // r3
  int v71; // r2
  int v72; // r2
  int result; // r0
  int v74; // [sp+10h] [bp-124Ch]
  int v75; // [sp+14h] [bp-1248h]
  int v76; // [sp+18h] [bp-1244h]
  int v77; // [sp+1Ch] [bp-1240h]
  char v78; // [sp+20h] [bp-123Ch] BYREF
  char v79; // [sp+40h] [bp-121Ch] BYREF
  char v80; // [sp+60h] [bp-11FCh] BYREF
  char *v81; // [sp+80h] [bp-11DCh]
  const char *v82; // [sp+84h] [bp-11D8h]
  int *v83; // [sp+88h] [bp-11D4h]
  char *v84; // [sp+8Ch] [bp-11D0h]
  char *v85; // [sp+90h] [bp-11CCh]
  char *v86; // [sp+94h] [bp-11C8h]
  char *v87; // [sp+98h] [bp-11C4h]
  char *v88; // [sp+9Ch] [bp-11C0h]
  char *v89; // [sp+A0h] [bp-11BCh]
  char *s; // [sp+A4h] [bp-11B8h]
  const char *v91; // [sp+A8h] [bp-11B4h]
  _DWORD *v92; // [sp+ACh] [bp-11B0h]
  int *v93; // [sp+B0h] [bp-11ACh]
  int *v94; // [sp+B4h] [bp-11A8h]
  int v95; // [sp+B8h] [bp-11A4h]
  _DWORD *v96; // [sp+BCh] [bp-11A0h]
  _DWORD *v97; // [sp+C0h] [bp-119Ch]
  int v98; // [sp+C4h] [bp-1198h]
  int v99; // [sp+C8h] [bp-1194h] BYREF
  int v100; // [sp+CCh] [bp-1190h] BYREF
  int v101; // [sp+D0h] [bp-118Ch] BYREF
  int v102; // [sp+D4h] [bp-1188h] BYREF
  _BYTE v103[32]; // [sp+D8h] [bp-1184h] BYREF
  _DWORD v104[8]; // [sp+F8h] [bp-1164h] BYREF
  int v105; // [sp+118h] [bp-1144h] BYREF
  int v106; // [sp+11Ch] [bp-1140h]
  int v107; // [sp+120h] [bp-113Ch]
  int v108; // [sp+124h] [bp-1138h]
  int v109; // [sp+128h] [bp-1134h]
  int v110; // [sp+12Ch] [bp-1130h]
  int v111; // [sp+130h] [bp-112Ch]
  int v112; // [sp+134h] [bp-1128h]
  int v113; // [sp+138h] [bp-1124h] BYREF
  int v114; // [sp+13Ch] [bp-1120h]
  int v115; // [sp+140h] [bp-111Ch]
  int v116; // [sp+144h] [bp-1118h]
  int v117; // [sp+148h] [bp-1114h]
  int v118; // [sp+14Ch] [bp-1110h]
  int v119; // [sp+150h] [bp-110Ch]
  int v120; // [sp+154h] [bp-1108h]
  _BYTE v121[16]; // [sp+158h] [bp-1104h] BYREF
  int v122; // [sp+168h] [bp-10F4h]
  int v123; // [sp+16Ch] [bp-10F0h]
  int v124; // [sp+170h] [bp-10ECh]
  int v125; // [sp+174h] [bp-10E8h]
  _DWORD v126[8]; // [sp+178h] [bp-10E4h] BYREF
  int v127; // [sp+198h] [bp-10C4h] BYREF
  int v128; // [sp+19Ch] [bp-10C0h]
  int v129; // [sp+1A0h] [bp-10BCh]
  int v130; // [sp+1A4h] [bp-10B8h]
  int v131; // [sp+1A8h] [bp-10B4h]
  int v132; // [sp+1ACh] [bp-10B0h]
  int v133; // [sp+1B0h] [bp-10ACh]
  int v134; // [sp+1B4h] [bp-10A8h]
  int v135; // [sp+1B8h] [bp-10A4h] BYREF
  int v136; // [sp+1BCh] [bp-10A0h]
  int v137; // [sp+1C0h] [bp-109Ch]
  int v138; // [sp+1C4h] [bp-1098h]
  int v139; // [sp+1C8h] [bp-1094h]
  int v140; // [sp+1CCh] [bp-1090h]
  int v141; // [sp+1D0h] [bp-108Ch]
  int v142; // [sp+1D4h] [bp-1088h]
  _DWORD v143[8]; // [sp+1D8h] [bp-1084h] BYREF
  _DWORD v144[8]; // [sp+1F8h] [bp-1064h] BYREF
  _DWORD v145[8]; // [sp+218h] [bp-1044h] BYREF
  _DWORD v146[8]; // [sp+238h] [bp-1024h] BYREF
  _BYTE v147[4100]; // [sp+258h] [bp-1004h] BYREF

  v9 = *(int **)(a1 + 220);
  v96 = a3;
  v13 = *(void (**)(void))(a1 + 96);
  v92 = a2;
  v97 = a4;
  v83 = v9;
  v13();
  *a3 = -150;
  *a4 = 150;
  *a5 = -150;
  *a6 = 150;
  v14 = v9[1];
  if ( v14 > 0 )
  {
    v85 = "%s";
    v87 = &v80;
    v15 = 0;
    v86 = &v79;
    v91 = "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/miner_util/miner_monitor/update_miner_status/update_temperature.c";
    v98 = 0;
    v95 = 0;
    v93 = &g_zc;
    v94 = &g_temp_zc;
    v88 = "chain";
    v89 = "sensor";
    s = "pcbtemp";
    v84 = &v78;
    do
    {
      v61 = *(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int))(a1 + 100);
      v62 = *v83;
      v101 = 0;
      v63 = (_DWORD *)(v62 + 20 * v15);
      v61(a1, &v99, &v101, *v63, v63[1], v63[2], v63[3], v63[4], v74, v75, v76, v77);
      if ( v101 )
      {
        v64 = v99;
        if ( v99 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a7;
          if ( v64 > *v96 )
            *v96 = v64;
          if ( v64 < *v97 )
            *v97 = v64;
        }
      }
      v65 = v63[1];
      v66 = v63[2];
      v67 = v63[3];
      v68 = v63[4];
      v102 = 0;
      v69 = (*(int (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int))(a1 + 104))(
              a1,
              &v100,
              &v102,
              *(_DWORD *)(v62 + 20 * v15),
              v65,
              v66,
              v67,
              v68);
      v70 = v102;
      if ( v102 )
      {
        v71 = v100;
        if ( v100 == -64 )
        {
          ++*a9;
        }
        else
        {
          v69 = (int)a8;
          ++*a8;
          if ( v71 > *a5 )
            *a5 = v71;
          if ( v71 < *a6 )
            *a6 = v71;
        }
      }
      if ( v92 )
      {
        v72 = v63[2];
        if ( v72 )
        {
          if ( v72 == 1 )
          {
            if ( v101 && v99 != -64 )
            {
              *(_DWORD *)(v92[2] + 4 * v98) = v99;
              v70 = v102;
            }
            if ( v70 && v100 != -64 )
              *(_DWORD *)(v92[3] + 4 * v98) = v100;
            ++v98;
          }
        }
        else
        {
          if ( v101 && v99 != -64 )
          {
            *(_DWORD *)(*v92 + 4 * v95) = v99;
            v70 = v102;
          }
          if ( v70 && v100 != -64 )
            *(_DWORD *)(v92[1] + 4 * v95) = v100;
          ++v95;
        }
      }
      V_LOCK(v69);
      V_INT((int)v103, v88);
      V_INT((int)v104, v89);
      if ( v101 )
      {
        V_INT((int)&v105, s);
        if ( !v102 )
          goto LABEL_33;
      }
      else
      {
        V_INT((int)v143, s);
        v105 = v143[0];
        v106 = v143[1];
        v107 = v143[2];
        v108 = v143[3];
        v109 = v143[4];
        v110 = v143[5];
        v111 = v143[6];
        v112 = v143[7];
        if ( !v102 )
        {
LABEL_33:
          V_INT((int)v144, "chiptemp");
          v113 = v144[0];
          v114 = v144[1];
          v115 = v144[2];
          v116 = v144[3];
          v117 = v144[4];
          v118 = v144[5];
          v119 = v144[6];
          v120 = v144[7];
          goto LABEL_5;
        }
      }
      V_INT((int)&v113, "chiptemp");
LABEL_5:
      v16 = v114;
      v17 = v115;
      v18 = v116;
      v19 = v87;
      v81 = v85;
      v82 = "read_temperature";
      *(_DWORD *)v87 = v113;
      *((_DWORD *)v19 + 1) = v16;
      *((_DWORD *)v19 + 2) = v17;
      *((_DWORD *)v19 + 3) = v18;
      v19 += 16;
      v20 = v86;
      v21 = v118;
      v22 = v119;
      v23 = v120;
      v24 = v84;
      *(_DWORD *)v19 = v117;
      *((_DWORD *)v19 + 1) = v21;
      *((_DWORD *)v19 + 2) = v22;
      *((_DWORD *)v19 + 3) = v23;
      v25 = v106;
      v26 = v107;
      v27 = v108;
      *(_DWORD *)v20 = v105;
      *((_DWORD *)v20 + 1) = v25;
      *((_DWORD *)v20 + 2) = v26;
      *((_DWORD *)v20 + 3) = v27;
      v20 += 16;
      v28 = v110;
      v29 = v111;
      v30 = v112;
      *(_DWORD *)v20 = v109;
      *((_DWORD *)v20 + 1) = v28;
      *((_DWORD *)v20 + 2) = v29;
      *((_DWORD *)v20 + 3) = v30;
      v31 = v104[1];
      v32 = v104[2];
      v33 = v104[3];
      *(_DWORD *)v24 = v104[0];
      *((_DWORD *)v24 + 1) = v31;
      *((_DWORD *)v24 + 2) = v32;
      *((_DWORD *)v24 + 3) = v33;
      v24 += 16;
      v34 = v104[5];
      v35 = v104[6];
      v36 = v104[7];
      *(_DWORD *)v24 = v104[4];
      *((_DWORD *)v24 + 1) = v34;
      *((_DWORD *)v24 + 2) = v35;
      *((_DWORD *)v24 + 3) = v36;
      v37 = logfmt_raw((int)v147, 0x1000u);
      V_UNLOCK(v37);
      v38 = zlog(*v93, v91, 186, "read_temperature", 16, 80, 20, v147);
      V_LOCK(v38);
      V_INT((int)v121, v88);
      V_INT((int)v126, v89);
      if ( v101 )
      {
        V_INT((int)&v127, s);
      }
      else
      {
        V_INT((int)v145, s);
        v127 = v145[0];
        v128 = v145[1];
        v129 = v145[2];
        v130 = v145[3];
        v131 = v145[4];
        v132 = v145[5];
        v133 = v145[6];
        v134 = v145[7];
      }
      if ( v102 )
      {
        V_INT((int)&v135, "chiptemp");
      }
      else
      {
        V_INT((int)v146, "chiptemp");
        v135 = v146[0];
        v136 = v146[1];
        v137 = v146[2];
        v138 = v146[3];
        v139 = v146[4];
        v140 = v146[5];
        v141 = v146[6];
        v142 = v146[7];
      }
      v39 = v136;
      v40 = v137;
      v41 = v138;
      ++v15;
      v42 = v87;
      v81 = v85;
      v82 = "read_temperature";
      *(_DWORD *)v87 = v135;
      *((_DWORD *)v42 + 1) = v39;
      *((_DWORD *)v42 + 2) = v40;
      *((_DWORD *)v42 + 3) = v41;
      v42 += 16;
      v43 = v86;
      v44 = v140;
      v45 = v141;
      v46 = v142;
      v47 = v84;
      *(_DWORD *)v42 = v139;
      *((_DWORD *)v42 + 1) = v44;
      *((_DWORD *)v42 + 2) = v45;
      *((_DWORD *)v42 + 3) = v46;
      v48 = v128;
      v49 = v129;
      v50 = v130;
      *(_DWORD *)v43 = v127;
      *((_DWORD *)v43 + 1) = v48;
      *((_DWORD *)v43 + 2) = v49;
      *((_DWORD *)v43 + 3) = v50;
      v43 += 16;
      v51 = v132;
      v52 = v133;
      v53 = v134;
      *(_DWORD *)v43 = v131;
      *((_DWORD *)v43 + 1) = v51;
      *((_DWORD *)v43 + 2) = v52;
      *((_DWORD *)v43 + 3) = v53;
      v54 = v126[1];
      v55 = v126[2];
      v56 = v126[3];
      *(_DWORD *)v47 = v126[0];
      *((_DWORD *)v47 + 1) = v54;
      *((_DWORD *)v47 + 2) = v55;
      *((_DWORD *)v47 + 3) = v56;
      v47 += 16;
      v57 = v126[5];
      v58 = v126[6];
      v59 = v126[7];
      *(_DWORD *)v47 = v126[4];
      *((_DWORD *)v47 + 1) = v57;
      *((_DWORD *)v47 + 2) = v58;
      *((_DWORD *)v47 + 3) = v59;
      v74 = v122;
      v75 = v123;
      v76 = v124;
      v77 = v125;
      v60 = logfmt_raw((int)v147, 0x1000u);
      V_UNLOCK(v60);
      zlog(*v94, v91, 186, "read_temperature", 16, 82, 40, v147);
      v14 = v83[1];
    }
    while ( v14 > v15 );
  }
  if ( *a7 != v14 )
    return -1;
  result = *a8 - v14;
  if ( result )
    return -1;
  return result;
}
