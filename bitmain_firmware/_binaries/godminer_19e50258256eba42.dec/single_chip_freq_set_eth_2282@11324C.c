int __fastcall single_chip_freq_set_eth_2282(int a1, int a2)
{
  float v2; // s0
  _BYTE v6[52]; // [sp+40h] [bp-1034h] BYREF
  _DWORD v7[7]; // [sp+1040h] [bp-34h] BYREF
  int v8; // [sp+105Ch] [bp-18h]
  float v9; // [sp+1060h] [bp-14h]
  float v10; // [sp+1064h] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v7, *(int *)(a1 + 272));
  logfmt_raw(
    v6,
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
    "chip-%d %s...",
    a2,
    "single_chip_freq_set_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "single_chip_freq_set_eth_2282",
    29,
    2028,
    60,
    v6);
  v10 = 400.0;
  v9 = 6.25;
  while ( v10 <= v2 )
  {
    set_single_chip_frequency_eth_2282(a1, 1, a2);
    usleep(0x64u);
    if ( v10 <= 500.0 )
    {
      set_single_chip_frequency_eth_2282(a1, 0, a2);
      usleep(0x64u);
    }
    sub_106F8C(a1, a2, 15, 3);
    set_single_chip_reset_eth_2282(a1, a2, 2, 254);
    usleep(0x64u);
    set_single_chip_reset_eth_2282(a1, a2, 2, 255);
    usleep(0x64u);
    sub_106F8C(a1, a2, 15, 3);
    sleep(0x1Eu);
    v10 = v10 + v9;
  }
  sub_106F8C(a1, a2, 192, 3872);
  return 0;
}
