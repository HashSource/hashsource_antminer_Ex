int __fastcall phy_external_bist_rvn(int a1, int a2, unsigned __int8 *a3, unsigned int a4)
{
  int v8; // r0
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r6
  unsigned __int8 *v11; // r4
  unsigned __int16 v12; // t1
  int v13; // r0
  int v14; // r0
  unsigned __int8 *v15; // r5
  unsigned __int8 *v16; // r6
  unsigned __int8 v17; // t1
  unsigned __int16 v18; // t1
  int v19; // r0
  int v20; // r0
  int v21; // r10
  unsigned __int16 v22; // r6
  int v23; // r3
  int *v24; // r10
  int v25; // r9
  char *v26; // r4
  int v27; // r0
  int v28; // r0
  char *v29; // r5
  int v30; // r0
  _DWORD *v31; // r2
  unsigned __int16 v32; // r3
  int v33; // r1
  int v34; // r12
  unsigned __int16 v35; // t1
  unsigned __int16 v36; // r6
  char *v37; // r4
  int v38; // r0
  int v39; // r0
  char *v40; // r5
  int v41; // r0
  _DWORD *v42; // r2
  unsigned __int16 v43; // r3
  int v44; // r1
  int v45; // r12
  unsigned int v46; // r5
  __int64 v47; // r0
  unsigned int *v48; // r12
  __int64 v49; // r2
  unsigned int *i; // lr
  unsigned int v51; // t1
  unsigned int v52; // t1
  int v53; // r0
  int v54; // r0
  int v55; // r0
  unsigned __int8 *v57; // [sp+3Ch] [bp-1150h]
  char *ptr; // [sp+44h] [bp-1148h]
  _DWORD *v60; // [sp+48h] [bp-1144h]
  int v61; // [sp+4Ch] [bp-1140h]
  unsigned __int8 *v62; // [sp+50h] [bp-113Ch]
  unsigned __int8 *v63; // [sp+5Ch] [bp-1130h]
  int v64; // [sp+68h] [bp-1124h] BYREF
  char v65[32]; // [sp+88h] [bp-1104h] BYREF
  int v66; // [sp+A8h] [bp-10E4h] BYREF
  char v67[32]; // [sp+C8h] [bp-10C4h] BYREF
  int v68; // [sp+E8h] [bp-10A4h] BYREF
  int v69; // [sp+108h] [bp-1084h] BYREF
  int v70; // [sp+10Ch] [bp-1080h] BYREF
  int v71; // [sp+128h] [bp-1064h] BYREF
  _DWORD v72[15]; // [sp+12Ch] [bp-1060h] BYREF
  _DWORD v73[8]; // [sp+168h] [bp-1024h] BYREF
  _DWORD v74[1025]; // [sp+188h] [bp-1004h] BYREF

  V_LOCK(a1);
  V_INT((int)&v64, "chain");
  v8 = logfmt_raw((int)v74, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    173,
    "phy_external_bist_rvn",
    21,
    1095,
    60,
    v74);
  memset(&v72[7], 0, 0x20u);
  memset(v73, 0, sizeof(v73));
  ptr = (char *)malloc(0x300u);
  if ( a4 )
  {
    v9 = a3;
    v62 = a3 - 1;
    v61 = (unsigned __int8)(a4 - 1);
    v10 = &a3[v61];
    v11 = v62;
    v57 = v9;
    do
    {
      while ( 1 )
      {
        v12 = *++v11;
        v13 = check_core_reg_with_expect_data_rvn(a1, a2, v12, 64, 0xFF000100);
        if ( v13 )
          break;
        if ( v11 == v10 )
          goto LABEL_6;
      }
      V_LOCK(v13);
      V_INT((int)v65, "chain");
      v14 = logfmt_raw((int)v74, 0x1000u);
      V_UNLOCK(v14);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        173,
        "phy_external_bist_rvn",
        21,
        1227,
        100,
        v74);
    }
    while ( v11 != v10 );
LABEL_6:
    v15 = v62;
    v16 = v62;
    do
    {
      v17 = *++v16;
      sub_8E400(a1, v17, 133, 0xFFFF);
      sub_8E400(a1, *v16, 134, 1342177279);
    }
    while ( v11 != v16 );
    sub_8E3BC(a1, 132, -2147483647);
    sleep(0xAu);
    do
    {
      while ( 1 )
      {
        v18 = *++v15;
        v19 = check_core_reg_with_expect_data_rvn(a1, a2, v18, 139, 0xFF0000FF);
        if ( v19 )
          break;
        if ( v16 == v15 )
          goto LABEL_12;
      }
      V_LOCK(v19);
      V_INT((int)&v66, "chain");
      v20 = logfmt_raw((int)v74, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        173,
        "phy_external_bist_rvn",
        21,
        1249,
        100,
        v74);
    }
    while ( v16 != v15 );
LABEL_12:
    v21 = a1;
    v63 = &a3[v61 + 1];
    do
    {
      v22 = 128;
      v69 = -2088599168;
      v23 = v21;
      v24 = (int *)((char *)&v69 + 1);
      v25 = v23;
      while ( 1 )
      {
        v26 = ptr;
        v27 = sub_8E454(v25, *v57, v22, ptr);
        if ( v27 )
        {
          v28 = 3 * v27;
          v29 = &ptr[4 * v28];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v26 + 3)) != v22 )
            {
              v26 += 12;
              if ( v29 == v26 )
                goto LABEL_21;
            }
            V_LOCK(v28);
            v26 += 12;
            V_INT((int)v67, "chain");
            v30 = logfmt_raw((int)v74, 0x1000u);
            V_UNLOCK(v30);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              173,
              "phy_external_bist_rvn",
              21,
              1265,
              20,
              v74);
            v31 = &v74[(unsigned __int8)*(v26 - 8)];
            v32 = bswap32(*((_DWORD *)v26 - 3));
            v33 = *(v31 - 8);
            v34 = v32;
            if ( v32 )
              v34 = 1;
            v28 = dword_176F50 + 2 * v34;
            dword_176F50 = v28;
            *(v31 - 8) = v33 + 2 * v32;
          }
          while ( v29 != v26 );
        }
LABEL_21:
        if ( &v70 == v24 )
          break;
        v35 = *(unsigned __int8 *)v24;
        v24 = (int *)((char *)v24 + 1);
        v22 = v35;
      }
      v21 = v25;
      v36 = 135;
      v60 = (int *)((char *)&v71 + 1);
      v71 = -1970698105;
      while ( 1 )
      {
        v37 = ptr;
        v38 = sub_8E454(v25, *v57, v36, ptr);
        if ( v38 )
        {
          v39 = 3 * v38;
          v40 = &ptr[4 * v39];
          do
          {
            while ( (unsigned __int16)__rev16(*((unsigned __int16 *)v37 + 3)) != v36 )
            {
              v37 += 12;
              if ( v40 == v37 )
                goto LABEL_31;
            }
            V_LOCK(v39);
            v37 += 12;
            V_INT((int)&v68, "chain");
            v41 = logfmt_raw((int)v74, 0x1000u);
            V_UNLOCK(v41);
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer"
              "-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
              173,
              "phy_external_bist_rvn",
              21,
              1283,
              20,
              v74);
            v42 = &v74[(unsigned __int8)*(v37 - 8)];
            v43 = bswap32(*((_DWORD *)v37 - 3));
            v44 = *(v42 - 16);
            v45 = v43;
            if ( v43 )
              v45 = 1;
            v39 = dword_176F54 + 2 * v45;
            dword_176F54 = v39;
            *(v42 - 16) = v44 + 2 * v43;
          }
          while ( v40 != v37 );
        }
LABEL_31:
        if ( v72 == v60 )
          break;
        v36 = *(unsigned __int8 *)v60;
        v60 = (_DWORD *)((char *)v60 + 1);
      }
      ++v57;
    }
    while ( v57 != v63 );
    v46 = v72[7];
    a4 = v73[0];
  }
  else
  {
    sub_8E3BC(a1, 132, -2147483647);
    v46 = 0;
    sleep(0xAu);
  }
  free(ptr);
  v47 = *(_QWORD *)&dword_176F58;
  v48 = &v72[8];
  v49 = *(_QWORD *)&dword_176F60;
  for ( i = &v73[1]; ; ++i )
  {
    v47 += v46;
    v49 += a4;
    if ( v48 == v73 )
      break;
    v51 = *v48++;
    v46 = v51;
    v52 = *i;
    a4 = v52;
  }
  *(_QWORD *)&dword_176F58 = v47;
  *(_QWORD *)&dword_176F60 = v49;
  V_LOCK(v47);
  V_INT((int)&v69, "chain");
  v53 = logfmt_raw((int)v74, 0x1000u);
  V_UNLOCK(v53);
  v54 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
          173,
          "phy_external_bist_rvn",
          21,
          1299,
          60,
          v74);
  V_LOCK(v54);
  V_INT((int)&v71, "chain");
  v55 = logfmt_raw((int)v74, 0x1000u);
  V_UNLOCK(v55);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    173,
    "phy_external_bist_rvn",
    21,
    1300,
    60,
    v74);
  return 0;
}
