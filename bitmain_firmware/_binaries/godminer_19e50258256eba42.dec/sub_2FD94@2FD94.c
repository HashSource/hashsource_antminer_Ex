int __fastcall sub_2FD94(json_t *a1, int a2, int a3)
{
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  char *v8; // r6
  json_t *v9; // r0
  json_t *v10; // r0
  double v11; // d0
  double v12; // r0
  double v13; // d7
  double v14; // d7
  json_t *v15; // r0
  double v16; // r0
  json_t *v17; // r0
  double v18; // d7
  double v19; // d7
  double v20; // r0
  json_t *v21; // r0
  double v22; // r0
  json_t *v23; // r0
  double v24; // r0
  json_t *v25; // r0
  double v26; // r0
  json_t *v27; // r0
  double v28; // r0
  json_t *v29; // r0
  double v30; // r0
  json_t *v31; // r0
  json_t *v32; // r0
  json_t *v33; // r0
  int v34; // r3
  json_t *v35; // r0
  json_t *v36; // r0
  json_t *v37; // r0
  int v38; // r3
  json_t *v39; // r0
  int v40; // r3
  json_t *v41; // r0
  int v42; // r3
  json_t *v43; // r0
  json_t *v44; // r0
  json_t *v45; // r0
  json_t *v46; // r0
  json_t *v47; // r0
  json_t *v48; // r0
  __int64 v49; // r0
  json_t *v50; // r0
  json_t *v51; // r0
  json_t *v52; // r0
  __int64 v53; // r0
  json_t *v54; // r0
  double v55; // r0
  json_t *v56; // r0
  json_t *v57; // r0
  __int64 v58; // r0
  json_t *v59; // r0
  json_t *v60; // r0
  json_t *v61; // r0
  json_t *v62; // r0
  _BYTE v64[220]; // [sp+10h] [bp-13CCh] BYREF
  int v65; // [sp+ECh] [bp-12F0h]
  int v66; // [sp+F0h] [bp-12ECh]
  json_t *v67; // [sp+F4h] [bp-12E8h]
  char v68[32]; // [sp+FCh] [bp-12E0h] BYREF
  char v69[12]; // [sp+10FCh] [bp-2E0h] BYREF
  int v70; // [sp+1108h] [bp-2D4h] BYREF
  int v71; // [sp+110Ch] [bp-2D0h] BYREF
  int v72; // [sp+1110h] [bp-2CCh] BYREF
  int v73; // [sp+1114h] [bp-2C8h] BYREF
  double v74; // [sp+1118h] [bp-2C4h] BYREF
  char v75[32]; // [sp+1120h] [bp-2BCh] BYREF
  char v76[32]; // [sp+1140h] [bp-29Ch] BYREF
  char v77[32]; // [sp+1160h] [bp-27Ch] BYREF
  char v78[32]; // [sp+1180h] [bp-25Ch] BYREF
  char v79[12]; // [sp+11A0h] [bp-23Ch] BYREF
  int v80; // [sp+11ACh] [bp-230h] BYREF
  char v81[4]; // [sp+11B0h] [bp-22Ch] BYREF
  int v82; // [sp+11B4h] [bp-228h]
  int v83; // [sp+11B8h] [bp-224h]
  float v84; // [sp+11BCh] [bp-220h]
  float v85; // [sp+11C0h] [bp-21Ch]
  float v86; // [sp+11C4h] [bp-218h]
  float v87; // [sp+11C8h] [bp-214h]
  double v88; // [sp+11D0h] [bp-20Ch]
  char v89[256]; // [sp+11E8h] [bp-1F4h] BYREF
  char s[32]; // [sp+12E8h] [bp-F4h] BYREF
  _DWORD v91[4]; // [sp+1308h] [bp-D4h] BYREF
  double v92; // [sp+1318h] [bp-C4h]
  double v93; // [sp+1320h] [bp-BCh]
  double v94; // [sp+1328h] [bp-B4h]
  float v95; // [sp+1334h] [bp-A8h]
  double v96; // [sp+1338h] [bp-A4h]
  double v97; // [sp+1340h] [bp-9Ch]
  double v98; // [sp+1348h] [bp-94h]
  double v99; // [sp+1350h] [bp-8Ch]
  double v100; // [sp+1358h] [bp-84h]
  double v101; // [sp+1360h] [bp-7Ch]
  double v102; // [sp+1368h] [bp-74h]
  int v103; // [sp+1374h] [bp-68h]
  _DWORD *all_created_runtime; // [sp+1378h] [bp-64h]
  int v105; // [sp+137Ch] [bp-60h]
  __int64 v106; // [sp+1380h] [bp-5Ch]
  int v107; // [sp+1388h] [bp-54h]
  int v108; // [sp+138Ch] [bp-50h]
  int v109; // [sp+1390h] [bp-4Ch]
  int v110; // [sp+1394h] [bp-48h]
  json_t *v111; // [sp+1398h] [bp-44h]
  json_t *v112; // [sp+139Ch] [bp-40h]
  unsigned __int64 v113; // [sp+13A0h] [bp-3Ch]
  double v114; // [sp+13A8h] [bp-34h]
  int v115; // [sp+13B0h] [bp-2Ch]
  int v116; // [sp+13B4h] [bp-28h]
  unsigned __int8 v117; // [sp+13BBh] [bp-21h]
  void *ptr; // [sp+13BCh] [bp-20h]
  void *v119; // [sp+13C0h] [bp-1Ch]
  int i; // [sp+13C4h] [bp-18h]

  v67 = a1;
  v66 = a2;
  v65 = a3;
  v112 = 0;
  v111 = 0;
  v110 = 0;
  i = 0;
  v109 = 0;
  v108 = 0;
  memset(v91, 0, sizeof(v91));
  memset(s, 0, sizeof(s));
  memset(v89, 0, sizeof(v89));
  v107 = 0;
  v80 = 0;
  v119 = 0;
  ptr = 0;
  v117 = 0;
  v116 = -100;
  v115 = 0x7FFFFFFF;
  v113 = 0;
  v106 = 0;
  v105 = v66;
  if ( v66 && v67 )
  {
    sub_2DE54(v67, 1, 70, *(const char **)(v105 + 8));
    v112 = (json_t *)json_array();
    v111 = (json_t *)json_object();
    v4 = (json_t *)json_string("2.12");
    json_object_set_new(v111, "BMMiner", v4);
    v5 = (json_t *)json_string(g_miner_version);
    json_object_set_new(v111, "Miner", v5);
    v6 = (json_t *)json_string(g_miner_compiletime);
    json_object_set_new(v111, "CompileTime", v6);
    v7 = (json_t *)json_string(g_miner_type);
    json_object_set_new(v111, "Type", v7);
    json_array_append_new(v112, v111);
    read_system_status_from_monitor((int)v81);
    all_created_runtime = get_all_created_runtime(&v80);
    v103 = frontend_runtime_instance();
    if ( v80 > 0 )
    {
      v119 = malloc(216 * v80);
      ptr = malloc(4 * v80);
      for ( i = 0; i < v80; ++i )
      {
        v8 = (char *)v119 + 216 * i;
        read_status_from_monitor(v64, all_created_runtime[i]);
        memcpy(v8, v64, 0xD8u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 272) + 1;
      }
    }
    v111 = (json_t *)json_object();
    v9 = (json_t *)json_integer(i, i >> 31);
    json_object_set_new(v111, "STATS", v9);
    snprintf((char *)v91, 0x10u, "BTM_SOC%d", i);
    v10 = (json_t *)json_string((const char *)v91);
    json_object_set_new(v111, "ID", v10);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v103 + 72) + 16), v78);
    format_hashrate_string(*(const char **)(*(_DWORD *)(v103 + 72) + 16), v77);
    v11 = v87;
    format_hashrate_string(*(const char **)(*(_DWORD *)(v103 + 72) + 16), v76);
    if ( opt_algo == 7 )
    {
      sub_29B6C();
      format_hashrate_string(*(const char **)(*(_DWORD *)(v103 + 72) + 16), v75);
      sub_29B6C();
    }
    else
    {
      format_hashrate_string(*(const char **)(*(_DWORD *)(v103 + 72) + 16), v75);
      v11 = v88;
    }
    format_hashrate_double(*(const char **)(*(_DWORD *)(v103 + 72) + 16), &v74, v79);
    v114 = v11;
    v102 = v11 * v84;
    v101 = v11 * v85;
    v100 = v11 * v86;
    v99 = v11 * v87;
    get_miner_elapsed_time();
    v98 = v11;
    LODWORD(v12) = sub_345484(total_accepted);
    if ( v98 == 0.0 )
      v13 = 1.0;
    else
      v13 = v98;
    v97 = v12 / v13 * 60.0;
    if ( v98 == 0.0 )
      v14 = 1.0;
    else
      v14 = v98;
    v96 = (total_diff_accepted + total_diff_rejected + total_diff_stale) / v14 * 60.0;
    get_total_nonce_rate();
    v95 = *(float *)&v11;
    get_total_accept_rate();
    total_accept_rate = *(float *)&v11;
    v15 = (json_t *)json_integer((__int64)v98, (unsigned __int64)(__int64)v98 >> 32);
    json_object_set_new(v111, "Elapsed", v15);
    if ( opt_algo == 6 )
    {
      LODWORD(v16) = sub_345484((__int64)(v101 * 100.0));
      v17 = json_real(v16);
      json_object_set_new(v111, "GHS 5s", v17);
      if ( v95 <= total_accept_rate )
        v18 = total_accept_rate * v99;
      else
        v18 = v95 * v99;
      v94 = v18;
      if ( v95 <= total_accept_rate )
        v19 = total_accept_rate * v100;
      else
        v19 = v95 * v100;
      v93 = v19;
      LODWORD(v20) = sub_345484((__int64)(v94 * 100.0));
      v21 = json_real(v20);
      json_object_set_new(v111, "GHS av", v21);
      LODWORD(v22) = sub_345484((__int64)(v93 * 100.0));
      v23 = json_real(v22);
      json_object_set_new(v111, "rate_30m", v23);
    }
    else
    {
      LODWORD(v24) = sub_345484((__int64)(v102 * 100.0));
      v25 = json_real(v24);
      json_object_set_new(v111, "GHS 5s", v25);
      LODWORD(v26) = sub_345484((__int64)(v99 * 100.0));
      v27 = json_real(v26);
      json_object_set_new(v111, "GHS av", v27);
      LODWORD(v28) = sub_345484((__int64)(v100 * 100.0));
      v29 = json_real(v28);
      json_object_set_new(v111, "rate_30m", v29);
    }
    LODWORD(v30) = sub_345484((__int64)(v74 * 100.0));
    v31 = json_real(v30);
    json_object_set_new(v111, "total_rateideal", v31);
    v32 = (json_t *)json_integer(opt_bitmain_work_mode, opt_bitmain_work_mode >> 31);
    json_object_set_new(v111, "Mode", v32);
    v33 = (json_t *)json_integer(v80, v80 >> 31);
    json_object_set_new(v111, "miner_count", v33);
    for ( i = 0; i < v80; ++i )
    {
      v34 = *((_DWORD *)v119 + 54 * i + 18);
      if ( v115 < v34 )
        v34 = v115;
      v115 = v34;
    }
    v35 = (json_t *)json_integer(v115, v115 >> 31);
    json_object_set_new(v111, "frequency", v35);
    v36 = (json_t *)json_integer(v82, v82 >> 31);
    json_object_set_new(v111, "fan_num", v36);
    for ( i = 0; i < v82; ++i )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x20u, "fan%d", i + 1);
      v37 = (json_t *)json_integer(*(_DWORD *)(v83 + 4 * i), *(int *)(v83 + 4 * i) >> 31);
      json_object_set_new(v111, s, v37);
    }
    for ( i = 0; i < v80; ++i )
    {
      v117 += *((_DWORD *)v119 + 54 * i + 6) + *((_DWORD *)v119 + 54 * i + 7);
      v38 = *((_DWORD *)v119 + 54 * i + 4);
      if ( v116 >= v38 )
        v38 = v116;
      v116 = v38;
    }
    v39 = (json_t *)json_integer(v117, 0);
    json_object_set_new(v111, "temp_num", v39);
    for ( i = 0; i < v80; ++i )
    {
      v73 = 0;
      v72 = 0;
      v71 = 0;
      v70 = 0;
      v107 = -255;
      find_min_and_max_int(*((int **)v119 + 54 * i), *((_DWORD *)v119 + 54 * i + 6), &v73, &v72);
      find_min_and_max_int(*((int **)v119 + 54 * i + 2), *((_DWORD *)v119 + 54 * i + 7), &v71, &v70);
      v40 = v72;
      if ( v70 >= v72 )
        v40 = v70;
      v107 = v40;
      sprintf(s, "temp%d", *((_DWORD *)ptr + i));
      v41 = (json_t *)json_integer(v107, v107 >> 31);
      json_object_set_new(v111, s, v41);
      v107 = -255;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      find_min_and_max_int(*((int **)v119 + 54 * i + 1), *((_DWORD *)v119 + 54 * i + 6), &v73, &v72);
      find_min_and_max_int(*((int **)v119 + 54 * i + 3), *((_DWORD *)v119 + 54 * i + 7), &v71, &v70);
      v42 = v72;
      if ( v70 >= v72 )
        v42 = v70;
      v107 = v42;
      sprintf(s, "temp2_%d", *((_DWORD *)ptr + i));
      v43 = (json_t *)json_integer(v107, v107 >> 31);
      json_object_set_new(v111, s, v43);
    }
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      memset(v89, 0, sizeof(v89));
      snprintf(s, 0x20u, "temp_in_pcb_%d", *((_DWORD *)ptr + i));
      sub_2FCD0(*((_DWORD *)v119 + 54 * i), *((_DWORD *)v119 + 54 * i + 6), v89);
      v44 = (json_t *)json_string(v89);
      json_object_set_new(v111, s, v44);
    }
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      memset(v89, 0, sizeof(v89));
      snprintf(s, 0x20u, "temp_out_pcb_%d", *((_DWORD *)ptr + i));
      sub_2FCD0(*((_DWORD *)v119 + 54 * i + 2), *((_DWORD *)v119 + 54 * i + 7), v89);
      v45 = (json_t *)json_string(v89);
      json_object_set_new(v111, s, v45);
    }
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      memset(v89, 0, sizeof(v89));
      snprintf(s, 0x20u, "temp_in_chip_%d", *((_DWORD *)ptr + i));
      sub_2FCD0(*((_DWORD *)v119 + 54 * i + 1), *((_DWORD *)v119 + 54 * i + 6), v89);
      v46 = (json_t *)json_string(v89);
      json_object_set_new(v111, s, v46);
    }
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      memset(v89, 0, sizeof(v89));
      snprintf(s, 0x20u, "temp_out_chip_%d", *((_DWORD *)ptr + i));
      sub_2FCD0(*((_DWORD *)v119 + 54 * i + 2), *((_DWORD *)v119 + 54 * i + 7), v89);
      v47 = (json_t *)json_string(v89);
      json_object_set_new(v111, s, v47);
    }
    v48 = (json_t *)json_integer(v116, v116 >> 31);
    json_object_set_new(v111, "temp_max", v48);
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x20u, "chain_acn%d", *((_DWORD *)ptr + i));
      v49 = *((int *)v119 + 54 * i + 16);
      v50 = (json_t *)json_integer(v49, HIDWORD(v49));
      json_object_set_new(v111, s, v50);
    }
    for ( i = 0; i < v80; ++i )
    {
      sprintf(v69, "chain_acs%d", *((_DWORD *)ptr + i));
      memset(s, 0, sizeof(s));
      memset(v89, 0, sizeof(v89));
      snprintf(s, 0x20u, "chain_acs%d", *((_DWORD *)ptr + i));
      snprintf(v89, 0x100u, "%s", *((const char **)v119 + 54 * i + 17));
      v51 = (json_t *)json_string(v89);
      json_object_set_new(v111, s, v51);
    }
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x20u, "chain_hw%d", *((_DWORD *)ptr + i));
      v52 = (json_t *)json_integer(*((_DWORD *)v119 + 54 * i + 20), *((_DWORD *)v119 + 54 * i + 21));
      json_object_set_new(v111, s, v52);
      v113 += *((_QWORD *)v119 + 27 * i + 10);
    }
    if ( opt_algo == 9 )
    {
      LODWORD(v53) = sub_34579C(v113, 0x3E8u);
      v106 = v53;
      v54 = (json_t *)json_integer(v53, HIDWORD(v53));
    }
    else
    {
      v54 = (json_t *)json_integer(v113, HIDWORD(v113));
    }
    json_object_set_new(v111, "no_matching_work", v54);
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      LODWORD(v55) = snprintf(s, 0x20u, "chain_rate%d", *((_DWORD *)ptr + i));
      v92 = *((float *)v119 + 54 * i + 11) / 1000.0 / 1000.0 / 1000.0;
      v56 = json_real(v55);
      json_object_set_new(v111, s, v56);
    }
    for ( i = 0; i < v80; ++i )
    {
      format_hashrate_string(*(const char **)(*(_DWORD *)(v103 + 72) + 16), v68);
      snprintf(s, 0x20u, "CHAIN AVG HASHRATE%d", *((_DWORD *)ptr + i));
      v57 = (json_t *)json_string(v68);
      json_object_set_new(v111, s, v57);
    }
    for ( i = 0; i < v80; ++i )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x20u, "freq%d", *((_DWORD *)ptr + i));
      v58 = *((int *)v119 + 54 * i + 18);
      v59 = (json_t *)json_integer(v58, HIDWORD(v58));
      json_object_set_new(v111, s, v59);
    }
    v60 = (json_t *)json_string(g_miner_version);
    json_object_set_new(v111, "miner_version", v60);
    v61 = (json_t *)json_string(0);
    json_object_set_new(v111, "miner_id", v61);
    json_array_append_new(v112, v111);
    json_object_set_new(v67, "STATS", v112);
    v62 = (json_t *)json_integer(1, 0);
    json_object_set_new(v67, "id", v62);
    if ( v80 > 0 )
    {
      free(ptr);
      free(v119);
    }
    return v110;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v68, 0x1000u, 0, "%s: input bad api param", "get_stats_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats_old",
      13,
      1792,
      100,
      v68);
    return -2147483646;
  }
}
