int __fastcall godminer_heartbeat_monitor(int a1)
{
  int result; // r0
  int v2; // r7
  int v3; // r0
  _BYTE v4[32]; // [sp+48h] [bp-1040h] BYREF
  _BYTE v5[32]; // [sp+68h] [bp-1020h] BYREF
  _BYTE v6[4096]; // [sp+88h] [bp-1000h] BYREF

  ++dword_165000[*(_DWORD *)(a1 + 136) + 10];
  result = get_flag_from_monitor();
  if ( (*(_DWORD *)(result + 64) & 1) != 0 )
  {
    v2 = result;
    V_LOCK(result);
    V_INT((int)v4, "chain");
    V_STR((int)v5, "error");
    v3 = logfmt_raw((int)v6, 0x1000u);
    V_UNLOCK(v3);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_heartbeat_monitor",
               26,
               810,
               100,
               v6);
    *(_DWORD *)(v2 + 72) |= 1u;
  }
  return result;
}
