int __fastcall sub_2C150(json_t *a1, const char **a2)
{
  double v2; // d0
  char *v4; // r8
  json_t *v5; // r0
  double v6; // r0
  json_t *v7; // r0
  double v8; // d7
  double v9; // d7
  double v10; // r0
  json_t *v11; // r0
  double v12; // r0
  json_t *v13; // r0
  double v14; // r0
  json_t *v15; // r0
  double v16; // r0
  json_t *v17; // r0
  double v18; // r0
  json_t *v19; // r0
  double v20; // r0
  json_t *v21; // r0
  double v22; // r0
  json_t *v23; // r0
  double v24; // r0
  json_t *v25; // r0
  json_t *v26; // r0
  json_t *v27; // r0
  json_t *v28; // r0
  json_t *v29; // r0
  int v30; // r1
  double v31; // d8
  double v32; // r0
  double v33; // d7
  double v34; // r0
  json_t *v35; // r0
  json_t *v36; // r0
  __int64 v37; // r0
  json_t *v38; // r0
  double v39; // r0
  json_t *v40; // r0
  double v41; // r0
  json_t *v42; // r0
  __int64 v43; // r0
  json_t *v44; // r0
  json_t *v45; // r0
  json_t *v46; // r0
  json_t *v47; // r0
  __int64 v48; // r0
  json_t *v49; // r0
  __int64 v50; // r0
  json_t *v51; // r0
  __int64 v52; // r0
  json_t *v53; // r0
  __int64 v54; // r0
  json_t *v55; // r0
  __int64 v56; // r0
  json_t *v57; // r0
  json_t *v58; // r3
  const char *eeprom_chip_sn; // r0
  json_t *v60; // r0
  json_t *v61; // r3
  _BYTE v63[216]; // [sp+28h] [bp-15FCh] BYREF
  const char **v64; // [sp+100h] [bp-1524h]
  json_t *v65; // [sp+104h] [bp-1520h]
  _BYTE v66[88]; // [sp+10Ch] [bp-1518h] BYREF
  int v67; // [sp+110Ch] [bp-518h] BYREF
  double v68; // [sp+1110h] [bp-514h] BYREF
  int v69; // [sp+1118h] [bp-50Ch] BYREF
  int v70; // [sp+111Ch] [bp-508h]
  int v71; // [sp+1120h] [bp-504h]
  float v72; // [sp+1124h] [bp-500h]
  float v73; // [sp+1128h] [bp-4FCh]
  float v74; // [sp+112Ch] [bp-4F8h]
  float v75; // [sp+1130h] [bp-4F4h]
  double v76; // [sp+1138h] [bp-4ECh]
  __int64 v77; // [sp+1148h] [bp-4DCh]
  char v78[4]; // [sp+1150h] [bp-4D4h] BYREF
  _DWORD v79[2]; // [sp+1550h] [bp-D4h] BYREF
  __int64 v80; // [sp+1558h] [bp-CCh]
  double v81; // [sp+1560h] [bp-C4h]
  double v82; // [sp+1568h] [bp-BCh]
  double v83; // [sp+1570h] [bp-B4h]
  double v84; // [sp+1578h] [bp-ACh]
  double v85; // [sp+1580h] [bp-A4h]
  double v86; // [sp+1588h] [bp-9Ch]
  float v87; // [sp+1594h] [bp-90h]
  __int64 v88; // [sp+1598h] [bp-8Ch]
  double v89; // [sp+15A0h] [bp-84h]
  double v90; // [sp+15A8h] [bp-7Ch]
  double v91; // [sp+15B0h] [bp-74h]
  double v92; // [sp+15B8h] [bp-6Ch]
  int v93; // [sp+15C4h] [bp-60h]
  _DWORD *all_created_runtime; // [sp+15C8h] [bp-5Ch]
  json_t *v95; // [sp+15CCh] [bp-58h]
  json_t *v96; // [sp+15D0h] [bp-54h]
  json_t *v97; // [sp+15D4h] [bp-50h]
  json_t *v98; // [sp+15D8h] [bp-4Ch]
  json_t *v99; // [sp+15DCh] [bp-48h]
  const char **v100; // [sp+15E0h] [bp-44h]
  int v101; // [sp+15E4h] [bp-40h]
  void *ptr; // [sp+15E8h] [bp-3Ch]
  void *v103; // [sp+15ECh] [bp-38h]
  double v104; // [sp+15F0h] [bp-34h]
  int i; // [sp+15F8h] [bp-2Ch]
  signed int j; // [sp+15FCh] [bp-28h]

  v65 = a1;
  v64 = a2;
  v101 = 0;
  i = 0;
  j = 0;
  v100 = a2;
  v99 = 0;
  v98 = 0;
  v97 = 0;
  v96 = 0;
  v95 = 0;
  v79[0] = 0;
  v79[1] = 0;
  v67 = 0;
  v103 = 0;
  ptr = 0;
  all_created_runtime = get_all_created_runtime(&v67);
  v93 = frontend_runtime_instance();
  if ( v100 && v65 )
  {
    sub_2A2F8(v65, v100);
    sub_2A45C(v65);
    v99 = (json_t *)json_array();
    read_system_status_from_monitor((int)&v69);
    if ( opt_algo == 7 )
      sub_29B6C();
    else
      v2 = v76;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v93 + 72) + 16), &v68, (char *)v79);
    v104 = v2;
    v92 = v2 * v72;
    v91 = v2 * v73;
    v90 = v2 * v74;
    v89 = v2 * v75;
    v88 = v77;
    if ( v67 > 0 )
    {
      v103 = malloc(216 * v67);
      ptr = malloc(4 * v67);
      for ( i = 0; i < v67; ++i )
      {
        v4 = (char *)v103 + 216 * i;
        read_status_from_monitor(v63, all_created_runtime[i]);
        memcpy(v4, v63, 0xD8u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 272);
      }
    }
    v98 = (json_t *)json_object();
    get_total_nonce_rate();
    v87 = *(float *)&v2;
    get_total_accept_rate();
    total_accept_rate = *(float *)&v2;
    get_miner_elapsed_time();
    v86 = v2;
    v5 = (json_t *)json_integer((__int64)v2, (unsigned __int64)(__int64)v2 >> 32);
    json_object_set_new(v98, "elapsed", v5);
    if ( opt_algo == 6 )
    {
      LODWORD(v6) = sub_345484((__int64)(v91 * 100.0));
      v7 = json_real(v6);
      json_object_set_new(v98, "rate_5s", v7);
      if ( v87 <= total_accept_rate )
        v8 = total_accept_rate * v89;
      else
        v8 = v87 * v89;
      v83 = v8;
      if ( v87 <= total_accept_rate )
        v9 = total_accept_rate * v90;
      else
        v9 = v87 * v90;
      v82 = v9;
      LODWORD(v10) = sub_345484((__int64)(v83 * 100.0));
      v11 = json_real(v10);
      json_object_set_new(v98, "rate_avg", v11);
      LODWORD(v12) = sub_345484((__int64)(v82 * 100.0));
      v13 = json_real(v12);
      json_object_set_new(v98, "rate_30m", v13);
    }
    else
    {
      if ( opt_algo == 7 )
      {
        v85 = v89 * total_accept_rate;
        v84 = v90 * total_accept_rate;
        LODWORD(v14) = sub_345484((__int64)(total_accept_rate * v91 * 100.0));
        v15 = json_real(v14);
        json_object_set_new(v98, "rate_5s", v15);
        LODWORD(v16) = sub_345484((__int64)(v84 * 100.0));
        v17 = json_real(v16);
        json_object_set_new(v98, "rate_avg", v17);
        LODWORD(v18) = sub_345484((__int64)(v84 * 100.0));
      }
      else
      {
        V_LOCK();
        logfmt_raw(
          v66,
          0x1000u,
          0,
          "total_accept_rate/total_nonce_rate:%2f/%2f, hash_rate_last_30m_avg/hash_rate_lifetime_avg: %2f/%2f, hash_rate_"
          "last_5s_avg: %2f",
          total_accept_rate,
          v87,
          v90,
          v89,
          v92);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/api_new.c",
          137,
          "get_stats",
          9,
          1160,
          20,
          v66);
        LODWORD(v20) = sub_345484((__int64)(v92 * 100.0));
        v21 = json_real(v20);
        json_object_set_new(v98, "rate_5s", v21);
        LODWORD(v22) = sub_345484((__int64)(v89 * 100.0));
        v23 = json_real(v22);
        json_object_set_new(v98, "rate_avg", v23);
        LODWORD(v18) = sub_345484((__int64)(v90 * 100.0));
      }
      v19 = json_real(v18);
      json_object_set_new(v98, "rate_30m", v19);
    }
    LODWORD(v24) = sub_345484((__int64)(v68 * 100.0));
    v25 = json_real(v24);
    json_object_set_new(v98, "rate_ideal", v25);
    v26 = (json_t *)json_string((const char *)v79);
    json_object_set_new(v98, "rate_unit", v26);
    v27 = (json_t *)json_integer(v67, v67 >> 31);
    json_object_set_new(v98, "chain_num", v27);
    v28 = (json_t *)json_integer(v70, v70 >> 31);
    json_object_set_new(v98, "fan_num", v28);
    v97 = (json_t *)json_array();
    for ( i = 0; i < v70; ++i )
    {
      v29 = (json_t *)json_integer(*(_DWORD *)(v71 + 4 * i), *(int *)(v71 + 4 * i) >> 31);
      json_array_append_new(v97, v29);
    }
    json_object_set_new(v98, "fan", v97);
    if ( total_diff1 + v88 )
    {
      LODWORD(v31) = sub_345474(v88);
      HIDWORD(v31) = v30;
      LODWORD(v32) = sub_345474(total_diff1 + v88);
      v33 = v31 / v32;
    }
    else
    {
      v33 = 0.0;
    }
    v81 = v33;
    LODWORD(v34) = sub_345484((__int64)(v33 * 100.0 * 10000.0));
    v35 = json_real(v34);
    json_object_set_new(v98, "hwp_total", v35);
    v96 = (json_t *)json_array();
    for ( i = 0; i < v67; ++i )
    {
      v95 = (json_t *)json_object();
      v36 = (json_t *)json_integer(*((_DWORD *)ptr + i), *((int *)ptr + i) >> 31);
      json_object_set_new(v95, "index", v36);
      v37 = *((int *)v103 + 54 * i + 18);
      v38 = (json_t *)json_integer(v37, HIDWORD(v37));
      json_object_set_new(v95, "freq_avg", v38);
      v90 = v104 * *((float *)v103 + 54 * i + 10);
      v68 = *((double *)v103 + 27 * i + 6) * v104;
      LODWORD(v39) = sub_345484((__int64)(v68 * 100.0));
      v40 = json_real(v39);
      json_object_set_new(v95, "rate_ideal", v40);
      LODWORD(v41) = sub_345484((__int64)(v90 * 100.0));
      v42 = json_real(v41);
      json_object_set_new(v95, "rate_real", v42);
      v43 = *((int *)v103 + 54 * i + 16);
      v44 = (json_t *)json_integer(v43, HIDWORD(v43));
      json_object_set_new(v95, "asic_num", v44);
      if ( *((_DWORD *)v103 + 54 * i + 17) )
      {
        strcpy(v78, *((const char **)v103 + 54 * i + 17));
        for ( j = 0; strlen(v78) > j; ++j )
        {
          if ( v78[j] != 111 && v78[j] != 32 )
            v78[j] = 120;
        }
        v45 = (json_t *)json_string(v78);
        json_object_set_new(v95, "asic", v45);
      }
      v97 = (json_t *)json_array();
      for ( j = 0; j < *((_DWORD *)v103 + 54 * i + 6); ++j )
      {
        v46 = (json_t *)json_integer(0, 0);
        json_array_append_new(v97, v46);
      }
      for ( j = 0; j < *((_DWORD *)v103 + 54 * i + 7); ++j )
      {
        v47 = (json_t *)json_integer(0, 0);
        json_array_append_new(v97, v47);
      }
      json_object_set_new(v95, "temp_pic", v97);
      v97 = (json_t *)json_array();
      for ( j = 0; j < *((_DWORD *)v103 + 54 * i + 6); ++j )
      {
        v48 = *(int *)(*((_DWORD *)v103 + 54 * i) + 4 * j);
        v49 = (json_t *)json_integer(v48, HIDWORD(v48));
        json_array_append_new(v97, v49);
      }
      for ( j = 0; j < *((_DWORD *)v103 + 54 * i + 7); ++j )
      {
        v50 = *(int *)(*((_DWORD *)v103 + 54 * i + 2) + 4 * j);
        v51 = (json_t *)json_integer(v50, HIDWORD(v50));
        json_array_append_new(v97, v51);
      }
      json_object_set_new(v95, "temp_pcb", v97);
      v97 = (json_t *)json_array();
      for ( j = 0; j < *((_DWORD *)v103 + 54 * i + 6); ++j )
      {
        v52 = *(int *)(*((_DWORD *)v103 + 54 * i + 1) + 4 * j);
        v53 = (json_t *)json_integer(v52, HIDWORD(v52));
        json_array_append_new(v97, v53);
      }
      for ( j = 0; j < *((_DWORD *)v103 + 54 * i + 7); ++j )
      {
        v54 = *(int *)(*((_DWORD *)v103 + 54 * i + 3) + 4 * j);
        v55 = (json_t *)json_integer(v54, HIDWORD(v54));
        json_array_append_new(v97, v55);
      }
      json_object_set_new(v95, "temp_chip", v97);
      if ( opt_algo == 9 )
      {
        LODWORD(v56) = sub_34579C(*((_QWORD *)v103 + 27 * i + 10), 0x3E8u);
        v80 = v56;
        v57 = (json_t *)json_integer(v56, HIDWORD(v56));
      }
      else
      {
        v57 = (json_t *)json_integer(*((_DWORD *)v103 + 54 * i + 20), *((_DWORD *)v103 + 54 * i + 21));
      }
      json_object_set_new(v95, "hw", v57);
      if ( is_eeprom_loaded() )
      {
        if ( is_eeprom_loaded() )
          v58 = json_true();
        else
          v58 = (json_t *)json_false();
        json_object_set_new(v95, "eeprom_loaded", v58);
        if ( api_get_eeprom_chip_sn(i) )
        {
          eeprom_chip_sn = (const char *)api_get_eeprom_chip_sn(i);
          v60 = (json_t *)json_string(eeprom_chip_sn);
          json_object_set_new(v95, "sn", v60);
        }
      }
      else
      {
        if ( is_eeprom_loaded() )
          v61 = json_true();
        else
          v61 = (json_t *)json_false();
        json_object_set_new(v95, "eeprom_loaded", v61);
      }
      json_array_append_new(v96, v95);
    }
    json_object_set_new(v98, "chain", v96);
    json_array_append_new(v99, v98);
    json_object_set_new(v65, "STATS", v99);
    if ( v67 > 0 )
    {
      free(ptr);
      free(v103);
    }
    return v101;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v66, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats",
      9,
      1088,
      100,
      v66);
    return -2147483646;
  }
}
