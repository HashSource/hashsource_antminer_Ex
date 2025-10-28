int __fastcall godminer_chip_status_monitor(int a1)
{
  int flag_from_monitor; // r4
  int result; // r0
  int v4; // r1
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _BYTE v12[32]; // [sp+28h] [bp-1040h] BYREF
  _BYTE v13[32]; // [sp+48h] [bp-1020h] BYREF
  _BYTE v14[4096]; // [sp+68h] [bp-1000h] BYREF

  flag_from_monitor = get_flag_from_monitor();
  result = get_current_pool(flag_from_monitor);
  v4 = *(_DWORD *)(flag_from_monitor + 48);
  v5 = result;
  if ( (v4 & 2) != 0 )
  {
    result = pool_tget(result, result + 1904);
    if ( !result )
    {
      V_LOCK(0);
      V_INT((int)v12, "chain");
      v9 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v9);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/god-miner.c",
        142,
        "godminer_chip_status_monitor",
        28,
        707,
        20,
        v14);
      v10 = set_miner_6060info_some_chip_not_working_err(*(_DWORD *)(a1 + 224), 1);
      V_LOCK(v10);
      v11 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v11);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/god-miner.c",
                 142,
                 "godminer_chip_status_monitor",
                 28,
                 709,
                 100,
                 v14);
    }
    v4 = *(_DWORD *)(flag_from_monitor + 48);
    *(_DWORD *)(flag_from_monitor + 56) |= 2u;
  }
  if ( (v4 & 4) != 0 )
  {
    result = pool_tget(v5, v5 + 1904);
    if ( !result )
    {
      V_LOCK(0);
      V_INT((int)v13, "chain");
      v6 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v6);
      v7 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/god-miner.c",
             142,
             "godminer_chip_status_monitor",
             28,
             723,
             20,
             v14);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v14, 0x1000u);
      V_UNLOCK(v8);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/g"
                 "odminer-origin_godminer-new/god-miner.c",
                 142,
                 "godminer_chip_status_monitor",
                 28,
                 724,
                 100,
                 v14);
    }
    *(_DWORD *)(flag_from_monitor + 56) |= 4u;
  }
  return result;
}
