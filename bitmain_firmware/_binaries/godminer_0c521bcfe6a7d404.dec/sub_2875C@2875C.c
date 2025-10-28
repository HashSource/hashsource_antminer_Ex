int __fastcall sub_2875C(int a1, int a2)
{
  int all_created_runtime; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  void *v8; // r0
  __int64 v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v14; // r0
  _DWORD v15[7]; // [sp+34h] [bp-10C0h] BYREF
  _BYTE v16[32]; // [sp+50h] [bp-10A4h] BYREF
  _BYTE v17[32]; // [sp+70h] [bp-1084h] BYREF
  _BYTE v18[32]; // [sp+90h] [bp-1064h] BYREF
  _BYTE v19[32]; // [sp+B0h] [bp-1044h] BYREF
  _BYTE v20[32]; // [sp+D0h] [bp-1024h] BYREF
  _BYTE v21[12]; // [sp+F0h] [bp-1004h] BYREF

  v15[0] = 0;
  all_created_runtime = get_all_created_runtime(v15);
  v5 = frontend_runtime_instance(all_created_runtime);
  v6 = a1 == 0;
  if ( a1 )
    v6 = a2 == 0;
  if ( v6 )
  {
    V_LOCK(v5);
    v14 = logfmt_raw((int)v21, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/api_new.c",
      140,
      "get_summary_old",
      15,
      1136,
      100,
      v21);
    JUMPOUT(0x28F8C);
  }
  v7 = v5;
  v8 = sub_23EE4(a1, 1, 11, *(const char **)(a2 + 8));
  v9 = json_array(v8);
  json_object(v9, HIDWORD(v9), v10, v11);
  read_system_status_from_monitor(v21);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v16);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v17);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v18);
  format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v19);
  v12 = format_hashrate_string(*(_DWORD *)(*(_DWORD *)(v7 + 72) + 16), v20);
  return sub_28870(v12);
}
