int auto_set_host_side_baud()
{
  _BYTE *v0; // r4
  int all_created_runtime; // r0
  _DWORD *v2; // r7
  int v3; // r0
  int v4; // t1
  int v5; // r0
  int v7; // r0
  int v8; // [sp+14h] [bp-101Ch] BYREF
  _DWORD v9[6]; // [sp+18h] [bp-1018h] BYREF
  _BYTE v10[4096]; // [sp+30h] [bp-1000h] BYREF

  v8 = 0;
  v0 = v9;
  v9[0] = "able_bypass_mode";
  v9[1] = 460800;
  v9[2] = 1562500;
  v9[3] = 3125000;
  v9[4] = 6250000;
  v9[5] = 12500000;
  all_created_runtime = get_all_created_runtime(&v8);
  v2 = (_DWORD *)all_created_runtime;
  while ( 1 )
  {
    v3 = dev_ctrl(all_created_runtime);
    v4 = *(_DWORD *)v0;
    v0 += 4;
    (*(void (__fastcall **)(int))(v3 + 16))(v4);
    all_created_runtime = ping_allchip(*v2);
    if ( all_created_runtime )
      break;
    if ( v10 == v0 )
    {
      V_LOCK(0);
      v5 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/set_baud.c",
        142,
        "auto_set_host_side_baud",
        23,
        29,
        100,
        v10);
      return -1;
    }
  }
  V_LOCK(all_created_runtime);
  v7 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/miner_util/set_baud.c",
    142,
    "auto_set_host_side_baud",
    23,
    24,
    40,
    v10);
  return 0;
}
