int __fastcall heartbeat_on_device(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _BYTE v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v5 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v5);
  v6 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
         "in_master/miner_util/miner_monitor/update_miner_status/heartbeat_on_device.c",
         187,
         "heartbeat_on_device",
         19,
         55,
         20,
         v10);
  v7 = dev_ctrl(v6);
  if ( !(*(int (__fastcall **)(_DWORD))(v7 + 72))(*(_DWORD *)(a1 + 144)) )
  {
    v8 = dev_ctrl(0);
    if ( !(*(int (__fastcall **)(_DWORD))(v8 + 72))(*(_DWORD *)(a1 + 144)) )
      *(_DWORD *)(a3 + 64) |= 1u;
  }
  update_recorded_heartbeat_interval(*(_DWORD *)(a1 + 144));
  return a3 + 64;
}
