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
  int v53; // r4
  _DWORD *v54; // r8
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
  __int64 v68; // r4
  int v69; // r0
  int v70; // [sp+4h] [bp-2068h]
  int v71; // [sp+18h] [bp-2054h]
  _DWORD *v72; // [sp+1Ch] [bp-2050h]
  int v73; // [sp+20h] [bp-204Ch]
  int v74; // [sp+20h] [bp-204Ch]
  int i; // [sp+30h] [bp-203Ch]
  int v76; // [sp+3Ch] [bp-2030h] BYREF
  int v77; // [sp+40h] [bp-202Ch] BYREF
  char v78[4056]; // [sp+68h] [bp-2004h] BYREF
  _BYTE v79[4100]; // [sp+1068h] [bp-1004h] BYREF

  read_system_status_from_monitor(&v77);
  if ( byte_164FE8 )
    sub_25D6C();
  v0 = sub_12D38C(total_accepted, HIDWORD(total_accepted));
  V_LOCK(LODWORD(v0));
  v1 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v1);
  v2 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/api_new.c",
         130,
         "print_summary",
         13,
         1757,
         80,
         v79);
  V_LOCK(v2);
  v3 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/api_new.c",
         130,
         "print_summary",
         13,
         1758,
         80,
         v79);
  V_LOCK(v4);
  v5 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/api_new.c",
         130,
         "print_summary",
         13,
         1759,
         80,
         v79);
  V_LOCK(v6);
  v7 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v7);
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/api_new.c",
         130,
         "print_summary",
         13,
         1760,
         80,
         v79);
  V_LOCK(v8);
  v9 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1761,
          80,
          v79);
  V_LOCK(v10);
  v11 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v11);
  v12 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1762,
          80,
          v79);
  V_LOCK(v12);
  v13 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v13);
  v14 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1763,
          80,
          v79);
  V_LOCK(v14);
  v15 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v15);
  v16 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1764,
          80,
          v79);
  V_LOCK(v16);
  v17 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v17);
  v18 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1765,
          80,
          v79);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v19);
  v20 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1766,
          80,
          v79);
  V_LOCK(v20);
  v21 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v21);
  v22 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1767,
          80,
          v79);
  V_LOCK(v22);
  v23 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v23);
  v24 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1768,
          80,
          v79);
  if ( total_accepted || total_rejected )
  {
    V_LOCK(v24);
    v49 = total_rejected;
    sub_12D38C(100 * total_rejected, (unsigned __int64)(100 * total_rejected) >> 32);
    sub_12D38C(v49 + total_accepted, (unsigned __int64)(v49 + total_accepted) >> 32);
    v50 = logfmt_raw((int)v79, 0x1000u);
    V_UNLOCK(v50);
    v24 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "print_summary",
            13,
            1771,
            80,
            v79);
  }
  V_LOCK(v24);
  v25 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v25);
  v26 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1773,
          80,
          v79);
  V_LOCK(v26);
  v27 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v27);
  v28 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1774,
          80,
          v79);
  V_LOCK(v28);
  v29 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v29);
  v30 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1775,
          80,
          v79);
  V_LOCK(v30);
  v31 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v31);
  v32 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1776,
          80,
          v79);
  V_LOCK(v32);
  v33 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v33);
  v34 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1777,
          80,
          v79);
  V_LOCK(v34);
  v35 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v35);
  v36 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/api_new.c",
          130,
          "print_summary",
          13,
          1778,
          80,
          v79);
  if ( total_pools > 0 )
  {
    V_LOCK(v36);
    v52 = logfmt_raw((int)v79, 0x1000u);
    V_UNLOCK(v52);
    v36 = zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/api_new.c",
            130,
            "print_summary",
            13,
            1782,
            80,
            v79);
    if ( total_pools > 0 )
    {
      v74 = 0;
      do
      {
        v53 = *(_DWORD *)(pools + 4 * v74);
        V_LOCK(v36);
        v54 = (_DWORD *)(v53 + 2096);
        v55 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v55);
        v56 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1787,
                80,
                v79);
        V_LOCK(v56);
        v57 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v57);
        v58 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1788,
                80,
                v79);
        V_LOCK(v58);
        v59 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v59);
        v60 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1789,
                80,
                v79);
        V_LOCK(v60);
        v61 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v61);
        v62 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1790,
                80,
                v79);
        V_LOCK(v62);
        v63 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v63);
        v64 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1791,
                80,
                v79);
        V_LOCK(v64);
        v65 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v65);
        v66 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1792,
                80,
                v79);
        V_LOCK(v66);
        v67 = logfmt_raw((int)v79, 0x1000u);
        V_UNLOCK(v67);
        v36 = zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmin"
                "er-origin_master/api_new.c",
                130,
                "print_summary",
                13,
                1793,
                80,
                v79);
        if ( *(_QWORD *)(v53 + 2096) || *(_QWORD *)(v53 + 2104) )
        {
          V_LOCK(v36);
          v68 = *(_QWORD *)(v53 + 2104);
          sub_12D38C(100 * v68, (unsigned __int64)(100 * v68) >> 32);
          sub_12D38C(v68 + *v54, (unsigned __int64)(v68 + *(_QWORD *)v54) >> 32);
          v69 = logfmt_raw((int)v79, 0x1000u);
          V_UNLOCK(v69);
          v36 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godm"
                  "iner-origin_master/api_new.c",
                  130,
                  "print_summary",
                  13,
                  1796,
                  80,
                  v79);
        }
        ++v74;
      }
      while ( total_pools > v74 );
    }
  }
  V_LOCK(v36);
  v37 = logfmt_raw((int)v79, 0x1000u);
  V_UNLOCK(v37);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/api_new.c",
    130,
    "print_summary",
    13,
    1801,
    80,
    v79);
  v76 = 0;
  result = get_all_created_runtime(&v76);
  if ( v76 > 0 )
  {
    v72 = (_DWORD *)(result - 4);
    for ( i = 0; i < v76; ++i )
    {
      v39 = (_DWORD *)v72[1];
      ++v72;
      v40 = snprintf(
              v78,
              0x1000u,
              "chain %d device %d wc %llu nc %llu detail: ",
              v39[35],
              v39[34],
              v70,
              v39[62],
              v39[63],
              v39[64],
              v39[65]);
      v41 = *v72;
      v42 = v40;
      v73 = *(_DWORD *)(*v72 + 196);
      if ( v73 > 0 )
      {
        v43 = 0;
        v71 = 0;
        while ( 1 )
        {
          v44 = *(_DWORD *)(v41 + 264);
          v45 = (__int64 *)(v44 + v43);
          v43 += 48;
          v46 = (__int64 *)(v44 + v43);
          ++v71;
          v47 = snprintf(&v78[v42], 4096 - v42, "%d:") + v42;
          do
          {
            v48 = *v45++;
            v47 += snprintf(&v78[v47], 4096 - v47, " %llu", v48);
          }
          while ( v46 != v45 );
          v42 = v47 + 2;
          v40 = snprintf(&v78[v47], 4096 - v47, " /");
          if ( v71 == v73 )
            break;
          v41 = *v72;
        }
      }
      V_LOCK(v40);
      v51 = logfmt_raw((int)v79, 0x1000u);
      V_UNLOCK(v51);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/api_new.c",
                 130,
                 "print_summary",
                 13,
                 1818,
                 80,
                 v79);
    }
  }
  return result;
}
