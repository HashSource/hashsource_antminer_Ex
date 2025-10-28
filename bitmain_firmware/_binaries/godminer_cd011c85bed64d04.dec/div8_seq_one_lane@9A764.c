int __fastcall div8_seq_one_lane(int a1, int a2, unsigned __int8 a3, unsigned __int16 a4)
{
  int v7; // r0
  _BYTE v9[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  a4 <<= 12;
  v7 = logfmt_raw((int)v9, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "div8_seq_one_lane",
    17,
    9906,
    60,
    v9);
  sub_5E0B4(a1, a3, a4 | 1, 0xFFFF);
  sub_5E0B4(a1, a3, a4 | 0x8B, -16777216);
  sub_5E0B4(a1, a3, a4 | 1, -65536);
  sub_5E0B4(a1, a3, a4 | 0x8C, 65280);
  sub_5E0B4(a1, a3, a4 | 1, (int)&loc_FFFFC + 3);
  sub_5E0B4(a1, a3, a4 | 0x8C, -268435456);
  sub_5E0B4(a1, a3, a4 | 1, -1048576);
  sub_5E0B4(a1, a3, a4 | 0x8D, (int)&loc_FF00C + 3);
  sub_5E0B4(a1, a3, a4 | 1, 0xFFFFFF);
  sub_5E0B4(a1, a3, a4 | 0x8D, 0);
  sub_5E0B4(a1, a3, a4 | 1, -16777216);
  sub_5E0B4(a1, a3, a4 & 0xF000 | 0x8E, 16711935);
  sub_5E0B4(a1, a3, a4 | 1, 4095);
  sub_5E0B4(a1, a3, a4 & 0xF000 | 0x8A, 267386880);
  sub_5E0B4(a1, a3, a4 | 1, -4096);
  sub_5E0B4(a1, a3, a4 | 0x8B, 4080);
  sub_5E0B4(a1, a3, a4 | 1, 0);
  sub_5C968(a1, a3, 144, 0);
  sub_5C968(a1, a3, 145, -2147450879);
  sub_5C968(a1, a3, 144, 0);
  sub_5C968(a1, a3, 145, -2147442687);
  return 0;
}
