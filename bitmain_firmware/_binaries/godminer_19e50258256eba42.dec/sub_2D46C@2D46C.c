int __fastcall sub_2D46C(json_t *a1, const char **a2)
{
  char *v3; // r4
  unsigned __int64 v4; // r2
  double v5; // d0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  json_t *v9; // r0
  _BYTE v11[216]; // [sp+10h] [bp-115Ch] BYREF
  const char **v12; // [sp+E8h] [bp-1084h]
  json_t *v13; // [sp+ECh] [bp-1080h]
  _BYTE v14[56]; // [sp+F4h] [bp-1078h] BYREF
  int v15; // [sp+10F4h] [bp-78h] BYREF
  double v16; // [sp+10F8h] [bp-74h] BYREF
  _DWORD v17[2]; // [sp+1100h] [bp-6Ch] BYREF
  _DWORD s[2]; // [sp+1108h] [bp-64h] BYREF
  json_t *v19; // [sp+1110h] [bp-5Ch]
  json_t *v20; // [sp+1114h] [bp-58h]
  json_t *v21; // [sp+1118h] [bp-54h]
  json_t *v22; // [sp+111Ch] [bp-50h]
  json_t *v23; // [sp+1120h] [bp-4Ch]
  int v24; // [sp+1124h] [bp-48h]
  _DWORD *all_created_runtime; // [sp+1128h] [bp-44h]
  const char **v26; // [sp+112Ch] [bp-40h]
  int v27; // [sp+1130h] [bp-3Ch]
  int v28; // [sp+1134h] [bp-38h]
  int v29; // [sp+1138h] [bp-34h]
  int v30; // [sp+113Ch] [bp-30h]
  void *ptr; // [sp+1140h] [bp-2Ch]
  void *v32; // [sp+1144h] [bp-28h]
  double v33; // [sp+1148h] [bp-24h]
  int i; // [sp+1154h] [bp-18h]
  int j; // [sp+1158h] [bp-14h]
  int v36; // [sp+115Ch] [bp-10h]

  v13 = a1;
  v12 = a2;
  v30 = 0;
  i = 0;
  j = 0;
  v36 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  s[0] = 0;
  s[1] = 0;
  v17[0] = 0;
  v17[1] = 0;
  v33 = 1.0;
  v26 = a2;
  v15 = 0;
  v32 = 0;
  ptr = 0;
  all_created_runtime = get_all_created_runtime(&v15);
  v24 = frontend_runtime_instance();
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  if ( v12 && v26 )
  {
    sub_2A2F8(v13, v26);
    sub_2A45C(v13);
    if ( v15 > 0 )
    {
      v32 = malloc(216 * v15);
      ptr = malloc(4 * v15);
      for ( i = 0; i < v15; ++i )
      {
        v3 = (char *)v32 + 216 * i;
        read_status_from_monitor(v11, all_created_runtime[i]);
        memcpy(v3, v11, 0xD8u);
        *((_DWORD *)ptr + i) = *(_DWORD *)(all_created_runtime[i] + 272);
      }
      v4 = *((_QWORD *)v32 + 26);
      if ( v4 > 0x18 )
        LODWORD(v4) = 24;
      v36 = v4;
      v29 = *((_DWORD *)v32 + 50);
      v5 = *((double *)v32 + 6);
      format_hashrate_double(*(const char **)(*(_DWORD *)(v24 + 72) + 16), &v16, (char *)v17);
      v33 = v5;
    }
    v23 = (json_t *)json_array();
    v20 = (json_t *)json_object();
    if ( !v15 )
    {
      format_hashrate_double(*(const char **)(*(_DWORD *)(v24 + 72) + 16), &v16, (char *)v17);
      v33 = 1.0;
    }
    v6 = (json_t *)json_string((const char *)v17);
    json_object_set_new(v20, "unit", v6);
    v22 = (json_t *)json_array();
    for ( i = 0; i < v36; ++i )
    {
      memset(s, 0, sizeof(s));
      snprintf((char *)s, 8u, "%dmin", 15 * (i + 1));
      v7 = (json_t *)json_string((const char *)s);
      json_array_append_new(v22, v7);
    }
    json_object_set_new(v20, "xAxis", v22);
    v22 = (json_t *)json_array();
    for ( i = 0; i < v15; ++i )
    {
      v21 = (json_t *)json_object();
      memset(s, 0, sizeof(s));
      snprintf((char *)s, 8u, "chain%d", *((_DWORD *)ptr + i));
      v8 = (json_t *)json_string((const char *)s);
      json_object_set_new(v21, "name", v8);
      v19 = (json_t *)json_array();
      for ( j = 0; j < v36; ++j )
      {
        v16 = *((float *)v32 + 54 * i + j + 26) * v33;
        v9 = (json_t *)json_integer((__int64)v16, (unsigned __int64)(__int64)v16 >> 32);
        json_array_append_new(v19, v9);
      }
      json_object_set_new(v21, "data", v19);
      json_array_append_new(v22, v21);
    }
    json_object_set_new(v20, "series", v22);
    json_array_append_new(v23, v20);
    json_object_set_new(v13, "RATE", v23);
    if ( v15 > 0 )
    {
      free(ptr);
      free(v32);
    }
    return v30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "%s: input bad api param", "get_rate");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_rate",
      8,
      1325,
      100,
      v14);
    return -2147483646;
  }
}
