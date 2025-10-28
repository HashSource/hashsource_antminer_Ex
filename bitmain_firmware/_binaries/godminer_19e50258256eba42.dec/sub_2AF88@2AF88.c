int __fastcall sub_2AF88(json_t *a1, const char **a2)
{
  double v2; // d0
  char *v4; // r4
  json_t *v5; // r0
  double v6; // r0
  json_t *v7; // r0
  double v8; // r0
  json_t *v9; // r0
  double v10; // d7
  double v11; // d7
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
  json_t *v24; // r0
  __int64 v25; // r0
  json_t *v26; // r0
  json_t *v27; // r0
  _BYTE v29[216]; // [sp+10h] [bp-11CCh] BYREF
  const char **v30; // [sp+E8h] [bp-10F4h]
  json_t *v31; // [sp+ECh] [bp-10F0h]
  _BYTE v32[44]; // [sp+F0h] [bp-10ECh] BYREF
  double v33; // [sp+10F0h] [bp-ECh] BYREF
  _BYTE v34[12]; // [sp+10F8h] [bp-E4h] BYREF
  float v35; // [sp+1104h] [bp-D8h]
  float v36; // [sp+1108h] [bp-D4h]
  float v37; // [sp+110Ch] [bp-D0h]
  float v38; // [sp+1110h] [bp-CCh]
  double v39; // [sp+1118h] [bp-C4h]
  unsigned __int64 v40; // [sp+1128h] [bp-B4h]
  int v41; // [sp+1134h] [bp-A8h] BYREF
  _DWORD v42[2]; // [sp+1138h] [bp-A4h] BYREF
  __int64 v43; // [sp+1140h] [bp-9Ch]
  double v44; // [sp+1148h] [bp-94h]
  double v45; // [sp+1150h] [bp-8Ch]
  double v46; // [sp+1158h] [bp-84h]
  double v47; // [sp+1160h] [bp-7Ch]
  float v48; // [sp+116Ch] [bp-70h]
  double v49; // [sp+1170h] [bp-6Ch]
  unsigned __int64 v50; // [sp+1178h] [bp-64h]
  double v51; // [sp+1180h] [bp-5Ch]
  double v52; // [sp+1188h] [bp-54h]
  double v53; // [sp+1190h] [bp-4Ch]
  double v54; // [sp+1198h] [bp-44h]
  const char **v55; // [sp+11A0h] [bp-3Ch]
  _DWORD *all_created_runtime; // [sp+11A4h] [bp-38h]
  int v57; // [sp+11A8h] [bp-34h]
  json_t *v58; // [sp+11ACh] [bp-30h]
  json_t *v59; // [sp+11B0h] [bp-2Ch]
  json_t *v60; // [sp+11B4h] [bp-28h]
  int v61; // [sp+11B8h] [bp-24h]
  int i; // [sp+11BCh] [bp-20h]
  double v63; // [sp+11C0h] [bp-1Ch]
  void *v64; // [sp+11C8h] [bp-14h]
  void *ptr; // [sp+11CCh] [bp-10h]

  v31 = a1;
  v30 = a2;
  v61 = 0;
  i = 0;
  v60 = 0;
  v59 = 0;
  v58 = 0;
  v42[0] = 0;
  v42[1] = 0;
  v41 = 0;
  v57 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(&v41);
  v64 = 0;
  ptr = 0;
  v55 = v30;
  if ( v30 )
  {
    sub_2A2F8(v31, v55);
    sub_2A45C(v31);
    v58 = (json_t *)json_array();
    v60 = (json_t *)json_object();
    read_system_status_from_monitor((int)v34);
    if ( opt_algo == 7 )
      sub_29B6C();
    else
      v2 = v39;
    format_hashrate_double(*(const char **)(*(_DWORD *)(v57 + 72) + 16), &v33, (char *)v42);
    v63 = v2;
    v54 = v2 * v35;
    v53 = v2 * v36;
    v52 = v2 * v37;
    v51 = v2 * v38;
    v50 = v40;
    if ( v41 > 0 )
    {
      v64 = malloc(216 * v41);
      ptr = malloc(4 * v41);
      for ( i = 0; i < v41; ++i )
      {
        v4 = (char *)v64 + 216 * i;
        read_status_from_monitor(v29, all_created_runtime[i]);
        memcpy(v4, v29, 0xD8u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 272);
      }
    }
    get_miner_elapsed_time();
    v49 = v2;
    get_total_nonce_rate();
    v48 = *(float *)&v2;
    get_total_accept_rate();
    total_accept_rate = *(float *)&v2;
    v5 = (json_t *)json_integer((__int64)v49, (unsigned __int64)(__int64)v49 >> 32);
    json_object_set_new(v60, "elapsed", v5);
    if ( opt_algo == 6 )
    {
      LODWORD(v6) = sub_345484((__int64)(v53 * 100.0));
      v7 = json_real(v6);
      json_object_set_new(v60, "rate_5s", v7);
    }
    else
    {
      if ( opt_algo == 7 )
        LODWORD(v8) = sub_345484((__int64)(total_accept_rate * v53 * 100.0));
      else
        LODWORD(v8) = sub_345484((__int64)(v54 * 100.0));
      v9 = json_real(v8);
      json_object_set_new(v60, "rate_5s", v9);
    }
    if ( opt_algo == 6 )
    {
      if ( v48 <= total_accept_rate )
        v10 = total_accept_rate * v51;
      else
        v10 = v48 * v51;
      v45 = v10;
      if ( v48 <= total_accept_rate )
        v11 = total_accept_rate * v52;
      else
        v11 = v48 * v52;
      v44 = v11;
      LODWORD(v12) = sub_345484((__int64)(v45 * 100.0));
      v13 = json_real(v12);
      json_object_set_new(v60, "rate_avg", v13);
      LODWORD(v14) = sub_345484((__int64)(v44 * 100.0));
      v15 = json_real(v14);
      json_object_set_new(v60, "rate_30m", v15);
    }
    else
    {
      if ( opt_algo == 7 )
      {
        v47 = v51 * total_accept_rate;
        v46 = v52 * total_accept_rate;
        LODWORD(v16) = sub_345484((__int64)(v47 * 100.0));
        v17 = json_real(v16);
        json_object_set_new(v60, "rate_avg", v17);
        LODWORD(v18) = sub_345484((__int64)(v46 * 100.0));
      }
      else
      {
        LODWORD(v20) = sub_345484((__int64)(v51 * 100.0));
        v21 = json_real(v20);
        json_object_set_new(v60, "rate_avg", v21);
        LODWORD(v18) = sub_345484((__int64)(v52 * 100.0));
      }
      v19 = json_real(v18);
      json_object_set_new(v60, "rate_30m", v19);
    }
    LODWORD(v22) = sub_345484((__int64)(v33 * 100.0));
    v23 = json_real(v22);
    json_object_set_new(v60, "rate_ideal", v23);
    v24 = (json_t *)json_string((const char *)v42);
    json_object_set_new(v60, "rate_unit", v24);
    if ( opt_algo == 9 )
    {
      LODWORD(v25) = sub_34579C(v50, 0x3E8u);
      v43 = v25;
      v26 = (json_t *)json_integer(v25, HIDWORD(v25));
    }
    else
    {
      v26 = (json_t *)json_integer(v50, HIDWORD(v50));
    }
    json_object_set_new(v60, "hw_all", v26);
    v27 = (json_t *)json_integer(dword_5AC238, dword_5AC23C);
    json_object_set_new(v60, "bestshare", v27);
    v59 = (json_t *)json_array();
    sub_2A1CC(v59);
    json_object_set_new(v60, "status", v59);
    json_array_append_new(v58, v60);
    json_object_set_new(v31, "SUMMARY", v58);
    if ( v41 > 0 )
    {
      free(ptr);
      free(v64);
    }
    return v61;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "%s: input bad api param", "get_summary");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_summary",
      11,
      765,
      100,
      v32);
    return -2147483646;
  }
}
