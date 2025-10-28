void __fastcall __noreturn heartbeat_on_device(int a1)
{
  int v1; // r0
  unsigned int all_created_runtime; // r0
  unsigned int v3; // r5
  int i; // r4
  int v5; // r0
  int v6; // t1
  int v7; // r0
  int v8; // [sp+34h] [bp-1028h] BYREF
  int v9; // [sp+38h] [bp-1024h] BYREF
  _BYTE v10[4100]; // [sp+58h] [bp-1004h] BYREF

  v8 = 0;
  V_LOCK(a1);
  v1 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/check_heartbeat.c",
    155,
    "heartbeat_on_device",
    19,
    54,
    60,
    v10);
  while ( 1 )
  {
    do
      all_created_runtime = get_all_created_runtime(&v8);
    while ( v8 <= 0 );
    v3 = all_created_runtime - 4;
    for ( i = 0; i < v8; ++i )
    {
      v5 = dev_ctrl(all_created_runtime);
      v6 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      if ( !(*(int (__fastcall **)(_DWORD))(v5 + 80))(*(_DWORD *)(v6 + 208)) )
      {
        V_LOCK(0);
        V_STR((int)&v9, "error");
        v7 = logfmt_raw((int)v10, 0x1000u);
        V_UNLOCK(v7);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/check_heartbeat.c",
          155,
          "heartbeat_on_device",
          19,
          62,
          100,
          v10);
      }
      all_created_runtime = sleep(5u);
    }
  }
}
