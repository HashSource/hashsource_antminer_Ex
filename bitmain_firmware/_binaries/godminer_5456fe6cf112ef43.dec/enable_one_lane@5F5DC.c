int __fastcall enable_one_lane(int a1)
{
  int v2; // r0
  _BYTE v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "enable_one_lane",
    15,
    500,
    20,
    v4);
  sub_5C26C(a1, 0, 0xFFu, 197, 0);
  sub_5C218(a1, 0, 199, (int)&loc_7FFFC + 3);
  sub_5C218(a1, 1u, 199, 2097103);
  sub_5C218(a1, 2u, 199, (int)&loc_7FFFC + 3);
  sub_5C218(a1, 5u, 199, (int)&loc_7FFFC + 3);
  sub_5C218(a1, 6u, 199, (int)&loc_7FFFC + 3);
  sub_5C218(a1, 7u, 199, 2097103);
  sub_5C218(a1, 0xFu, 199, (int)&loc_7FFFC + 3);
  sub_5C218(a1, 8u, 199, 2097103);
  sub_5C218(a1, 0, 159, 29360576);
  sub_5C218(a1, 1u, 159, 25297282);
  sub_5C218(a1, 2u, 159, 29360576);
  sub_5C218(a1, 5u, 159, 29360576);
  sub_5C218(a1, 6u, 159, 29360576);
  sub_5C218(a1, 7u, 159, 25297282);
  sub_5C218(a1, 0xFu, 159, 29360576);
  sub_5C218(a1, 8u, 159, 25297282);
  return 0;
}
