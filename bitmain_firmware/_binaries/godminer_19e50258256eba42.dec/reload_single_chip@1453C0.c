int __fastcall reload_single_chip(int a1, char a2)
{
  int v2; // r0
  unsigned int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r0
  unsigned int v8; // r4
  __int64 v9; // r0
  int v10; // r4
  int v11; // r5
  int v12; // r6
  unsigned int v13; // r0
  int v15; // [sp+24h] [bp-1398h]
  _BYTE v18[48]; // [sp+4Ch] [bp-1370h] BYREF
  int s[8]; // [sp+104Ch] [bp-370h] BYREF
  char v20; // [sp+106Eh] [bp-34Eh] BYREF
  char v21; // [sp+106Fh] [bp-34Dh] BYREF
  _DWORD v22[7]; // [sp+1070h] [bp-34Ch] BYREF
  int v23; // [sp+108Ch] [bp-330h]
  _DWORD v24[7]; // [sp+1090h] [bp-32Ch] BYREF
  int v25; // [sp+10ACh] [bp-310h]
  _DWORD v26[7]; // [sp+10B0h] [bp-30Ch] BYREF
  int v27; // [sp+10CCh] [bp-2F0h]
  _DWORD v28[7]; // [sp+10D0h] [bp-2ECh] BYREF
  int v29; // [sp+10ECh] [bp-2D0h]
  _DWORD v30[7]; // [sp+10F0h] [bp-2CCh] BYREF
  int v31; // [sp+110Ch] [bp-2B0h]
  _DWORD v32[7]; // [sp+1110h] [bp-2ACh] BYREF
  int v33; // [sp+112Ch] [bp-290h]
  _DWORD v34[7]; // [sp+1130h] [bp-28Ch] BYREF
  int v35; // [sp+114Ch] [bp-270h]
  _DWORD v36[7]; // [sp+1150h] [bp-26Ch] BYREF
  int v37; // [sp+116Ch] [bp-250h]
  _DWORD v38[7]; // [sp+1170h] [bp-24Ch] BYREF
  int v39; // [sp+118Ch] [bp-230h]
  _DWORD v40[7]; // [sp+1190h] [bp-22Ch] BYREF
  int v41; // [sp+11ACh] [bp-210h]
  _DWORD v42[7]; // [sp+11B0h] [bp-20Ch] BYREF
  int v43; // [sp+11CCh] [bp-1F0h]
  _DWORD v44[7]; // [sp+11D0h] [bp-1ECh] BYREF
  int v45; // [sp+11ECh] [bp-1D0h]
  _DWORD v46[7]; // [sp+11F0h] [bp-1CCh] BYREF
  int v47; // [sp+120Ch] [bp-1B0h]
  _DWORD v48[7]; // [sp+1210h] [bp-1ACh] BYREF
  int v49; // [sp+122Ch] [bp-190h]
  _DWORD v50[7]; // [sp+1230h] [bp-18Ch] BYREF
  int v51; // [sp+124Ch] [bp-170h]
  _DWORD v52[7]; // [sp+1250h] [bp-16Ch] BYREF
  int v53; // [sp+126Ch] [bp-150h]
  _DWORD v54[7]; // [sp+1270h] [bp-14Ch] BYREF
  int v55; // [sp+128Ch] [bp-130h]
  _DWORD v56[7]; // [sp+1290h] [bp-12Ch] BYREF
  int v57; // [sp+12ACh] [bp-110h]
  _DWORD v58[7]; // [sp+12B0h] [bp-10Ch] BYREF
  int v59; // [sp+12CCh] [bp-F0h]
  _DWORD v60[7]; // [sp+12D0h] [bp-ECh] BYREF
  int v61; // [sp+12ECh] [bp-D0h]
  _DWORD v62[7]; // [sp+12F0h] [bp-CCh] BYREF
  int v63; // [sp+130Ch] [bp-B0h]
  _DWORD v64[7]; // [sp+1310h] [bp-ACh] BYREF
  int v65; // [sp+132Ch] [bp-90h]
  _DWORD v66[7]; // [sp+1330h] [bp-8Ch] BYREF
  int v67; // [sp+134Ch] [bp-70h]
  _DWORD v68[7]; // [sp+1350h] [bp-6Ch] BYREF
  int v69; // [sp+136Ch] [bp-50h]
  int j; // [sp+1374h] [bp-48h]
  int n; // [sp+1378h] [bp-44h]
  int m; // [sp+137Ch] [bp-40h]
  int k; // [sp+1380h] [bp-3Ch]
  int v74; // [sp+1384h] [bp-38h]
  int v75; // [sp+1388h] [bp-34h]
  unsigned __int16 v76; // [sp+138Eh] [bp-2Eh]
  int v77; // [sp+1390h] [bp-2Ch]
  float ii; // [sp+1394h] [bp-28h]
  float v79; // [sp+1398h] [bp-24h]
  float v80; // [sp+139Ch] [bp-20h]
  int i; // [sp+13A0h] [bp-1Ch]
  void *ptr; // [sp+13A4h] [bp-18h]

  V_LOCK();
  logfmt_raw(v18, 0x1000u, 0, "reload chain %d chip %d", *(_DWORD *)(a1 + 272), (unsigned __int8)a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "reload_single_chip",
    18,
    11271,
    40,
    v18);
  v74 = 1;
  v77 = 0;
  v21 = 0;
  v20 = 0;
  v76 = 0;
  v75 = *(_DWORD *)(a1 + 1060);
  memset(s, 0, sizeof(s));
  ii = 100.0;
  v79 = 6.25;
  v80 = 400.0;
  *(_BYTE *)(a1 + 1226) = 1;
  set_single_chip_frequency_eth_2282(a1, 1, a2);
  usleep(0x64u);
  set_single_chip_frequency_eth_2282(a1, 0, a2);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  set_single_chip_reset_eth_2282(a1, a2, 2, 254);
  usleep(0x64u);
  set_single_chip_reset_eth_2282(a1, a2, 2, 255);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  if ( *(_DWORD *)(a1 + 1060) )
  {
    V_LOCK();
    sub_FBD60((int)v22, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "Cache size %llx, DAG size %llx",
      v15,
      *(_DWORD *)v75,
      *(_DWORD *)(v75 + 4),
      *(_DWORD *)(v75 + 8),
      *(_DWORD *)(v75 + 12));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11300,
      60,
      v18);
    V_LOCK();
    sub_FBD60((int)v24, *(int *)(a1 + 272));
    logfmt_raw(v18, 0x1000u, 0, v25, v24[0], v24[1], v24[2], v24[3], v24[4], v24[5], v24[6], v25, "Seed hash: ");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11301,
      40,
      v18);
    for ( i = 0; i <= 7; ++i )
    {
      v2 = sub_10FFAC(*(_DWORD *)(v75 + 4 * (i + 4)));
      s[i] = v2;
      V_LOCK();
      sub_FBD60((int)v26, *(int *)(a1 + 272));
      logfmt_raw(v18, 0x1000u, 0, v27, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], v26[6], v27, "0x%08x", s[i]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "reload_single_chip",
        18,
        11304,
        40,
        v18);
    }
  }
  ptr = malloc(864 * v74);
  sub_106F8C(a1, a2, 9, 458781);
  sub_106F8C(a1, a2, 0, 2);
  sub_106F8C(a1, a2, 28, 1);
  sub_106F8C(a1, a2, 167, 0);
  sub_106F8C(a1, a2, 168, 0x100000);
  sub_106F8C(a1, a2, 169, 0x200000);
  sub_106F8C(a1, a2, 170, 3145728);
  sub_106F8C(a1, a2, 171, 41943040);
  sub_106F8C(a1, a2, 164, 28);
  printf("case_select: %d\n", (unsigned __int8)case_select);
  if ( case_select == 100 )
  {
    if ( *(_DWORD *)(a1 + 1060) )
    {
      sub_106F8C(a1, a2, 163, *(__int64 *)v75 >> 6);
      sub_106F8C(a1, a2, 16, s[7]);
      sub_106F8C(a1, a2, 17, s[6]);
      sub_106F8C(a1, a2, 18, s[5]);
      sub_106F8C(a1, a2, 19, s[4]);
      sub_106F8C(a1, a2, 20, s[3]);
      sub_106F8C(a1, a2, 21, s[2]);
      sub_106F8C(a1, a2, 22, s[1]);
      sub_106F8C(a1, a2, 23, s[0]);
    }
  }
  else
  {
    sub_106F8C(a1, a2, 163, 946163);
    sub_106F8C(a1, a2, 16, -365357919);
    sub_106F8C(a1, a2, 17, -1597648314);
    sub_106F8C(a1, a2, 18, -180818622);
    sub_106F8C(a1, a2, 19, -1693844633);
    sub_106F8C(a1, a2, 20, 1087925619);
    sub_106F8C(a1, a2, 21, 2094850192);
    sub_106F8C(a1, a2, 22, -1915389567);
    sub_106F8C(a1, a2, 23, 1812007619);
  }
  sub_106F8C(a1, a2, 192, 3874);
  sub_106F8C(a1, a2, 178, 0xFFFF);
  sub_106F8C(a1, a2, 179, 0);
  sub_106F8C(a1, a2, 164, 29);
  usleep(0x1F40u);
  while ( v21 != 1 )
  {
    sub_104BD0(a1, a2, 0, 160, 0, &v21);
    sleep(1u);
  }
  V_LOCK();
  sub_FBD60((int)v28, *(int *)(a1 + 272));
  logfmt_raw(
    v18,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    "chip %d cache done!",
    (unsigned __int8)a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "reload_single_chip",
    18,
    11369,
    60,
    v18);
  printf("chip %d cache done!\n", (unsigned __int8)a2);
  if ( ptr )
  {
    v77 = sub_108B84(a1, a2, 0, 162, ptr);
    V_LOCK();
    sub_FBD60((int)v30, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
      0x1000u,
      0,
      v31,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v31,
      "get chip %d cache size resp: %d",
      (unsigned __int8)a2,
      v77);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11374,
      40,
      v18);
    for ( j = 0; j < v77; ++j )
    {
      if ( case_select == 100 )
      {
        if ( *(_DWORD *)(a1 + 1060) )
        {
          v3 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
          if ( v3 == *(_QWORD *)v75 >> 6 )
          {
            if ( j == v77 )
            {
              V_LOCK();
              sub_FBD60((int)v38, *(int *)(a1 + 272));
              logfmt_raw(
                v18,
                0x1000u,
                0,
                v39,
                v38[0],
                v38[1],
                v38[2],
                v38[3],
                v38[4],
                v38[5],
                v38[6],
                v39,
                "cache size check success!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "reload_single_chip",
                18,
                11392,
                60,
                v18);
              puts("cache size check success!");
            }
          }
          else
          {
            V_LOCK();
            sub_FBD60((int)v36, *(int *)(a1 + 272));
            logfmt_raw(
              v18,
              0x1000u,
              0,
              v37,
              v36[0],
              v36[1],
              v36[2],
              v36[3],
              v36[4],
              v36[5],
              v36[6],
              v37,
              "cache size check failed for chip-%d",
              *((unsigned __int8 *)ptr + 12 * j + 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "reload_single_chip",
              18,
              11389,
              100,
              v18);
            printf("cache size check failed for chip-%d\n", *((unsigned __int8 *)ptr + 12 * j + 4));
          }
        }
      }
      else if ( sub_FC76C(*((_DWORD *)ptr + 3 * j)) == 946163 )
      {
        if ( j == v77 - 1 )
        {
          V_LOCK();
          sub_FBD60((int)v34, *(int *)(a1 + 272));
          logfmt_raw(
            v18,
            0x1000u,
            0,
            v35,
            v34[0],
            v34[1],
            v34[2],
            v34[3],
            v34[4],
            v34[5],
            v34[6],
            v35,
            "cache size check success!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "reload_single_chip",
            18,
            11381,
            60,
            v18);
          puts("cache size check success!");
        }
      }
      else
      {
        V_LOCK();
        sub_FBD60((int)v32, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
          0x1000u,
          0,
          v33,
          v32[0],
          v32[1],
          v32[2],
          v32[3],
          v32[4],
          v32[5],
          v32[6],
          v33,
          "cache size check faile for chip-%d",
          *((unsigned __int8 *)ptr + 12 * j + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11378,
          100,
          v18);
        printf("cache size check failed for chip-%d\n", *((unsigned __int8 *)ptr + 12 * j + 4));
      }
    }
  }
  if ( ptr )
  {
    v77 = sub_108B84(a1, a2, 0, 172, ptr);
    V_LOCK();
    sub_FBD60((int)v40, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
      0x1000u,
      0,
      v41,
      v40[0],
      v40[1],
      v40[2],
      v40[3],
      v40[4],
      v40[5],
      v40[6],
      v41,
      "get chip %d cache err cnt resp: %d",
      (unsigned __int8)a2,
      v77);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11403,
      40,
      v18);
    for ( k = 0; k < v77; ++k )
    {
      if ( sub_FC76C(*((_DWORD *)ptr + 3 * k)) )
      {
        V_LOCK();
        sub_FBD60((int)v42, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
          0x1000u,
          0,
          v43,
          v42[0],
          v42[1],
          v42[2],
          v42[3],
          v42[4],
          v42[5],
          v42[6],
          v43,
          "cache checked err cnt for chip-%d",
          *((unsigned __int8 *)ptr + 12 * k + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11406,
          100,
          v18);
        printf("cache checked err cnt for chip-%d\n", *((unsigned __int8 *)ptr + 12 * k + 4));
        V_LOCK();
        sub_FBD60((int)v44, *(int *)(a1 + 272));
        v4 = *((unsigned __int8 *)ptr + 12 * k + 4);
        v5 = *((unsigned __int8 *)ptr + 12 * k + 8);
        v6 = *((unsigned __int16 *)ptr + 6 * k + 3);
        v7 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
        logfmt_raw(
          v18,
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
          "asic %02x, core %02x, reg %04x state %08x",
          v4,
          v5,
          v6,
          v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11409,
          100,
          v18);
      }
      else if ( k == v77 - 1 )
      {
        V_LOCK();
        sub_FBD60((int)v46, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
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
          "cache checked success for no error!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11411,
          60,
          v18);
        puts("cache checked success for no error!");
      }
    }
  }
  if ( case_select == 100 )
  {
    if ( *(_DWORD *)(a1 + 1060) )
      sub_106F8C(a1, a2, 180, *(__int64 *)(v75 + 8) >> 6);
  }
  else
  {
    sub_106F8C(a1, a2, 180, 60555254);
  }
  sub_106F8C(a1, a2, 164, 3102);
  usleep(0x280u);
  while ( v20 != 1 && v76 <= 0x12Cu )
  {
    sub_104BD0(a1, a2, 255, 160, 1, &v20);
    sleep(3u);
    ++v76;
  }
  if ( v76 > 0x12Cu )
  {
    V_LOCK();
    sub_FBD60((int)v50, *(int *)(a1 + 272));
    logfmt_raw(v18, 0x1000u, 0, v51, v50[0], v50[1], v50[2], v50[3], v50[4], v50[5], v50[6], v51, "dag done failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11440,
      100,
      v18);
    puts("dag done failed!");
    *(_BYTE *)(a1 + 1025) = 1;
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)v48, *(int *)(a1 + 272));
    logfmt_raw(v18, 0x1000u, 0, v49, v48[0], v48[1], v48[2], v48[3], v48[4], v48[5], v48[6], v49, "dag done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11437,
      60,
      v18);
    puts("dag done!");
  }
  *(_BYTE *)(a1 + 1033) = 1;
  if ( ptr )
  {
    v77 = sub_108B84(a1, a2, 255, 161, ptr);
    V_LOCK();
    sub_FBD60((int)v52, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
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
      "get dag size resp: %d",
      v77);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11448,
      20,
      v18);
    for ( m = 0; m < v77; ++m )
    {
      if ( case_select == 100 )
      {
        if ( *(_DWORD *)(a1 + 1060) )
        {
          v8 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
          LODWORD(v9) = sub_34579C(*(_QWORD *)(v75 + 8), 0x1200u);
          if ( v8 == v9 )
          {
            if ( m == v77 - 1 )
            {
              V_LOCK();
              sub_FBD60((int)v60, *(int *)(a1 + 272));
              logfmt_raw(
                v18,
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
                "dag size check success!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "reload_single_chip",
                18,
                11471,
                60,
                v18);
              puts("dag size check success!");
            }
          }
          else
          {
            V_LOCK();
            sub_FBD60((int)v58, *(int *)(a1 + 272));
            logfmt_raw(
              v18,
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
              "dag size check failed for chip-%d, core-%d",
              *((unsigned __int8 *)ptr + 12 * m + 4),
              *((unsigned __int8 *)ptr + 12 * m + 8));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "reload_single_chip",
              18,
              11464,
              100,
              v18);
            printf(
              "dag size check failed for chip-%d, core-%d\n",
              *((unsigned __int8 *)ptr + 12 * m + 4),
              *((unsigned __int8 *)ptr + 12 * m + 8));
            if ( *((_BYTE *)ptr + 12 * m + 8) != 71 )
            {
              *(_BYTE *)(a1 + 1025) = 1;
              break;
            }
          }
        }
      }
      else
      {
        if ( sub_FC76C(*((_DWORD *)ptr + 3 * m)) != 841045 )
        {
          V_LOCK();
          sub_FBD60((int)v54, *(int *)(a1 + 272));
          logfmt_raw(
            v18,
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
            "dag size check failed for chip-%d, core-%d",
            *((unsigned __int8 *)ptr + 12 * m + 4),
            *((unsigned __int8 *)ptr + 12 * m + 8));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "reload_single_chip",
            18,
            11453,
            100,
            v18);
          printf(
            "dag size check failed for chip-%d, core-%d\n",
            *((unsigned __int8 *)ptr + 12 * m + 4),
            *((unsigned __int8 *)ptr + 12 * m + 8));
          break;
        }
        if ( m == v77 - 1 )
        {
          V_LOCK();
          sub_FBD60((int)v56, *(int *)(a1 + 272));
          logfmt_raw(
            v18,
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
            "dag size check success!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "reload_single_chip",
            18,
            11457,
            60,
            v18);
          puts("dag size check success!");
        }
      }
    }
  }
  if ( ptr )
  {
    v77 = sub_108B84(a1, a2, 255, 173, ptr);
    V_LOCK();
    sub_FBD60((int)v62, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
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
      "get dag err cnt resp num: %d",
      v77);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "reload_single_chip",
      18,
      11481,
      40,
      v18);
    for ( n = 0; n < v77; ++n )
    {
      if ( sub_FC76C(*((_DWORD *)ptr + 3 * n)) )
      {
        V_LOCK();
        sub_FBD60((int)v64, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
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
          "dag check meet error for chip-%d, core-%d",
          *((unsigned __int8 *)ptr + 12 * n + 4),
          *((unsigned __int8 *)ptr + 12 * n + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11484,
          100,
          v18);
        V_LOCK();
        v10 = *((unsigned __int8 *)ptr + 12 * n + 4);
        v11 = *((unsigned __int8 *)ptr + 12 * n + 8);
        v12 = *((unsigned __int16 *)ptr + 6 * n + 3);
        v13 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
        logfmt_raw(v18, 0x1000u, 0, "asic %02x, core %02x, reg %04x error cnt: %08x", v10, v11, v12, v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11486,
          100,
          v18);
        printf(
          "dag check meet error for chip-%d, core-%d\n",
          *((unsigned __int8 *)ptr + 12 * n + 4),
          *((unsigned __int8 *)ptr + 12 * n + 8));
        *(_BYTE *)(a1 + 1025) = 1;
        break;
      }
      if ( n == v77 - 1 )
      {
        V_LOCK();
        sub_FBD60((int)v66, *(int *)(a1 + 272));
        logfmt_raw(
          v18,
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
          "dag check success for no error");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "reload_single_chip",
          18,
          11491,
          60,
          v18);
        puts("dag check success for no error");
      }
    }
  }
  for ( ii = ii + v79; ii < v80; ii = ii + v79 )
  {
    set_single_chip_frequency_eth_2282(a1, 1, a2);
    usleep(0x64u);
    set_single_chip_frequency_eth_2282(a1, 0, a2);
    usleep(0x64u);
    sub_106F8C(a1, a2, 15, 3);
    set_single_chip_reset_eth_2282(a1, a2, 2, 254);
    usleep(0x64u);
    set_single_chip_reset_eth_2282(a1, a2, 2, 255);
    usleep(0x64u);
    sub_106F8C(a1, a2, 15, 3);
  }
  V_LOCK();
  sub_FBD60((int)v68, *(int *)(a1 + 272));
  logfmt_raw(
    v18,
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
    "set chip %d net_mining_start",
    (unsigned __int8)a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "reload_single_chip",
    18,
    11511,
    40,
    v18);
  sub_106F8C(a1, a2, 15, 3);
  sub_106F8C(a1, a2, 0, 0);
  sub_106F8C(a1, a2, 28, 0);
  sub_106F8C(a1, a2, 26, 28);
  if ( *(_DWORD *)(a1 + 1060) )
    sub_106F8C(a1, a2, 27, *(__int64 *)(v75 + 8) >> 7);
  sub_106F8C(a1, a2, 9, 458781);
  sub_106F8C(a1, a2, 32, (unsigned __int8)internal_time);
  usleep(0x2710u);
  while ( ii <= 460.0 )
  {
    set_single_chip_frequency_eth_2282(a1, 1, a2);
    usleep(0x64u);
    if ( ii <= 500.0 )
    {
      set_single_chip_frequency_eth_2282(a1, 0, a2);
      usleep(0x64u);
    }
    sub_106F8C(a1, a2, 15, 3);
    set_single_chip_reset_eth_2282(a1, a2, 2, 254);
    usleep(0x64u);
    set_single_chip_reset_eth_2282(a1, a2, 2, 255);
    usleep(0x64u);
    sub_106F8C(a1, a2, 15, 3);
    sleep(0x1Eu);
    ii = ii + v79;
  }
  sub_106F8C(a1, a2, 192, 3872);
  set_single_chip_reset_eth_2282(a1, a2, 2, 254);
  usleep(0x64u);
  set_single_chip_reset_eth_2282(a1, a2, 2, 255);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  if ( ptr )
    free(ptr);
  return 0;
}
