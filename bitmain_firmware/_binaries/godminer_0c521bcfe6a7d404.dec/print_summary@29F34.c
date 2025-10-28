int print_summary()
{
  double v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int result; // r0
  _DWORD *v39; // r12
  int v40; // r0
  int v41; // r3
  int v42; // r6
  int v43; // r8
  int v44; // r5
  __int64 *v45; // r4
  __int64 *v46; // r5
  int v47; // r9
  __int64 v48; // t1
  __int64 v49; // r4
  int v50; // r0
  int v51; // r0
  int v52; // r0
  _DWORD *v53; // r8
  unsigned int *v54; // r4
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  int v67; // r0
  unsigned int v68; // r5
  unsigned int v69; // r6
  int v70; // r0
  int v71; // [sp+4h] [bp-2078h]
  int v72; // [sp+18h] [bp-2064h]
  _DWORD *v73; // [sp+1Ch] [bp-2060h]
  int v74; // [sp+1Ch] [bp-2060h]
  int v75; // [sp+20h] [bp-205Ch]
  int i; // [sp+2Ch] [bp-2050h]
  int v77; // [sp+3Ch] [bp-2040h] BYREF
  int v78; // [sp+40h] [bp-203Ch] BYREF
  char v79[4040]; // [sp+78h] [bp-2004h] BYREF
  _BYTE v80[4100]; // [sp+1078h] [bp-1004h] BYREF

  read_system_status_from_monitor(&v78);
  get_miner_elapsed_time();
  v0 = sub_12E62C(total_accepted, dword_18E3E4);
  V_LOCK(LODWORD(v0));
  v1 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v1);
  v2 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/api_new.c",
         140,
         "print_summary",
         13,
         2148,
         80,
         v80);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/api_new.c",
         140,
         "print_summary",
         13,
         2149,
         80,
         v80);
  V_LOCK(v4);
  v5 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/api_new.c",
         140,
         "print_summary",
         13,
         2150,
         80,
         v80);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/api_new.c",
         140,
         "print_summary",
         13,
         2151,
         80,
         v80);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2152,
          80,
          v80);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v11);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2153,
          80,
          v80);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v13);
  v14 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2154,
          80,
          v80);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v15);
  v16 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2155,
          80,
          v80);
  V_LOCK(v16);
  v17 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v17);
  v18 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2156,
          80,
          v80);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2157,
          80,
          v80);
  V_LOCK(v20);
  v21 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v21);
  v22 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2158,
          80,
          v80);
  V_LOCK(v22);
  v23 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2159,
          80,
          v80);
  if ( *(_QWORD *)&total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK(v24);
    v49 = *(_QWORD *)&total_rejected;
    sub_12E62C(100 * total_rejected, (unsigned __int64)(100LL * *(_QWORD *)&total_rejected) >> 32);
    sub_12E62C(v49 + total_accepted, (unsigned __int64)(v49 + *(_QWORD *)&total_accepted) >> 32);
    v50 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v50);
    v24 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "print_summary",
            13,
            2162,
            80,
            v80);
  }
  V_LOCK(v24);
  v25 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v25);
  v26 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2164,
          80,
          v80);
  V_LOCK(v26);
  v27 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v27);
  v28 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2165,
          80,
          v80);
  V_LOCK(v28);
  v29 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v29);
  v30 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2166,
          80,
          v80);
  V_LOCK(v30);
  v31 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v31);
  v32 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2167,
          80,
          v80);
  V_LOCK(v32);
  v33 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v33);
  v34 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2168,
          80,
          v80);
  V_LOCK(v34);
  v35 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v35);
  v36 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/api_new.c",
          140,
          "print_summary",
          13,
          2169,
          80,
          v80);
  if ( total_pools > 0 )
  {
    V_LOCK(v36);
    v52 = logfmt_raw((int)v80, 0x1000u);
    V_UNLOCK(v52);
    v36 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/api_new.c",
            140,
            "print_summary",
            13,
            2173,
            80,
            v80);
    if ( total_pools > 0 )
    {
      v74 = 0;
      do
      {
        v53 = *(_DWORD **)(pools + 4 * v74);
        V_LOCK(v36);
        v54 = v53 + 484;
        v55 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v55);
        v56 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2178,
                80,
                v80);
        V_LOCK(v56);
        v57 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v57);
        v58 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2179,
                80,
                v80);
        V_LOCK(v58);
        v59 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v59);
        v60 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2180,
                80,
                v80);
        V_LOCK(v60);
        v61 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v61);
        v62 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2181,
                80,
                v80);
        V_LOCK(v62);
        v63 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v63);
        v64 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2182,
                80,
                v80);
        V_LOCK(v64);
        v65 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v65);
        v66 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2183,
                80,
                v80);
        V_LOCK(v66);
        v67 = logfmt_raw((int)v80, 0x1000u);
        V_UNLOCK(v67);
        v36 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/api_new.c",
                140,
                "print_summary",
                13,
                2184,
                80,
                v80);
        if ( *((_QWORD *)v53 + 241) || *(_QWORD *)v54 )
        {
          V_LOCK(v36);
          v68 = *v54;
          v69 = v53[485];
          sub_12E62C(100 * *v54, (unsigned __int64)(100LL * *(_QWORD *)v54) >> 32);
          sub_12E62C(v68 + v53[482], (__PAIR64__(v69, v68) + *((_QWORD *)v53 + 241)) >> 32);
          v70 = logfmt_raw((int)v80, 0x1000u);
          V_UNLOCK(v70);
          v36 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/api_new.c",
                  140,
                  "print_summary",
                  13,
                  2187,
                  80,
                  v80);
        }
        ++v74;
      }
      while ( total_pools > v74 );
    }
  }
  V_LOCK(v36);
  v37 = logfmt_raw((int)v80, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/api_new.c",
    140,
    "print_summary",
    13,
    2192,
    80,
    v80);
  v77 = 0;
  result = get_all_created_runtime(&v77);
  if ( v77 > 0 )
  {
    v73 = (_DWORD *)(result - 4);
    for ( i = 0; i < v77; ++i )
    {
      v39 = (_DWORD *)v73[1];
      ++v73;
      v40 = snprintf(
              v79,
              0x1000u,
              "chain %d device %d wc %llu nc %llu detail: ",
              v39[56],
              v39[55],
              v71,
              v39[102],
              v39[103],
              v39[104],
              v39[105]);
      v41 = *v73;
      v42 = v40;
      v75 = *(_DWORD *)(*v73 + 304);
      if ( v75 > 0 )
      {
        v43 = 0;
        v72 = 0;
        while ( 1 )
        {
          v44 = *(_DWORD *)(v41 + 424);
          v45 = (__int64 *)(v44 + v43);
          v43 += 48;
          v46 = (__int64 *)(v44 + v43);
          ++v72;
          v47 = snprintf(&v79[v42], 4096 - v42, "%d:") + v42;
          do
          {
            v48 = *v45++;
            v47 += snprintf(&v79[v47], 4096 - v47, " %llu", v48);
          }
          while ( v46 != v45 );
          v42 = v47 + 2;
          v40 = snprintf(&v79[v47], 4096 - v47, " /");
          if ( v72 == v75 )
            break;
          v41 = *v73;
        }
      }
      V_LOCK(v40);
      v51 = logfmt_raw((int)v80, 0x1000u);
      V_UNLOCK(v51);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/api_new.c",
                 140,
                 "print_summary",
                 13,
                 2212,
                 80,
                 v80);
    }
  }
  return result;
}
