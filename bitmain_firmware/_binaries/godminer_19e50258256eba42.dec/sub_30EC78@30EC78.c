_BYTE *__fastcall sub_30EC78(int *a1, char a2, char a3, _BYTE *a4, unsigned int a5)
{
  int v5; // r3
  unsigned int v6; // r0
  _BYTE *result; // r0
  int v10; // [sp+14h] [bp-E0h]
  int v11; // [sp+14h] [bp-E0h]
  int v12; // [sp+18h] [bp-DCh]
  int v13; // [sp+18h] [bp-DCh]
  int v14; // [sp+1Ch] [bp-D8h]
  int v15; // [sp+1Ch] [bp-D8h]
  int v16; // [sp+20h] [bp-D4h]
  int v17; // [sp+20h] [bp-D4h]
  int v18; // [sp+24h] [bp-D0h]
  int v19; // [sp+24h] [bp-D0h]
  int v20; // [sp+28h] [bp-CCh]
  int v21; // [sp+28h] [bp-CCh]
  int v22; // [sp+38h] [bp-BCh]
  int v23; // [sp+3Ch] [bp-B8h]
  int v24; // [sp+40h] [bp-B4h]
  int v25; // [sp+44h] [bp-B0h]
  int v26; // [sp+48h] [bp-ACh]
  int v27; // [sp+4Ch] [bp-A8h]
  int v28; // [sp+50h] [bp-A4h]
  int v29; // [sp+54h] [bp-A0h]
  unsigned int v30; // [sp+5Ch] [bp-98h]
  unsigned int v31; // [sp+60h] [bp-94h]
  unsigned int v32; // [sp+64h] [bp-90h]
  unsigned int v33; // [sp+68h] [bp-8Ch]
  unsigned int v34; // [sp+6Ch] [bp-88h]
  unsigned int v35; // [sp+70h] [bp-84h]
  unsigned int v36; // [sp+74h] [bp-80h]
  int j; // [sp+88h] [bp-6Ch]
  int k; // [sp+88h] [bp-6Ch]
  int m; // [sp+88h] [bp-6Ch]
  int v41; // [sp+8Ch] [bp-68h]
  int v42; // [sp+8Ch] [bp-68h]
  int v43; // [sp+8Ch] [bp-68h]
  int v44; // [sp+8Ch] [bp-68h]
  int v45; // [sp+8Ch] [bp-68h]
  int v46; // [sp+8Ch] [bp-68h]
  int v47; // [sp+90h] [bp-64h]
  int v48; // [sp+90h] [bp-64h]
  int v49; // [sp+90h] [bp-64h]
  int v50; // [sp+90h] [bp-64h]
  int v51; // [sp+90h] [bp-64h]
  int v52; // [sp+90h] [bp-64h]
  int v53; // [sp+94h] [bp-60h]
  int v54; // [sp+94h] [bp-60h]
  int v55; // [sp+94h] [bp-60h]
  int v56; // [sp+94h] [bp-60h]
  int v57; // [sp+98h] [bp-5Ch]
  int v58; // [sp+98h] [bp-5Ch]
  int v59; // [sp+98h] [bp-5Ch]
  int v60; // [sp+98h] [bp-5Ch]
  int v61; // [sp+98h] [bp-5Ch]
  int v62; // [sp+98h] [bp-5Ch]
  int v63; // [sp+9Ch] [bp-58h]
  int v64; // [sp+9Ch] [bp-58h]
  int v65; // [sp+9Ch] [bp-58h]
  int v66; // [sp+9Ch] [bp-58h]
  int v67; // [sp+9Ch] [bp-58h]
  int v68; // [sp+A0h] [bp-54h]
  int v69; // [sp+A0h] [bp-54h]
  int v70; // [sp+A0h] [bp-54h]
  int v71; // [sp+A0h] [bp-54h]
  int v72; // [sp+A0h] [bp-54h]
  int v73; // [sp+A4h] [bp-50h]
  int v74; // [sp+A4h] [bp-50h]
  int v75; // [sp+A4h] [bp-50h]
  int v76; // [sp+A4h] [bp-50h]
  int v77; // [sp+A4h] [bp-50h]
  int v78; // [sp+A8h] [bp-4Ch]
  int v79; // [sp+A8h] [bp-4Ch]
  int v80; // [sp+A8h] [bp-4Ch]
  int v81; // [sp+ACh] [bp-48h]
  int v82; // [sp+ACh] [bp-48h]
  int v83; // [sp+ACh] [bp-48h]
  int v84; // [sp+ACh] [bp-48h]
  int v85; // [sp+ACh] [bp-48h]
  int v86; // [sp+ACh] [bp-48h]
  int v87; // [sp+B0h] [bp-44h]
  int v88; // [sp+B0h] [bp-44h]
  int v89; // [sp+B0h] [bp-44h]
  int v90; // [sp+B0h] [bp-44h]
  int v91; // [sp+B0h] [bp-44h]
  int v92; // [sp+B0h] [bp-44h]
  int v93; // [sp+B4h] [bp-40h]
  int v94; // [sp+B4h] [bp-40h]
  int v95; // [sp+B4h] [bp-40h]
  int v96; // [sp+B4h] [bp-40h]
  int v97; // [sp+B8h] [bp-3Ch]
  int v98; // [sp+B8h] [bp-3Ch]
  int v99; // [sp+B8h] [bp-3Ch]
  int v100; // [sp+B8h] [bp-3Ch]
  int v101; // [sp+B8h] [bp-3Ch]
  int v102; // [sp+B8h] [bp-3Ch]
  int v103; // [sp+BCh] [bp-38h]
  int v104; // [sp+BCh] [bp-38h]
  int v105; // [sp+BCh] [bp-38h]
  int v106; // [sp+BCh] [bp-38h]
  int v107; // [sp+BCh] [bp-38h]
  int v108; // [sp+C0h] [bp-34h]
  int v109; // [sp+C0h] [bp-34h]
  int v110; // [sp+C0h] [bp-34h]
  int v111; // [sp+C0h] [bp-34h]
  int v112; // [sp+C0h] [bp-34h]
  int v113; // [sp+C4h] [bp-30h]
  int v114; // [sp+C4h] [bp-30h]
  int v115; // [sp+C4h] [bp-30h]
  int v116; // [sp+C4h] [bp-30h]
  int v117; // [sp+C4h] [bp-30h]
  int v118; // [sp+C8h] [bp-2Ch]
  int v119; // [sp+C8h] [bp-2Ch]
  int v120; // [sp+C8h] [bp-2Ch]
  int v121; // [sp+CCh] [bp-28h]
  int v122; // [sp+CCh] [bp-28h]
  int v123; // [sp+CCh] [bp-28h]
  int v124; // [sp+CCh] [bp-28h]
  int v125; // [sp+CCh] [bp-28h]
  int v126; // [sp+CCh] [bp-28h]
  int v127; // [sp+D0h] [bp-24h]
  int v128; // [sp+D0h] [bp-24h]
  int v129; // [sp+D0h] [bp-24h]
  int v130; // [sp+D0h] [bp-24h]
  int v131; // [sp+D0h] [bp-24h]
  int v132; // [sp+D0h] [bp-24h]
  int v133; // [sp+D4h] [bp-20h]
  int v134; // [sp+D4h] [bp-20h]
  int v135; // [sp+D4h] [bp-20h]
  int v136; // [sp+D4h] [bp-20h]
  int v137; // [sp+D8h] [bp-1Ch]
  int v138; // [sp+D8h] [bp-1Ch]
  int v139; // [sp+D8h] [bp-1Ch]
  int v140; // [sp+D8h] [bp-1Ch]
  int v141; // [sp+D8h] [bp-1Ch]
  int v142; // [sp+D8h] [bp-1Ch]
  int v143; // [sp+DCh] [bp-18h]
  int v144; // [sp+DCh] [bp-18h]
  int v145; // [sp+DCh] [bp-18h]
  int v146; // [sp+DCh] [bp-18h]
  int v147; // [sp+DCh] [bp-18h]
  int v148; // [sp+E0h] [bp-14h]
  int v149; // [sp+E0h] [bp-14h]
  int v150; // [sp+E0h] [bp-14h]
  int v151; // [sp+E0h] [bp-14h]
  int v152; // [sp+E0h] [bp-14h]
  int v153; // [sp+E4h] [bp-10h]
  int v154; // [sp+E4h] [bp-10h]
  int v155; // [sp+E4h] [bp-10h]
  int v156; // [sp+E4h] [bp-10h]
  int v157; // [sp+E4h] [bp-10h]
  int v158; // [sp+E8h] [bp-Ch]
  int v159; // [sp+E8h] [bp-Ch]
  int v160; // [sp+E8h] [bp-Ch]
  int i; // [sp+ECh] [bp-8h]

  v5 = a1[8];
  *((_BYTE *)a1 + v5) = a2 & -(128 >> a3) | (128 >> a3);
  memset((char *)a1 + v5 + 1, 0, 31 - v5);
  v158 = a1[9];
  v153 = a1[10];
  v148 = a1[11];
  v143 = a1[12];
  v137 = a1[13];
  v133 = a1[14];
  v127 = a1[15];
  v121 = a1[16];
  v118 = a1[17];
  v113 = a1[18];
  v108 = a1[19];
  v103 = a1[20];
  v97 = a1[21];
  v93 = a1[22];
  v87 = a1[23];
  v81 = a1[24];
  v78 = a1[25];
  v73 = a1[26];
  v68 = a1[27];
  v63 = a1[28];
  v57 = a1[29];
  v53 = a1[30];
  v47 = a1[31];
  v41 = a1[32];
  for ( i = 0; i <= 1; ++i )
  {
    v36 = sub_30D7C8(a1);
    v35 = sub_30D7C8(a1 + 1);
    v34 = sub_30D7C8(a1 + 2);
    v33 = sub_30D7C8(a1 + 3);
    v32 = sub_30D7C8(a1 + 4);
    v31 = sub_30D7C8(a1 + 5);
    v30 = sub_30D7C8(a1 + 6);
    v6 = sub_30D7C8(a1 + 7);
    v22 = v47 ^ v87 ^ v127;
    v23 = v53 ^ v93 ^ v133;
    v24 = v57 ^ v97 ^ v137;
    v25 = v41 ^ v81 ^ v121 ^ v63 ^ v103 ^ v143;
    v26 = v41 ^ v81 ^ v121 ^ v68 ^ v108 ^ v148;
    v27 = v73 ^ v113 ^ v153;
    v28 = v41 ^ v81 ^ v121 ^ v78 ^ v118 ^ v158;
    v29 = v41 ^ v81 ^ v121;
    v158 ^= v36 ^ v29;
    v153 ^= v35 ^ v28;
    v148 ^= v34 ^ v27;
    v143 ^= v33 ^ v26;
    v137 ^= v32 ^ v25;
    v133 ^= v31 ^ v24;
    v127 ^= v30 ^ v23;
    v121 ^= v6 ^ v22;
    v118 ^= v6 ^ v29;
    v113 ^= v6 ^ v36 ^ v28;
    v108 ^= v35 ^ v27;
    v103 ^= v6 ^ v34 ^ v26;
    v78 ^= v30 ^ v29;
    v73 ^= v30 ^ v6 ^ v28;
    v68 ^= v6 ^ v36 ^ v27;
    v63 ^= v30 ^ v35 ^ v26;
    v97 = __ROR4__(v6 ^ v33 ^ v25 ^ v97, 31);
    v93 = __ROR4__(v32 ^ v24 ^ v93, 31);
    v87 = __ROR4__(v31 ^ v23 ^ v87, 31);
    v81 = __ROR4__(v30 ^ v22 ^ v81, 31);
    v57 = __ROR4__(v30 ^ v6 ^ v34 ^ v25 ^ v57, 30);
    v53 = __ROR4__(v6 ^ v33 ^ v24 ^ v53, 30);
    v47 = __ROR4__(v32 ^ v23 ^ v47, 30);
    v41 = __ROR4__(v31 ^ v22 ^ v41, 30);
    for ( j = 0; j <= 7; ++j )
    {
      v12 = v158;
      v149 = v143 ^ v148;
      v159 = v143 ^ (v158 | v153);
      v144 = v12 & v143;
      v154 = v144 ^ ~v153;
      v145 = v149 ^ v144;
      v150 = v154 ^ v159 & v149;
      v155 = v154 | v145;
      v13 = v155 ^ v12;
      v146 = v150 ^ v145;
      v151 = v155 & v150;
      v156 = ~v159 ^ v155;
      v10 = v133;
      v122 = v137 ^ v121;
      v134 = v137 ^ (v133 | v127);
      v138 = v10 & v137;
      v128 = v138 ^ ~v127;
      v139 = v122 ^ v138;
      v123 = v128 ^ v134 & v122;
      v129 = v128 | v139;
      v11 = v129 ^ v10;
      v140 = v123 ^ v139;
      v124 = v129 & v123;
      v130 = ~v134 ^ v129;
      v141 = v13 ^ v140;
      v160 = __ROR4__(v13, 30) ^ v141;
      v142 = __ROR4__(v141, 18) ^ v160;
      v135 = v156 ^ v11;
      v157 = __ROR4__(v156, 30) ^ v156 ^ v11;
      v136 = __ROR4__(v135, 18) ^ v157;
      v153 = __ROR4__(v157, 22) ^ v136;
      v133 = __ROR4__(v136, 31);
      v131 = v151 ^ v130;
      v152 = __ROR4__(v151, 30) ^ v131;
      v132 = __ROR4__(v131, 18) ^ v152;
      v148 = __ROR4__(v152, 22) ^ v132;
      v127 = __ROR4__(v132, 31);
      v125 = v146 ^ v124;
      v147 = __ROR4__(v146, 30) ^ v125;
      v126 = __ROR4__(v125, 18) ^ v147;
      v143 = __ROR4__(v147, 22) ^ v126;
      v121 = __ROR4__(v126, 31);
      v158 = dword_584BD8[j] ^ __ROR4__(v160, 22) ^ v142;
      v137 = dword_584BF8[j] ^ __ROR4__(v142, 31);
    }
    for ( k = 0; k <= 7; ++k )
    {
      v16 = v118;
      v109 = v103 ^ v108;
      v119 = v103 ^ (v118 | v113);
      v104 = v16 & v103;
      v114 = v104 ^ ~v113;
      v105 = v109 ^ v104;
      v110 = v114 ^ v119 & v109;
      v115 = v114 | v105;
      v17 = v115 ^ v16;
      v106 = v110 ^ v105;
      v111 = v115 & v110;
      v116 = ~v119 ^ v115;
      v14 = v93;
      v82 = v97 ^ v81;
      v94 = v97 ^ (v93 | v87);
      v98 = v14 & v97;
      v88 = v98 ^ ~v87;
      v99 = v82 ^ v98;
      v83 = v88 ^ v94 & v82;
      v89 = v88 | v99;
      v15 = v89 ^ v14;
      v100 = v83 ^ v99;
      v84 = v89 & v83;
      v90 = ~v94 ^ v89;
      v101 = v17 ^ v100;
      v120 = __ROR4__(v17, 30) ^ v101;
      v102 = __ROR4__(v101, 18) ^ v120;
      v95 = v116 ^ v15;
      v117 = __ROR4__(v116, 30) ^ v116 ^ v15;
      v96 = __ROR4__(v95, 18) ^ v117;
      v113 = __ROR4__(v117, 22) ^ v96;
      v93 = __ROR4__(v96, 31);
      v91 = v111 ^ v90;
      v112 = __ROR4__(v111, 30) ^ v91;
      v92 = __ROR4__(v91, 18) ^ v112;
      v108 = __ROR4__(v112, 22) ^ v92;
      v87 = __ROR4__(v92, 31);
      v85 = v106 ^ v84;
      v107 = __ROR4__(v106, 30) ^ v85;
      v86 = __ROR4__(v85, 18) ^ v107;
      v103 = __ROR4__(v107, 22) ^ v86;
      v81 = __ROR4__(v86, 31);
      v118 = dword_584C18[k] ^ __ROR4__(v120, 22) ^ v102;
      v97 = dword_584C38[k] ^ __ROR4__(v102, 31);
    }
    for ( m = 0; m <= 7; ++m )
    {
      v20 = v78;
      v69 = v63 ^ v68;
      v79 = v63 ^ (v78 | v73);
      v64 = v20 & v63;
      v74 = v64 ^ ~v73;
      v65 = v69 ^ v64;
      v70 = v74 ^ v79 & v69;
      v75 = v74 | v65;
      v21 = v75 ^ v20;
      v66 = v70 ^ v65;
      v71 = v75 & v70;
      v76 = ~v79 ^ v75;
      v18 = v53;
      v42 = v57 ^ v41;
      v54 = v57 ^ (v53 | v47);
      v58 = v18 & v57;
      v48 = v58 ^ ~v47;
      v59 = v42 ^ v58;
      v43 = v48 ^ v54 & v42;
      v49 = v48 | v59;
      v19 = v49 ^ v18;
      v60 = v43 ^ v59;
      v44 = v49 & v43;
      v50 = ~v54 ^ v49;
      v61 = v21 ^ v60;
      v80 = __ROR4__(v21, 30) ^ v61;
      v62 = __ROR4__(v61, 18) ^ v80;
      v55 = v76 ^ v19;
      v77 = __ROR4__(v76, 30) ^ v76 ^ v19;
      v56 = __ROR4__(v55, 18) ^ v77;
      v73 = __ROR4__(v77, 22) ^ v56;
      v53 = __ROR4__(v56, 31);
      v51 = v71 ^ v50;
      v72 = __ROR4__(v71, 30) ^ v51;
      v52 = __ROR4__(v51, 18) ^ v72;
      v68 = __ROR4__(v72, 22) ^ v52;
      v47 = __ROR4__(v52, 31);
      v45 = v66 ^ v44;
      v67 = __ROR4__(v66, 30) ^ v45;
      v46 = __ROR4__(v45, 18) ^ v67;
      v63 = __ROR4__(v67, 22) ^ v46;
      v41 = __ROR4__(v46, 31);
      v78 = dword_584C58[m] ^ __ROR4__(v80, 22) ^ v62;
      v57 = dword_584C78[m] ^ __ROR4__(v62, 31);
    }
    memset(a1, 0, 0x20u);
  }
  sub_30D74C(a4, v78 ^ v158 ^ v118);
  sub_30D74C(a4 + 4, v73 ^ v153 ^ v113);
  sub_30D74C(a4 + 8, v68 ^ v148 ^ v108);
  sub_30D74C(a4 + 12, v63 ^ v143 ^ v103);
  sub_30D74C(a4 + 16, v57 ^ v137 ^ v97);
  sub_30D74C(a4 + 20, v53 ^ v133 ^ v93);
  result = sub_30D74C(a4 + 24, v47 ^ v127 ^ v87);
  if ( a5 > 7 )
    return sub_30D74C(a4 + 28, v41 ^ v121 ^ v81);
  return result;
}
