unsigned __int8 *__fastcall sub_32BB9C(unsigned __int8 *result, int a2, int *a3)
{
  int v3; // [sp+10h] [bp-2C4h]
  int v4; // [sp+10h] [bp-2C4h]
  int v5; // [sp+10h] [bp-2C4h]
  int v6; // [sp+10h] [bp-2C4h]
  int v7; // [sp+14h] [bp-2C0h]
  int v8; // [sp+18h] [bp-2BCh]
  int v9; // [sp+18h] [bp-2BCh]
  int v10; // [sp+18h] [bp-2BCh]
  int v11; // [sp+18h] [bp-2BCh]
  int v12; // [sp+18h] [bp-2BCh]
  int v13; // [sp+1Ch] [bp-2B8h]
  int v14; // [sp+1Ch] [bp-2B8h]
  int v15; // [sp+1Ch] [bp-2B8h]
  int v16; // [sp+1Ch] [bp-2B8h]
  int v17; // [sp+20h] [bp-2B4h]
  int v18; // [sp+24h] [bp-2B0h]
  int v19; // [sp+24h] [bp-2B0h]
  int v20; // [sp+24h] [bp-2B0h]
  int v21; // [sp+24h] [bp-2B0h]
  int v22; // [sp+24h] [bp-2B0h]
  int v23; // [sp+28h] [bp-2ACh]
  int v24; // [sp+2Ch] [bp-2A8h]
  int v25; // [sp+30h] [bp-2A4h]
  int v26; // [sp+34h] [bp-2A0h]
  int v27; // [sp+38h] [bp-29Ch]
  int v28; // [sp+3Ch] [bp-298h]
  int v29; // [sp+40h] [bp-294h]
  int v30; // [sp+68h] [bp-26Ch]
  int v31; // [sp+6Ch] [bp-268h]
  int v32; // [sp+70h] [bp-264h]
  int v33; // [sp+74h] [bp-260h]
  int v34; // [sp+78h] [bp-25Ch]
  int v35; // [sp+7Ch] [bp-258h]
  int v36; // [sp+80h] [bp-254h]
  int v37; // [sp+84h] [bp-250h]
  int v38; // [sp+88h] [bp-24Ch]
  int v39; // [sp+8Ch] [bp-248h]
  int v40; // [sp+90h] [bp-244h]
  int v41; // [sp+B8h] [bp-21Ch]
  int v42; // [sp+BCh] [bp-218h]
  int v43; // [sp+C0h] [bp-214h]
  int v44; // [sp+C4h] [bp-210h]
  int v45; // [sp+C8h] [bp-20Ch]
  int v46; // [sp+CCh] [bp-208h]
  int v47; // [sp+D0h] [bp-204h]
  int v48; // [sp+D4h] [bp-200h]
  int v49; // [sp+D8h] [bp-1FCh]
  int v50; // [sp+DCh] [bp-1F8h]
  int v51; // [sp+E0h] [bp-1F4h]
  int v52; // [sp+108h] [bp-1CCh]
  int v53; // [sp+10Ch] [bp-1C8h]
  int v54; // [sp+110h] [bp-1C4h]
  int v55; // [sp+114h] [bp-1C0h]
  int v56; // [sp+118h] [bp-1BCh]
  int v57; // [sp+11Ch] [bp-1B8h]
  int v58; // [sp+120h] [bp-1B4h]
  int v59; // [sp+124h] [bp-1B0h]
  int v60; // [sp+128h] [bp-1ACh]
  int v61; // [sp+12Ch] [bp-1A8h]
  int v62; // [sp+130h] [bp-1A4h]
  int v63; // [sp+158h] [bp-17Ch]
  int v64; // [sp+15Ch] [bp-178h]
  int v65; // [sp+160h] [bp-174h]
  int v66; // [sp+164h] [bp-170h]
  int v67; // [sp+168h] [bp-16Ch]
  int v68; // [sp+168h] [bp-16Ch]
  int v69; // [sp+168h] [bp-16Ch]
  int v70; // [sp+168h] [bp-16Ch]
  int v71; // [sp+16Ch] [bp-168h]
  int v72; // [sp+170h] [bp-164h]
  int v73; // [sp+170h] [bp-164h]
  int v74; // [sp+170h] [bp-164h]
  int v75; // [sp+170h] [bp-164h]
  int v76; // [sp+170h] [bp-164h]
  int v77; // [sp+174h] [bp-160h]
  int v78; // [sp+178h] [bp-15Ch]
  int v79; // [sp+17Ch] [bp-158h]
  int v80; // [sp+180h] [bp-154h]
  int v81; // [sp+184h] [bp-150h]
  int v82; // [sp+188h] [bp-14Ch]
  int v83; // [sp+18Ch] [bp-148h]
  int v84; // [sp+1B4h] [bp-120h]
  int v85; // [sp+1B8h] [bp-11Ch]
  int v86; // [sp+1BCh] [bp-118h]
  int v87; // [sp+1C0h] [bp-114h]
  int v88; // [sp+1C4h] [bp-110h]
  int v89; // [sp+1C8h] [bp-10Ch]
  int v90; // [sp+1CCh] [bp-108h]
  int v91; // [sp+1D0h] [bp-104h]
  int v92; // [sp+1D4h] [bp-100h]
  int v93; // [sp+1D8h] [bp-FCh]
  int v94; // [sp+1DCh] [bp-F8h]
  int v95; // [sp+204h] [bp-D0h]
  int v96; // [sp+208h] [bp-CCh]
  int v97; // [sp+20Ch] [bp-C8h]
  int v98; // [sp+210h] [bp-C4h]
  int v99; // [sp+214h] [bp-C0h]
  int v100; // [sp+218h] [bp-BCh]
  int v101; // [sp+21Ch] [bp-B8h]
  int v102; // [sp+220h] [bp-B4h]
  int v103; // [sp+224h] [bp-B0h]
  int v104; // [sp+228h] [bp-ACh]
  int v105; // [sp+22Ch] [bp-A8h]
  int v106; // [sp+254h] [bp-80h]
  int v107; // [sp+258h] [bp-7Ch]
  int v108; // [sp+25Ch] [bp-78h]
  int v109; // [sp+260h] [bp-74h]
  int v110; // [sp+264h] [bp-70h]
  int v111; // [sp+268h] [bp-6Ch]
  int v112; // [sp+26Ch] [bp-68h]
  int v113; // [sp+270h] [bp-64h]
  int v114; // [sp+274h] [bp-60h]
  int v115; // [sp+278h] [bp-5Ch]
  int v116; // [sp+27Ch] [bp-58h]
  int v117; // [sp+2A4h] [bp-30h]
  int v118; // [sp+2A8h] [bp-2Ch]
  int v119; // [sp+2ACh] [bp-28h]
  int v120; // [sp+2B0h] [bp-24h]
  int v121; // [sp+2B8h] [bp-1Ch]
  unsigned int k; // [sp+2BCh] [bp-18h]
  int v123; // [sp+2C0h] [bp-14h]
  unsigned int j; // [sp+2C4h] [bp-10h]
  int v125; // [sp+2C8h] [bp-Ch]
  unsigned int i; // [sp+2CCh] [bp-8h]

  v120 = *result;
  v119 = result[8 * a2];
  v118 = result[16 * a2];
  v117 = result[24 * a2];
  v116 = v120 + 16 * v118 + (unsigned __int8)(4 * v119 + ((_BYTE)v117 << 6)) - ((4 * v119 + (v117 << 6)) >> 8);
  v115 = v120 - v118 + 16 * v119 - 16 * v117;
  v114 = v120 - 16 * v118 + (unsigned __int8)(((_BYTE)v119 << 6) + 4 * v117) - (((v119 << 6) + 4 * v117) >> 8);
  v113 = v120 + v118 - (v119 + v117);
  v112 = v120 + 16 * v118 - ((unsigned __int8)(4 * v119 + ((_BYTE)v117 << 6)) - ((4 * v119 + (v117 << 6)) >> 8));
  v111 = v120 - v118 - (16 * v119 - 16 * v117);
  v110 = v120 - 16 * v118 - ((unsigned __int8)(((_BYTE)v119 << 6) + 4 * v117) - (((v119 << 6) + 4 * v117) >> 8));
  v109 = result[4 * a2];
  v108 = result[12 * a2];
  v107 = result[20 * a2];
  v106 = result[28 * a2];
  v105 = v109 + 16 * v107 + (unsigned __int8)(4 * v108 + ((_BYTE)v106 << 6)) - ((4 * v108 + (v106 << 6)) >> 8);
  v104 = v109 - v107 + 16 * v108 - 16 * v106;
  v103 = v109 - 16 * v107 + (unsigned __int8)(((_BYTE)v108 << 6) + 4 * v106) - (((v108 << 6) + 4 * v106) >> 8);
  v102 = v109 + v107 - (v108 + v106);
  v101 = v109 + 16 * v107 - ((unsigned __int8)(4 * v108 + ((_BYTE)v106 << 6)) - ((4 * v108 + (v106 << 6)) >> 8));
  v100 = v109 - v107 - (16 * v108 - 16 * v106);
  v99 = v109 - 16 * v107 - ((unsigned __int8)(((_BYTE)v108 << 6) + 4 * v106) - (((v108 << 6) + 4 * v106) >> 8));
  *a3 = v120 + v118 + v119 + v117 + v109 + v107 + v108 + v106;
  a3[1] = 2 * v105 + v116;
  a3[2] = 4 * v104 + v115;
  a3[3] = 8 * v103 + v114;
  a3[4] = 16 * v102 + v113;
  a3[5] = 32 * v101 + v112;
  a3[6] = (v100 << 6) + v111;
  a3[7] = (v99 << 7) + v110;
  a3[8] = v120 + v118 + v119 + v117 - (v109 + v107 + v108 + v106);
  a3[9] = v116 - 2 * v105;
  a3[10] = v115 - 4 * v104;
  a3[11] = v114 - 8 * v103;
  a3[12] = v113 - 16 * v102;
  a3[13] = v112 - 32 * v101;
  a3[14] = v111 - (v100 << 6);
  a3[15] = v110 - (v99 << 7);
  v98 = result[2 * a2];
  v97 = result[10 * a2];
  v96 = result[18 * a2];
  v95 = result[26 * a2];
  v94 = v98 + 16 * v96 + (unsigned __int8)(4 * v97 + ((_BYTE)v95 << 6)) - ((4 * v97 + (v95 << 6)) >> 8);
  v93 = v98 - v96 + 16 * v97 - 16 * v95;
  v92 = v98 - 16 * v96 + (unsigned __int8)(((_BYTE)v97 << 6) + 4 * v95) - (((v97 << 6) + 4 * v95) >> 8);
  v91 = v98 + v96 - (v97 + v95);
  v90 = v98 + 16 * v96 - ((unsigned __int8)(4 * v97 + ((_BYTE)v95 << 6)) - ((4 * v97 + (v95 << 6)) >> 8));
  v89 = v98 - v96 - (16 * v97 - 16 * v95);
  v88 = v98 - 16 * v96 - ((unsigned __int8)(((_BYTE)v97 << 6) + 4 * v95) - (((v97 << 6) + 4 * v95) >> 8));
  v87 = result[6 * a2];
  v86 = result[14 * a2];
  v85 = result[22 * a2];
  v84 = result[30 * a2];
  v83 = v87 + 16 * v85 + (unsigned __int8)(4 * v86 + ((_BYTE)v84 << 6)) - ((4 * v86 + (v84 << 6)) >> 8);
  v82 = v87 - v85 + 16 * v86 - 16 * v84;
  v81 = v87 - 16 * v85 + (unsigned __int8)(((_BYTE)v86 << 6) + 4 * v84) - (((v86 << 6) + 4 * v84) >> 8);
  v80 = v87 + v85 - (v86 + v84);
  v79 = v87 + 16 * v85 - ((unsigned __int8)(4 * v86 + ((_BYTE)v84 << 6)) - ((4 * v86 + (v84 << 6)) >> 8));
  v78 = v87 - v85 - (16 * v86 - 16 * v84);
  v77 = v87 - 16 * v85 - ((unsigned __int8)(((_BYTE)v86 << 6) + 4 * v84) - (((v86 << 6) + 4 * v84) >> 8));
  a3[16] = v98 + v96 + v97 + v95 + v87 + v85 + v86 + v84;
  a3[17] = 2 * v83 + v94;
  a3[18] = 4 * v82 + v93;
  a3[19] = 8 * v81 + v92;
  a3[20] = 16 * v80 + v91;
  a3[21] = 32 * v79 + v90;
  a3[22] = (v78 << 6) + v89;
  a3[23] = (v77 << 7) + v88;
  a3[24] = v98 + v96 + v97 + v95 - (v87 + v85 + v86 + v84);
  a3[25] = v94 - 2 * v83;
  a3[26] = v93 - 4 * v82;
  a3[27] = v92 - 8 * v81;
  a3[28] = v91 - 16 * v80;
  a3[29] = v90 - 32 * v79;
  a3[30] = v89 - (v78 << 6);
  a3[31] = v88 - (v77 << 7);
  v72 = *a3;
  v71 = a3[16];
  *a3 += v71;
  a3[16] = v72 - v71;
  v125 = 0;
  for ( i = 0; ; a3[i + 16] = v73 - v67 )
  {
    v74 = a3[i + 1];
    v68 = (unsigned __int16)(a3[i + 17] * dword_585DD8[v125 + 8]) + ((a3[i + 17] * dword_585DD8[v125 + 8]) >> 16);
    a3[i + 1] = v74 + v68;
    a3[i + 17] = v74 - v68;
    v75 = a3[i + 2];
    v69 = (unsigned __int16)(a3[i + 18] * dword_585DD8[v125 + 16]) + ((a3[i + 18] * dword_585DD8[v125 + 16]) >> 16);
    a3[i + 2] = v75 + v69;
    a3[i + 18] = v75 - v69;
    v76 = a3[i + 3];
    v70 = (unsigned __int16)(a3[i + 19] * dword_585DD8[v125 + 24]) + ((a3[i + 19] * dword_585DD8[v125 + 24]) >> 16);
    a3[i + 3] = v76 + v70;
    a3[i + 19] = v76 - v70;
    i += 4;
    v125 += 32;
    if ( i > 0xF )
      break;
    v73 = a3[i];
    v67 = (unsigned __int16)(a3[i + 16] * dword_585DD8[v125]) + ((a3[i + 16] * dword_585DD8[v125]) >> 16);
    a3[i] = v73 + v67;
  }
  v66 = result[a2];
  v65 = result[9 * a2];
  v64 = result[17 * a2];
  v63 = result[25 * a2];
  v62 = v66 + 16 * v64 + (unsigned __int8)(4 * v65 + ((_BYTE)v63 << 6)) - ((4 * v65 + (v63 << 6)) >> 8);
  v61 = v66 - v64 + 16 * v65 - 16 * v63;
  v60 = v66 - 16 * v64 + (unsigned __int8)(((_BYTE)v65 << 6) + 4 * v63) - (((v65 << 6) + 4 * v63) >> 8);
  v59 = v66 + v64 - (v65 + v63);
  v58 = v66 + 16 * v64 - ((unsigned __int8)(4 * v65 + ((_BYTE)v63 << 6)) - ((4 * v65 + (v63 << 6)) >> 8));
  v57 = v66 - v64 - (16 * v65 - 16 * v63);
  v56 = v66 - 16 * v64 - ((unsigned __int8)(((_BYTE)v65 << 6) + 4 * v63) - (((v65 << 6) + 4 * v63) >> 8));
  v55 = result[5 * a2];
  v54 = result[13 * a2];
  v53 = result[21 * a2];
  v52 = result[29 * a2];
  v51 = v55 + 16 * v53 + (unsigned __int8)(4 * v54 + ((_BYTE)v52 << 6)) - ((4 * v54 + (v52 << 6)) >> 8);
  v50 = v55 - v53 + 16 * v54 - 16 * v52;
  v49 = v55 - 16 * v53 + (unsigned __int8)(((_BYTE)v54 << 6) + 4 * v52) - (((v54 << 6) + 4 * v52) >> 8);
  v48 = v55 + v53 - (v54 + v52);
  v47 = v55 + 16 * v53 - ((unsigned __int8)(4 * v54 + ((_BYTE)v52 << 6)) - ((4 * v54 + (v52 << 6)) >> 8));
  v46 = v55 - v53 - (16 * v54 - 16 * v52);
  v45 = v55 - 16 * v53 - ((unsigned __int8)(((_BYTE)v54 << 6) + 4 * v52) - (((v54 << 6) + 4 * v52) >> 8));
  a3[32] = v66 + v64 + v65 + v63 + v55 + v53 + v54 + v52;
  a3[33] = 2 * v51 + v62;
  a3[34] = 4 * v50 + v61;
  a3[35] = 8 * v49 + v60;
  a3[36] = 16 * v48 + v59;
  a3[37] = 32 * v47 + v58;
  a3[38] = (v46 << 6) + v57;
  a3[39] = (v45 << 7) + v56;
  a3[40] = v66 + v64 + v65 + v63 - (v55 + v53 + v54 + v52);
  a3[41] = v62 - 2 * v51;
  a3[42] = v61 - 4 * v50;
  a3[43] = v60 - 8 * v49;
  a3[44] = v59 - 16 * v48;
  a3[45] = v58 - 32 * v47;
  a3[46] = v57 - (v46 << 6);
  a3[47] = v56 - (v45 << 7);
  v44 = result[3 * a2];
  v43 = result[11 * a2];
  v42 = result[19 * a2];
  v41 = result[27 * a2];
  v40 = v44 + 16 * v42 + (unsigned __int8)(4 * v43 + ((_BYTE)v41 << 6)) - ((4 * v43 + (v41 << 6)) >> 8);
  v39 = v44 - v42 + 16 * v43 - 16 * v41;
  v38 = v44 - 16 * v42 + (unsigned __int8)(((_BYTE)v43 << 6) + 4 * v41) - (((v43 << 6) + 4 * v41) >> 8);
  v37 = v44 + v42 - (v43 + v41);
  v36 = v44 + 16 * v42 - ((unsigned __int8)(4 * v43 + ((_BYTE)v41 << 6)) - ((4 * v43 + (v41 << 6)) >> 8));
  v35 = v44 - v42 - (16 * v43 - 16 * v41);
  v34 = v44 - 16 * v42 - ((unsigned __int8)(((_BYTE)v43 << 6) + 4 * v41) - (((v43 << 6) + 4 * v41) >> 8));
  v33 = result[7 * a2];
  v32 = result[15 * a2];
  v31 = result[23 * a2];
  v30 = result[31 * a2];
  v29 = v33 + 16 * v31 + (unsigned __int8)(4 * v32 + ((_BYTE)v30 << 6)) - ((4 * v32 + (v30 << 6)) >> 8);
  v28 = v33 - v31 + 16 * v32 - 16 * v30;
  v27 = v33 - 16 * v31 + (unsigned __int8)(((_BYTE)v32 << 6) + 4 * v30) - (((v32 << 6) + 4 * v30) >> 8);
  v26 = v33 + v31 - (v32 + v30);
  v25 = v33 + 16 * v31 - ((unsigned __int8)(4 * v32 + ((_BYTE)v30 << 6)) - ((4 * v32 + (v30 << 6)) >> 8));
  v24 = v33 - v31 - (16 * v32 - 16 * v30);
  v23 = v33 - 16 * v31 - ((unsigned __int8)(((_BYTE)v32 << 6) + 4 * v30) - (((v32 << 6) + 4 * v30) >> 8));
  a3[48] = v44 + v42 + v43 + v41 + v33 + v31 + v32 + v30;
  a3[49] = 2 * v29 + v40;
  a3[50] = 4 * v28 + v39;
  a3[51] = 8 * v27 + v38;
  a3[52] = 16 * v26 + v37;
  a3[53] = 32 * v25 + v36;
  a3[54] = (v24 << 6) + v35;
  a3[55] = (v23 << 7) + v34;
  a3[56] = v44 + v42 + v43 + v41 - (v33 + v31 + v32 + v30);
  a3[57] = v40 - 2 * v29;
  a3[58] = v39 - 4 * v28;
  a3[59] = v38 - 8 * v27;
  a3[60] = v37 - 16 * v26;
  a3[61] = v36 - 32 * v25;
  a3[62] = v35 - (v24 << 6);
  a3[63] = v34 - (v23 << 7);
  v18 = a3[32];
  v17 = a3[48];
  a3[32] = v18 + v17;
  a3[48] = v18 - v17;
  v123 = 0;
  for ( j = 0; ; a3[j + 48] = v19 - v13 )
  {
    v20 = a3[j + 33];
    v14 = (unsigned __int16)(a3[j + 49] * dword_585DD8[v123 + 8]) + ((a3[j + 49] * dword_585DD8[v123 + 8]) >> 16);
    a3[j + 33] = v20 + v14;
    a3[j + 49] = v20 - v14;
    v21 = a3[j + 34];
    v15 = (unsigned __int16)(a3[j + 50] * dword_585DD8[v123 + 16]) + ((a3[j + 50] * dword_585DD8[v123 + 16]) >> 16);
    a3[j + 34] = v21 + v15;
    a3[j + 50] = v21 - v15;
    v22 = a3[j + 35];
    v16 = (unsigned __int16)(a3[j + 51] * dword_585DD8[v123 + 24]) + ((a3[j + 51] * dword_585DD8[v123 + 24]) >> 16);
    a3[j + 35] = v22 + v16;
    a3[j + 51] = v22 - v16;
    j += 4;
    v123 += 32;
    if ( j > 0xF )
      break;
    v19 = a3[j + 32];
    v13 = (unsigned __int16)(a3[j + 48] * dword_585DD8[v123]) + ((a3[j + 48] * dword_585DD8[v123]) >> 16);
    a3[j + 32] = v19 + v13;
  }
  v8 = *a3;
  v7 = a3[32];
  *a3 += v7;
  a3[32] = v8 - v7;
  v121 = 0;
  for ( k = 0; ; a3[k + 32] = v9 - v3 )
  {
    v10 = a3[k + 1];
    v4 = (unsigned __int16)(a3[k + 33] * dword_585DD8[v121 + 4]) + ((a3[k + 33] * dword_585DD8[v121 + 4]) >> 16);
    a3[k + 1] = v10 + v4;
    a3[k + 33] = v10 - v4;
    v11 = a3[k + 2];
    v5 = (unsigned __int16)(a3[k + 34] * dword_585DD8[v121 + 8]) + ((a3[k + 34] * dword_585DD8[v121 + 8]) >> 16);
    a3[k + 2] = v11 + v5;
    a3[k + 34] = v11 - v5;
    v12 = a3[k + 3];
    v6 = (unsigned __int16)(a3[k + 35] * dword_585DD8[v121 + 12]) + ((a3[k + 35] * dword_585DD8[v121 + 12]) >> 16);
    a3[k + 3] = v12 + v6;
    a3[k + 35] = v12 - v6;
    k += 4;
    v121 += 16;
    if ( k > 0x1F )
      break;
    v9 = a3[k];
    v3 = (unsigned __int16)(a3[k + 32] * dword_585DD8[v121]) + ((a3[k + 32] * dword_585DD8[v121]) >> 16);
    a3[k] = v9 + v3;
  }
  return result;
}
