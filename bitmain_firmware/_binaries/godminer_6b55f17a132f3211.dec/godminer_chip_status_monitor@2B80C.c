int godminer_chip_status_monitor()
{
  int result; // r0
  int v1; // r1
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _BYTE v9[32]; // [sp+28h] [bp-1044h] BYREF
  _BYTE v10[32]; // [sp+48h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+68h] [bp-1004h] BYREF

  result = get_flag_from_monitor();
  v1 = *(_DWORD *)(result + 48);
  if ( (v1 & 2) != 0 )
  {
    v5 = result;
    V_LOCK(result);
    V_INT((int)v9, "chain");
    v6 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v6);
    v7 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/god-miner.c",
           138,
           "godminer_chip_status_monitor",
           28,
           702,
           20,
           v11);
    V_LOCK(v7);
    v8 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v8);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmine"
               "r-origin_godminer-new/god-miner.c",
               138,
               "godminer_chip_status_monitor",
               28,
               703,
               100,
               v11);
    v1 = *(_DWORD *)(v5 + 48);
  }
  if ( (v1 & 4) != 0 )
  {
    V_LOCK(result);
    V_INT((int)v10, "chain");
    v2 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v2);
    v3 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-or"
           "igin_godminer-new/god-miner.c",
           138,
           "godminer_chip_status_monitor",
           28,
           710,
           20,
           v11);
    V_LOCK(v3);
    v4 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v4);
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-"
             "origin_godminer-new/god-miner.c",
             138,
             "godminer_chip_status_monitor",
             28,
             711,
             100,
             v11);
  }
  return result;
}
