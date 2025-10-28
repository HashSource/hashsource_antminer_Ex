int __fastcall sub_2DB48(json_t *a1, const char **a2)
{
  _BYTE v6[48]; // [sp+1Ch] [bp-1030h] BYREF
  _DWORD v7[3]; // [sp+101Ch] [bp-30h] BYREF
  json_t *v8; // [sp+1028h] [bp-24h]
  const char **v9; // [sp+102Ch] [bp-20h]
  int v10; // [sp+1030h] [bp-1Ch]
  int v11; // [sp+1034h] [bp-18h]
  void *all_created_runtime; // [sp+1038h] [bp-14h]
  int v13; // [sp+103Ch] [bp-10h]
  int v14; // [sp+1040h] [bp-Ch]
  int v15; // [sp+1044h] [bp-8h]

  v14 = 0;
  v15 = 0;
  memset(v7, 0, sizeof(v7));
  v13 = frontend_runtime_instance();
  all_created_runtime = get_all_created_runtime(v7);
  v11 = 0;
  v10 = 0;
  v9 = a2;
  if ( a2 )
  {
    sub_2A2F8(a1, v9);
    sub_2A45C(a1);
    v8 = 0;
    v8 = (json_t *)json_array();
    sweep_get_error_code(v8);
    json_object_set_new(a1, "WARNING", v8);
    return v14;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%s: input bad api param", "get_warnings");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_warnings",
      12,
      1430,
      100,
      v6);
    return -2147483646;
  }
}
