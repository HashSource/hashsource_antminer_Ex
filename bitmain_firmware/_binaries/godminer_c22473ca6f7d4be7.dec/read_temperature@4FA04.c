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
  int v15; // r3
  _DWORD *v16; // r2
  _DWORD *v17; // r1
  char *v18; // r0
  char *v19; // r12
  char *v20; // lr
  int v21; // r4
  int v22; // r7
  int v23; // r11
  int v24; // r1
  int v25; // r2
  int v26; // r3
  char *v27; // lr
  char *v28; // r10
  int v29; // r1
  int v30; // r2
  int v31; // r3
  char *v32; // r5
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r1
  int v43; // r2
  int v44; // r3
  int v45; // r3
  int v46; // r1
  int v47; // r2
  int v48; // r3
  char *v49; // lr
  char *v50; // r9
  int v51; // r1
  int v52; // r2
  int v53; // r3
  char *v54; // r5
  int v55; // r1
  int v56; // r2
  int v57; // r3
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int v64; // r1
  int v65; // r2
  int v66; // r3
  void (__fastcall *v67)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // r12
  int v68; // r9
  _DWORD *v69; // r8
  int v70; // r3
  int v71; // r0
  int v72; // r1
  int v73; // r2
  int v74; // r3
  int v75; // r3
  int v76; // r2
  int v77; // r2
  char *v78; // r1
  char *v79; // r1
  int result; // r0
  char v81; // [sp+20h] [bp-123Ch] BYREF
  char v82; // [sp+40h] [bp-121Ch] BYREF
  char v83; // [sp+60h] [bp-11FCh] BYREF
  int v84; // [sp+80h] [bp-11DCh]
  int v85; // [sp+84h] [bp-11D8h]
  int *v86; // [sp+88h] [bp-11D4h]
  char *v87; // [sp+8Ch] [bp-11D0h]
  int v88; // [sp+90h] [bp-11CCh]
  char *v89; // [sp+94h] [bp-11C8h]
  char *v90; // [sp+98h] [bp-11C4h]
  char *v91; // [sp+9Ch] [bp-11C0h]
  char *v92; // [sp+A0h] [bp-11BCh]
  char *s; // [sp+A4h] [bp-11B8h]
  int v94; // [sp+A8h] [bp-11B4h]
  _DWORD *v95; // [sp+ACh] [bp-11B0h]
  _DWORD *v96; // [sp+B0h] [bp-11ACh]
  _DWORD *v97; // [sp+B4h] [bp-11A8h]
  int v98; // [sp+B8h] [bp-11A4h]
  _DWORD *v99; // [sp+BCh] [bp-11A0h]
  _DWORD *v100; // [sp+C0h] [bp-119Ch]
  int v101; // [sp+C4h] [bp-1198h]
  int v102; // [sp+C8h] [bp-1194h] BYREF
  int v103; // [sp+CCh] [bp-1190h] BYREF
  int v104; // [sp+D0h] [bp-118Ch] BYREF
  int v105; // [sp+D4h] [bp-1188h] BYREF
  _DWORD v106[7]; // [sp+D8h] [bp-1184h] BYREF
  int v107; // [sp+F4h] [bp-1168h]
  _DWORD v108[8]; // [sp+F8h] [bp-1164h] BYREF
  int v109; // [sp+118h] [bp-1144h] BYREF
  int v110; // [sp+11Ch] [bp-1140h]
  int v111; // [sp+120h] [bp-113Ch]
  int v112; // [sp+124h] [bp-1138h]
  int v113; // [sp+128h] [bp-1134h]
  int v114; // [sp+12Ch] [bp-1130h]
  int v115; // [sp+130h] [bp-112Ch]
  int v116; // [sp+134h] [bp-1128h]
  int v117; // [sp+138h] [bp-1124h] BYREF
  int v118; // [sp+13Ch] [bp-1120h]
  int v119; // [sp+140h] [bp-111Ch]
  int v120; // [sp+144h] [bp-1118h]
  int v121; // [sp+148h] [bp-1114h]
  int v122; // [sp+14Ch] [bp-1110h]
  int v123; // [sp+150h] [bp-110Ch]
  int v124; // [sp+154h] [bp-1108h]
  _DWORD v125[7]; // [sp+158h] [bp-1104h] BYREF
  int v126; // [sp+174h] [bp-10E8h]
  _DWORD v127[8]; // [sp+178h] [bp-10E4h] BYREF
  int v128; // [sp+198h] [bp-10C4h] BYREF
  int v129; // [sp+19Ch] [bp-10C0h]
  int v130; // [sp+1A0h] [bp-10BCh]
  int v131; // [sp+1A4h] [bp-10B8h]
  int v132; // [sp+1A8h] [bp-10B4h]
  int v133; // [sp+1ACh] [bp-10B0h]
  int v134; // [sp+1B0h] [bp-10ACh]
  int v135; // [sp+1B4h] [bp-10A8h]
  int v136; // [sp+1B8h] [bp-10A4h] BYREF
  int v137; // [sp+1BCh] [bp-10A0h]
  int v138; // [sp+1C0h] [bp-109Ch]
  int v139; // [sp+1C4h] [bp-1098h]
  int v140; // [sp+1C8h] [bp-1094h]
  int v141; // [sp+1CCh] [bp-1090h]
  int v142; // [sp+1D0h] [bp-108Ch]
  int v143; // [sp+1D4h] [bp-1088h]
  _DWORD v144[8]; // [sp+1D8h] [bp-1084h] BYREF
  _DWORD v145[8]; // [sp+1F8h] [bp-1064h] BYREF
  _DWORD v146[8]; // [sp+218h] [bp-1044h] BYREF
  _DWORD v147[8]; // [sp+238h] [bp-1024h] BYREF
  char v148[4100]; // [sp+258h] [bp-1004h] BYREF

  v9 = *(int **)(a1 + 212);
  v99 = a3;
  v13 = *(void (**)(void))(a1 + 96);
  v95 = a2;
  v100 = a4;
  v86 = v9;
  v13();
  *a3 = -150;
  *a4 = 150;
  *a5 = -150;
  *a6 = 150;
  v14 = v9[1];
  if ( v14 > 0 )
  {
    LOWORD(v15) = -23476;
    LOWORD(v16) = -14512;
    HIWORD(v15) = (unsigned int)"e" >> 16;
    LOWORD(v17) = -14508;
    v88 = v15;
    LOWORD(v18) = -7948;
    LOWORD(v19) = -3836;
    LOWORD(v20) = 21796;
    LOWORD(v21) = 21816;
    v90 = &v83;
    v22 = 0;
    HIWORD(v21) = (unsigned int)"    = %d" >> 16;
    LOWORD(v23) = 21756;
    HIWORD(v16) = (unsigned int)&unk_16B55C >> 16;
    HIWORD(v17) = (unsigned int)&unk_16B560 >> 16;
    HIWORD(v18) = (unsigned int)&loc_12D594 >> 16;
    HIWORD(v19) = (unsigned int)"ig" >> 16;
    HIWORD(v20) = (unsigned int)"working_voltage_raw     = %d" >> 16;
    v89 = &v82;
    v94 = v21;
    HIWORD(v23) = (unsigned int)"r init:" >> 16;
    v101 = 0;
    v98 = 0;
    v96 = v16;
    v97 = v17;
    v91 = v18;
    v92 = v19;
    s = v20;
    v87 = &v81;
    do
    {
      v67 = *(void (__fastcall **)(int, int *, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a1 + 100);
      v68 = *v86;
      v104 = 0;
      v69 = (_DWORD *)(v68 + 20 * v22);
      v67(a1, &v102, &v104, *v69, v69[1], v69[2], v69[3], v69[4]);
      if ( v104 )
      {
        v70 = v102;
        if ( v102 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a7;
          if ( v70 > *v99 )
            *v99 = v70;
          if ( v70 < *v100 )
            *v100 = v70;
        }
      }
      v71 = v69[1];
      v72 = v69[2];
      v73 = v69[3];
      v74 = v69[4];
      v105 = 0;
      (*(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int))(a1 + 104))(
        a1,
        &v103,
        &v105,
        *(_DWORD *)(v68 + 20 * v22),
        v71,
        v72,
        v73,
        v74);
      v75 = v105;
      if ( v105 )
      {
        v76 = v103;
        if ( v103 == -64 )
        {
          ++*a9;
        }
        else
        {
          ++*a8;
          if ( v76 > *a5 )
            *a5 = v76;
          if ( v76 < *a6 )
            *a6 = v76;
        }
      }
      if ( v95 )
      {
        v77 = v69[2];
        if ( v77 )
        {
          if ( v77 == 1 )
          {
            if ( v104 && v102 != -64 )
            {
              *(_DWORD *)(v95[2] + 4 * v101) = v102;
              v75 = v105;
            }
            if ( v75 && v103 != -64 )
              *(_DWORD *)(v95[3] + 4 * v101) = v103;
            ++v101;
          }
        }
        else
        {
          if ( v104 && v102 != -64 )
          {
            *(_DWORD *)(*v95 + 4 * v98) = v102;
            v75 = v105;
          }
          if ( v75 && v103 != -64 )
            *(_DWORD *)(v95[1] + 4 * v98) = v103;
          ++v98;
        }
      }
      V_LOCK();
      V_INT((int)v106, v91, *(int *)(a1 + 140));
      V_INT((int)v108, v92, (int)v69[4]);
      if ( v104 )
      {
        V_INT((int)&v109, s, v102);
        if ( !v105 )
          goto LABEL_33;
      }
      else
      {
        V_INT((int)v144, s, -256);
        v109 = v144[0];
        v110 = v144[1];
        v111 = v144[2];
        v112 = v144[3];
        v113 = v144[4];
        v114 = v144[5];
        v115 = v144[6];
        v116 = v144[7];
        if ( !v105 )
        {
LABEL_33:
          LOWORD(v78) = 21804;
          HIWORD(v78) = (unsigned int)"voltage_raw     = %d" >> 16;
          V_INT((int)v145, v78, -256);
          v117 = v145[0];
          v118 = v145[1];
          v119 = v145[2];
          v120 = v145[3];
          v121 = v145[4];
          v122 = v145[5];
          v123 = v145[6];
          v124 = v145[7];
          goto LABEL_5;
        }
      }
      V_INT((int)&v117, "chiptemp", v103);
LABEL_5:
      v24 = v118;
      v25 = v119;
      v26 = v120;
      v27 = v90;
      v84 = v88;
      v85 = v23;
      *(_DWORD *)v90 = v117;
      *((_DWORD *)v27 + 1) = v24;
      *((_DWORD *)v27 + 2) = v25;
      *((_DWORD *)v27 + 3) = v26;
      v27 += 16;
      v28 = v89;
      v29 = v122;
      v30 = v123;
      v31 = v124;
      v32 = v87;
      *(_DWORD *)v27 = v121;
      *((_DWORD *)v27 + 1) = v29;
      *((_DWORD *)v27 + 2) = v30;
      *((_DWORD *)v27 + 3) = v31;
      v33 = v110;
      v34 = v111;
      v35 = v112;
      *(_DWORD *)v28 = v109;
      *((_DWORD *)v28 + 1) = v33;
      *((_DWORD *)v28 + 2) = v34;
      *((_DWORD *)v28 + 3) = v35;
      v28 += 16;
      v36 = v114;
      v37 = v115;
      v38 = v116;
      *(_DWORD *)v28 = v113;
      *((_DWORD *)v28 + 1) = v36;
      *((_DWORD *)v28 + 2) = v37;
      *((_DWORD *)v28 + 3) = v38;
      v39 = v108[1];
      v40 = v108[2];
      v41 = v108[3];
      *(_DWORD *)v32 = v108[0];
      *((_DWORD *)v32 + 1) = v39;
      *((_DWORD *)v32 + 2) = v40;
      *((_DWORD *)v32 + 3) = v41;
      v32 += 16;
      v42 = v108[5];
      v43 = v108[6];
      v44 = v108[7];
      *(_DWORD *)v32 = v108[4];
      *((_DWORD *)v32 + 1) = v42;
      *((_DWORD *)v32 + 2) = v43;
      *((_DWORD *)v32 + 3) = v44;
      logfmt_raw(v148, 0x1000u, 0, v107, v106[0], v106[1], v106[2], v106[3], v106[4], v106[5], v106[6], v107);
      V_UNLOCK();
      LOWORD(v45) = 21756;
      HIWORD(v45) = (unsigned int)"r init:" >> 16;
      zlog(*v96, v94, 186, v45, 16, 80, 20, v148);
      V_LOCK();
      V_INT((int)v125, v91, *(int *)(a1 + 140));
      V_INT((int)v127, v92, (int)v69[4]);
      if ( v104 )
      {
        V_INT((int)&v128, s, v102);
      }
      else
      {
        V_INT((int)v146, s, -256);
        v128 = v146[0];
        v129 = v146[1];
        v130 = v146[2];
        v131 = v146[3];
        v132 = v146[4];
        v133 = v146[5];
        v134 = v146[6];
        v135 = v146[7];
      }
      if ( v105 )
      {
        V_INT((int)&v136, "chiptemp", v103);
      }
      else
      {
        LOWORD(v79) = 21804;
        HIWORD(v79) = (unsigned int)"voltage_raw     = %d" >> 16;
        V_INT((int)v147, v79, -256);
        v136 = v147[0];
        v137 = v147[1];
        v138 = v147[2];
        v139 = v147[3];
        v140 = v147[4];
        v141 = v147[5];
        v142 = v147[6];
        v143 = v147[7];
      }
      v46 = v137;
      v47 = v138;
      v48 = v139;
      ++v22;
      v49 = v90;
      v84 = v88;
      v85 = v23;
      *(_DWORD *)v90 = v136;
      *((_DWORD *)v49 + 1) = v46;
      *((_DWORD *)v49 + 2) = v47;
      *((_DWORD *)v49 + 3) = v48;
      v49 += 16;
      v50 = v89;
      v51 = v141;
      v52 = v142;
      v53 = v143;
      v54 = v87;
      *(_DWORD *)v49 = v140;
      *((_DWORD *)v49 + 1) = v51;
      *((_DWORD *)v49 + 2) = v52;
      *((_DWORD *)v49 + 3) = v53;
      v55 = v129;
      v56 = v130;
      v57 = v131;
      *(_DWORD *)v50 = v128;
      *((_DWORD *)v50 + 1) = v55;
      *((_DWORD *)v50 + 2) = v56;
      *((_DWORD *)v50 + 3) = v57;
      v50 += 16;
      v58 = v133;
      v59 = v134;
      v60 = v135;
      *(_DWORD *)v50 = v132;
      *((_DWORD *)v50 + 1) = v58;
      *((_DWORD *)v50 + 2) = v59;
      *((_DWORD *)v50 + 3) = v60;
      v61 = v127[1];
      v62 = v127[2];
      v63 = v127[3];
      *(_DWORD *)v54 = v127[0];
      *((_DWORD *)v54 + 1) = v61;
      *((_DWORD *)v54 + 2) = v62;
      *((_DWORD *)v54 + 3) = v63;
      v54 += 16;
      v64 = v127[5];
      v65 = v127[6];
      v66 = v127[7];
      *(_DWORD *)v54 = v127[4];
      *((_DWORD *)v54 + 1) = v64;
      *((_DWORD *)v54 + 2) = v65;
      *((_DWORD *)v54 + 3) = v66;
      logfmt_raw(v148, 0x1000u, 0, v126, v125[0], v125[1], v125[2], v125[3], v125[4], v125[5], v125[6], v126);
      V_UNLOCK();
      zlog(*v97, v94, 186, "read_temperature", 16, 82, 40, v148);
      v14 = v86[1];
    }
    while ( v14 > v22 );
  }
  if ( *a7 != v14 )
    return -1;
  result = *a8 - v14;
  if ( result )
    return -1;
  return result;
}
