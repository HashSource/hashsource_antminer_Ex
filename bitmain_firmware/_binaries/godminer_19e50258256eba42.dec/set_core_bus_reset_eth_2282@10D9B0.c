int __fastcall set_core_bus_reset_eth_2282(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  unsigned __int8 i; // [sp+1057h] [bp-Dh]

  V_LOCK();
  sub_FBD60((int)v4, *(int *)(a1 + 272));
  logfmt_raw(
    v3,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "%s...",
    "set_core_bus_reset_eth_2282");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2282/backend_eth_2282.c",
    171,
    "set_core_bus_reset_eth_2282",
    27,
    1066,
    60,
    v3);
  for ( i = 0; i <= 0x47u; ++i )
  {
    sub_1070C8(a1, i, 201, 0);
    usleep((__useconds_t)&stru_186A0);
    sub_1070C8(a1, i, 201, 1);
    usleep((__useconds_t)&stru_186A0);
  }
  return 0;
}
