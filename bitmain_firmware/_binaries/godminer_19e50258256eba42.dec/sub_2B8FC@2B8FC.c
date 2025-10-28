int __fastcall sub_2B8FC(json_t *a1, const char **a2)
{
  float v2; // s0
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
  double v16; // r0
  json_t *v17; // r0
  int v18; // r3
  json_t *v19; // r0
  json_t *v20; // r0
  json_t *v21; // r0
  json_t *v22; // r0
  json_t *v23; // r0
  _BYTE v26[32]; // [sp+1Ch] [bp-1160h] BYREF
  char v27[24]; // [sp+101Ch] [bp-160h] BYREF
  char v28[16]; // [sp+1034h] [bp-148h] BYREF
  char v29[12]; // [sp+1044h] [bp-138h] BYREF
  char v30[128]; // [sp+1050h] [bp-12Ch] BYREF
  char s[128]; // [sp+10D0h] [bp-ACh] BYREF
  int v32; // [sp+1150h] [bp-2Ch]
  int v33; // [sp+1154h] [bp-28h]
  int v34; // [sp+1158h] [bp-24h]
  float v35; // [sp+115Ch] [bp-20h]
  unsigned int v36; // [sp+1160h] [bp-1Ch]
  json_t *v37; // [sp+1164h] [bp-18h]
  json_t *v38; // [sp+1168h] [bp-14h]
  const char **v39; // [sp+116Ch] [bp-10h]
  int v40; // [sp+1170h] [bp-Ch]
  int i; // [sp+1174h] [bp-8h]

  v40 = 0;
  v39 = a2;
  v38 = 0;
  v37 = 0;
  i = 0;
  memset(s, 0, sizeof(s));
  memset(v30, 0, sizeof(v30));
  memset(v29, 0, sizeof(v29));
  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  v36 = 0;
  if ( v39 && a1 )
  {
    sub_2A2F8(a1, v39);
    sub_2A45C(a1);
    v38 = (json_t *)json_array();
    get_total_nonce_rate();
    v35 = v2;
    for ( i = 0; i < total_pools; ++i )
    {
      v34 = *(_DWORD *)(pools + 4 * i);
      if ( v34 )
      {
        v37 = (json_t *)json_object();
        v4 = (json_t *)json_integer(i, i >> 31);
        json_object_set_new(v37, "index", v4);
        memset(s, 0, sizeof(s));
        snprintf(s, 0x80u, "%s", *(const char **)(v34 + 12));
        v5 = (json_t *)json_string(s);
        json_object_set_new(v37, "url", v5);
        memset(v30, 0, sizeof(v30));
        snprintf(v30, 0x80u, "%s", *(const char **)(v34 + 16));
        v6 = (json_t *)json_string(v30);
        json_object_set_new(v37, "user", v6);
        memset(v29, 0, sizeof(v29));
        if ( *(_BYTE *)(v34 + 1904) )
          strcpy(v29, "Dead");
        else
          strcpy(v29, "Alive");
        v7 = (json_t *)json_string(v29);
        json_object_set_new(v37, "status", v7);
        v8 = (json_t *)json_integer(*(_DWORD *)(v34 + 4), *(int *)(v34 + 4) >> 31);
        json_object_set_new(v37, "priority", v8);
        v9 = (json_t *)json_integer(*(_DWORD *)(v34 + 1632), 0);
        json_object_set_new(v37, "getworks", v9);
        v10 = (json_t *)json_integer(*(_DWORD *)(v34 + 1928), *(_DWORD *)(v34 + 1932));
        json_object_set_new(v37, "accepted", v10);
        v11 = (json_t *)json_integer(*(_DWORD *)(v34 + 1936), *(_DWORD *)(v34 + 1940));
        json_object_set_new(v37, "rejected", v11);
        v12 = (json_t *)json_integer(*(_DWORD *)(v34 + 1944), 0);
        json_object_set_new(v37, "discarded", v12);
        v13 = (json_t *)json_integer(*(_DWORD *)(v34 + 1640), 0);
        json_object_set_new(v37, "stale", v13);
        memset(v28, 0, sizeof(v28));
        snprintf(v28, 0x10u, "%s", (const char *)(v34 + 1976));
        v14 = (json_t *)json_string(v28);
        json_object_set_new(v37, "diff", v14);
        v15 = (json_t *)json_integer(*(_DWORD *)(v34 + 1992), *(_DWORD *)(v34 + 1996));
        LODWORD(v16) = json_object_set_new(v37, "diff1", v15);
        v17 = json_real(v16);
        json_object_set_new(v37, "diffa", v17);
        if ( opt_algo == 6 )
        {
          v33 = (int)((*(double *)(v34 + 1960) + *(double *)(v34 + 1968)) * (float)(1.0 - v35));
          if ( *(double *)(v34 + 1968) <= (double)v33 )
            v18 = 0;
          else
            v18 = (int)(*(double *)(v34 + 1968) - (double)v33);
          v32 = v18;
          v19 = (json_t *)json_integer(v18, v18 >> 31);
          json_object_set_new(v37, "diffr", v19);
        }
        else
        {
          v20 = (json_t *)json_integer(
                            (__int64)*(double *)(v34 + 1968),
                            (unsigned __int64)(__int64)*(double *)(v34 + 1968) >> 32);
          json_object_set_new(v37, "diffr", v20);
        }
        v21 = (json_t *)json_integer(
                          (__int64)*(double *)(v34 + 1816),
                          (unsigned __int64)(__int64)*(double *)(v34 + 1816) >> 32);
        json_object_set_new(v37, "diffs", v21);
        v22 = (json_t *)json_integer(
                          (__int64)*(double *)(v34 + 1624),
                          (unsigned __int64)(__int64)*(double *)(v34 + 1624) >> 32);
        json_object_set_new(v37, "lsdiff", v22);
        memset(v27, 0, sizeof(v27));
        if ( *(int *)(v34 + 1616) > 0 )
        {
          v36 = time(0) - *(_DWORD *)(v34 + 1616);
          snprintf(v27, 0x18u, "%d:%d:%d", v36 / 0xE10, v36 % 0xE10 / 0x3C, v36 % 0xE10 % 0x3C);
        }
        else
        {
          strcpy(v27, "0");
        }
        v23 = (json_t *)json_string(v27);
        json_object_set_new(v37, "lstime", v23);
        json_array_append_new(v38, v37);
      }
    }
    json_object_set_new(a1, "POOLS", v38);
    return v40;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v26, 0x1000u, 0, "%s: input bad api param", "get_pools");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_pools",
      9,
      947,
      100,
      v26);
    return -2147483646;
  }
}
