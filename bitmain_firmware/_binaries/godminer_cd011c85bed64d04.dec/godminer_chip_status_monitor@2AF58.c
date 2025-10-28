int __fastcall godminer_chip_status_monitor(int a1)
{
  int flag_from_monitor; // r0
  int v2; // r3
  int v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE v8[32]; // [sp+28h] [bp-1064h] BYREF
  _BYTE v9[32]; // [sp+48h] [bp-1044h] BYREF
  _BYTE v10[32]; // [sp+68h] [bp-1024h] BYREF
  _BYTE v11[4100]; // [sp+88h] [bp-1004h] BYREF

  ++dword_166010[*(_DWORD *)(a1 + 144)];
  flag_from_monitor = get_flag_from_monitor();
  v2 = *(_DWORD *)(flag_from_monitor + 48);
  v3 = flag_from_monitor;
  if ( (v2 & 1) != 0 )
  {
    V_LOCK(*(_DWORD *)(flag_from_monitor + 48) & 1);
    V_INT((int)v8, "chain");
    v7 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "godminer_chip_status_monitor",
      28,
      796,
      20,
      v11);
    v2 = *(_DWORD *)(v3 + 48);
    *(_DWORD *)(v3 + 56) |= 1u;
  }
  if ( (v2 & 2) != 0 )
  {
    V_LOCK(v2 & 2);
    V_INT((int)v9, "chain");
    v6 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/god-miner.c",
      132,
      "godminer_chip_status_monitor",
      28,
      801,
      20,
      v11);
    v2 = *(_DWORD *)(v3 + 48);
    *(_DWORD *)(v3 + 56) |= 2u;
  }
  result = v2 & 4;
  if ( (v2 & 4) != 0 )
  {
    V_LOCK(result);
    V_INT((int)v10, "chain");
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/god-miner.c",
               132,
               "godminer_chip_status_monitor",
               28,
               806,
               20,
               v11);
    *(_DWORD *)(v3 + 56) |= 4u;
  }
  return result;
}
