int __fastcall hashboard_short_ltc_eth_2282(int a1, unsigned __int8 a2)
{
  int v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r5
  int v10; // r6
  int v11; // r0
  int v12; // r5
  int v13; // r6
  int v14; // r0
  int v15; // r3
  int v16; // r5
  int v17; // r6
  int v18; // r0
  int v19; // r5
  int v20; // r6
  int v21; // r0
  int v22; // r5
  int v23; // r6
  int v24; // r0
  int v25; // r5
  int v26; // r6
  int v27; // r0
  int v28; // r5
  int v29; // r6
  int v30; // r0
  int v31; // r3
  int v32; // r5
  int v33; // r6
  int v34; // r0
  int v38[32]; // [sp+40h] [bp-2FC94h] BYREF
  _BYTE v39[20]; // [sp+C0h] [bp-2FC14h] BYREF
  _BYTE v40[3092]; // [sp+10C0h] [bp-2EC14h] BYREF
  unsigned int v41[3]; // [sp+14940h] [bp-1B394h] BYREF
  struct timespec v42; // [sp+1494Ch] [bp-1B388h] BYREF
  _BYTE v43[109780]; // [sp+14954h] [bp-1B380h] BYREF
  _DWORD v44[7]; // [sp+2F628h] [bp-6ACh] BYREF
  int v45; // [sp+2F644h] [bp-690h]
  _DWORD v46[7]; // [sp+2F648h] [bp-68Ch] BYREF
  int v47; // [sp+2F664h] [bp-670h]
  _DWORD v48[7]; // [sp+2F668h] [bp-66Ch] BYREF
  int v49; // [sp+2F684h] [bp-650h]
  _DWORD v50[7]; // [sp+2F688h] [bp-64Ch] BYREF
  int v51; // [sp+2F6A4h] [bp-630h]
  _DWORD v52[7]; // [sp+2F6A8h] [bp-62Ch] BYREF
  int v53; // [sp+2F6C4h] [bp-610h]
  _DWORD v54[7]; // [sp+2F6C8h] [bp-60Ch] BYREF
  int v55; // [sp+2F6E4h] [bp-5F0h]
  _DWORD v56[7]; // [sp+2F6E8h] [bp-5ECh] BYREF
  int v57; // [sp+2F704h] [bp-5D0h]
  _DWORD v58[7]; // [sp+2F708h] [bp-5CCh] BYREF
  int v59; // [sp+2F724h] [bp-5B0h]
  _DWORD v60[7]; // [sp+2F728h] [bp-5ACh] BYREF
  int v61; // [sp+2F744h] [bp-590h]
  _DWORD v62[7]; // [sp+2F748h] [bp-58Ch] BYREF
  int v63; // [sp+2F764h] [bp-570h]
  _DWORD v64[7]; // [sp+2F768h] [bp-56Ch] BYREF
  int v65; // [sp+2F784h] [bp-550h]
  _DWORD v66[7]; // [sp+2F788h] [bp-54Ch] BYREF
  int v67; // [sp+2F7A4h] [bp-530h]
  _DWORD v68[7]; // [sp+2F7A8h] [bp-52Ch] BYREF
  int v69; // [sp+2F7C4h] [bp-510h]
  _DWORD v70[7]; // [sp+2F7C8h] [bp-50Ch] BYREF
  int v71; // [sp+2F7E4h] [bp-4F0h]
  _DWORD v72[7]; // [sp+2F7E8h] [bp-4ECh] BYREF
  int v73; // [sp+2F804h] [bp-4D0h]
  _DWORD v74[7]; // [sp+2F808h] [bp-4CCh] BYREF
  int v75; // [sp+2F824h] [bp-4B0h]
  _DWORD v76[7]; // [sp+2F828h] [bp-4ACh] BYREF
  int v77; // [sp+2F844h] [bp-490h]
  _DWORD v78[7]; // [sp+2F848h] [bp-48Ch] BYREF
  int v79; // [sp+2F864h] [bp-470h]
  _DWORD v80[7]; // [sp+2F868h] [bp-46Ch] BYREF
  int v81; // [sp+2F884h] [bp-450h]
  _DWORD v82[7]; // [sp+2F888h] [bp-44Ch] BYREF
  int v83; // [sp+2F8A4h] [bp-430h]
  _DWORD v84[7]; // [sp+2F8A8h] [bp-42Ch] BYREF
  int v85; // [sp+2F8C4h] [bp-410h]
  _DWORD v86[7]; // [sp+2F8C8h] [bp-40Ch] BYREF
  int v87; // [sp+2F8E4h] [bp-3F0h]
  _DWORD v88[7]; // [sp+2F8E8h] [bp-3ECh] BYREF
  int v89; // [sp+2F904h] [bp-3D0h]
  _DWORD v90[7]; // [sp+2F908h] [bp-3CCh] BYREF
  int v91; // [sp+2F924h] [bp-3B0h]
  _DWORD v92[7]; // [sp+2F928h] [bp-3ACh] BYREF
  int v93; // [sp+2F944h] [bp-390h]
  _DWORD v94[7]; // [sp+2F948h] [bp-38Ch] BYREF
  int v95; // [sp+2F964h] [bp-370h]
  _DWORD v96[7]; // [sp+2F968h] [bp-36Ch] BYREF
  int v97; // [sp+2F984h] [bp-350h]
  _DWORD v98[7]; // [sp+2F988h] [bp-34Ch] BYREF
  int v99; // [sp+2F9A4h] [bp-330h]
  _DWORD v100[7]; // [sp+2F9A8h] [bp-32Ch] BYREF
  int v101; // [sp+2F9C4h] [bp-310h]
  _DWORD v102[7]; // [sp+2F9C8h] [bp-30Ch] BYREF
  int v103; // [sp+2F9E4h] [bp-2F0h]
  _DWORD v104[7]; // [sp+2F9E8h] [bp-2ECh] BYREF
  int v105; // [sp+2FA04h] [bp-2D0h]
  _DWORD v106[7]; // [sp+2FA08h] [bp-2CCh] BYREF
  int v107; // [sp+2FA24h] [bp-2B0h]
  _DWORD v108[7]; // [sp+2FA28h] [bp-2ACh] BYREF
  int v109; // [sp+2FA44h] [bp-290h]
  _DWORD v110[7]; // [sp+2FA48h] [bp-28Ch] BYREF
  int v111; // [sp+2FA64h] [bp-270h]
  _DWORD v112[7]; // [sp+2FA68h] [bp-26Ch] BYREF
  int v113; // [sp+2FA84h] [bp-250h]
  _DWORD v114[7]; // [sp+2FA88h] [bp-24Ch] BYREF
  int v115; // [sp+2FAA4h] [bp-230h]
  _DWORD v116[7]; // [sp+2FAA8h] [bp-22Ch] BYREF
  int v117; // [sp+2FAC4h] [bp-210h]
  _DWORD v118[7]; // [sp+2FAC8h] [bp-20Ch] BYREF
  int v119; // [sp+2FAE4h] [bp-1F0h]
  _DWORD v120[7]; // [sp+2FAE8h] [bp-1ECh] BYREF
  int v121; // [sp+2FB04h] [bp-1D0h]
  _DWORD v122[7]; // [sp+2FB08h] [bp-1CCh] BYREF
  int v123; // [sp+2FB24h] [bp-1B0h]
  _DWORD v124[7]; // [sp+2FB28h] [bp-1ACh] BYREF
  int v125; // [sp+2FB44h] [bp-190h]
  _DWORD v126[7]; // [sp+2FB48h] [bp-18Ch] BYREF
  int v127; // [sp+2FB64h] [bp-170h]
  _DWORD v128[7]; // [sp+2FB68h] [bp-16Ch] BYREF
  int v129; // [sp+2FB84h] [bp-150h]
  int v130; // [sp+2FB8Ch] [bp-148h]
  unsigned int v131; // [sp+2FB90h] [bp-144h]
  int v132; // [sp+2FB94h] [bp-140h]
  int v133; // [sp+2FB98h] [bp-13Ch]
  int v134; // [sp+2FB9Ch] [bp-138h]
  unsigned int v135; // [sp+2FBA0h] [bp-134h]
  int v136; // [sp+2FBA4h] [bp-130h]
  unsigned int v137; // [sp+2FBA8h] [bp-12Ch]
  int v138; // [sp+2FBACh] [bp-128h]
  int v139; // [sp+2FBB0h] [bp-124h]
  int v140; // [sp+2FBB4h] [bp-120h]
  int v141; // [sp+2FBB8h] [bp-11Ch]
  int v142; // [sp+2FBBCh] [bp-118h]
  int v143; // [sp+2FBC0h] [bp-114h]
  int v144; // [sp+2FBC4h] [bp-110h]
  int v145; // [sp+2FBC8h] [bp-10Ch]
  unsigned int v146; // [sp+2FBCCh] [bp-108h]
  int v147; // [sp+2FBD0h] [bp-104h]
  int v148; // [sp+2FBD4h] [bp-100h]
  unsigned int v149; // [sp+2FBD8h] [bp-FCh]
  int v150; // [sp+2FBDCh] [bp-F8h]
  int v151; // [sp+2FBE0h] [bp-F4h]
  int v152; // [sp+2FBE4h] [bp-F0h]
  int v153; // [sp+2FBE8h] [bp-ECh]
  int v154; // [sp+2FBECh] [bp-E8h]
  int v155; // [sp+2FBF0h] [bp-E4h]
  unsigned int v156; // [sp+2FBF4h] [bp-E0h]
  int v157; // [sp+2FBF8h] [bp-DCh]
  unsigned int v158; // [sp+2FBFCh] [bp-D8h]
  int v159; // [sp+2FC00h] [bp-D4h]
  unsigned int v160; // [sp+2FC04h] [bp-D0h]
  int v161; // [sp+2FC08h] [bp-CCh]
  unsigned int v162; // [sp+2FC0Ch] [bp-C8h]
  int v163; // [sp+2FC10h] [bp-C4h]
  unsigned int v164; // [sp+2FC14h] [bp-C0h]
  int v165; // [sp+2FC18h] [bp-BCh]
  unsigned int v166; // [sp+2FC1Ch] [bp-B8h]
  int v167; // [sp+2FC20h] [bp-B4h]
  unsigned int v168; // [sp+2FC24h] [bp-B0h]
  int v169; // [sp+2FC28h] [bp-ACh]
  unsigned int v170; // [sp+2FC2Ch] [bp-A8h]
  int n; // [sp+2FC30h] [bp-A4h]
  int m; // [sp+2FC34h] [bp-A0h]
  int k; // [sp+2FC38h] [bp-9Ch]
  int j; // [sp+2FC3Ch] [bp-98h]
  int i; // [sp+2FC40h] [bp-94h]
  int ii; // [sp+2FC44h] [bp-90h]
  int jj; // [sp+2FC48h] [bp-8Ch]
  int kk; // [sp+2FC4Ch] [bp-88h]
  int mm; // [sp+2FC50h] [bp-84h]
  int i1; // [sp+2FC54h] [bp-80h]
  int v181; // [sp+2FC58h] [bp-7Ch]
  int nn; // [sp+2FC5Ch] [bp-78h]
  unsigned int v183; // [sp+2FC60h] [bp-74h]
  int i4; // [sp+2FC64h] [bp-70h]
  int v185; // [sp+2FC68h] [bp-6Ch]
  int i3; // [sp+2FC6Ch] [bp-68h]
  int i2; // [sp+2FC70h] [bp-64h]
  int v188; // [sp+2FC74h] [bp-60h]
  int i5; // [sp+2FC78h] [bp-5Ch]
  int i6; // [sp+2FC7Ch] [bp-58h]
  int i7; // [sp+2FC80h] [bp-54h]
  int i12; // [sp+2FC84h] [bp-50h]
  int i11; // [sp+2FC88h] [bp-4Ch]
  int i10; // [sp+2FC8Ch] [bp-48h]
  int i9; // [sp+2FC90h] [bp-44h]
  int i8; // [sp+2FC94h] [bp-40h]
  int i17; // [sp+2FC98h] [bp-3Ch]
  int i16; // [sp+2FC9Ch] [bp-38h]
  int i15; // [sp+2FCA0h] [bp-34h]
  int i14; // [sp+2FCA4h] [bp-30h]
  int i13; // [sp+2FCA8h] [bp-2Ch]
  int v202; // [sp+2FCACh] [bp-28h]
  int v203; // [sp+2FCB0h] [bp-24h]
  void *ptr; // [sp+2FCB4h] [bp-20h]
  _DWORD *v205; // [sp+2FCB8h] [bp-1Ch]
  _BYTE *v206; // [sp+2FCBCh] [bp-18h]

  V_LOCK();
  sub_FBD60((int)v44, *(int *)(a1 + 272));
  logfmt_raw(
    v40,
    0x1000u,
    0,
    v45,
    v44[0],
    v44[1],
    v44[2],
    v44[3],
    v44[4],
    v44[5],
    v44[6],
    v45,
    "%s..., bist_mode: %d",
    "hashboard_short_ltc_eth_2282",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "hashboard_short_ltc_eth_2282",
    28,
    5926,
    40,
    v40);
  v202 = 0;
  v203 = 0;
  memset(&v43[92500], 0, 0x4380u);
  v43[92500] = 3;
  memset(v43, 0, (size_t)&stru_16950.st_value);
  ptr = malloc(0x1440u);
  clock_gettime(1, &v42);
  if ( !*(_DWORD *)(a1 + 272) )
  {
    v205 = &unk_5BB67C;
    v206 = byte_59C08C;
  }
  if ( *(_DWORD *)(a1 + 272) == 1 )
  {
    v205 = &unk_7D767C;
    v206 = byte_5A040C;
  }
  if ( *(_DWORD *)(a1 + 272) == 2 )
  {
    v205 = &unk_9F367C;
    v206 = byte_5A478C;
  }
  sub_106BA8(a1, 68, 29);
  usleep(0x3E8u);
  sub_106BA8(a1, 68, 31);
  usleep(0x3E8u);
  sub_106D34(a1, 2, 167);
  usleep(0x3E8u);
  sub_106D34(a1, 2, 255);
  sram_mbist_eth_2282(a1);
  sub_106BA8(a1, 28, 1310720);
  sub_106BA8(a1, 100, 1100);
  sub_106BA8(a1, 97, 536811537);
  sub_106BA8(a1, 26, 2);
  switch ( freq_select )
  {
    case 100:
      sub_106BA8(a1, 96, 6658);
      break;
    case 200:
      sub_106BA8(a1, 96, 137730);
      break;
    case 300:
      sub_106BA8(a1, 96, 268802);
      break;
    case 400:
      sub_106BA8(a1, 96, 399874);
      break;
    default:
      sub_106BA8(a1, 96, 530946);
      break;
  }
  sub_106D34(a1, 15, 3);
  sub_106D34(a1, 28, 2);
  sub_106D34(a1, 244, -1474295804);
  sub_106D34(a1, 243, 48);
  sub_106D34(a1, 242, -65536);
  sub_106D34(a1, 241, -1);
  sub_106D34(a1, 245, 0);
  sub_106D34(a1, 246, 0);
  sub_106D34(a1, 247, 16800768);
  if ( a2 )
    sub_106D34(a1, 248, 1573120);
  else
    sub_106D34(a1, 248, 1572864);
  sub_106D34(a1, 249, 254886432);
  sub_106D34(a1, 250, 254886434);
  sub_106D34(a1, 251, 0);
  sub_106D34(a1, 252, 0);
  sub_106D34(a1, 240, 174328081);
LABEL_20:
  usleep(0x3E8u);
  v202 = sub_1075C0(a1, 0, 240, ptr);
  if ( v202 )
  {
    for ( i = 0; i < v202; ++i )
    {
      if ( sub_FC794(*((_WORD *)ptr + 6 * i + 3)) == 240 )
      {
        v170 = sub_FC76C(*((_DWORD *)ptr + 3 * i));
        V_LOCK();
        sub_FBD60((int)v48, *(int *)(a1 + 272));
        v3 = *((unsigned __int8 *)ptr + 12 * i + 4);
        v4 = *((unsigned __int8 *)ptr + 12 * i + 8);
        v5 = sub_FC794(*((_WORD *)ptr + 6 * i + 3));
        logfmt_raw(
          v40,
          0x1000u,
          0,
          v49,
          v48[0],
          v48[1],
          v48[2],
          v48[3],
          v48[4],
          v48[5],
          v48[6],
          v49,
          "asic %02x, core %02x, reg %04x state %08x",
          v3,
          v4,
          v5,
          v170);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "hashboard_short_ltc_eth_2282",
          28,
          6042,
          20,
          v40);
        v169 = v170 & 0x200;
        if ( (v170 & 0x200) != 0 )
          goto LABEL_20;
        if ( ++v203 == v202 )
        {
          V_LOCK();
          sub_FBD60((int)v50, *(int *)(a1 + 272));
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v51,
            v50[0],
            v50[1],
            v50[2],
            v50[3],
            v50[4],
            v50[5],
            v50[6],
            v51,
            "ltc pattern-1 done");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "hashboard_short_ltc_eth_2282",
            28,
            6050,
            40,
            v40);
          v203 = 0;
          break;
        }
      }
    }
    sub_106D34(a1, 245, 0);
    sub_106D34(a1, 246, 0);
    sub_106D34(a1, 247, -2147460031);
    if ( a2 )
      sub_106D34(a1, 248, 1573120);
    else
      sub_106D34(a1, 248, 1572864);
    sub_106D34(a1, 249, 254886432);
    sub_106D34(a1, 250, 254886433);
    sub_106D34(a1, 251, 254886432);
    sub_106D34(a1, 252, 0);
    sub_106D34(a1, 240, 174328083);
LABEL_35:
    usleep(0x3E8u);
    v202 = sub_1075C0(a1, 0, 240, ptr);
    if ( v202 )
    {
      for ( j = 0; j < v202; ++j )
      {
        if ( sub_FC794(*((_WORD *)ptr + 6 * j + 3)) == 240 )
        {
          v168 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
          V_LOCK();
          sub_FBD60((int)v54, *(int *)(a1 + 272));
          v6 = *((unsigned __int8 *)ptr + 12 * j + 4);
          v7 = *((unsigned __int8 *)ptr + 12 * j + 8);
          v8 = sub_FC794(*((_WORD *)ptr + 6 * j + 3));
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v55,
            v54[0],
            v54[1],
            v54[2],
            v54[3],
            v54[4],
            v54[5],
            v54[6],
            v55,
            "asic %02x, core %02x, reg %04x state %08x",
            v6,
            v7,
            v8,
            v168);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "hashboard_short_ltc_eth_2282",
            28,
            6089,
            20,
            v40);
          v167 = v168 & 0x200;
          if ( (v168 & 0x200) != 0 )
            goto LABEL_35;
          if ( ++v203 == v202 )
          {
            V_LOCK();
            sub_FBD60((int)v56, *(int *)(a1 + 272));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v57,
              v56[0],
              v56[1],
              v56[2],
              v56[3],
              v56[4],
              v56[5],
              v56[6],
              v57,
              "ltc pattern-2 done");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "hashboard_short_ltc_eth_2282",
              28,
              6097,
              40,
              v40);
            v203 = 0;
            break;
          }
        }
      }
      sub_106D34(a1, 245, 0);
      sub_106D34(a1, 246, 0);
      sub_106D34(a1, 247, 156585984);
      if ( a2 )
        sub_106D34(a1, 248, 1573120);
      else
        sub_106D34(a1, 248, 1572864);
      switch ( freq_select )
      {
        case 500:
          sub_106D34(a1, 249, 254886448);
          sub_106D34(a1, 250, 254886449);
          break;
        case 400:
          sub_106D34(a1, 249, 204554800);
          sub_106D34(a1, 250, 204554801);
          break;
        case 300:
          sub_106D34(a1, 249, 154223152);
          sub_106D34(a1, 250, 154223153);
          break;
        case 200:
          sub_106D34(a1, 249, 103891504);
          sub_106D34(a1, 250, 103891504);
          break;
        case 100:
          sub_106D34(a1, 249, 53559856);
          sub_106D34(a1, 250, 53559857);
          break;
      }
      sub_106D34(a1, 251, 0);
      sub_106D34(a1, 252, 0);
      sub_106D34(a1, 240, 174328081);
LABEL_60:
      usleep(0x3E8u);
      v202 = sub_1075C0(a1, 0, 240, ptr);
      if ( v202 )
      {
        for ( k = 0; k < v202; ++k )
        {
          if ( sub_FC794(*((_WORD *)ptr + 6 * k + 3)) == 240 )
          {
            v166 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
            V_LOCK();
            sub_FBD60((int)v60, *(int *)(a1 + 272));
            v9 = *((unsigned __int8 *)ptr + 12 * k + 4);
            v10 = *((unsigned __int8 *)ptr + 12 * k + 8);
            v11 = sub_FC794(*((_WORD *)ptr + 6 * k + 3));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v61,
              v60[0],
              v60[1],
              v60[2],
              v60[3],
              v60[4],
              v60[5],
              v60[6],
              v61,
              "asic %02x, core %02x, reg %04x state %08x",
              v9,
              v10,
              v11,
              v166);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "hashboard_short_ltc_eth_2282",
              28,
              6153,
              20,
              v40);
            v165 = v166 & 0x200;
            if ( (v166 & 0x200) != 0 )
              goto LABEL_60;
            if ( ++v203 == v202 )
            {
              V_LOCK();
              sub_FBD60((int)v62, *(int *)(a1 + 272));
              logfmt_raw(
                v40,
                0x1000u,
                0,
                v63,
                v62[0],
                v62[1],
                v62[2],
                v62[3],
                v62[4],
                v62[5],
                v62[6],
                v63,
                "ltc pattern-3 done");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "hashboard_short_ltc_eth_2282",
                28,
                6160,
                40,
                v40);
              v203 = 0;
              break;
            }
          }
        }
        sub_106D34(a1, 245, 0);
        sub_106D34(a1, 246, 0);
        sub_106D34(a1, 247, 33574912);
        if ( a2 )
          sub_106D34(a1, 248, 1573120);
        else
          sub_106D34(a1, 248, 1572864);
        switch ( freq_select )
        {
          case 500:
            sub_106D34(a1, 249, 254886448);
            sub_106D34(a1, 250, 254886449);
            break;
          case 400:
            sub_106D34(a1, 249, 204554800);
            sub_106D34(a1, 250, 204554801);
            break;
          case 300:
            sub_106D34(a1, 249, 154223152);
            sub_106D34(a1, 250, 154223153);
            break;
          case 200:
            sub_106D34(a1, 249, 103891504);
            sub_106D34(a1, 250, 103891504);
            break;
          case 100:
            sub_106D34(a1, 249, 53559856);
            sub_106D34(a1, 250, 53559857);
            break;
        }
        sub_106D34(a1, 251, 0);
        switch ( freq_select )
        {
          case 500:
            sub_106D34(a1, 252, 254886448);
            break;
          case 400:
            sub_106D34(a1, 252, 204554800);
            break;
          case 300:
            sub_106D34(a1, 252, 154223152);
            break;
          case 200:
            sub_106D34(a1, 252, 103891504);
            break;
          case 100:
            sub_106D34(a1, 252, 53559856);
            break;
        }
        sub_106D34(a1, 240, 174328085);
LABEL_95:
        usleep(0x3E8u);
        v202 = sub_1075C0(a1, 0, 240, ptr);
        if ( v202 )
        {
          for ( m = 0; m < v202; ++m )
          {
            if ( sub_FC794(*((_WORD *)ptr + 6 * m + 3)) == 240 )
            {
              v164 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
              V_LOCK();
              sub_FBD60((int)v66, *(int *)(a1 + 272));
              v12 = *((unsigned __int8 *)ptr + 12 * m + 4);
              v13 = *((unsigned __int8 *)ptr + 12 * m + 8);
              v14 = sub_FC794(*((_WORD *)ptr + 6 * m + 3));
              logfmt_raw(
                v40,
                0x1000u,
                0,
                v67,
                v66[0],
                v66[1],
                v66[2],
                v66[3],
                v66[4],
                v66[5],
                v66[6],
                v67,
                "asic %02x, core %02x, reg %04x state %08x",
                v12,
                v13,
                v14,
                v164);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "hashboard_short_ltc_eth_2282",
                28,
                6225,
                20,
                v40);
              v163 = v164 & 0x200;
              if ( (v164 & 0x200) != 0 )
                goto LABEL_95;
              if ( ++v203 == v202 )
              {
                V_LOCK();
                sub_FBD60((int)v68, *(int *)(a1 + 272));
                logfmt_raw(
                  v40,
                  0x1000u,
                  0,
                  v69,
                  v68[0],
                  v68[1],
                  v68[2],
                  v68[3],
                  v68[4],
                  v68[5],
                  v68[6],
                  v69,
                  "ltc pattern-4 done");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                  171,
                  "hashboard_short_ltc_eth_2282",
                  28,
                  6233,
                  40,
                  v40);
                v203 = 0;
                break;
              }
            }
          }
          for ( n = 0; n <= 5; ++n )
          {
            for ( ii = 0; ii <= 71; ++ii )
            {
              v142 = ii / 8;
              v141 = ii / 8 / 3;
              v140 = ii / 8 % 3;
              v15 = ii & 7;
              if ( ii <= 0 )
                v15 = -(-ii & 7);
              v139 = v15;
              for ( jj = 0; jj <= 19; ++jj )
              {
                clock_gettime(1, &v42);
                memset(v38, 0, sizeof(v38));
                v138 = (v139 << 25) & 0xE000000
                     | (v141 << 23) & 0x1800000
                     | (v140 << 21) & 0x600000
                     | jj & 0xFFF
                     | 0x1000;
                sub_10702C(a1, n, ii, 241, v138);
                V_LOCK();
                sub_FBD60((int)v70, *(int *)(a1 + 272));
                logfmt_raw(
                  v40,
                  0x1000u,
                  0,
                  v71,
                  v70[0],
                  v70[1],
                  v70[2],
                  v70[3],
                  v70[4],
                  v70[5],
                  v70[6],
                  v71,
                  "pre finish LTC chip_id %d core_id %d ip1_id: %d, bctrl1_value: %08x",
                  n,
                  ii,
                  jj,
                  v138);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                  171,
                  "hashboard_short_ltc_eth_2282",
                  28,
                  6272,
                  40,
                  v40);
                clock_gettime(1, &v42);
                sub_106C24(a1, n, 68, 27);
                usleep(0x3E8u);
                sub_10702C(a1, n, ii, 245, 0);
                sub_10702C(a1, n, ii, 246, 0);
                sub_10702C(a1, n, ii, 247, 16800768);
                if ( a2 )
                  sub_10702C(a1, n, ii, 248, 1573120);
                else
                  sub_10702C(a1, n, ii, 248, 1572864);
                sub_10702C(a1, n, ii, 249, 254886400);
                sub_10702C(a1, n, ii, 250, 0);
                sub_10702C(a1, n, ii, 251, 254886432);
                sub_10702C(a1, n, ii, 252, 254886440);
                sub_10702C(a1, n, ii, 240, 174340359);
LABEL_115:
                usleep(0x3E8u);
                v202 = sub_108B84(a1, n, ii, 240, ptr);
                if ( v202 )
                {
                  for ( kk = 0; kk < v202; ++kk )
                  {
                    if ( sub_FC794(*((_WORD *)ptr + 6 * kk + 3)) == 240 )
                    {
                      v137 = sub_FC76C(*((_DWORD *)ptr + 3 * kk));
                      V_LOCK();
                      sub_FBD60((int)v74, *(int *)(a1 + 272));
                      v16 = *((unsigned __int8 *)ptr + 12 * kk + 4);
                      v17 = *((unsigned __int8 *)ptr + 12 * kk + 8);
                      v18 = sub_FC794(*((_WORD *)ptr + 6 * kk + 3));
                      logfmt_raw(
                        v40,
                        0x1000u,
                        0,
                        v75,
                        v74[0],
                        v74[1],
                        v74[2],
                        v74[3],
                        v74[4],
                        v74[5],
                        v74[6],
                        v75,
                        "chip_id %d, core %d, reg %04x state %08x",
                        v16,
                        v17,
                        v18,
                        v137);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                        171,
                        "hashboard_short_ltc_eth_2282",
                        28,
                        6330,
                        40,
                        v40);
                      v136 = v137 & 0x200;
                      if ( (v137 & 0x200) != 0 )
                        goto LABEL_115;
                      if ( ++v203 == v202 )
                      {
                        V_LOCK();
                        sub_FBD60((int)v76, *(int *)(a1 + 272));
                        logfmt_raw(
                          v40,
                          0x1000u,
                          0,
                          v77,
                          v76[0],
                          v76[1],
                          v76[2],
                          v76[3],
                          v76[4],
                          v76[5],
                          v76[6],
                          v77,
                          "ltc pattern-5 done at chip: %d core: %d, ip: %d",
                          n,
                          ii,
                          20 * a2 + jj);
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                          171,
                          "hashboard_short_ltc_eth_2282",
                          28,
                          6338,
                          40,
                          v40);
                        v203 = 0;
                        break;
                      }
                    }
                  }
                }
                else
                {
                  V_LOCK();
                  sub_FBD60((int)v72, *(int *)(a1 + 272));
                  logfmt_raw(
                    v40,
                    0x1000u,
                    0,
                    v73,
                    v72[0],
                    v72[1],
                    v72[2],
                    v72[3],
                    v72[4],
                    v72[5],
                    v72[6],
                    v73,
                    "get chip-%d core-%d reg addr 0xf0 failed",
                    n,
                    ii);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                    171,
                    "hashboard_short_ltc_eth_2282",
                    28,
                    6320,
                    100,
                    v40);
                }
                v202 = sub_1065C8(a1, n, 97, ptr);
                if ( v202 )
                {
                  for ( mm = 0; mm < v202; ++mm )
                  {
                    if ( *((_WORD *)ptr + 6 * mm + 3) == 97 )
                    {
                      v135 = sub_FC76C(*((_DWORD *)ptr + 3 * mm));
                      V_LOCK();
                      sub_FBD60((int)v80, *(int *)(a1 + 272));
                      logfmt_raw(
                        v40,
                        0x1000u,
                        0,
                        v81,
                        v80[0],
                        v80[1],
                        v80[2],
                        v80[3],
                        v80[4],
                        v80[5],
                        v80[6],
                        v81,
                        "chip %d, reg %04x state %08x",
                        *((unsigned __int8 *)ptr + 12 * mm + 4),
                        *((unsigned __int16 *)ptr + 6 * mm + 3),
                        v135);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                        171,
                        "hashboard_short_ltc_eth_2282",
                        28,
                        6360,
                        40,
                        v40);
                      v133 = (unsigned __int16)(v135 & 0x380) >> 7;
                      v134 = 57344;
                      v132 = (unsigned __int16)(v135 & 0xE000) >> 13;
                      if ( v132 == 4 )
                      {
                        v206[2880 * n + 40 * ii + 20 * a2 + jj] = 0;
                        memcpy(&v205[92160 * n + 32 * (40 * ii + 20 * a2 + jj)], v38, 0x80u);
                      }
                      else if ( v132 == 1 )
                      {
                        v206[2880 * n + 40 * ii + 20 * a2 + jj] = 1;
                        memcpy(&v205[92160 * n + 32 * (40 * ii + 20 * a2 + jj)], v38, 0x80u);
                      }
                      else
                      {
                        v202 = 0;
                        v183 = 0;
                        v41[0] = sub_1065C8(a1, n, 99, ptr);
                        if ( v41[0] )
                        {
                          for ( nn = 0; nn < (int)v41[0]; ++nn )
                          {
                            if ( *((_WORD *)ptr + 6 * nn + 3) == 99 )
                            {
                              v131 = sub_FC76C(*((_DWORD *)ptr + 3 * nn));
                              v183 = ((v131 & 0x1F) != 0) + (v131 >> 5);
                              V_LOCK();
                              sub_FBD60((int)v84, *(int *)(a1 + 272));
                              logfmt_raw(
                                v40,
                                0x1000u,
                                0,
                                v85,
                                v84[0],
                                v84[1],
                                v84[2],
                                v84[3],
                                v84[4],
                                v84[5],
                                v84[6],
                                v85,
                                "chip %d, reg %04x state %08x, expect_resp_num: %x",
                                *((unsigned __int8 *)ptr + 12 * nn + 4),
                                *((unsigned __int16 *)ptr + 6 * nn + 3),
                                v131,
                                v183);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                                171,
                                "hashboard_short_ltc_eth_2282",
                                28,
                                6430,
                                40,
                                v40);
                            }
                          }
                        }
                        else
                        {
                          V_LOCK();
                          sub_FBD60((int)v82, *(int *)(a1 + 272));
                          logfmt_raw(
                            v40,
                            0x1000u,
                            0,
                            v83,
                            v82[0],
                            v82[1],
                            v82[2],
                            v82[3],
                            v82[4],
                            v82[5],
                            v82[6],
                            v83,
                            "get chip-%02x, core-%02x ip-%02d ltc packet num failed!",
                            n,
                            ii,
                            20 * a2 + jj);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                            171,
                            "hashboard_short_ltc_eth_2282",
                            28,
                            6420,
                            100,
                            v40);
                        }
                        if ( v183 )
                          sync_get_ltc_base_2282(a1, v183, n, (int)v43, v41, 60000);
                        hashboard_reset_for_ltc(*(_DWORD *)(a1 + 272), n);
                        if ( !v41[0] )
                        {
                          V_LOCK();
                          sub_FBD60((int)v86, *(int *)(a1 + 272));
                          logfmt_raw(
                            v40,
                            0x1000u,
                            0,
                            v87,
                            v86[0],
                            v86[1],
                            v86[2],
                            v86[3],
                            v86[4],
                            v86[5],
                            v86[6],
                            v87,
                            "get chip-%02x, core-%02x ip-%02d ltc packet failed!",
                            n,
                            ii,
                            20 * a2 + jj);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                            171,
                            "hashboard_short_ltc_eth_2282",
                            28,
                            6451,
                            100,
                            v40);
                        }
                        memset(v40, 0, (size_t)&elf_hash_chain[1452]);
                        v181 = 0;
                        for ( i1 = 0; i1 < (int)v41[0]; ++i1 )
                        {
                          v181 += *(_DWORD *)&v43[148 * i1];
                          for ( i2 = 0; i2 < *(_DWORD *)&v43[148 * i1]; ++i2 )
                          {
                            *(_DWORD *)&v40[256 * i1 + 8 * i2] = a2;
                            *(_DWORD *)&v40[256 * i1 + 4 + 8 * i2] = *(_DWORD *)&v43[148 * i1 + 142 + -4 * i2];
                          }
                        }
                        printf(
                          "pre bist: chip_id %d core_id %d ip1_id: %d, ltc_total: %d, resp_num: %d, bctrl1_value: %08x\n",
                          n,
                          ii,
                          jj,
                          v181,
                          v41[0],
                          v138);
                        for ( i3 = 0; i3 < v181; ++i3 )
                        {
                          sub_1094B0(&v40[8 * i3 + 4], &v40[8 * i3 + 7]);
                          sub_1094B0(&v40[8 * i3 + 5], &v40[8 * i3 + 6]);
                          V_LOCK();
                          sub_FBD60((int)v88, *(int *)(a1 + 272));
                          logfmt_raw(
                            v39,
                            0x1000u,
                            0,
                            v89,
                            v88[0],
                            v88[1],
                            v88[2],
                            v88[3],
                            v88[4],
                            v88[5],
                            v88[6],
                            v89,
                            "%d --> %08x",
                            i3,
                            *(_DWORD *)&v40[8 * i3]);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                            171,
                            "hashboard_short_ltc_eth_2282",
                            28,
                            6477,
                            40,
                            v39);
                          V_LOCK();
                          sub_FBD60((int)v90, *(int *)(a1 + 272));
                          logfmt_raw(
                            v39,
                            0x1000u,
                            0,
                            v91,
                            v90[0],
                            v90[1],
                            v90[2],
                            v90[3],
                            v90[4],
                            v90[5],
                            v90[6],
                            v91,
                            "debug:%d --> %08x",
                            i3,
                            *(_DWORD *)&v40[8 * i3 + 4]);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                            171,
                            "hashboard_short_ltc_eth_2282",
                            28,
                            6479,
                            40,
                            v39);
                        }
                        clock_gettime(1, &v42);
                        v130 = v181;
                        m7x_repair_faildata(v181, (int)v40, v38);
                        v185 = 0;
                        memcpy(&v205[92160 * n + 32 * (40 * ii + 20 * a2 + jj)], v38, 0x80u);
                        for ( i4 = 0; i4 <= 31; ++i4 )
                        {
                          if ( v205[92160 * n + 1280 * ii + 640 * a2 + 32 * jj + i4] )
                          {
                            ++v185;
                            printf(
                              "chip_id: %d, core_id: %d, ip1_id: %d, faildata === %2d %08X\n",
                              n,
                              ii,
                              20 * a2 + jj,
                              i4,
                              v205[92160 * n + 1280 * ii + 640 * a2 + 32 * jj + i4]);
                          }
                        }
                        v188 = 0;
                        for ( i5 = 0; i5 <= 31; ++i5 )
                        {
                          if ( v38[i5] )
                          {
                            ++v188;
                            V_LOCK();
                            logfmt_raw(v39, 0x1000u, 0, "debug faildata === %2d %08X", i5, v38[i5]);
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                              171,
                              "hashboard_short_ltc_eth_2282",
                              28,
                              6530,
                              40,
                              v39);
                            printf("faildata === %2d %08X\n", i5, v38[i5]);
                          }
                        }
                        sub_10702C(a1, n, ii, 222, 270532609);
                        for ( i6 = 0; i6 < v188; ++i6 )
                          sub_10702C(a1, n, ii, 223, v38[i6]);
                        sub_10702C(a1, n, ii, 222, 0);
                      }
                    }
                  }
                }
                else
                {
                  V_LOCK();
                  sub_FBD60((int)v78, *(int *)(a1 + 272));
                  logfmt_raw(
                    v40,
                    0x1000u,
                    0,
                    v79,
                    v78[0],
                    v78[1],
                    v78[2],
                    v78[3],
                    v78[4],
                    v78[5],
                    v78[6],
                    v79,
                    "get chip-%d reg addr %02x failed, resp_num: %d",
                    n,
                    *((unsigned __int16 *)ptr + 3),
                    v202);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                    171,
                    "hashboard_short_ltc_eth_2282",
                    28,
                    6351,
                    100,
                    v40);
                }
              }
              memset(v43, 0, (size_t)&stru_16950.st_value);
            }
          }
          sub_106D34(a1, 15, 3);
          sub_106D34(a1, 28, 2);
          sub_106D34(a1, 244, -1474295804);
          sub_106D34(a1, 243, 48);
          sub_106D34(a1, 242, -65536);
          sub_106D34(a1, 241, -1);
          sub_106D34(a1, 245, 0);
          sub_106D34(a1, 246, 0);
          sub_106D34(a1, 247, 16779264);
          if ( a2 )
            sub_106D34(a1, 248, 256);
          else
            sub_106D34(a1, 248, 0);
          sub_106D34(a1, 249, 254886432);
          sub_106D34(a1, 250, 254886434);
          sub_106D34(a1, 251, 0);
          sub_106D34(a1, 252, 0);
          sub_106D34(a1, 240, 174328081);
LABEL_178:
          usleep(0x3E8u);
          v202 = sub_1075C0(a1, 0, 240, ptr);
          if ( v202 )
          {
            for ( i7 = 0; i7 < v202; ++i7 )
            {
              if ( sub_FC794(*((_WORD *)ptr + 6 * i7 + 3)) == 240 )
              {
                v162 = sub_FC76C(*((_DWORD *)ptr + 3 * i7));
                V_LOCK();
                sub_FBD60((int)v94, *(int *)(a1 + 272));
                v19 = *((unsigned __int8 *)ptr + 12 * i7 + 4);
                v20 = *((unsigned __int8 *)ptr + 12 * i7 + 8);
                v21 = sub_FC794(*((_WORD *)ptr + 6 * i7 + 3));
                logfmt_raw(
                  v40,
                  0x1000u,
                  0,
                  v95,
                  v94[0],
                  v94[1],
                  v94[2],
                  v94[3],
                  v94[4],
                  v94[5],
                  v94[6],
                  v95,
                  "asic %02x, core %02x, reg %04x state %08x",
                  v19,
                  v20,
                  v21,
                  v162);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                  171,
                  "hashboard_short_ltc_eth_2282",
                  28,
                  6603,
                  20,
                  v40);
                v161 = v162 & 0x200;
                if ( (v162 & 0x200) != 0 )
                  goto LABEL_178;
                if ( ++v203 == v202 )
                {
                  V_LOCK();
                  sub_FBD60((int)v96, *(int *)(a1 + 272));
                  logfmt_raw(
                    v40,
                    0x1000u,
                    0,
                    v97,
                    v96[0],
                    v96[1],
                    v96[2],
                    v96[3],
                    v96[4],
                    v96[5],
                    v96[6],
                    v97,
                    "ltc pattern-6 done");
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                    171,
                    "hashboard_short_ltc_eth_2282",
                    28,
                    6610,
                    20,
                    v40);
                  v203 = 0;
                  break;
                }
              }
            }
            sub_106D34(a1, 245, 0);
            sub_106D34(a1, 246, 0);
            sub_106D34(a1, 247, -2147481535);
            if ( a2 )
              sub_106D34(a1, 248, 256);
            else
              sub_106D34(a1, 248, 0);
            sub_106D34(a1, 249, 254886432);
            sub_106D34(a1, 250, 254886433);
            sub_106D34(a1, 251, 254886432);
            sub_106D34(a1, 252, 0);
            sub_106D34(a1, 240, 174328083);
LABEL_193:
            usleep(0x3E8u);
            v202 = sub_1075C0(a1, 0, 240, ptr);
            if ( v202 )
            {
              for ( i8 = 0; i8 < v202; ++i8 )
              {
                if ( sub_FC794(*((_WORD *)ptr + 6 * i8 + 3)) == 240 )
                {
                  v160 = sub_FC76C(*((_DWORD *)ptr + 3 * i8));
                  V_LOCK();
                  sub_FBD60((int)v100, *(int *)(a1 + 272));
                  v22 = *((unsigned __int8 *)ptr + 12 * i8 + 4);
                  v23 = *((unsigned __int8 *)ptr + 12 * i8 + 8);
                  v24 = sub_FC794(*((_WORD *)ptr + 6 * i8 + 3));
                  logfmt_raw(
                    v40,
                    0x1000u,
                    0,
                    v101,
                    v100[0],
                    v100[1],
                    v100[2],
                    v100[3],
                    v100[4],
                    v100[5],
                    v100[6],
                    v101,
                    "asic %02x, core %02x, reg %04x state %08x",
                    v22,
                    v23,
                    v24,
                    v160);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                    171,
                    "hashboard_short_ltc_eth_2282",
                    28,
                    6650,
                    20,
                    v40);
                  v159 = v160 & 0x200;
                  if ( (v160 & 0x200) != 0 )
                    goto LABEL_193;
                  if ( ++v203 == v202 )
                  {
                    V_LOCK();
                    sub_FBD60((int)v102, *(int *)(a1 + 272));
                    logfmt_raw(
                      v40,
                      0x1000u,
                      0,
                      v103,
                      v102[0],
                      v102[1],
                      v102[2],
                      v102[3],
                      v102[4],
                      v102[5],
                      v102[6],
                      v103,
                      "ltc pattern-7 done");
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                      171,
                      "hashboard_short_ltc_eth_2282",
                      28,
                      6657,
                      20,
                      v40);
                    v203 = 0;
                    break;
                  }
                }
              }
              sub_106D34(a1, 245, 0);
              sub_106D34(a1, 246, 0);
              sub_106D34(a1, 247, 156565504);
              if ( a2 )
                sub_106D34(a1, 248, 256);
              else
                sub_106D34(a1, 248, 0);
              switch ( freq_select )
              {
                case 500:
                  sub_106D34(a1, 249, 254886448);
                  sub_106D34(a1, 250, 254886449);
                  break;
                case 400:
                  sub_106D34(a1, 249, 204554800);
                  sub_106D34(a1, 250, 204554801);
                  break;
                case 300:
                  sub_106D34(a1, 249, 154223152);
                  sub_106D34(a1, 250, 154223153);
                  break;
                case 200:
                  sub_106D34(a1, 249, 103891504);
                  sub_106D34(a1, 250, 103891504);
                  break;
                case 100:
                  sub_106D34(a1, 249, 53559856);
                  sub_106D34(a1, 250, 53559857);
                  break;
              }
              sub_106D34(a1, 251, 0);
              sub_106D34(a1, 252, 0);
              sub_106D34(a1, 240, 174328081);
LABEL_218:
              usleep(0x3E8u);
              v202 = sub_1075C0(a1, 0, 240, ptr);
              if ( v202 )
              {
                for ( i9 = 0; i9 < v202; ++i9 )
                {
                  if ( sub_FC794(*((_WORD *)ptr + 6 * i9 + 3)) == 240 )
                  {
                    v158 = sub_FC76C(*((_DWORD *)ptr + 3 * i9));
                    V_LOCK();
                    sub_FBD60((int)v106, *(int *)(a1 + 272));
                    v25 = *((unsigned __int8 *)ptr + 12 * i9 + 4);
                    v26 = *((unsigned __int8 *)ptr + 12 * i9 + 8);
                    v27 = sub_FC794(*((_WORD *)ptr + 6 * i9 + 3));
                    logfmt_raw(
                      v40,
                      0x1000u,
                      0,
                      v107,
                      v106[0],
                      v106[1],
                      v106[2],
                      v106[3],
                      v106[4],
                      v106[5],
                      v106[6],
                      v107,
                      "asic %02x, core %02x, reg %04x state %08x",
                      v25,
                      v26,
                      v27,
                      v158);
                    V_UNLOCK();
                    zlog(
                      g_zc,
                      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build"
                      "/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                      171,
                      "hashboard_short_ltc_eth_2282",
                      28,
                      6712,
                      20,
                      v40);
                    v157 = v158 & 0x200;
                    if ( (v158 & 0x200) != 0 )
                      goto LABEL_218;
                    if ( ++v203 == v202 )
                    {
                      v203 = 0;
                      V_LOCK();
                      sub_FBD60((int)v108, *(int *)(a1 + 272));
                      logfmt_raw(
                        v40,
                        0x1000u,
                        0,
                        v109,
                        v108[0],
                        v108[1],
                        v108[2],
                        v108[3],
                        v108[4],
                        v108[5],
                        v108[6],
                        v109,
                        "ltc pattern-8 done");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                        171,
                        "hashboard_short_ltc_eth_2282",
                        28,
                        6720,
                        20,
                        v40);
                      break;
                    }
                  }
                }
                sub_106D34(a1, 245, 0);
                sub_106D34(a1, 246, 0);
                sub_106D34(a1, 247, 0x2000000);
                if ( a2 )
                  sub_106D34(a1, 248, 256);
                else
                  sub_106D34(a1, 248, 0);
                switch ( freq_select )
                {
                  case 500:
                    sub_106D34(a1, 249, 254886448);
                    sub_106D34(a1, 250, 254886449);
                    break;
                  case 400:
                    sub_106D34(a1, 249, 204554800);
                    sub_106D34(a1, 250, 204554801);
                    break;
                  case 300:
                    sub_106D34(a1, 249, 154223152);
                    sub_106D34(a1, 250, 154223153);
                    break;
                  case 200:
                    sub_106D34(a1, 249, 103891504);
                    sub_106D34(a1, 250, 103891504);
                    break;
                  case 100:
                    sub_106D34(a1, 249, 53559856);
                    sub_106D34(a1, 250, 53559857);
                    break;
                }
                sub_106D34(a1, 251, 0);
                switch ( freq_select )
                {
                  case 500:
                    sub_106D34(a1, 252, 254886448);
                    break;
                  case 400:
                    sub_106D34(a1, 252, 204554800);
                    break;
                  case 300:
                    sub_106D34(a1, 252, 154223152);
                    break;
                  case 200:
                    sub_106D34(a1, 252, 103891504);
                    break;
                  case 100:
                    sub_106D34(a1, 252, 53559856);
                    break;
                }
                sub_106D34(a1, 240, 174328085);
LABEL_253:
                usleep(0x3E8u);
                v202 = sub_1075C0(a1, 0, 240, ptr);
                if ( v202 )
                {
                  for ( i10 = 0; i10 < v202; ++i10 )
                  {
                    if ( sub_FC794(*((_WORD *)ptr + 6 * i10 + 3)) == 240 )
                    {
                      v156 = sub_FC76C(*((_DWORD *)ptr + 3 * i10));
                      V_LOCK();
                      sub_FBD60((int)v112, *(int *)(a1 + 272));
                      v28 = *((unsigned __int8 *)ptr + 12 * i10 + 4);
                      v29 = *((unsigned __int8 *)ptr + 12 * i10 + 8);
                      v30 = sub_FC794(*((_WORD *)ptr + 6 * i10 + 3));
                      logfmt_raw(
                        v40,
                        0x1000u,
                        0,
                        v113,
                        v112[0],
                        v112[1],
                        v112[2],
                        v112[3],
                        v112[4],
                        v112[5],
                        v112[6],
                        v113,
                        "asic %02x, core %02x, reg %04x state %08x",
                        v28,
                        v29,
                        v30,
                        v156);
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                        171,
                        "hashboard_short_ltc_eth_2282",
                        28,
                        6784,
                        20,
                        v40);
                      v155 = v156 & 0x200;
                      if ( (v156 & 0x200) != 0 )
                        goto LABEL_253;
                      if ( ++v203 == v202 )
                      {
                        v203 = 0;
                        V_LOCK();
                        sub_FBD60((int)v114, *(int *)(a1 + 272));
                        logfmt_raw(
                          v40,
                          0x1000u,
                          0,
                          v115,
                          v114[0],
                          v114[1],
                          v114[2],
                          v114[3],
                          v114[4],
                          v114[5],
                          v114[6],
                          v115,
                          "ltc pattern-9 done");
                        V_UNLOCK();
                        zlog(
                          g_zc,
                          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/b"
                          "uild/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                          171,
                          "hashboard_short_ltc_eth_2282",
                          28,
                          6793,
                          20,
                          v40);
                        break;
                      }
                    }
                  }
                  for ( i11 = 0; i11 <= 5; ++i11 )
                  {
                    for ( i12 = 0; i12 <= 71; ++i12 )
                    {
                      v154 = i12 / 8;
                      v153 = i12 / 8 / 3;
                      v152 = i12 / 8 % 3;
                      v31 = i12 & 7;
                      if ( i12 <= 0 )
                        v31 = -(-i12 & 7);
                      v151 = v31;
                      for ( i13 = 0; i13 <= 19; ++i13 )
                      {
                        if ( v206[2880 * i11 + 40 * i12 + 20 * a2 + i13] == 3 )
                        {
                          v150 = (v151 << 25) & 0xE000000
                               | (v153 << 23) & 0x1800000
                               | (v152 << 21) & 0x600000
                               | i13 & 0xFFF
                               | 0x1000;
                          sub_10702C(a1, i11, i12, 241, v150);
                          V_LOCK();
                          sub_FBD60((int)v116, *(int *)(a1 + 272));
                          logfmt_raw(
                            v40,
                            0x1000u,
                            0,
                            v117,
                            v116[0],
                            v116[1],
                            v116[2],
                            v116[3],
                            v116[4],
                            v116[5],
                            v116[6],
                            v117,
                            "post finish LTC chip_id: %d core_id : %d ip1id : %d, bctrl1_value: %08x",
                            i11,
                            i12,
                            i13,
                            v150);
                          V_UNLOCK();
                          zlog(
                            g_zc,
                            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release"
                            "/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                            171,
                            "hashboard_short_ltc_eth_2282",
                            28,
                            6827,
                            20,
                            v40);
                          sub_106BA8(a1, 68, 27);
                          usleep(0x3E8u);
                          sub_10702C(a1, i11, i12, 245, 0);
                          sub_10702C(a1, i11, i12, 246, 0);
                          sub_10702C(a1, i11, i12, 247, 16800768);
                          if ( a2 )
                            sub_10702C(a1, i11, i12, 248, 256);
                          else
                            sub_10702C(a1, i11, i12, 248, 0);
                          sub_10702C(a1, i11, i12, 249, 254886400);
                          sub_10702C(a1, i11, i12, 250, 0);
                          sub_10702C(a1, i11, i12, 251, 254886432);
                          sub_10702C(a1, i11, i12, 252, 254886440);
                          sub_10702C(a1, i11, i12, 240, 174340359);
LABEL_274:
                          usleep(0x3E8u);
                          v202 = sub_108B84(a1, i11, i12, 240, ptr);
                          if ( v202 )
                          {
                            for ( i14 = 0; i14 < v202; ++i14 )
                            {
                              if ( sub_FC794(*((_WORD *)ptr + 6 * i14 + 3)) == 240 )
                              {
                                v149 = sub_FC76C(*((_DWORD *)ptr + 3 * i14));
                                V_LOCK();
                                sub_FBD60((int)v120, *(int *)(a1 + 272));
                                v32 = *((unsigned __int8 *)ptr + 12 * i14 + 4);
                                v33 = *((unsigned __int8 *)ptr + 12 * i14 + 8);
                                v34 = sub_FC794(*((_WORD *)ptr + 6 * i14 + 3));
                                logfmt_raw(
                                  v40,
                                  0x1000u,
                                  0,
                                  v121,
                                  v120[0],
                                  v120[1],
                                  v120[2],
                                  v120[3],
                                  v120[4],
                                  v120[5],
                                  v120[6],
                                  v121,
                                  "asic %02x, core %02x, reg %04x state %08x",
                                  v32,
                                  v33,
                                  v34,
                                  v149);
                                V_UNLOCK();
                                zlog(
                                  g_zc,
                                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                                  171,
                                  "hashboard_short_ltc_eth_2282",
                                  28,
                                  6862,
                                  20,
                                  v40);
                                v148 = v149 & 0x200;
                                if ( (v149 & 0x200) != 0 )
                                  goto LABEL_274;
                                if ( ++v203 == v202 )
                                {
                                  v203 = 0;
                                  V_LOCK();
                                  sub_FBD60((int)v122, *(int *)(a1 + 272));
                                  logfmt_raw(
                                    v40,
                                    0x1000u,
                                    0,
                                    v123,
                                    v122[0],
                                    v122[1],
                                    v122[2],
                                    v122[3],
                                    v122[4],
                                    v122[5],
                                    v122[6],
                                    v123,
                                    "ltc pattern-10 done at core: %02x, ip: %d",
                                    i12,
                                    20 * a2 + i13);
                                  V_UNLOCK();
                                  zlog(
                                    g_zc,
                                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp"
                                    "/release/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                                    171,
                                    "hashboard_short_ltc_eth_2282",
                                    28,
                                    6871,
                                    20,
                                    v40);
                                  break;
                                }
                              }
                            }
                          }
                          else
                          {
                            V_LOCK();
                            sub_FBD60((int)v118, *(int *)(a1 + 272));
                            logfmt_raw(
                              v40,
                              0x1000u,
                              0,
                              v119,
                              v118[0],
                              v118[1],
                              v118[2],
                              v118[3],
                              v118[4],
                              v118[5],
                              v118[6],
                              v119,
                              "get chip id %02x core id %02x failed",
                              i11,
                              i12);
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                              171,
                              "hashboard_short_ltc_eth_2282",
                              28,
                              6852,
                              100,
                              v40);
                          }
                          v147 = sub_1065C8(a1, i11, 97, ptr);
                          if ( v147 )
                          {
                            if ( *((_WORD *)ptr + 3) == 97 )
                            {
                              v146 = sub_FC76C(*(_DWORD *)ptr);
                              V_LOCK();
                              sub_FBD60((int)v126, *(int *)(a1 + 272));
                              logfmt_raw(
                                v40,
                                0x1000u,
                                0,
                                v127,
                                v126[0],
                                v126[1],
                                v126[2],
                                v126[3],
                                v126[4],
                                v126[5],
                                v126[6],
                                v127,
                                "asic %02x, reg %04x state %08x",
                                *((unsigned __int8 *)ptr + 4),
                                *((unsigned __int16 *)ptr + 3),
                                v146);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                                171,
                                "hashboard_short_ltc_eth_2282",
                                28,
                                6890,
                                20,
                                v40);
                              v144 = (unsigned __int16)(v146 & 0x380) >> 7;
                              v145 = 57344;
                              v143 = (unsigned __int16)(v146 & 0xE000) >> 13;
                              V_LOCK();
                              sub_FBD60((int)v128, *(int *)(a1 + 272));
                              logfmt_raw(
                                v40,
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
                                "err_status-send_status: %x-%x",
                                v143,
                                v144);
                              V_UNLOCK();
                              zlog(
                                g_zc,
                                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                                171,
                                "hashboard_short_ltc_eth_2282",
                                28,
                                6896,
                                20,
                                v40);
                              v206[2880 * i11 + 40 * i12 + 20 * a2 + i13] = v143 == 1;
                            }
                          }
                          else
                          {
                            V_LOCK();
                            sub_FBD60((int)v124, *(int *)(a1 + 272));
                            logfmt_raw(
                              v40,
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
                              "get chip reg addr %02x failed, resp_num: %d",
                              *((unsigned __int16 *)ptr + 3),
                              v147);
                            V_UNLOCK();
                            zlog(
                              g_zc,
                              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/relea"
                              "se/build/godminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                              171,
                              "hashboard_short_ltc_eth_2282",
                              28,
                              6881,
                              100,
                              v40);
                          }
                        }
                      }
                    }
                  }
                  for ( i15 = 0; i15 <= 5; ++i15 )
                  {
                    for ( i16 = 0; i16 <= 71; ++i16 )
                    {
                      for ( i17 = 0; i17 <= 39; ++i17 )
                        v43[2880 * i15 + 92500 + 40 * i16 + i17] = v206[2880 * i15 + 40 * i16 + i17];
                    }
                  }
                  sub_106BA8(a1, 28, 202383104);
                  usleep(0x2710u);
                  sub_106D34(a1, 241, 0);
                  usleep(0x2710u);
                  sub_106BA8(a1, 97, 0);
                  usleep(0x2710u);
                  if ( ptr )
                    free(ptr);
                  return 0;
                }
                else
                {
                  V_LOCK();
                  sub_FBD60((int)v110, *(int *)(a1 + 272));
                  logfmt_raw(
                    v40,
                    0x1000u,
                    0,
                    v111,
                    v110[0],
                    v110[1],
                    v110[2],
                    v110[3],
                    v110[4],
                    v110[5],
                    v110[6],
                    v111,
                    "get core reg addr %02x failed",
                    240);
                  V_UNLOCK();
                  zlog(
                    g_zc,
                    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/g"
                    "odminer-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                    171,
                    "hashboard_short_ltc_eth_2282",
                    28,
                    6774,
                    100,
                    v40);
                  if ( ptr )
                    free(ptr);
                  return 40;
                }
              }
              else
              {
                V_LOCK();
                sub_FBD60((int)v104, *(int *)(a1 + 272));
                logfmt_raw(
                  v40,
                  0x1000u,
                  0,
                  v105,
                  v104[0],
                  v104[1],
                  v104[2],
                  v104[3],
                  v104[4],
                  v104[5],
                  v104[6],
                  v105,
                  "get core reg addr %02x failed",
                  240);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                  171,
                  "hashboard_short_ltc_eth_2282",
                  28,
                  6702,
                  100,
                  v40);
                if ( ptr )
                  free(ptr);
                return 40;
              }
            }
            else
            {
              V_LOCK();
              sub_FBD60((int)v98, *(int *)(a1 + 272));
              logfmt_raw(
                v40,
                0x1000u,
                0,
                v99,
                v98[0],
                v98[1],
                v98[2],
                v98[3],
                v98[4],
                v98[5],
                v98[6],
                v99,
                "get core reg addr %02x failed",
                240);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "hashboard_short_ltc_eth_2282",
                28,
                6640,
                100,
                v40);
              if ( ptr )
                free(ptr);
              return 40;
            }
          }
          else
          {
            V_LOCK();
            sub_FBD60((int)v92, *(int *)(a1 + 272));
            logfmt_raw(
              v40,
              0x1000u,
              0,
              v93,
              v92[0],
              v92[1],
              v92[2],
              v92[3],
              v92[4],
              v92[5],
              v92[6],
              v93,
              "get core reg addr %02x failed",
              240);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "hashboard_short_ltc_eth_2282",
              28,
              6593,
              100,
              v40);
            if ( ptr )
              free(ptr);
            return 40;
          }
        }
        else
        {
          V_LOCK();
          sub_FBD60((int)v64, *(int *)(a1 + 272));
          logfmt_raw(
            v40,
            0x1000u,
            0,
            v65,
            v64[0],
            v64[1],
            v64[2],
            v64[3],
            v64[4],
            v64[5],
            v64[6],
            v65,
            "get core reg addr %02x failed",
            240);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "hashboard_short_ltc_eth_2282",
            28,
            6215,
            100,
            v40);
          if ( ptr )
            free(ptr);
          return 40;
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v58, *(int *)(a1 + 272));
        logfmt_raw(
          v40,
          0x1000u,
          0,
          v59,
          v58[0],
          v58[1],
          v58[2],
          v58[3],
          v58[4],
          v58[5],
          v58[6],
          v59,
          "get core reg addr %02x failed",
          240);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "hashboard_short_ltc_eth_2282",
          28,
          6143,
          100,
          v40);
        if ( ptr )
          free(ptr);
        return 40;
      }
    }
    else
    {
      V_LOCK();
      sub_FBD60((int)v52, *(int *)(a1 + 272));
      logfmt_raw(
        v40,
        0x1000u,
        0,
        v53,
        v52[0],
        v52[1],
        v52[2],
        v52[3],
        v52[4],
        v52[5],
        v52[6],
        v53,
        "get core reg addr %02x failed",
        240);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "hashboard_short_ltc_eth_2282",
        28,
        6079,
        100,
        v40);
      if ( ptr )
        free(ptr);
      return 40;
    }
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)v46, *(int *)(a1 + 272));
    logfmt_raw(
      v40,
      0x1000u,
      0,
      v47,
      v46[0],
      v46[1],
      v46[2],
      v46[3],
      v46[4],
      v46[5],
      v46[6],
      v47,
      "get core reg addr %02x failed",
      240);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "hashboard_short_ltc_eth_2282",
      28,
      6032,
      100,
      v40);
    if ( ptr )
      free(ptr);
    return 40;
  }
}
