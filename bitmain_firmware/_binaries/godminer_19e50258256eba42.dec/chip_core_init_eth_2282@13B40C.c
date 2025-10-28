int __fastcall chip_core_init_eth_2282(int a1)
{
  _BYTE v4[12]; // [sp+30h] [bp-104Ch] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-4Ch] BYREF
  int v6; // [sp+104Ch] [bp-30h]
  _DWORD v7[7]; // [sp+1050h] [bp-2Ch] BYREF
  int v8; // [sp+106Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(
    v4,
    0x1000u,
    0,
    v6,
    v5[0],
    v5[1],
    v5[2],
    v5[3],
    v5[4],
    v5[5],
    v5[6],
    v6,
    "%s start",
    "chip_core_init_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "chip_core_init_eth_2282",
    23,
    9063,
    60,
    v4);
  sub_106D34(a1, 2, 0);
  usleep(0x12Cu);
  sub_106D34(a1, 2, 255);
  usleep(0x12Cu);
  sub_106D34(a1, 15, 3);
  usleep(0x12Cu);
  if ( !sub_10F334(a1) )
    return 0;
  V_LOCK();
  sub_FBD60((int)v7, *(int *)(a1 + 272));
  logfmt_raw(
    v4,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "check asic num failed after open init",
    "chip_core_init_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "chip_core_init_eth_2282",
    23,
    9075,
    100,
    v4);
  return 12;
}
