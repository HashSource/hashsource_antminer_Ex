int __fastcall sub_31518(json_t *a1, int a2)
{
  json_t *v3; // r0
  json_t *v4; // r0
  json_t *v5; // r0
  json_t *v6; // r0
  json_t *v7; // r0
  json_t *v8; // r0
  _BYTE v11[20]; // [sp+20h] [bp-1014h] BYREF
  int v12; // [sp+1020h] [bp-14h]
  int v13; // [sp+1024h] [bp-10h]
  json_t *v14; // [sp+1028h] [bp-Ch]
  json_t *v15; // [sp+102Ch] [bp-8h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v12 = a2;
  if ( a2 && a1 )
  {
    sub_2DE54(a1, 1, 22, *(const char **)(v12 + 8));
    v14 = (json_t *)json_array();
    v15 = (json_t *)json_object();
    v3 = (json_t *)json_string("2.12");
    json_object_set_new(v15, "BMMiner", v3);
    v4 = (json_t *)json_string("3.1");
    json_object_set_new(v15, "API", v4);
    v5 = (json_t *)json_string(g_miner_version);
    json_object_set_new(v15, "Miner", v5);
    v6 = (json_t *)json_string(g_miner_compiletime);
    json_object_set_new(v15, "CompileTime", v6);
    v7 = (json_t *)json_string(g_miner_type);
    json_object_set_new(v15, "Type", v7);
    json_array_append_new(v14, v15);
    json_object_set_new(a1, "VERSION", v14);
    v8 = (json_t *)json_integer(1, 0);
    json_object_set_new(a1, "id", v8);
    return v13;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, "%s: input bad api param", "get_version_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_version_old",
      15,
      2071,
      100,
      v11);
    return -2147483646;
  }
}
