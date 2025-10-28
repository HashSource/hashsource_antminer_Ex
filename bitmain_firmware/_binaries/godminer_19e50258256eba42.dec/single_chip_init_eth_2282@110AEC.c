int __fastcall single_chip_init_eth_2282(int a1, int a2)
{
  _BYTE v5[44]; // [sp+38h] [bp-102Ch] BYREF
  _DWORD v6[7]; // [sp+1038h] [bp-2Ch] BYREF
  int v7; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v6, *(int *)(a1 + 272));
  logfmt_raw(
    v5,
    0x1000u,
    0,
    v7,
    v6[0],
    v6[1],
    v6[2],
    v6[3],
    v6[4],
    v6[5],
    v6[6],
    v7,
    "chip-%d %s...",
    a2,
    "single_chip_init_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "single_chip_init_eth_2282",
    25,
    1790,
    60,
    v5);
  sub_106C24(a1, a2, 68, 30);
  sleep(1u);
  sub_106C24(a1, a2, 68, 29);
  sleep(1u);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 284))(a1, *(_DWORD *)(a1 + 528), a2);
  sub_106C24(a1, a2, 28, 202383104);
  set_single_chip_frequency_eth_2282(a1, 1, a2);
  usleep(0x64u);
  set_single_chip_frequency_eth_2282(a1, 0, a2);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  set_single_chip_reset_eth_2282(a1, a2, 2, 254);
  usleep(0x64u);
  set_single_chip_reset_eth_2282(a1, a2, 2, 255);
  usleep(0x64u);
  sub_106F8C(a1, a2, 15, 3);
  sub_106F8C(a1, a2, 2, 0);
  usleep(0x12Cu);
  sub_106F8C(a1, a2, 2, 255);
  usleep(0x12Cu);
  sub_106F8C(a1, a2, 15, 3);
  usleep(0x12Cu);
  sub_106F8C(a1, a2, 26, 28);
  usleep(0x12Cu);
  sub_106C24(a1, a2, 64, 6);
  return 0;
}
