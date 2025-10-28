int __fastcall setup_ref_clk_termination(int a1)
{
  int v2; // r0
  _BYTE v4[32]; // [sp+28h] [bp-20h] BYREF
  _BYTE v5[4096]; // [sp+48h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v4, "chain");
  v2 = logfmt_raw((int)v5, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "setup_ref_clk_termination",
    25,
    12182,
    60,
    v5);
  sub_5C248(a1, 81, 256);
  usleep(0x2710u);
  sub_5C2A0(a1, 1u, 81, 138);
  usleep(0x2710u);
  sub_5C2A0(a1, 5u, 81, 138);
  usleep(0x2710u);
  sub_5C2A0(a1, 9u, 81, 138);
  usleep(0x2710u);
  sub_5C2A0(a1, 0xDu, 81, 138);
  usleep(0x2710u);
  sub_5C2A0(a1, 2u, 81, 6);
  usleep(0x2710u);
  sub_5C2A0(a1, 6u, 81, 6);
  usleep(0x2710u);
  sub_5C2A0(a1, 0xAu, 81, 6);
  usleep(0x2710u);
  sub_5C2A0(a1, 0xEu, 81, 6);
  usleep(0x2710u);
  sub_5C248(a1, 84, 9586980);
  usleep(0x2710u);
  sub_5C248(a1, 92, 9586980);
  usleep(0x2710u);
  return 0;
}
