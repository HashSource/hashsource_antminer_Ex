int __fastcall godminer_fan_monitor(int a1)
{
  int result; // r0
  int v2; // r1
  int v3; // r5
  int v4; // r0
  int v5; // r0
  _BYTE v6[32]; // [sp+28h] [bp-1044h] BYREF
  int v7; // [sp+48h] [bp-1024h] BYREF
  _BYTE v8[4100]; // [sp+68h] [bp-1004h] BYREF

  ++dword_165000[*(_DWORD *)(a1 + 136) + 20];
  result = get_flag_from_monitor();
  v2 = *(_DWORD *)(result + 32);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK(result);
    V_STR((int)v6, "error");
    v5 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v5);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_fan_monitor",
               20,
               822,
               20,
               v8);
    v2 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 40) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK(result);
    V_STR((int)&v7, "error");
    v4 = logfmt_raw((int)v8, 0x1000u);
    V_UNLOCK(v4);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_fan_monitor",
               20,
               827,
               20,
               v8);
    *(_DWORD *)(v3 + 40) |= 1u;
  }
  return result;
}
