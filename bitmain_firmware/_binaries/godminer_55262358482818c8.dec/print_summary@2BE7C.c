char *print_summary()
{
  double v0; // d0
  double v1; // d11
  double v2; // r0
  double v3; // d9
  double v4; // d8
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r1
  int v19; // r3
  int v20; // r1
  int v21; // r3
  int v22; // r1
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r1
  int v36; // r3
  int v37; // r1
  int v38; // r3
  int v39; // r1
  int v40; // r3
  int v41; // r1
  char *result; // r0
  const char *v43; // r11
  char *v44; // r3
  char *v45; // r2
  _DWORD *v46; // r12
  int v47; // r0
  int v48; // r3
  int v49; // r6
  char *v50; // r2
  int v51; // r8
  int v52; // r5
  __int64 *v53; // r4
  __int64 *v54; // r5
  int v55; // r3
  int v56; // r9
  __int64 v57; // t1
  __int64 v58; // r4
  int v59; // r1
  double v60; // d10
  double v61; // r0
  int v62; // r3
  int v63; // r1
  int v64; // r3
  int v65; // r1
  int v66; // r3
  int v67; // r1
  int v68; // r2
  int v69; // r9
  int v70; // r8
  unsigned int *v71; // r4
  int v72; // r3
  int v73; // r3
  int v74; // r3
  int v75; // r3
  int v76; // r3
  int v77; // r3
  unsigned int v78; // r5
  unsigned int v79; // r6
  int v80; // r1
  double v81; // d8
  double v82; // r0
  int v83; // r3
  int v84; // [sp+4h] [bp-2078h]
  int v85; // [sp+18h] [bp-2064h]
  char *v86; // [sp+1Ch] [bp-2060h]
  int v87; // [sp+1Ch] [bp-2060h]
  int v88; // [sp+20h] [bp-205Ch]
  char *v89; // [sp+24h] [bp-2058h]
  char *v90; // [sp+28h] [bp-2054h]
  int v91; // [sp+2Ch] [bp-2050h]
  int v92; // [sp+2Ch] [bp-2050h]
  char *format; // [sp+34h] [bp-2048h]
  int v94; // [sp+3Ch] [bp-2040h] BYREF
  float v95[14]; // [sp+40h] [bp-203Ch] BYREF
  char v96[4040]; // [sp+78h] [bp-2004h] BYREF
  char v97[4100]; // [sp+1078h] [bp-1004h] BYREF

  read_system_status_from_monitor((int)v95);
  v1 = v95[6] / 1000.0 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  LODWORD(v2) = sub_144A3C(total_accepted);
  v3 = v2 / v0 * 60.0;
  v4 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v0 * 60.0;
  V_LOCK();
  LOWORD(v5) = 23976;
  HIWORD(v5) = (unsigned int)"" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v5);
  V_UNLOCK();
  LOWORD(v6) = 21232;
  HIWORD(v6) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v6, 140, "print_summary", 13, 2286, 80, v97);
  V_LOCK();
  LOWORD(v7) = 24008;
  HIWORD(v7) = (unsigned int)"of runtime statistics:" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v7, (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  V_UNLOCK();
  LOWORD(v8) = 21232;
  HIWORD(v8) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v8, 140, "print_summary", 13, 2287, 80, v97);
  V_LOCK();
  LOWORD(v9) = 24044;
  HIWORD(v9) = (unsigned int)"hrs : %d mins : %d secs" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v9, v1);
  V_UNLOCK();
  LOWORD(v10) = 21232;
  HIWORD(v10) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v10, 140, "print_summary", 13, 2288, 80, v97);
  V_LOCK();
  LOWORD(v11) = 24076;
  HIWORD(v11) = (unsigned int)"hashrate: %.1f Ghash/s" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v11, total_getworks, dword_1B4194);
  V_UNLOCK();
  LOWORD(v12) = 21232;
  HIWORD(v12) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v12, 140, "print_summary", 13, 2289, 80, v97);
  V_LOCK();
  LOWORD(v13) = 24108;
  HIWORD(v13) = (unsigned int)"t job from pools: %lld" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v13, local_work);
  V_UNLOCK();
  LOWORD(v14) = 21232;
  HIWORD(v14) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v14, 140, "print_summary", 13, 2290, 80, v97);
  V_LOCK();
  LOWORD(v15) = 24140;
  HIWORD(v15) = (unsigned int)"nerated local work  %d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v15, dword_194990);
  V_UNLOCK();
  LOWORD(v16) = 21232;
  HIWORD(v16) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v16, 140, "print_summary", 13, 2291, 80, v97);
  V_LOCK();
  LOWORD(v17) = 24160;
  HIWORD(v17) = (unsigned int)"%d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v17, total_accepted + *(_QWORD *)&total_rejected);
  V_UNLOCK();
  LOWORD(v18) = 21232;
  HIWORD(v18) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v18, 140, "print_summary", 13, 2292, 80, v97);
  V_LOCK();
  LOWORD(v19) = 24184;
  HIWORD(v19) = (unsigned int)"Share submissions: %lld" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v19, total_accepted);
  V_UNLOCK();
  LOWORD(v20) = 21232;
  HIWORD(v20) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v20, 140, "print_summary", 13, 2293, 80, v97);
  V_LOCK();
  LOWORD(v21) = 24208;
  HIWORD(v21) = (unsigned int)"Accepted shares: %lld" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v21, total_rejected, dword_1B41AC);
  V_UNLOCK();
  LOWORD(v22) = 21232;
  HIWORD(v22) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v22, 140, "print_summary", 13, 2294, 80, v97);
  V_LOCK();
  logfmt_raw(v97, 0x1000u, 0, "Accepted difficulty shares: %1.f", total_diff_accepted);
  V_UNLOCK();
  LOWORD(v23) = 21232;
  HIWORD(v23) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v23, 140, "print_summary", 13, 2295, 80, v97);
  V_LOCK();
  LOWORD(v24) = 24268;
  HIWORD(v24) = (unsigned int)"ficulty shares: %1.f" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v24, total_diff_rejected);
  V_UNLOCK();
  LOWORD(v25) = 21232;
  HIWORD(v25) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v25, 140, "print_summary", 13, 2296, 80, v97);
  V_LOCK();
  LOWORD(v26) = 24304;
  HIWORD(v26) = (unsigned int)"ficulty shares: %1.f" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v26, v95[12], v95[13]);
  V_UNLOCK();
  LOWORD(v27) = 21232;
  HIWORD(v27) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v27, 140, "print_summary", 13, 2297, 80, v97);
  if ( total_accepted || *(_QWORD *)&total_rejected )
  {
    V_LOCK();
    v58 = *(_QWORD *)&total_rejected;
    LODWORD(v60) = sub_144A3C(100LL * *(_QWORD *)&total_rejected);
    HIDWORD(v60) = v59;
    LODWORD(v61) = sub_144A3C(v58 + total_accepted);
    LOWORD(v62) = 24332;
    HIWORD(v62) = (unsigned int)"l Hardware errors %llu" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v62, v60 / v61);
    V_UNLOCK();
    LOWORD(v63) = 21232;
    HIWORD(v63) = (unsigned int)"%s: input bad api param" >> 16;
    zlog(g_zc, v63, 140, "print_summary", 13, 2300, 80, v97);
  }
  V_LOCK();
  LOWORD(v28) = 24356;
  HIWORD(v28) = (unsigned int)"Reject ratio: %.1f%%" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v28, v3);
  V_UNLOCK();
  LOWORD(v29) = 21232;
  HIWORD(v29) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v29, 140, "print_summary", 13, 2302, 80, v97);
  V_LOCK();
  LOWORD(v30) = 24400;
  HIWORD(v30) = (unsigned int)"ares / min): %.2f/min" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v30, v4);
  V_UNLOCK();
  LOWORD(v31) = 21232;
  HIWORD(v31) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v31, 140, "print_summary", 13, 2303, 80, v97);
  V_LOCK();
  LOWORD(v32) = 24452;
  HIWORD(v32) = (unsigned int)"olved / min): %.2f/min" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v32, total_stale, dword_1B415C);
  V_UNLOCK();
  LOWORD(v33) = 21232;
  HIWORD(v33) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v33, 140, "print_summary", 13, 2304, 80, v97);
  V_LOCK();
  LOWORD(v34) = 24504;
  HIWORD(v34) = (unsigned int)"due to new blocks: %lld" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v34, total_go);
  V_UNLOCK();
  LOWORD(v35) = 21232;
  HIWORD(v35) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v35, 140, "print_summary", 13, 2305, 80, v97);
  V_LOCK();
  LOWORD(v36) = 24552;
  HIWORD(v36) = (unsigned int)"server occasions: %d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v36, total_ro);
  V_UNLOCK();
  LOWORD(v37) = 21232;
  HIWORD(v37) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v37, 140, "print_summary", 13, 2306, 80, v97);
  V_LOCK();
  LOWORD(v38) = 24600;
  HIWORD(v38) = (unsigned int)" delay occasions: %d" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v38, new_blocks);
  V_UNLOCK();
  LOWORD(v39) = 21232;
  HIWORD(v39) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v39, 140, "print_summary", 13, 2307, 80, v97);
  if ( total_pools > 0 )
  {
    V_LOCK();
    LOWORD(v66) = 24636;
    HIWORD(v66) = (unsigned int)"etected on network: %d" >> 16;
    logfmt_raw(v97, 0x1000u, 0, v66);
    V_UNLOCK();
    LOWORD(v67) = 21232;
    HIWORD(v67) = (unsigned int)"%s: input bad api param" >> 16;
    zlog(g_zc, v67, 140, "print_summary", 13, 2311, 80, v97);
    if ( total_pools > 0 )
    {
      LOWORD(v68) = 24664;
      LOWORD(v69) = 21232;
      HIWORD(v68) = (unsigned int)"ary of pool statistics:" >> 16;
      HIWORD(v69) = (unsigned int)"%s: input bad api param" >> 16;
      v92 = v68;
      v87 = 0;
      do
      {
        v70 = *(_DWORD *)(pools + 4 * v87);
        V_LOCK();
        v71 = (unsigned int *)(v70 + 1936);
        logfmt_raw(v97, 0x1000u, 0, v92, *(_DWORD *)(v70 + 12));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2316, 80, v97);
        V_LOCK();
        LOWORD(v72) = 24676;
        HIWORD(v72) = (unsigned int)"statistics:" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v72, *(_DWORD *)(v70 + 16));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2317, 80, v97);
        V_LOCK();
        LOWORD(v73) = 24160;
        HIWORD(v73) = (unsigned int)"%d" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v73, *(_QWORD *)(v70 + 1928) + *(_QWORD *)(v70 + 1936));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2318, 80, v97);
        V_LOCK();
        LOWORD(v74) = 24184;
        HIWORD(v74) = (unsigned int)"Share submissions: %lld" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v74, *(_DWORD *)(v70 + 1928), *(_DWORD *)(v70 + 1932));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2319, 80, v97);
        V_LOCK();
        LOWORD(v75) = 24208;
        HIWORD(v75) = (unsigned int)"Accepted shares: %lld" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v75, *(_DWORD *)(v70 + 1936), *(_DWORD *)(v70 + 1940));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2320, 80, v97);
        V_LOCK();
        v70 += 1968;
        LOWORD(v76) = 24232;
        HIWORD(v76) = (unsigned int)"Rejected shares: %lld" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v76, *(_DWORD *)(v70 - 8), *(_DWORD *)(v70 - 4));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2321, 80, v97);
        V_LOCK();
        LOWORD(v77) = 24268;
        HIWORD(v77) = (unsigned int)"ficulty shares: %1.f" >> 16;
        logfmt_raw(v97, 0x1000u, 0, v77, *(_DWORD *)v70, *(_DWORD *)(v70 + 4));
        V_UNLOCK();
        zlog(g_zc, v69, 140, "print_summary", 13, 2322, 80, v97);
        if ( *((_QWORD *)v71 - 1) || *(_QWORD *)v71 )
        {
          V_LOCK();
          v78 = *v71;
          v79 = v71[1];
          LODWORD(v81) = sub_144A3C(100LL * *(_QWORD *)v71);
          HIDWORD(v81) = v80;
          LODWORD(v82) = sub_144A3C(__PAIR64__(v79, v78) + *((_QWORD *)v71 - 1));
          LOWORD(v83) = 24332;
          HIWORD(v83) = (unsigned int)"l Hardware errors %llu" >> 16;
          logfmt_raw(v97, 0x1000u, 0, v83, v81 / v82);
          V_UNLOCK();
          zlog(g_zc, v69, 140, "print_summary", 13, 2325, 80, v97);
        }
        ++v87;
      }
      while ( total_pools > v87 );
    }
  }
  V_LOCK();
  LOWORD(v40) = 24688;
  HIWORD(v40) = (unsigned int)"Pool: %s" >> 16;
  logfmt_raw(v97, 0x1000u, 0, v40);
  V_UNLOCK();
  LOWORD(v41) = 21232;
  HIWORD(v41) = (unsigned int)"%s: input bad api param" >> 16;
  zlog(g_zc, v41, 140, "print_summary", 13, 2330, 80, v97);
  v94 = 0;
  result = (char *)get_all_created_runtime(&v94);
  if ( v94 > 0 )
  {
    LOWORD(v43) = 23700;
    LOWORD(v44) = 24724;
    LOWORD(v45) = 22092;
    HIWORD(v44) = (unsigned int)"er device statistics:" >> 16;
    HIWORD(v45) = (unsigned int)" %llu nc %llu detail:" >> 16;
    v86 = result - 4;
    v91 = 0;
    format = v44;
    v90 = v45;
    do
    {
      v46 = (_DWORD *)*((_DWORD *)v86 + 1);
      v86 += 4;
      v47 = snprintf(v96, 0x1000u, format, v46[62], v46[60], v84, v46[110], v46[111], v46[112], v46[113]);
      v48 = *(_DWORD *)v86;
      v49 = v47;
      v88 = *(_DWORD *)(*(_DWORD *)v86 + 336);
      if ( v88 > 0 )
      {
        LOWORD(v50) = 22096;
        v51 = 0;
        HIWORD(v50) = (unsigned int)"u nc %llu detail:" >> 16;
        v85 = 0;
        v89 = v50;
        while ( 1 )
        {
          v52 = *(_DWORD *)(v48 + 456);
          v53 = (__int64 *)(v52 + v51);
          v51 += 48;
          v54 = (__int64 *)(v52 + v51);
          ++v85;
          v56 = snprintf(&v96[v49], 4096 - v49, v90) + v49;
          do
          {
            v57 = *v53++;
            HIWORD(v43) = (unsigned int)&unk_165C7C >> 16;
            v56 += snprintf(&v96[v56], 4096 - v56, v43, v55, v57);
          }
          while ( v54 != v53 );
          v49 = v56 + 2;
          snprintf(&v96[v56], 4096 - v56, v89);
          if ( v85 == v88 )
            break;
          v48 = *(_DWORD *)v86;
        }
      }
      V_LOCK();
      LOWORD(v64) = -30580;
      HIWORD(v64) = (unsigned int)"e failed" >> 16;
      logfmt_raw(v97, 0x1000u, 0, v64, v96);
      V_UNLOCK();
      LOWORD(v65) = 21232;
      HIWORD(v65) = (unsigned int)"%s: input bad api param" >> 16;
      ++v91;
      result = (char *)zlog(g_zc, v65, 140, "print_summary", 13, 2350, 80, v97);
    }
    while ( v94 > v91 );
  }
  return result;
}
