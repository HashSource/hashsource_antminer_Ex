int __fastcall dag_gen_eth_2282(int a1)
{
  int v1; // r0
  unsigned int v2; // r4
  int v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r0
  unsigned int v7; // r4
  __int64 v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r6
  unsigned int v12; // r0
  __int16 v13; // r0
  int v15; // [sp+24h] [bp-1480h]
  _BYTE v17[32]; // [sp+44h] [bp-1460h] BYREF
  char v18; // [sp+1047h] [bp-45Dh] BYREF
  _WORD v19[6]; // [sp+1048h] [bp-45Ch] BYREF
  int v20[8]; // [sp+1054h] [bp-450h] BYREF
  char v21; // [sp+1077h] [bp-42Dh] BYREF
  _DWORD v22[7]; // [sp+1078h] [bp-42Ch] BYREF
  int v23; // [sp+1094h] [bp-410h]
  _DWORD v24[7]; // [sp+1098h] [bp-40Ch] BYREF
  int v25; // [sp+10B4h] [bp-3F0h]
  _DWORD v26[7]; // [sp+10B8h] [bp-3ECh] BYREF
  int v27; // [sp+10D4h] [bp-3D0h]
  _DWORD v28[7]; // [sp+10D8h] [bp-3CCh] BYREF
  int v29; // [sp+10F4h] [bp-3B0h]
  _DWORD v30[7]; // [sp+10F8h] [bp-3ACh] BYREF
  int v31; // [sp+1114h] [bp-390h]
  _DWORD v32[7]; // [sp+1118h] [bp-38Ch] BYREF
  int v33; // [sp+1134h] [bp-370h]
  _DWORD v34[7]; // [sp+1138h] [bp-36Ch] BYREF
  int v35; // [sp+1154h] [bp-350h]
  _DWORD v36[7]; // [sp+1158h] [bp-34Ch] BYREF
  int v37; // [sp+1174h] [bp-330h]
  _DWORD v38[7]; // [sp+1178h] [bp-32Ch] BYREF
  int v39; // [sp+1194h] [bp-310h]
  _DWORD v40[7]; // [sp+1198h] [bp-30Ch] BYREF
  int v41; // [sp+11B4h] [bp-2F0h]
  _DWORD v42[7]; // [sp+11B8h] [bp-2ECh] BYREF
  int v43; // [sp+11D4h] [bp-2D0h]
  _DWORD v44[7]; // [sp+11D8h] [bp-2CCh] BYREF
  int v45; // [sp+11F4h] [bp-2B0h]
  _DWORD v46[7]; // [sp+11F8h] [bp-2ACh] BYREF
  int v47; // [sp+1214h] [bp-290h]
  _DWORD v48[7]; // [sp+1218h] [bp-28Ch] BYREF
  int v49; // [sp+1234h] [bp-270h]
  _DWORD v50[7]; // [sp+1238h] [bp-26Ch] BYREF
  int v51; // [sp+1254h] [bp-250h]
  _DWORD v52[7]; // [sp+1258h] [bp-24Ch] BYREF
  int v53; // [sp+1274h] [bp-230h]
  _DWORD v54[7]; // [sp+1278h] [bp-22Ch] BYREF
  int v55; // [sp+1294h] [bp-210h]
  _DWORD v56[7]; // [sp+1298h] [bp-20Ch] BYREF
  int v57; // [sp+12B4h] [bp-1F0h]
  _DWORD v58[7]; // [sp+12B8h] [bp-1ECh] BYREF
  int v59; // [sp+12D4h] [bp-1D0h]
  _DWORD v60[7]; // [sp+12D8h] [bp-1CCh] BYREF
  int v61; // [sp+12F4h] [bp-1B0h]
  _DWORD v62[7]; // [sp+12F8h] [bp-1ACh] BYREF
  int v63; // [sp+1314h] [bp-190h]
  _DWORD v64[7]; // [sp+1318h] [bp-18Ch] BYREF
  int v65; // [sp+1334h] [bp-170h]
  _DWORD v66[7]; // [sp+1338h] [bp-16Ch] BYREF
  int v67; // [sp+1354h] [bp-150h]
  _DWORD v68[7]; // [sp+1358h] [bp-14Ch] BYREF
  int v69; // [sp+1374h] [bp-130h]
  _DWORD v70[7]; // [sp+1378h] [bp-12Ch] BYREF
  int v71; // [sp+1394h] [bp-110h]
  _DWORD v72[7]; // [sp+1398h] [bp-10Ch] BYREF
  int v73; // [sp+13B4h] [bp-F0h]
  _DWORD v74[7]; // [sp+13B8h] [bp-ECh] BYREF
  int v75; // [sp+13D4h] [bp-D0h]
  _DWORD v76[7]; // [sp+13D8h] [bp-CCh] BYREF
  int v77; // [sp+13F4h] [bp-B0h]
  _DWORD v78[7]; // [sp+13F8h] [bp-ACh] BYREF
  int v79; // [sp+1414h] [bp-90h]
  _DWORD v80[7]; // [sp+1418h] [bp-8Ch] BYREF
  int v81; // [sp+1434h] [bp-70h]
  _DWORD v82[7]; // [sp+1438h] [bp-6Ch] BYREF
  int v83; // [sp+1454h] [bp-50h]
  int k; // [sp+1458h] [bp-4Ch]
  int m; // [sp+145Ch] [bp-48h]
  int n; // [sp+1460h] [bp-44h]
  int ii; // [sp+1464h] [bp-40h]
  int jj; // [sp+1468h] [bp-3Ch]
  float kk; // [sp+146Ch] [bp-38h]
  unsigned __int16 v90; // [sp+1472h] [bp-32h]
  int v91; // [sp+1474h] [bp-30h]
  float v92; // [sp+1478h] [bp-2Ch]
  float v93; // [sp+147Ch] [bp-28h]
  int i; // [sp+1480h] [bp-24h]
  void *ptr; // [sp+1484h] [bp-20h]
  int v96; // [sp+1488h] [bp-1Ch]
  int j; // [sp+148Ch] [bp-18h]

  V_LOCK();
  sub_FBD60((int)v22, *(int *)(a1 + 272));
  logfmt_raw(v17, 0x1000u, 0, v23, v22[0], v22[1], v22[2], v22[3], v22[4], v22[5], v22[6], v23, "dag_gen_eth_2282...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "dag_gen_eth_2282",
    16,
    11556,
    40,
    v17);
  v96 = 0;
  v21 = 0;
  v90 = 0;
  v91 = *(_DWORD *)(a1 + 1060);
  memset(v20, 0, sizeof(v20));
  v92 = 6.25;
  v93 = 400.0;
  memset(v19, 0, sizeof(v19));
  if ( *(_BYTE *)(a1 + 1225) || bypass_baking_mode )
  {
    *(_BYTE *)(a1 + 1226) = 1;
    (*(void (__fastcall **)(int))(a1 + 252))(a1);
  }
  if ( *(_DWORD *)(a1 + 1060) )
  {
    V_LOCK();
    sub_FBD60((int)v24, *(int *)(a1 + 272));
    logfmt_raw(
      v17,
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
      *(_DWORD *)v91,
      *(_DWORD *)(v91 + 4),
      *(_DWORD *)(v91 + 8),
      *(_DWORD *)(v91 + 12));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11572,
      60,
      v17);
    V_LOCK();
    sub_FBD60((int)v26, *(int *)(a1 + 272));
    logfmt_raw(v17, 0x1000u, 0, v27, v26[0], v26[1], v26[2], v26[3], v26[4], v26[5], v26[6], v27, "Seed hash: ");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11573,
      40,
      v17);
    for ( i = 0; i <= 7; ++i )
    {
      v1 = sub_10FFAC(*(_DWORD *)(v91 + 4 * (i + 4)));
      v20[i] = v1;
      V_LOCK();
      sub_FBD60((int)v28, *(int *)(a1 + 272));
      logfmt_raw(v17, 0x1000u, 0, v29, v28[0], v28[1], v28[2], v28[3], v28[4], v28[5], v28[6], v29, "0x%08x", v20[i]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "dag_gen_eth_2282",
        16,
        11576,
        40,
        v17);
    }
  }
  ptr = malloc(0x1440u);
  sub_106D34(a1, 9, 458781);
  sub_106D34(a1, 0, 2);
  sub_106D34(a1, 28, 1);
  sub_106D34(a1, 167, 0);
  sub_106D34(a1, 168, 0x100000);
  sub_106D34(a1, 169, 0x200000);
  sub_106D34(a1, 170, 3145728);
  sub_106D34(a1, 171, 41943040);
  sub_106D34(a1, 164, 28);
  if ( case_select == 100 )
  {
    if ( *(_DWORD *)(a1 + 1060) )
    {
      sub_106D34(a1, 163, *(__int64 *)v91 >> 6);
      sub_106D34(a1, 16, v20[7]);
      sub_106D34(a1, 17, v20[6]);
      sub_106D34(a1, 18, v20[5]);
      sub_106D34(a1, 19, v20[4]);
      sub_106D34(a1, 20, v20[3]);
      sub_106D34(a1, 21, v20[2]);
      sub_106D34(a1, 22, v20[1]);
      sub_106D34(a1, 23, v20[0]);
    }
  }
  else
  {
    sub_106D34(a1, 163, 946163);
    sub_106D34(a1, 16, -365357919);
    sub_106D34(a1, 17, -1597648314);
    sub_106D34(a1, 18, -180818622);
    sub_106D34(a1, 19, -1693844633);
    sub_106D34(a1, 20, 1087925619);
    sub_106D34(a1, 21, 2094850192);
    sub_106D34(a1, 22, -1915389567);
    sub_106D34(a1, 23, 1812007619);
  }
  sub_106D34(a1, 192, 3874);
  sub_106D34(a1, 178, 0xFFFF);
  sub_106D34(a1, 179, 0);
  sub_106D34(a1, 164, 29);
  v18 = 0;
  usleep(0x1F40u);
  while ( v18 != 1 )
  {
    sub_1054E4(a1, 0, 160, 0, &v18);
    sleep(1u);
  }
  V_LOCK();
  sub_FBD60((int)v30, *(int *)(a1 + 272));
  logfmt_raw(v17, 0x1000u, 0, v31, v30[0], v30[1], v30[2], v30[3], v30[4], v30[5], v30[6], v31, "cache done!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "dag_gen_eth_2282",
    16,
    11673,
    60,
    v17);
  puts("cache done!");
  if ( ptr )
  {
    v96 = sub_1075C0(a1, 0, 162, ptr);
    V_LOCK();
    sub_FBD60((int)v32, *(int *)(a1 + 272));
    logfmt_raw(
      v17,
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
      "get cache size resp: %d",
      v96);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11678,
      20,
      v17);
    for ( j = 0; j < v96; ++j )
    {
      if ( case_select == 100 )
      {
        if ( *(_DWORD *)(a1 + 1060) )
        {
          v2 = sub_FC76C(*((_DWORD *)ptr + 3 * j));
          if ( v2 != *(_QWORD *)v91 >> 6 )
          {
            V_LOCK();
            sub_FBD60((int)v40, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "cache size check failed for chip-%d",
              *((unsigned __int8 *)ptr + 12 * j + 4));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "dag_gen_eth_2282",
              16,
              11710,
              100,
              v17);
            printf("cache size check failed for chip-%d\n", *((unsigned __int8 *)ptr + 12 * j + 4));
            *(_BYTE *)(a1 + 1024) = 1;
          }
          if ( j == v96 - 1 )
          {
            if ( *(_BYTE *)(a1 + 1024) )
            {
              V_LOCK();
              sub_FBD60((int)v44, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
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
                "cache size check failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "dag_gen_eth_2282",
                16,
                11720,
                100,
                v17);
              puts("cache size check failed!");
            }
            else
            {
              V_LOCK();
              sub_FBD60((int)v42, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
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
                "cache size check success!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "dag_gen_eth_2282",
                16,
                11717,
                60,
                v17);
              puts("cache size check success!");
            }
          }
        }
      }
      else
      {
        if ( sub_FC76C(*((_DWORD *)ptr + 3 * j)) != 946163 )
        {
          V_LOCK();
          sub_FBD60((int)v34, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "cache size check faile for chip-%d",
            *((unsigned __int8 *)ptr + 12 * j + 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "dag_gen_eth_2282",
            16,
            11692,
            100,
            v17);
          printf("cache size check failed for chip-%d\n", *((unsigned __int8 *)ptr + 12 * j + 4));
          *(_BYTE *)(a1 + 1024) = 1;
        }
        if ( j == v96 - 1 )
        {
          if ( *(_BYTE *)(a1 + 1024) )
          {
            V_LOCK();
            sub_FBD60((int)v38, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "cache size check failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "dag_gen_eth_2282",
              16,
              11702,
              100,
              v17);
            puts("cache size check failed!");
          }
          else
          {
            V_LOCK();
            sub_FBD60((int)v36, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "dag_gen_eth_2282",
              16,
              11699,
              60,
              v17);
            puts("cache size check success!");
          }
        }
      }
    }
  }
  if ( ptr )
  {
    v96 = sub_1075C0(a1, 0, 172, ptr);
    V_LOCK();
    sub_FBD60((int)v46, *(int *)(a1 + 272));
    logfmt_raw(
      v17,
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
      "get cache err cnt resp: %d",
      v96);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11731,
      20,
      v17);
    for ( k = 0; k < v96; ++k )
    {
      if ( sub_FC76C(*((_DWORD *)ptr + 3 * k)) )
      {
        V_LOCK();
        sub_FBD60((int)v48, *(int *)(a1 + 272));
        logfmt_raw(
          v17,
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
          "cache checked err cnt for chip-%d",
          *((unsigned __int8 *)ptr + 12 * k + 4));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "dag_gen_eth_2282",
          16,
          11734,
          100,
          v17);
        printf("cache checked err cnt for chip-%d\n", *((unsigned __int8 *)ptr + 12 * k + 4));
        V_LOCK();
        sub_FBD60((int)v50, *(int *)(a1 + 272));
        v3 = *((unsigned __int8 *)ptr + 12 * k + 4);
        v4 = *((unsigned __int8 *)ptr + 12 * k + 8);
        v5 = *((unsigned __int16 *)ptr + 6 * k + 3);
        v6 = sub_FC76C(*((_DWORD *)ptr + 3 * k));
        logfmt_raw(
          v17,
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
          "asic %02x, core %02x, reg %04x state %08x",
          v3,
          v4,
          v5,
          v6);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "dag_gen_eth_2282",
          16,
          11737,
          100,
          v17);
        *(_BYTE *)(a1 + 1024) = 1;
      }
      if ( k == v96 - 1 )
      {
        if ( *(_BYTE *)(a1 + 1024) )
        {
          V_LOCK();
          sub_FBD60((int)v54, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "cache checked failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "dag_gen_eth_2282",
            16,
            11745,
            60,
            v17);
          puts("cache checked failed!");
        }
        else
        {
          V_LOCK();
          sub_FBD60((int)v52, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "cache checked success for no error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "dag_gen_eth_2282",
            16,
            11742,
            60,
            v17);
          puts("cache checked success for no error!");
        }
      }
    }
  }
  if ( case_select == 100 )
  {
    if ( *(_DWORD *)(a1 + 1060) )
      sub_106D34(a1, 180, *(__int64 *)(v91 + 8) >> 6);
  }
  else
  {
    sub_106D34(a1, 180, 60555254);
  }
  sub_106D34(a1, 164, 3102);
  usleep(0x280u);
  while ( v21 != 1 && v90 <= 0x64u )
  {
    sub_1054E4(a1, 255, 160, 1, &v21);
    sleep(3u);
    ++v90;
  }
  if ( v90 > 0x64u )
  {
    V_LOCK();
    sub_FBD60((int)v58, *(int *)(a1 + 272));
    logfmt_raw(v17, 0x1000u, 0, v59, v58[0], v58[1], v58[2], v58[3], v58[4], v58[5], v58[6], v59, "dag done failed!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11774,
      100,
      v17);
    puts("dag done failed!");
    *(_BYTE *)(a1 + 1025) = 1;
  }
  else
  {
    V_LOCK();
    sub_FBD60((int)v56, *(int *)(a1 + 272));
    logfmt_raw(v17, 0x1000u, 0, v57, v56[0], v56[1], v56[2], v56[3], v56[4], v56[5], v56[6], v57, "dag done!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11771,
      60,
      v17);
    puts("dag done!");
  }
  *(_BYTE *)(a1 + 1033) = 1;
  if ( ptr )
  {
    v96 = sub_1075C0(a1, 255, 161, ptr);
    V_LOCK();
    sub_FBD60((int)v60, *(int *)(a1 + 272));
    logfmt_raw(
      v17,
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
      "get dag size resp: %d",
      v96);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11782,
      20,
      v17);
    for ( m = 0; m < v96; ++m )
    {
      if ( case_select == 100 )
      {
        if ( *(_DWORD *)(a1 + 1060) )
        {
          v7 = sub_FC76C(*((_DWORD *)ptr + 3 * m));
          LODWORD(v8) = sub_34579C(*(_QWORD *)(v91 + 8), 0x1200u);
          if ( v7 != v8 && *((_BYTE *)ptr + 12 * m + 8) != 71 )
          {
            V_LOCK();
            sub_FBD60((int)v68, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "dag size check failed for chip-%d, core-%d",
              *((unsigned __int8 *)ptr + 12 * m + 4),
              *((unsigned __int8 *)ptr + 12 * m + 8));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "dag_gen_eth_2282",
              16,
              11819,
              100,
              v17);
            printf(
              "dag size check failed for chip-%d, core-%d\n",
              *((unsigned __int8 *)ptr + 12 * m + 4),
              *((unsigned __int8 *)ptr + 12 * m + 8));
            *(_BYTE *)(a1 + 1025) = 1;
          }
          if ( m == v96 - 1 )
          {
            if ( *(_BYTE *)(a1 + 1025) )
            {
              V_LOCK();
              sub_FBD60((int)v72, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
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
                "dag size check failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "dag_gen_eth_2282",
                16,
                11830,
                100,
                v17);
              puts("dag size check failed!");
            }
            else
            {
              V_LOCK();
              sub_FBD60((int)v70, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
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
                "dag size check success!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
                171,
                "dag_gen_eth_2282",
                16,
                11827,
                60,
                v17);
              puts("dag size check success!");
            }
          }
        }
      }
      else
      {
        if ( sub_FC76C(*((_DWORD *)ptr + 3 * m)) != 841045 && *((_BYTE *)ptr + 12 * m + 8) != 71 )
        {
          V_LOCK();
          sub_FBD60((int)v62, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "dag size check failed for chip-%d, core-%d",
            *((unsigned __int8 *)ptr + 12 * m + 4),
            *((unsigned __int8 *)ptr + 12 * m + 8));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "dag_gen_eth_2282",
            16,
            11799,
            100,
            v17);
          printf(
            "dag size check failed for chip-%d, core-%d\n",
            *((unsigned __int8 *)ptr + 12 * m + 4),
            *((unsigned __int8 *)ptr + 12 * m + 8));
          *(_BYTE *)(a1 + 1025) = 1;
        }
        if ( m == v96 - 1 )
        {
          if ( *(_BYTE *)(a1 + 1025) )
          {
            V_LOCK();
            sub_FBD60((int)v66, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "dag size check failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "dag_gen_eth_2282",
              16,
              11810,
              100,
              v17);
            puts("dag size check failed!");
          }
          else
          {
            V_LOCK();
            sub_FBD60((int)v64, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "dag size check success!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "dag_gen_eth_2282",
              16,
              11807,
              60,
              v17);
            puts("dag size check success!");
          }
        }
      }
    }
  }
  if ( ptr )
  {
    v96 = sub_1075C0(a1, 255, 173, ptr);
    V_LOCK();
    sub_FBD60((int)v74, *(int *)(a1 + 272));
    logfmt_raw(
      v17,
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
      "get dag err cnt resp: %d",
      v96);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "dag_gen_eth_2282",
      16,
      11841,
      20,
      v17);
    for ( n = 0; n < v96; ++n )
    {
      if ( sub_FC76C(*((_DWORD *)ptr + 3 * n)) )
      {
        V_LOCK();
        sub_FBD60((int)v76, *(int *)(a1 + 272));
        logfmt_raw(
          v17,
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
          "dag check meet error for chip-%d, core-%d",
          *((unsigned __int8 *)ptr + 12 * n + 4),
          *((unsigned __int8 *)ptr + 12 * n + 8));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "dag_gen_eth_2282",
          16,
          11844,
          100,
          v17);
        V_LOCK();
        v9 = *((unsigned __int8 *)ptr + 12 * n + 4);
        v10 = *((unsigned __int8 *)ptr + 12 * n + 8);
        v11 = *((unsigned __int16 *)ptr + 6 * n + 3);
        v12 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
        logfmt_raw(v17, 0x1000u, 0, "asic %02x, core %02x, reg %04x error cnt: %08x", v9, v10, v11, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
          171,
          "dag_gen_eth_2282",
          16,
          11846,
          100,
          v17);
        printf(
          "dag check meet error for chip-%d, core-%d\n",
          *((unsigned __int8 *)ptr + 12 * n + 4),
          *((unsigned __int8 *)ptr + 12 * n + 8));
        v13 = sub_FC76C(*((_DWORD *)ptr + 3 * n));
        v19[*((unsigned __int8 *)ptr + 12 * n + 4)] += v13;
      }
      if ( n == v96 - 1 )
      {
        for ( ii = 0; ii <= 5; ++ii )
        {
          if ( (unsigned __int16)v19[ii] > 0x1388u )
          {
            *(_BYTE *)(a1 + 1025) = 1;
            *(_BYTE *)(a1 + (unsigned __int8)(*(_BYTE *)(a1 + 1026))++ + 1027) = ii;
          }
        }
        if ( *(_BYTE *)(a1 + 1025) )
        {
          V_LOCK();
          sub_FBD60((int)v80, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "dag check failed!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "dag_gen_eth_2282",
            16,
            11864,
            100,
            v17);
          puts("dag check failed!");
          for ( jj = 0; jj < *(unsigned __int8 *)(a1 + 1026); ++jj )
          {
            V_LOCK();
            sub_FBD60((int)v82, *(int *)(a1 + 272));
            logfmt_raw(
              v17,
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
              "dag check failed for chip-%d",
              *(unsigned __int8 *)(a1 + jj + 1027));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
              171,
              "dag_gen_eth_2282",
              16,
              11868,
              60,
              v17);
          }
        }
        else
        {
          V_LOCK();
          sub_FBD60((int)v78, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "dag check success for no error!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
            171,
            "dag_gen_eth_2282",
            16,
            11861,
            60,
            v17);
          puts("dag check success for no error!");
        }
      }
    }
  }
  if ( freq_select == 100 && bypass_baking_mode != 1 )
  {
    for ( kk = (float)(unsigned __int16)freq_select; kk <= v93; kk = kk + v92 )
    {
      (*(void (__fastcall **)(int, _DWORD))(a1 + 204))(a1, 0);
      usleep(0x64u);
      (*(void (__fastcall **)(int, int))(a1 + 204))(a1, 1);
      usleep(0x64u);
      (*(void (__fastcall **)(int))(a1 + 4))(a1);
      if ( low_temp_start_up )
        sleep(3u);
      else
        sleep(1u);
    }
    freq_select = (unsigned int)v93;
    *(_DWORD *)(a1 + 504) = (unsigned __int16)freq_select;
  }
  if ( ptr )
    free(ptr);
  *(_BYTE *)(a1 + 1225) = 0;
  *(_BYTE *)(a1 + 1226) = 0;
  overclock_update_eth_2282(a1, (unsigned __int16)freq_select);
  timeout_reg_done[*(_DWORD *)(a1 + 272)] = 1;
  return 0;
}
