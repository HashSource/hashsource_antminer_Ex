int __fastcall sub_22FE4(int a1, int a2)
{
  _BOOL4 v2; // r4
  void *v4; // r0
  __int64 v5; // r0
  int v6; // r7
  int v7; // r2
  int v8; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v17; // r0
  _BYTE v18[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a2 )
    v2 = a1 == 0;
  else
    v2 = 1;
  if ( v2 )
  {
    V_LOCK(a1);
    v17 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/api_new.c",
      136,
      "get_version_old",
      15,
      1641,
      100,
      v18);
    return -2147483646;
  }
  else
  {
    v4 = sub_22E5C(a1, 1, 22, *(const char **)(a2 + 8));
    v5 = json_array(v4);
    v6 = v5;
    v9 = json_object(v5, HIDWORD(v5), v7, v8);
    v10 = json_string("2.12");
    json_object_set_new(v9, "BMMiner", v10);
    v11 = json_string("3.1");
    json_object_set_new(v9, "API", v11);
    v12 = json_string(g_miner_version);
    json_object_set_new(v9, "Miner", v12);
    v13 = json_string(g_miner_compiletime);
    json_object_set_new(v9, "CompileTime", v13);
    v14 = json_string(g_miner_type);
    json_object_set_new(v9, "Type", v14);
    json_array_append_new(v6, v9);
    json_object_set_new(a1, "VERSION", v6);
    v15 = json_integer(1, 0);
    json_object_set_new(a1, "id", v15);
    return 0;
  }
}
