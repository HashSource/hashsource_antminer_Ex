int __fastcall godminer_fan_monitor(int a1)
{
  int result; // r0
  int v2; // r1
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE v8[32]; // [sp+28h] [bp-1040h] BYREF
  int v9; // [sp+48h] [bp-1020h] BYREF
  _BYTE v10[4096]; // [sp+68h] [bp-1000h] BYREF

  ++*((_DWORD *)&max_timeout_value[10] + *(_DWORD *)(a1 + 220));
  result = get_flag_from_monitor();
  v2 = *(_DWORD *)(result + 32);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK(result);
    V_STR((int)v8, "error");
    v5 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v5);
    v6 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/god-miner.c",
           142,
           "godminer_fan_monitor",
           20,
           747,
           20,
           v10);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v7);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/god-miner.c",
               142,
               "godminer_fan_monitor",
               20,
               748,
               100,
               v10);
    v2 = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v3 + 40) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK(result);
    V_STR((int)&v9, "error");
    v4 = logfmt_raw((int)v10, 0x1000u);
    V_UNLOCK(v4);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/god"
               "miner-origin_godminer-new/god-miner.c",
               142,
               "godminer_fan_monitor",
               20,
               756,
               20,
               v10);
    *(_DWORD *)(v3 + 40) |= 1u;
  }
  return result;
}
