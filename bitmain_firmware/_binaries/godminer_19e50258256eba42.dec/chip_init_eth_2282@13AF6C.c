int __fastcall chip_init_eth_2282(int a1)
{
  _BYTE v4[52]; // [sp+30h] [bp-1074h] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-74h] BYREF
  int v6; // [sp+104Ch] [bp-58h]
  _DWORD v7[7]; // [sp+1050h] [bp-54h] BYREF
  int v8; // [sp+106Ch] [bp-38h]
  _DWORD v9[7]; // [sp+1070h] [bp-34h] BYREF
  int v10; // [sp+108Ch] [bp-18h]
  int v11; // [sp+1094h] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s start", "chip_init_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "chip_init_eth_2282",
    18,
    8968,
    60,
    v4);
  usleep(0x12Cu);
  sub_106BA8(a1, 68, 30);
  sleep(1u);
  sub_106BA8(a1, 68, 29);
  sleep(1u);
  usleep(0x12Cu);
  if ( sub_10F334(a1) )
  {
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
      "check asic num failed",
      "chip_init_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "chip_init_eth_2282",
      18,
      9018,
      100,
      v4);
    return 12;
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 864);
    *(_DWORD *)(a1 + 468) = sub_10E7E4(*(_DWORD *)(a1 + 528), 6u);
    (*(void (__fastcall **)(int, _DWORD, int))(a1 + 288))(a1, *(_DWORD *)(a1 + 528), 6);
    V_LOCK();
    sub_FBD60((int)v9, *(int *)(a1 + 272));
    logfmt_raw(
      v4,
      0x1000u,
      0,
      v10,
      v9[0],
      v9[1],
      v9[2],
      v9[3],
      v9[4],
      v9[5],
      v9[6],
      v10,
      "%s bringup config...",
      "chip_init_eth_2282");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "chip_init_eth_2282",
      18,
      9028,
      60,
      v4);
    sub_106BA8(a1, 28, 202383104);
    set_frequency_eth_2282(a1, 1);
    set_frequency_eth_2282(a1, 0);
    sub_106D34(a1, 15, 3);
    sub_106D34(a1, 2, 0);
    usleep(0x12Cu);
    sub_106D34(a1, 2, 255);
    usleep(0x12Cu);
    sub_106D34(a1, 15, 3);
    usleep(0x12Cu);
    sub_106D34(a1, 26, 28);
    usleep(0x12Cu);
    sub_106BA8(a1, 64, 6);
    return 0;
  }
}
