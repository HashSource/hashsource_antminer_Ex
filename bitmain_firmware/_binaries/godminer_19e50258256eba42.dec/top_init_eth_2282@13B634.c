int __fastcall top_init_eth_2282(int a1)
{
  _BYTE v4[44]; // [sp+30h] [bp-106Ch] BYREF
  _DWORD v5[7]; // [sp+1030h] [bp-6Ch] BYREF
  int v6; // [sp+104Ch] [bp-50h]
  _DWORD v7[7]; // [sp+1050h] [bp-4Ch] BYREF
  int v8; // [sp+106Ch] [bp-30h]
  _DWORD v9[7]; // [sp+1070h] [bp-2Ch] BYREF
  int v10; // [sp+108Ch] [bp-10h]

  V_LOCK();
  sub_FBD60((int)v5, *(int *)(a1 + 272));
  logfmt_raw(v4, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "%s start", "top_init_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "top_init_eth_2282",
    17,
    9083,
    60,
    v4);
  if ( chip_init_eth_2282(a1) )
  {
    V_LOCK();
    sub_FBD60((int)v7, *(int *)(a1 + 272));
    logfmt_raw(v4, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "chip init failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
      171,
      "top_init_eth_2282",
      17,
      9092,
      100,
      v4);
    return 12;
  }
  else
  {
    while ( sub_10F334(a1) )
    {
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
        "check asic num failed after set chip addr",
        "top_init_eth_2282");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2282/backend_eth_2282.c",
        171,
        "top_init_eth_2282",
        17,
        9099,
        100,
        v4);
    }
    if ( *(_BYTE *)(a1 + 500) != 1 )
      *(_DWORD *)(a1 + 504) = (unsigned __int16)freq_select;
    return 0;
  }
}
