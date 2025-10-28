int __fastcall sub_319D0(json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  _BYTE v7[56]; // [sp+24h] [bp-1038h] BYREF
  char dest[32]; // [sp+1024h] [bp-38h] BYREF
  int v9; // [sp+1044h] [bp-18h]
  json_t *v10; // [sp+1048h] [bp-14h]
  json_t *v11; // [sp+104Ch] [bp-10h]
  int i; // [sp+1050h] [bp-Ch]
  int v13; // [sp+1054h] [bp-8h]

  v13 = 0;
  v11 = 0;
  v10 = 0;
  v9 = a2;
  if ( a2 && a1 )
  {
    sub_2DE54(a1, 1, 72, *(const char **)(v9 + 8));
    v11 = (json_t *)json_array();
    v10 = (json_t *)json_object();
    memcpy(dest, "timeout", 7u);
    dest[8] = 0;
    for ( i = 0; i <= 9; ++i )
    {
      dest[7] = i + 48;
      v3 = (json_t *)json_integer(max_timeout_value[i], HIDWORD(max_timeout_value[i]));
      json_object_set_new(v10, dest, v3);
    }
    json_array_append_new(v11, v10);
    json_object_set_new(a1, "TIMEOUT_REASON", v11);
    v4 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v4);
    return v13;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "%s: input bad api param", "get_timeout_summary_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_timeout_summary_old",
      23,
      2132,
      100,
      v7);
    return -2147483646;
  }
}
