int *__fastcall ethash_keccakf800(int *result)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int *v10; // [sp+4h] [bp-100h]
  int v11; // [sp+Ch] [bp-F8h]
  int v12; // [sp+10h] [bp-F4h]
  int v13; // [sp+14h] [bp-F0h]
  int v14; // [sp+18h] [bp-ECh]
  int v15; // [sp+1Ch] [bp-E8h]
  int v16; // [sp+20h] [bp-E4h]
  int v17; // [sp+24h] [bp-E0h]
  int v18; // [sp+28h] [bp-DCh]
  int v19; // [sp+2Ch] [bp-D8h]
  int v20; // [sp+30h] [bp-D4h]
  int v21; // [sp+34h] [bp-D0h]
  int v22; // [sp+38h] [bp-CCh]
  int v23; // [sp+3Ch] [bp-C8h]
  int v24; // [sp+40h] [bp-C4h]
  int v25; // [sp+44h] [bp-C0h]
  int v26; // [sp+48h] [bp-BCh]
  int v27; // [sp+4Ch] [bp-B8h]
  int v28; // [sp+50h] [bp-B4h]
  int v29; // [sp+54h] [bp-B0h]
  int v30; // [sp+58h] [bp-ACh]
  int v31; // [sp+5Ch] [bp-A8h]
  int v32; // [sp+60h] [bp-A4h]
  int v33; // [sp+64h] [bp-A0h]
  int v34; // [sp+68h] [bp-9Ch]
  int v35; // [sp+6Ch] [bp-98h]
  int v36; // [sp+70h] [bp-94h]
  int v37; // [sp+70h] [bp-94h]
  int v38; // [sp+74h] [bp-90h]
  int v39; // [sp+74h] [bp-90h]
  int v40; // [sp+78h] [bp-8Ch]
  int v41; // [sp+78h] [bp-8Ch]
  int v42; // [sp+7Ch] [bp-88h]
  int v43; // [sp+7Ch] [bp-88h]
  int v44; // [sp+80h] [bp-84h]
  int v45; // [sp+80h] [bp-84h]
  int v46; // [sp+84h] [bp-80h]
  int v47; // [sp+84h] [bp-80h]
  int v48; // [sp+88h] [bp-7Ch]
  int v49; // [sp+88h] [bp-7Ch]
  int v50; // [sp+88h] [bp-7Ch]
  int v51; // [sp+88h] [bp-7Ch]
  int v52; // [sp+88h] [bp-7Ch]
  int v53; // [sp+88h] [bp-7Ch]
  int v54; // [sp+88h] [bp-7Ch]
  int v55; // [sp+88h] [bp-7Ch]
  int v56; // [sp+88h] [bp-7Ch]
  int v57; // [sp+88h] [bp-7Ch]
  int v58; // [sp+88h] [bp-7Ch]
  int v59; // [sp+88h] [bp-7Ch]
  int v60; // [sp+8Ch] [bp-78h]
  int v61; // [sp+8Ch] [bp-78h]
  int v62; // [sp+8Ch] [bp-78h]
  int v63; // [sp+8Ch] [bp-78h]
  int v64; // [sp+8Ch] [bp-78h]
  int v65; // [sp+8Ch] [bp-78h]
  int v66; // [sp+8Ch] [bp-78h]
  int v67; // [sp+8Ch] [bp-78h]
  int v68; // [sp+8Ch] [bp-78h]
  int v69; // [sp+8Ch] [bp-78h]
  int v70; // [sp+8Ch] [bp-78h]
  int v71; // [sp+8Ch] [bp-78h]
  int v72; // [sp+90h] [bp-74h]
  int v73; // [sp+90h] [bp-74h]
  int v74; // [sp+90h] [bp-74h]
  int v75; // [sp+90h] [bp-74h]
  int v76; // [sp+90h] [bp-74h]
  int v77; // [sp+90h] [bp-74h]
  int v78; // [sp+90h] [bp-74h]
  int v79; // [sp+90h] [bp-74h]
  int v80; // [sp+90h] [bp-74h]
  int v81; // [sp+90h] [bp-74h]
  int v82; // [sp+90h] [bp-74h]
  int v83; // [sp+94h] [bp-70h]
  int v84; // [sp+94h] [bp-70h]
  int v85; // [sp+94h] [bp-70h]
  int v86; // [sp+94h] [bp-70h]
  int v87; // [sp+94h] [bp-70h]
  int v88; // [sp+94h] [bp-70h]
  int v89; // [sp+94h] [bp-70h]
  int v90; // [sp+94h] [bp-70h]
  int v91; // [sp+94h] [bp-70h]
  int v92; // [sp+94h] [bp-70h]
  int v93; // [sp+98h] [bp-6Ch]
  int v94; // [sp+9Ch] [bp-68h]
  int v95; // [sp+A0h] [bp-64h]
  int v96; // [sp+A4h] [bp-60h]
  int v97; // [sp+A8h] [bp-5Ch]
  int v98; // [sp+ACh] [bp-58h]
  int v99; // [sp+B0h] [bp-54h]
  int v100; // [sp+B4h] [bp-50h]
  int v101; // [sp+B8h] [bp-4Ch]
  int v102; // [sp+BCh] [bp-48h]
  int v103; // [sp+C0h] [bp-44h]
  int v104; // [sp+C4h] [bp-40h]
  int v105; // [sp+C8h] [bp-3Ch]
  int v106; // [sp+CCh] [bp-38h]
  int v107; // [sp+D0h] [bp-34h]
  int v108; // [sp+D4h] [bp-30h]
  int v109; // [sp+D8h] [bp-2Ch]
  int v110; // [sp+DCh] [bp-28h]
  int v111; // [sp+E0h] [bp-24h]
  int v112; // [sp+E4h] [bp-20h]
  int v113; // [sp+E8h] [bp-1Ch]
  int v114; // [sp+ECh] [bp-18h]
  int v115; // [sp+F0h] [bp-14h]
  int v116; // [sp+F4h] [bp-10h]
  int v117; // [sp+F8h] [bp-Ch]
  int i; // [sp+FCh] [bp-8h]

  v10 = result;
  v117 = *result;
  v116 = result[1];
  v115 = result[2];
  v114 = result[3];
  v113 = result[4];
  v112 = result[5];
  v111 = result[6];
  v110 = result[7];
  v109 = result[8];
  v108 = result[9];
  v107 = result[10];
  v106 = result[11];
  v105 = result[12];
  v104 = result[13];
  v103 = result[14];
  v102 = result[15];
  v101 = result[16];
  v100 = result[17];
  v99 = result[18];
  v98 = result[19];
  v97 = result[20];
  v96 = result[21];
  v95 = result[22];
  v94 = result[23];
  v93 = result[24];
  for ( i = 0; i <= 21; i += 2 )
  {
    v83 = v102 ^ v117 ^ v112 ^ v107 ^ v97;
    v60 = v100 ^ v115 ^ v110 ^ v105 ^ v95;
    v48 = v99 ^ v114 ^ v109 ^ v104 ^ v94;
    v46 = v98 ^ v113 ^ v108 ^ v103 ^ v93;
    v44 = v46 ^ sub_1BD1D0(v101 ^ v116 ^ v111 ^ v106 ^ v96, 1);
    v42 = v83 ^ sub_1BD1D0(v60, 1);
    v40 = v101 ^ v116 ^ v111 ^ v106 ^ v96 ^ sub_1BD1D0(v48, 1);
    v38 = v60 ^ sub_1BD1D0(v46, 1);
    v36 = v48 ^ sub_1BD1D0(v83, 1);
    v72 = sub_1BD1D0(v42 ^ v111, 12);
    v61 = sub_1BD1D0(v40 ^ v105, 11);
    v49 = sub_1BD1D0(v38 ^ v99, 21);
    v1 = sub_1BD1D0(v36 ^ v93, 14);
    v35 = dword_55FBFC[i] ^ ~v72 & v61 ^ v44 ^ v117;
    v34 = v49 & ~v61 ^ v72;
    v33 = v1 & ~v49 ^ v61;
    v32 = (v44 ^ v117) & ~v1 ^ v49;
    v31 = v72 & ~(v44 ^ v117) ^ v1;
    v84 = sub_1BD1D0(v38 ^ v114, 28);
    v73 = sub_1BD1D0(v36 ^ v108, 20);
    v62 = sub_1BD1D0(v44 ^ v107, 3);
    v50 = sub_1BD1D0(v42 ^ v101, 13);
    v2 = sub_1BD1D0(v40 ^ v95, 29);
    v30 = v62 & ~v73 ^ v84;
    v29 = v50 & ~v62 ^ v73;
    v28 = v2 & ~v50 ^ v62;
    v27 = v84 & ~v2 ^ v50;
    v26 = v73 & ~v84 ^ v2;
    v85 = sub_1BD1D0(v42 ^ v116, 1);
    v74 = sub_1BD1D0(v40 ^ v110, 6);
    v63 = sub_1BD1D0(v38 ^ v104, 25);
    v51 = sub_1BD1D0(v36 ^ v98, 8);
    v3 = sub_1BD1D0(v44 ^ v97, 18);
    v25 = v63 & ~v74 ^ v85;
    v24 = v51 & ~v63 ^ v74;
    v23 = v3 & ~v51 ^ v63;
    v22 = v85 & ~v3 ^ v51;
    v21 = v74 & ~v85 ^ v3;
    v86 = sub_1BD1D0(v36 ^ v113, 27);
    v75 = sub_1BD1D0(v44 ^ v112, 4);
    v64 = sub_1BD1D0(v42 ^ v106, 10);
    v52 = sub_1BD1D0(v40 ^ v100, 15);
    v4 = sub_1BD1D0(v38 ^ v94, 24);
    v20 = v64 & ~v75 ^ v86;
    v19 = v52 & ~v64 ^ v75;
    v18 = v4 & ~v52 ^ v64;
    v17 = v86 & ~v4 ^ v52;
    v16 = v75 & ~v86 ^ v4;
    v87 = sub_1BD1D0(v40 ^ v115, 30);
    v76 = sub_1BD1D0(v38 ^ v109, 23);
    v65 = sub_1BD1D0(v36 ^ v103, 7);
    v53 = sub_1BD1D0(v44 ^ v102, 9);
    v5 = sub_1BD1D0(v42 ^ v96, 2);
    v15 = v65 & ~v76 ^ v87;
    v14 = v53 & ~v65 ^ v76;
    v13 = v5 & ~v53 ^ v65;
    v12 = v87 & ~v5 ^ v53;
    v11 = v76 & ~v87 ^ v5;
    v88 = v20 ^ v35 ^ v30 ^ v25 ^ v15;
    v77 = v19 ^ v34 ^ v29 ^ v24 ^ v14;
    v66 = v18 ^ v33 ^ v28 ^ v23 ^ v13;
    v54 = v17 ^ v32 ^ v27 ^ v22 ^ v12;
    v47 = v16 ^ v31 ^ v26 ^ v21 ^ v11;
    v45 = v47 ^ sub_1BD1D0(v77, 1);
    v43 = v88 ^ sub_1BD1D0(v66, 1);
    v41 = v77 ^ sub_1BD1D0(v54, 1);
    v39 = v66 ^ sub_1BD1D0(v47, 1);
    v37 = v54 ^ sub_1BD1D0(v88, 1);
    v78 = sub_1BD1D0(v43 ^ v29, 12);
    v67 = sub_1BD1D0(v41 ^ v23, 11);
    v55 = sub_1BD1D0(v39 ^ v17, 21);
    v6 = sub_1BD1D0(v37 ^ v11, 14);
    v117 = dword_55FBFC[i + 1] ^ ~v78 & v67 ^ v45 ^ v35;
    v116 = v55 & ~v67 ^ v78;
    v115 = v6 & ~v55 ^ v67;
    v114 = (v45 ^ v35) & ~v6 ^ v55;
    v113 = v78 & ~(v45 ^ v35) ^ v6;
    v89 = sub_1BD1D0(v39 ^ v32, 28);
    v79 = sub_1BD1D0(v37 ^ v26, 20);
    v68 = sub_1BD1D0(v45 ^ v25, 3);
    v56 = sub_1BD1D0(v43 ^ v19, 13);
    v7 = sub_1BD1D0(v41 ^ v13, 29);
    v112 = v68 & ~v79 ^ v89;
    v111 = v56 & ~v68 ^ v79;
    v110 = v7 & ~v56 ^ v68;
    v109 = v89 & ~v7 ^ v56;
    v108 = v79 & ~v89 ^ v7;
    v90 = sub_1BD1D0(v43 ^ v34, 1);
    v80 = sub_1BD1D0(v41 ^ v28, 6);
    v69 = sub_1BD1D0(v39 ^ v22, 25);
    v57 = sub_1BD1D0(v37 ^ v16, 8);
    v8 = sub_1BD1D0(v45 ^ v15, 18);
    v107 = v69 & ~v80 ^ v90;
    v106 = v57 & ~v69 ^ v80;
    v105 = v8 & ~v57 ^ v69;
    v104 = v90 & ~v8 ^ v57;
    v103 = v80 & ~v90 ^ v8;
    v91 = sub_1BD1D0(v37 ^ v31, 27);
    v81 = sub_1BD1D0(v45 ^ v30, 4);
    v70 = sub_1BD1D0(v43 ^ v24, 10);
    v58 = sub_1BD1D0(v41 ^ v18, 15);
    v9 = sub_1BD1D0(v39 ^ v12, 24);
    v102 = v70 & ~v81 ^ v91;
    v101 = v58 & ~v70 ^ v81;
    v100 = v9 & ~v58 ^ v70;
    v99 = v91 & ~v9 ^ v58;
    v98 = v81 & ~v91 ^ v9;
    v92 = sub_1BD1D0(v41 ^ v33, 30);
    v82 = sub_1BD1D0(v39 ^ v27, 23);
    v71 = sub_1BD1D0(v37 ^ v21, 7);
    v59 = sub_1BD1D0(v45 ^ v20, 9);
    result = (int *)sub_1BD1D0(v43 ^ v14, 2);
    v97 = v71 & ~v82 ^ v92;
    v96 = v59 & ~v71 ^ v82;
    v95 = (unsigned int)result & ~v59 ^ v71;
    v94 = v92 & ~(unsigned int)result ^ v59;
    v93 = v82 & ~v92 ^ (unsigned int)result;
  }
  *v10 = v117;
  v10[1] = v116;
  v10[2] = v115;
  v10[3] = v114;
  v10[4] = v113;
  v10[5] = v112;
  v10[6] = v111;
  v10[7] = v110;
  v10[8] = v109;
  v10[9] = v108;
  v10[10] = v107;
  v10[11] = v106;
  v10[12] = v105;
  v10[13] = v104;
  v10[14] = v103;
  v10[15] = v102;
  v10[16] = v101;
  v10[17] = v100;
  v10[18] = v99;
  v10[19] = v98;
  v10[20] = v97;
  v10[21] = v96;
  v10[22] = v95;
  v10[23] = v94;
  v10[24] = v93;
  return result;
}
