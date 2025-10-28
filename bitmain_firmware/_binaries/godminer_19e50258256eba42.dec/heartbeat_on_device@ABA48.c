void __noreturn heartbeat_on_device()
{
  int (**v0)(); // r0
  _BYTE v1[56]; // [sp+2Ch] [bp-1038h] BYREF
  int v2; // [sp+102Ch] [bp-38h] BYREF
  const char *v3[7]; // [sp+1030h] [bp-34h] BYREF
  int v4; // [sp+104Ch] [bp-18h]
  _DWORD *all_created_runtime; // [sp+1050h] [bp-14h]
  int i; // [sp+1054h] [bp-10h]

  v2 = 0;
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "heartbeat_on_device");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_heartbeat.c",
    156,
    "heartbeat_on_device",
    19,
    54,
    60,
    v1);
  while ( 1 )
  {
    all_created_runtime = get_all_created_runtime(&v2);
    for ( i = 0; i < v2; ++i )
    {
      v0 = dev_ctrl();
      if ( !((int (__fastcall *)(_DWORD))v0[25])(*(_DWORD *)(all_created_runtime[i] + 264)) )
      {
        V_LOCK();
        sub_AB678(v3, "pic lost");
        logfmt_raw(v1, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "heartbeat failed!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner_util/check_heartbeat.c",
          156,
          "heartbeat_on_device",
          19,
          62,
          100,
          v1);
      }
      sleep(5u);
    }
  }
}
