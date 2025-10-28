int __fastcall sub_2F11C(json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  json_t *v10; // r0
  json_t *v11; // r0
  json_t *v12; // r0
  json_t *v13; // r0
  json_t *v14; // r0
  json_t *v15; // r0
  json_t *v16; // r0
  json_t *v17; // r0
  json_t *v18; // r0
  json_t *v19; // r0
  json_t *v20; // r0
  json_t *v21; // r0
  double v22; // r0
  json_t *v23; // r0
  double v24; // r0
  json_t *v25; // r0
  double v26; // r0
  json_t *v27; // r0
  double v28; // r0
  json_t *v29; // r0
  json_t *v30; // r3
  json_t *v31; // r0
  json_t *v32; // r0
  json_t *v33; // r0
  double v34; // r0
  json_t *v35; // r0
  double v36; // d7
  double v37; // r0
  json_t *v38; // r0
  double v39; // d7
  double v40; // r0
  json_t *v41; // r0
  json_t *v42; // r0
  _BYTE v46[32]; // [sp+24h] [bp-1160h] BYREF
  char v47[24]; // [sp+1024h] [bp-160h] BYREF
  char v48[12]; // [sp+103Ch] [bp-148h] BYREF
  char v49[128]; // [sp+1048h] [bp-13Ch] BYREF
  char s[128]; // [sp+10C8h] [bp-BCh] BYREF
  double v51; // [sp+1148h] [bp-3Ch]
  int v52; // [sp+1150h] [bp-34h]
  int v53; // [sp+1154h] [bp-30h]
  __int64 v54; // [sp+1158h] [bp-2Ch]
  double v55; // [sp+1160h] [bp-24h]
  unsigned int v56; // [sp+116Ch] [bp-18h]
  json_t *v57; // [sp+1170h] [bp-14h]
  json_t *v58; // [sp+1174h] [bp-10h]
  int v59; // [sp+1178h] [bp-Ch]
  int i; // [sp+117Ch] [bp-8h]

  v59 = 0;
  v58 = 0;
  v57 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  memset(v49, 0, sizeof(v49));
  memset(v48, 0, sizeof(v48));
  memset(v47, 0, sizeof(v47));
  v56 = 0;
  v55 = 0.0;
  v54 = 0;
  v53 = a2;
  if ( a2 && a1 )
  {
    if ( total_pools )
    {
      sub_2DE54(a1, 1, 7, *(const char **)(v53 + 8));
      v58 = (json_t *)json_array();
      for ( i = 0; i < total_pools; ++i )
      {
        v52 = *(_DWORD *)(pools + 4 * i);
        v57 = (json_t *)json_object();
        v3 = (json_t *)json_integer(i, i >> 31);
        json_object_set_new(v57, "POOL", v3);
        memset(s, 0, sizeof(s));
        snprintf(s, 0x80u, "%s", *(const char **)(v52 + 12));
        v4 = (json_t *)json_string(s);
        json_object_set_new(v57, "URL", v4);
        memset(v48, 0, sizeof(v48));
        if ( *(_BYTE *)(v52 + 1904) )
          strcpy(v48, "Deed");
        else
          strcpy(v48, "Alive");
        v5 = (json_t *)json_string(v48);
        json_object_set_new(v57, "Status", v5);
        v6 = (json_t *)json_integer(*(_DWORD *)(v52 + 4), *(int *)(v52 + 4) >> 31);
        json_object_set_new(v57, "Priority", v6);
        v7 = (json_t *)json_integer(*(_DWORD *)(v52 + 1636), *(int *)(v52 + 1636) >> 31);
        json_object_set_new(v57, "Quota", v7);
        v8 = (json_t *)json_string("N");
        json_object_set_new(v57, "Long Poll", v8);
        v9 = (json_t *)json_integer(*(_DWORD *)(v52 + 1632), 0);
        json_object_set_new(v57, "Getworks", v9);
        v10 = (json_t *)json_integer(*(_DWORD *)(v52 + 1928), *(_DWORD *)(v52 + 1932));
        json_object_set_new(v57, "Accepted", v10);
        v11 = (json_t *)json_integer(*(_DWORD *)(v52 + 1936), *(_DWORD *)(v52 + 1940));
        json_object_set_new(v57, "Rejected", v11);
        v12 = (json_t *)json_integer(*(_DWORD *)(v52 + 1944), 0);
        json_object_set_new(v57, "Discarded", v12);
        v13 = (json_t *)json_integer(*(_DWORD *)(v52 + 1640), 0);
        json_object_set_new(v57, "Stale", v13);
        v14 = (json_t *)json_integer(*(_DWORD *)(v52 + 1948), 0);
        json_object_set_new(v57, "Get Failures", v14);
        v15 = (json_t *)json_integer(*(_DWORD *)(v52 + 1952), 0);
        json_object_set_new(v57, "Remote Failures", v15);
        memset(v49, 0, sizeof(v49));
        snprintf(v49, 0x80u, "%s", *(const char **)(v52 + 16));
        v16 = (json_t *)json_string(v49);
        json_object_set_new(v57, "User", v16);
        memset(v47, 0, sizeof(v47));
        if ( *(int *)(v52 + 1616) > 0 )
        {
          v56 = time(0) - *(_DWORD *)(v52 + 1616);
          snprintf(v47, 0x18u, "%d:%d:%d", v56 / 0xE10, v56 % 0xE10 / 0x3C, v56 % 0xE10 % 0x3C);
        }
        else
        {
          strcpy(v47, "0");
        }
        v17 = (json_t *)json_string(v47);
        json_object_set_new(v57, "Last Share Time", v17);
        sprintf((char *)(v52 + 1976), "%8.4f", *(double *)(v52 + 1808));
        v18 = (json_t *)json_string((const char *)(v52 + 1976));
        json_object_set_new(v57, "Diff", v18);
        v19 = (json_t *)json_integer(*(_DWORD *)(v52 + 1992), *(_DWORD *)(v52 + 1996));
        json_object_set_new(v57, "Diff1 Shares", v19);
        v20 = (json_t *)json_string(byte_345E10);
        json_object_set_new(v57, "Proxy Type", v20);
        v21 = (json_t *)json_string(byte_345E10);
        json_object_set_new(v57, "Proxy", v21);
        LODWORD(v22) = sub_345484((__int64)(*(double *)(v52 + 1960) * 100.0));
        v23 = json_real(v22);
        json_object_set_new(v57, "Difficulty Accepted", v23);
        LODWORD(v24) = sub_345484((__int64)(*(double *)(v52 + 1968) * 100.0));
        v25 = json_real(v24);
        json_object_set_new(v57, "Difficulty Rejected", v25);
        LODWORD(v26) = sub_345484((__int64)(*(double *)(v52 + 1816) * 100.0));
        v27 = json_real(v26);
        json_object_set_new(v57, "Difficulty Stale", v27);
        LODWORD(v28) = sub_345484((__int64)(*(double *)(v52 + 1624) * 100.0));
        v29 = json_real(v28);
        json_object_set_new(v57, "Last Share Difficulty", v29);
        if ( *(_BYTE *)(v52 + 28) )
          v30 = json_true();
        else
          v30 = (json_t *)json_false();
        json_object_set_new(v57, "Has Stratum", v30);
        v31 = json_true();
        json_object_set_new(v57, "Stratum Active", v31);
        v32 = (json_t *)json_string(byte_345E10);
        json_object_set_new(v57, "Stratum URL", v32);
        v33 = (json_t *)json_false();
        LODWORD(v34) = json_object_set_new(v57, "Has GBT", v33);
        v35 = json_real(v34);
        json_object_set_new(v57, "Best Share", v35);
        if ( *(double *)(v52 + 1960) + *(double *)(v52 + 1968) + *(double *)(v52 + 1816) == 0.0 )
          v36 = 0.0;
        else
          v36 = *(double *)(v52 + 1968) / (*(double *)(v52 + 1960) + *(double *)(v52 + 1968) + *(double *)(v52 + 1816));
        v55 = v36;
        LODWORD(v37) = sub_345484((__int64)(v36 * 100.0));
        v38 = json_real(v37);
        json_object_set_new(v57, "Pool Rejected%", v38);
        if ( *(double *)(v52 + 1960) + *(double *)(v52 + 1968) + *(double *)(v52 + 1816) == 0.0 )
          v39 = 0.0;
        else
          v39 = *(double *)(v52 + 1816) / (*(double *)(v52 + 1960) + *(double *)(v52 + 1968) + *(double *)(v52 + 1816));
        v51 = v39;
        LODWORD(v40) = sub_345484((__int64)(v39 * 100.0));
        v41 = json_real(v40);
        json_object_set_new(v57, "Pool Stale%%", v41);
        json_array_append_new(v58, v57);
      }
      json_object_set_new(a1, "POOLS", v58);
      v42 = (json_t *)json_integer(1, 0);
      json_object_set_new(a1, "id", v42);
    }
    else
    {
      sub_2DE54(a1, 0, 8, "No pools");
    }
    return v59;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, "%s: input bad api param", "get_pools_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools_old",
      13,
      1642,
      100,
      v46);
    return -2147483646;
  }
}
