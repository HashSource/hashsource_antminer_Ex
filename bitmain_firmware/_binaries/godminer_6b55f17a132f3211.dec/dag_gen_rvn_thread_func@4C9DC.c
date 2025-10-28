void __noreturn dag_gen_rvn_thread_func()
{
  int v0; // r4
  int v1; // r0
  __int64 v2; // r0
  _DWORD *v3; // r2
  int *v4; // r3
  _DWORD *v5; // r5
  char *v6; // r6
  _DWORD *v7; // r7
  unsigned int v8; // r0
  int v9; // t1
  int v10; // r1
  unsigned int v11; // r0
  int v12; // t1
  int v13; // r1
  int v14; // r4
  int v15; // r9
  char v16; // r1
  char v17; // r1
  int v18; // r12
  unsigned int v19; // r3
  char v20; // r3
  _DWORD *v21; // r2
  char v22; // r3
  int v23; // r6
  int v24; // r5
  unsigned int v25; // r0
  unsigned int v26; // r1
  char v27; // r3
  char v28; // r3
  int v29; // r0
  unsigned int v30; // r5
  unsigned int v31; // r3
  unsigned int v32; // r5
  unsigned int v33; // r0
  unsigned int v34; // lr
  char v35; // r1
  int v36; // r0
  char v37; // r1
  char v38; // r2
  int v39; // r3
  int v40; // r6
  int v41; // r9
  int v42; // r8
  char v43; // r7
  unsigned int v44; // r0
  char v45; // lr
  int v46; // r12
  _DWORD *v47; // r12
  unsigned int v48; // r3
  int v49; // r0
  _DWORD *v50; // r6
  int v51; // r0
  int *v52; // r5
  int v53; // r4
  int v54; // r0
  int v55; // t1
  int v56; // r7
  int v57; // r8
  int v58; // r0
  int v59; // r0
  unsigned int v60; // r1
  char v61; // [sp+10h] [bp-D0h]
  unsigned int v62; // [sp+10h] [bp-D0h]
  int v63; // [sp+10h] [bp-D0h]
  unsigned int v64; // [sp+18h] [bp-C8h]
  unsigned int v65; // [sp+18h] [bp-C8h]
  int v66; // [sp+1Ch] [bp-C4h]
  unsigned int v67; // [sp+1Ch] [bp-C4h]
  int v68; // [sp+20h] [bp-C0h]
  void (__fastcall *v69)(int, _DWORD, int, int); // [sp+20h] [bp-C0h]
  int v70; // [sp+24h] [bp-BCh]
  int v71; // [sp+24h] [bp-BCh]
  int v72; // [sp+28h] [bp-B8h]
  int v73; // [sp+30h] [bp-B0h]
  int v74; // [sp+34h] [bp-ACh]
  int v75; // [sp+38h] [bp-A8h]
  int v76; // [sp+3Ch] [bp-A4h]
  int v77; // [sp+40h] [bp-A0h]
  int v78; // [sp+44h] [bp-9Ch]
  int v79; // [sp+48h] [bp-98h]
  int v80; // [sp+4Ch] [bp-94h]
  int v81; // [sp+50h] [bp-90h]
  int v82; // [sp+54h] [bp-8Ch]
  int v83; // [sp+58h] [bp-88h]
  int v84; // [sp+5Ch] [bp-84h]
  int v85; // [sp+60h] [bp-80h]
  int v86; // [sp+68h] [bp-78h]
  int v87; // [sp+6Ch] [bp-74h]
  int v88; // [sp+70h] [bp-70h]
  int v89; // [sp+74h] [bp-6Ch]
  int v90; // [sp+78h] [bp-68h]
  int v91; // [sp+7Ch] [bp-64h]
  int all_created_runtime; // [sp+80h] [bp-60h]
  int v93; // [sp+84h] [bp-5Ch]
  int v94; // [sp+88h] [bp-58h]
  __int64 v95; // [sp+90h] [bp-50h]
  unsigned int v96; // [sp+ACh] [bp-34h] BYREF
  int v97; // [sp+B0h] [bp-30h] BYREF
  int v98; // [sp+B4h] [bp-2Ch]
  int v99; // [sp+B8h] [bp-28h]
  int v100; // [sp+BCh] [bp-24h]
  _DWORD s[8]; // [sp+C0h] [bp-20h] BYREF
  int v102; // [sp+E0h] [bp+0h] BYREF
  _DWORD v103[30]; // [sp+E4h] [bp+4h] BYREF
  int v104; // [sp+15Ch] [bp+7Ch] BYREF
  _DWORD v105[32]; // [sp+160h] [bp+80h] BYREF
  char v106; // [sp+1E0h] [bp+100h] BYREF

  while ( 1 )
  {
    do
    {
      do
      {
        v0 = 0;
        memset(s, 0, sizeof(s));
        get_cur_seed_rvn(s);
        v96 = 0;
        all_created_runtime = get_all_created_runtime(&v96);
      }
      while ( !*(_QWORD *)&dword_165FF0 );
    }
    while ( *(_QWORD *)&dword_165FF0 == *(_QWORD *)&dword_165FF8 );
    V_LOCK(dword_165FF0);
    v1 = logfmt_raw((int)v105, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/dhash_content/rvn/rvn_dhash_common.c",
      163,
      "dag_gen_rvn_thread_func",
      23,
      353,
      60,
      v105);
    v95 = *(_QWORD *)&dword_165FF0;
    v2 = sub_12232C(dword_165FF0, dword_165FF4, 3, 0);
    v3 = &s[7];
    v4 = &v104;
    v97 = 16777619 * (v2 ^ 0x811C9DC5);
    v98 = 16777619 * (v97 ^ HIDWORD(v2));
    v99 = 16777619 * (v2 ^ v98);
    v100 = 16777619 * (HIDWORD(v2) ^ v99);
    do
    {
      v3[1] = v0;
      ++v3;
      v4[1] = v0;
      ++v4;
      ++v0;
    }
    while ( v0 != 32 );
    v5 = v105;
    v6 = &v106;
    v7 = v103;
    do
    {
      v8 = sub_4C718(&v97);
      v9 = *--v5;
      sub_121A2C(v8, v0);
      *v5 = v103[v10 - 1];
      v103[v10 - 1] = v9;
      v11 = sub_4C718(&v97);
      v12 = *((_DWORD *)v6 - 1);
      v6 -= 4;
      sub_121A2C(v11, v0--);
      *(_DWORD *)v6 = v105[v13];
      v105[v13] = v12;
    }
    while ( v103 != v5 );
    v14 = 0;
    v94 = 0;
    v15 = 0;
    v66 = 0;
    v93 = 0;
    v72 = 0;
    v77 = 0;
    v89 = 0;
    v76 = 0;
    v82 = 0;
    v87 = 0;
    v74 = 0;
    v84 = 0;
    v88 = 0;
    v75 = 0;
    v83 = 0;
    v86 = 0;
    v73 = 0;
    v85 = 0;
    v78 = 0;
    v90 = 0;
    v68 = 0;
    v79 = 0;
    v91 = 0;
    v80 = 0;
    v81 = 0;
    v70 = 0;
    do
    {
      while ( 1 )
      {
        v21 = &v105[v15 & 0x1F];
        v22 = v15 + 1;
        if ( v14 > 10 )
        {
          LOBYTE(v7) = 4 * v14;
          ++v15;
        }
        v23 = *(v21 - 32);
        if ( v14 <= 10 )
        {
          v61 = v22;
          v15 += 2;
          v24 = v105[v70 & 0x1F];
          v25 = sub_4C718(&v97);
          ++v70;
          LOBYTE(v7) = 4 * v14;
          v68 |= (v25 & 3) << (2 * v14);
          v26 = HIWORD(v25)
              - 31
              * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v25)) >> 32)
                              + ((unsigned int)(HIWORD(v25) - ((138547333 * (unsigned __int64)HIWORD(v25)) >> 32)) >> 1)) >> 4)
              + 1;
          v27 = 5 * v14;
          if ( v14 <= 5 )
          {
            v36 = v91 | (v23 << v27);
            v23 = v103[(v61 & 0x1F) - 1];
            v91 = v36;
            v81 |= v24 << v27;
            v90 |= v26 << v27;
          }
          else
          {
            v28 = v27 - 30;
            v29 = v79 | (v23 << v28);
            v23 = v103[(v61 & 0x1F) - 1];
            v79 = v29;
            v80 |= v24 << v28;
            v78 |= v26 << v28;
          }
        }
        v30 = sub_4C718(&v97) % 0x3E0;
        v31 = v30 >> 5;
        v32 = v30 & 0x1F;
        if ( v32 <= v31 )
          ++v31;
        v64 = v31;
        v62 = sub_4C718(&v97);
        v33 = sub_4C718(&v97);
        v34 = HIWORD(v33)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v33)) >> 32)
                            + ((unsigned int)(HIWORD(v33) - ((138547333 * (unsigned __int64)HIWORD(v33)) >> 32)) >> 1)) >> 4)
            + 1;
        if ( v14 <= 5 )
        {
          v18 = v33 & 3;
          v83 |= v32 << ((_BYTE)v7 + v14);
          v84 |= v64 << ((_BYTE)v7 + v14);
          v82 |= v23 << ((_BYTE)v7 + v14);
          v85 |= v34 << ((_BYTE)v7 + v14);
          v19 = v62 % 0xB;
LABEL_23:
          v77 |= v19 << (char)v7;
          goto LABEL_13;
        }
        v16 = (_BYTE)v7 + v14;
        if ( v14 > 11 )
        {
          v35 = v16 - 60;
          v88 |= v32 << v35;
          v87 |= v64 << v35;
          v89 |= v23 << v35;
          v86 |= v34 << v35;
        }
        else
        {
          v17 = v16 - 30;
          v75 |= v32 << v17;
          v74 |= v64 << v17;
          v76 |= v23 << v17;
          v73 |= v34 << v17;
        }
        v18 = v33 & 3;
        v19 = v62 % 0xB;
        if ( v14 <= 7 )
          goto LABEL_23;
        if ( v14 > 15 )
          break;
        v72 |= v19 << (4 * (v14 - 8));
LABEL_13:
        v20 = 2 * v14++;
        v66 |= v18 << v20;
        if ( v14 == 18 )
          goto LABEL_27;
      }
      v37 = 4 * (v14 - 16);
      v38 = 2 * (v14++ - 16);
      v93 |= v19 << v37;
      v94 |= v18 << v38;
    }
    while ( v14 != 18 );
LABEL_27:
    v39 = v15;
    v63 = 0;
    v40 = 0;
    v71 = 0;
    v41 = 0;
    v65 = 0;
    v42 = v39;
    while ( 1 )
    {
      v43 = 5 * v40;
      v44 = sub_4C718(&v97);
      v45 = 2 * v40++;
      v41 |= (v44 & 3) << v45;
      v46 = v42++ & 0x1F;
      v47 = &v105[v46];
      v63 |= v71 << v43;
      v48 = v65
          | ((HIWORD(v44)
            - 31
            * ((unsigned int)(((138547333 * (unsigned __int64)HIWORD(v44)) >> 32)
                            + ((unsigned int)(HIWORD(v44) - ((138547333 * (unsigned __int64)HIWORD(v44)) >> 32)) >> 1)) >> 4)
            + 1) << v43);
      v65 = v48;
      if ( v40 == 4 )
        break;
      v71 = *(v47 - 32);
    }
    v102 = v81;
    v103[1] = v91;
    v103[0] = v80;
    v103[2] = v79;
    v103[3] = v68;
    v103[4] = v90;
    v103[5] = v78;
    v103[6] = v85;
    v103[7] = v73;
    v103[8] = v86;
    v103[9] = v83;
    v103[10] = v75;
    v103[11] = v88;
    v103[12] = v84;
    v103[13] = v74;
    v103[14] = v87;
    v103[24] = v41;
    v103[15] = v82;
    v103[25] = v48;
    v103[16] = v76;
    v103[17] = v89;
    v103[18] = v77;
    v103[19] = v72;
    v103[20] = v93;
    v103[21] = v66;
    v103[22] = v94;
    v103[23] = v63;
    *(_QWORD *)&dword_165FF8 = v95;
    if ( v96 )
    {
      v49 = all_created_runtime;
      v67 = 0;
      v50 = (_DWORD *)(all_created_runtime - 4);
      do
      {
        V_LOCK(v49);
        v51 = logfmt_raw((int)v105, 0x1000u);
        V_UNLOCK(v51);
        v52 = &v102;
        v53 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
          163,
          "dag_gen_rvn_thread_func",
          23,
          362,
          40,
          v105);
        v54 = sub_12232C(dword_165FF0, dword_165FF4, 7500, 0);
        v55 = v50[1];
        ++v50;
        v56 = (__int64)qword_135EF8[v54] >> 8;
        v57 = HIDWORD(qword_135EF8[v54]) >> 8;
        v69 = *(void (__fastcall **)(int, _DWORD, int, int))(v55 + 12);
        printf("dag_load: %llx\n", qword_135EF8[v54] >> 8);
        v69(v55, v69, v56, v57);
        while ( 1 )
        {
          ++v53;
          v58 = (*(int (**)(void))(*v50 + 8))();
          if ( v53 == 27 )
            break;
          ++v52;
        }
        V_LOCK(v58);
        ++v67;
        v59 = logfmt_raw((int)v105, 0x1000u);
        V_UNLOCK(v59);
        v49 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/dhash_content/rvn/rvn_dhash_common.c",
                163,
                "dag_gen_rvn_thread_func",
                23,
                368,
                40,
                v105);
        v60 = v96;
        *(_BYTE *)(*v50 + 219) = 1;
      }
      while ( v60 > v67 );
    }
  }
}
