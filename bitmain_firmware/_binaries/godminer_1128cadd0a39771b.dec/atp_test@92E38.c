int __fastcall atp_test(int a1, int a2, unsigned __int8 a3, __int16 a4)
{
  int v5; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v14; // [sp+14h] [bp-4h]
  _BYTE v15[4100]; // [sp+18h] [bp+0h] BYREF

  v5 = (unsigned __int16)(a4 << 12) | 0x89;
  v14 = (unsigned __int16)(a4 << 12) | 1;
  sub_5E0B4(a1, a3, v14, -520093697);
  v7 = sub_5E0B4(a1, a3, v5, 251658240);
  V_LOCK(v7);
  v8 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8263,
    60,
    v15);
  while ( IO_getc((_IO_FILE *)stdin) != 10 )
    ;
  v9 = sub_5E0B4(a1, a3, v5, 385875968);
  V_LOCK(v9);
  v10 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8267,
    60,
    v15);
  v11 = IO_getc((_IO_FILE *)stdin);
  V_LOCK(v11);
  v12 = logfmt_raw((int)v15, 0x1000u);
  V_UNLOCK(v12);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "atp_test",
    8,
    8270,
    60,
    v15);
  sub_5E0B4(a1, a3, v5, 0);
  sub_5E0B4(a1, a3, v14, 0);
  return 0;
}
