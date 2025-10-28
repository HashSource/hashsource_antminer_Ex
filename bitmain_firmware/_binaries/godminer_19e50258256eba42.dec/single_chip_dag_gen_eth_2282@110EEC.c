int __fastcall single_chip_dag_gen_eth_2282(int a1, int a2)
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
  int v15; // [sp+24h] [bp-1310h]
  _BYTE v18[48]; // [sp+44h] [bp-12F0h] BYREF
  int s[8]; // [sp+1044h] [bp-2F0h] BYREF
  char v20; // [sp+1066h] [bp-2CEh] BYREF
  char v21; // [sp+1067h] [bp-2CDh] BYREF
  _DWORD v22[7]; // [sp+1068h] [bp-2CCh] BYREF
  int v23; // [sp+1084h] [bp-2B0h]
  _DWORD v24[7]; // [sp+1088h] [bp-2ACh] BYREF
  int v25; // [sp+10A4h] [bp-290h]
  _DWORD v26[7]; // [sp+10A8h] [bp-28Ch] BYREF
  int v27; // [sp+10C4h] [bp-270h]
  _DWORD v28[7]; // [sp+10C8h] [bp-26Ch] BYREF
  int v29; // [sp+10E4h] [bp-250h]
  _DWORD v30[7]; // [sp+10E8h] [bp-24Ch] BYREF
  int v31; // [sp+1104h] [bp-230h]
  _DWORD v32[7]; // [sp+1108h] [bp-22Ch] BYREF
  int v33; // [sp+1124h] [bp-210h]
  _DWORD v34[7]; // [sp+1128h] [bp-20Ch] BYREF
  int v35; // [sp+1144h] [bp-1F0h]
  _DWORD v36[7]; // [sp+1148h] [bp-1ECh] BYREF
  int v37; // [sp+1164h] [bp-1D0h]
  _DWORD v38[7]; // [sp+1168h] [bp-1CCh] BYREF
  int v39; // [sp+1184h] [bp-1B0h]
  _DWORD v40[7]; // [sp+1188h] [bp-1ACh] BYREF
  int v41; // [sp+11A4h] [bp-190h]
  _DWORD v42[7]; // [sp+11A8h] [bp-18Ch] BYREF
  int v43; // [sp+11C4h] [bp-170h]
  _DWORD v44[7]; // [sp+11C8h] [bp-16Ch] BYREF
  int v45; // [sp+11E4h] [bp-150h]
  _DWORD v46[7]; // [sp+11E8h] [bp-14Ch] BYREF
  int v47; // [sp+1204h] [bp-130h]
  _DWORD v48[7]; // [sp+1208h] [bp-12Ch] BYREF
  int v49; // [sp+1224h] [bp-110h]
  _DWORD v50[7]; // [sp+1228h] [bp-10Ch] BYREF
  int v51; // [sp+1244h] [bp-F0h]
  _DWORD v52[7]; // [sp+1248h] [bp-ECh] BYREF
  int v53; // [sp+1264h] [bp-D0h]
  _DWORD v54[7]; // [sp+1268h] [bp-CCh] BYREF
  int v55; // [sp+1284h] [bp-B0h]
  _DWORD v56[7]; // [sp+1288h] [bp-ACh] BYREF
  int v57; // [sp+12A4h] [bp-90h]
  _DWORD v58[7]; // [sp+12A8h] [bp-8Ch] BYREF
  int v59; // [sp+12C4h] [bp-70h]
  _DWORD v60[7]; // [sp+12C8h] [bp-6Ch] BYREF
  int v61; // [sp+12E4h] [bp-50h]
  int j; // [sp+12ECh] [bp-48h]
  int k; // [sp+12F0h] [bp-44h]
  int m; // [sp+12F4h] [bp-40h]
  int n; // [sp+12F8h] [bp-3Ch]
  int v66; // [sp+12FCh] [bp-38h]
  int v67; // [sp+1300h] [bp-34h]
  _DWORD *v68; // [sp+1304h] [bp-30h]
  unsigned __int16 v69; // [sp+130Ah] [bp-2Ah]
  float ii; // [sp+130Ch] [bp-28h]
  float v71; // [sp+1310h] [bp-24h]
  float v72; // [sp+1314h] [bp-20h]
  void *ptr; // [sp+1318h] [bp-1Ch]
  int i; // [sp+131Ch] [bp-18h]

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
    "chip-%d %s...",
    a2,
    "single_chip_dag_gen_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "single_chip_dag_gen_eth_2282",
    28,
    1824,
    60,
    v18);
  v66 = 1;
  v67 = 0;
  v21 = 0;
  v20 = 0;
  v69 = 0;
  v68 = *(_DWORD **)(a1 + 1060);
  memset(s, 0, sizeof(s));
  ii = 100.0;
  v72 = 6.25;
  v71 = 400.0;
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
    sub_FBD60((int)v24, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
      0x1000u,
      0,
      v25,
      v24[0],
      v24[1],
      v24[2],
      v24[3],
      v24[4],
      v24[5],
      v24[6],
      v25,
      "Cache size %llx, DAG size %llx",
      v15,
      *v68,
      v68[1],
      v68[2],
      v68[3]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1846,
      60,
      v18);
    printf("Cache size %llx, DAG size %llx", *(_QWORD *)v68, *((_QWORD *)v68 + 1));
    V_LOCK();
    sub_FBD60((int)v26, *(int *)(a1 + 272));
    logfmt_raw(v18, 0x1000u, 0, v27, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], v26[6], v27, "Seed hash: ");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1848,
      40,
      v18);
    for ( i = 0; i <= 7; ++i )
    {
      v2 = sub_10FFAC(v68[i + 4]);
      s[i] = v2;
      V_LOCK();
      sub_FBD60((int)v28, *(int *)(a1 + 272));
      logfmt_raw(v18, 0x1000u, 0, v29, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6], v29, "0x%08x", s[i]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "single_chip_dag_gen_eth_2282",
        28,
        1851,
        40,
        v18);
    }
  }
  ptr = malloc(864 * v66);
  sub_106F8C(a1, a2, 9, 458781);
  sub_106F8C(a1, a2, 0, 2);
  sub_106F8C(a1, a2, 28, 1);
  sub_106F8C(a1, a2, 167, 0);
  sub_106F8C(a1, a2, 168, 0x100000);
  sub_106F8C(a1, a2, 169, 0x200000);
  sub_106F8C(a1, a2, 170, 3145728);
  sub_106F8C(a1, a2, 171, 41943040);
  sub_106F8C(a1, a2, 164, 28);
  if ( *(_DWORD *)(a1 + 1060) )
  {
    sub_106F8C(a1, a2, 163, *(__int64 *)v68 >> 6);
    sub_106F8C(a1, a2, 16, s[7]);
    sub_106F8C(a1, a2, 17, s[6]);
    sub_106F8C(a1, a2, 18, s[5]);
    sub_106F8C(a1, a2, 19, s[4]);
    sub_106F8C(a1, a2, 20, s[3]);
    sub_106F8C(a1, a2, 21, s[2]);
    sub_106F8C(a1, a2, 22, s[1]);
    sub_106F8C(a1, a2, 23, s[0]);
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
    "chip %d cache done!",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "single_chip_dag_gen_eth_2282",
    28,
    1891,
    60,
    v18);
  printf("chip %d cache done!\n", a2);
  if ( ptr )
  {
    v67 = sub_108B84(a1, a2, 0, 162, ptr);
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
      "get chip %d cache size resp: %d",
      a2,
      v67);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1896,
      40,
      v18);
    for ( j = 0; j < v67; ++j )
    {
      if ( *(_DWORD *)(a1 + 1060) )
      {
        v3 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
        if ( v3 == *(_QWORD *)v68 >> 6 )
        {
          if ( j == v67 )
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
              "cache size check success!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "single_chip_dag_gen_eth_2282",
              28,
              1904,
              60,
              v18);
            puts("cache size check success!");
          }
        }
        else
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
            "cache size check failed for chip-%d",
            *((unsigned __int8 *)ptr + 12 * j + 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "single_chip_dag_gen_eth_2282",
            28,
            1901,
            100,
            v18);
          printf("cache size check failed for chip-%d\n", *((unsigned __int8 *)ptr + 12 * j + 4));
        }
      }
    }
  }
  if ( ptr )
  {
    v67 = sub_108B84(a1, a2, 0, 172, ptr);
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
      "get chip %d cache err cnt resp: %d",
      a2,
      v67);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1914,
      40,
      v18);
    for ( k = 0; k < v67; ++k )
    {
      if ( sub_FC76C(*((_DWORD *)ptr + 3 * k)) )
      {
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
          "cache checked err cnt for chip-%d",
          *((unsigned __int8 *)ptr + 12 * k + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "single_chip_dag_gen_eth_2282",
          28,
          1917,
          100,
          v18);
        printf("cache checked err cnt for chip-%d\n", *((unsigned __int8 *)ptr + 12 * k + 4));
        V_LOCK();
        sub_FBD60((int)v42, *(int *)(a1 + 272));
        v4 = *((unsigned __int8 *)ptr + 12 * k + 4);
        v5 = *((unsigned __int8 *)ptr + 12 * k + 8);
        v6 = *((unsigned __int16 *)ptr + 6 * k + 3);
        v7 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
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
          "single_chip_dag_gen_eth_2282",
          28,
          1920,
          100,
          v18);
      }
      else if ( k == v67 - 1 )
      {
        V_LOCK();
        sub_FBD60((int)v44, *(int *)(a1 + 272));
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
          "cache checked success for no error!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "single_chip_dag_gen_eth_2282",
          28,
          1922,
          60,
          v18);
        puts("cache checked success for no error!");
      }
    }
  }
  if ( *(_DWORD *)(a1 + 1060) )
    sub_106F8C(a1, a2, 180, *((__int64 *)v68 + 1) >> 6);
  sub_106F8C(a1, a2, 164, 3102);
  usleep(0x280u);
  while ( v20 != 1 && v69 <= 0x258u )
  {
    sub_104BD0(a1, a2, 255, 160, 1, &v20);
    sleep(3u);
    ++v69;
  }
  if ( v69 > 0xC8u )
  {
    V_LOCK();
    sub_FBD60((int)v48, *(int *)(a1 + 272));
    logfmt_raw(v18, 0x1000u, 0, v49, v48[0], v48[1], v48[2], v48[3], v48[4], v48[5], v48[6], v49, "dag done failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1946,
      100,
      v18);
    puts("dag done failed!");
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)v46, *(int *)(a1 + 272));
    logfmt_raw(v18, 0x1000u, 0, v47, v46[0], v46[1], v46[2], v46[3], v46[4], v46[5], v46[6], v47, "dag done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1943,
      60,
      v18);
    puts("dag done!");
  }
  if ( ptr )
  {
    v67 = sub_108B84(a1, a2, 255, 161, ptr);
    V_LOCK();
    sub_FBD60((int)v50, *(int *)(a1 + 272));
    logfmt_raw(
      v18,
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
      "get dag size resp: %d",
      v67);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1952,
      20,
      v18);
    for ( m = 0; m < v67; ++m )
    {
      if ( *(_DWORD *)(a1 + 1060) )
      {
        v8 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
        LODWORD(v9) = sub_34579C(*((_QWORD *)v68 + 1), 0x1200u);
        if ( v8 == v9 )
        {
          if ( m == v67 - 1 )
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
              "dag size check success!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "single_chip_dag_gen_eth_2282",
              28,
              1964,
              60,
              v18);
            puts("dag size check success!");
          }
        }
        else
        {
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
            "dag size check failed for chip-%d, core-%d",
            *((unsigned __int8 *)ptr + 12 * m + 4),
            *((unsigned __int8 *)ptr + 12 * m + 8));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "single_chip_dag_gen_eth_2282",
            28,
            1958,
            100,
            v18);
          printf(
            "dag size check failed for chip-%d, core-%d\n",
            *((unsigned __int8 *)ptr + 12 * m + 4),
            *((unsigned __int8 *)ptr + 12 * m + 8));
          if ( *((_BYTE *)ptr + 12 * m + 8) != 71 )
            break;
        }
      }
    }
  }
  if ( ptr )
  {
    v67 = sub_108B84(a1, a2, 255, 173, ptr);
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
      "get dag err cnt resp: %d",
      v67);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "single_chip_dag_gen_eth_2282",
      28,
      1973,
      40,
      v18);
    for ( n = 0; n < v67; ++n )
    {
      if ( sub_FC76C(*((_DWORD *)ptr + 3 * n)) )
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
          "dag check meet error for chip-%d, core-%d",
          *((unsigned __int8 *)ptr + 12 * n + 4),
          *((unsigned __int8 *)ptr + 12 * n + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "single_chip_dag_gen_eth_2282",
          28,
          1976,
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
          "single_chip_dag_gen_eth_2282",
          28,
          1978,
          100,
          v18);
        printf(
          "dag check meet error for chip-%d, core-%d\n",
          *((unsigned __int8 *)ptr + 12 * n + 4),
          *((unsigned __int8 *)ptr + 12 * n + 8));
        *(_BYTE *)(a1 + 1025) = 1;
        break;
      }
      if ( n == v67 - 1 )
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
          "dag check success for no error");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "single_chip_dag_gen_eth_2282",
          28,
          1983,
          60,
          v18);
        puts("dag check success for no error");
      }
    }
  }
  for ( ii = ii + v72; ii < v71; ii = ii + v72 )
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
  if ( ptr )
    free(ptr);
  return 0;
}
