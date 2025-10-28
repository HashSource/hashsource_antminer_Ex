int __fastcall sub_23A28(int a1, int a2)
{
  _BOOL4 v2; // r4
  void *v4; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v14; // r0
  _BYTE v15[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a2 )
    v2 = a1 == 0;
  else
    v2 = 1;
  if ( v2 )
  {
    V_LOCK(a1);
    v14 = logfmt_raw((int)v15, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/api_new.c",
      130,
      "get_version_old",
      15,
      1433,
      100,
      v15);
    return -2147483646;
  }
  else
  {
    v4 = sub_238A0(a1, 1, 22, *(const char **)(a2 + 8));
    v5 = json_array(v4);
    v6 = json_object(v5);
    v7 = json_string("2.12");
    json_object_set_new(v6, "BMMiner", v7);
    v8 = json_string("3.1");
    json_object_set_new(v6, "API", v8);
    v9 = json_string(g_miner_version);
    json_object_set_new(v6, "Miner", v9);
    v10 = json_string(g_miner_compiletime);
    json_object_set_new(v6, "CompileTime", v10);
    v11 = json_string(g_miner_type);
    json_object_set_new(v6, "Type", v11);
    json_array_append_new(v5, v6);
    json_object_set_new(a1, "VERSION", v5);
    v12 = json_integer(1, 0);
    json_object_set_new(a1, "id", v12);
    return 0;
  }
}
