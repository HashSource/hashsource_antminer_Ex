int __fastcall serdes_internal_loop_ate_init_rvn(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _BYTE v9[52]; // [sp+40h] [bp-10F4h] BYREF
  _DWORD v10[7]; // [sp+1040h] [bp-F4h] BYREF
  int v11; // [sp+105Ch] [bp-D8h]
  _DWORD v12[7]; // [sp+1060h] [bp-D4h] BYREF
  int v13; // [sp+107Ch] [bp-B8h]
  _DWORD v14[7]; // [sp+1080h] [bp-B4h] BYREF
  int v15; // [sp+109Ch] [bp-98h]
  _DWORD v16[7]; // [sp+10A0h] [bp-94h] BYREF
  int v17; // [sp+10BCh] [bp-78h]
  _DWORD v18[7]; // [sp+10C0h] [bp-74h] BYREF
  int v19; // [sp+10DCh] [bp-58h]
  _DWORD v20[7]; // [sp+10E0h] [bp-54h] BYREF
  int v21; // [sp+10FCh] [bp-38h]
  _DWORD v22[7]; // [sp+1100h] [bp-34h] BYREF
  int v23; // [sp+111Ch] [bp-18h]
  _DWORD *v24; // [sp+1124h] [bp-10h]

  V_LOCK();
  sub_1C61DC((int)v10, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v11,
    v10[0],
    v10[1],
    v10[2],
    v10[3],
    v10[4],
    v10[5],
    v10[6],
    v11,
    "%s ...",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    151,
    60,
    v9);
  v24 = malloc(0x1800u);
  sub_1D0F04(a1, a3, 240, 0x80000000);
  sub_1D13F0(a1, a3, 240, v24);
  V_LOCK();
  sub_1C61DC((int)v12, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v13,
    v12[0],
    v12[1],
    v12[2],
    v12[3],
    v12[4],
    v12[5],
    v12[6],
    v13,
    "%s core %d reg %04x rdata %08x",
    "serdes_internal_loop_ate_init_rvn",
    *((unsigned __int8 *)v24 + 8),
    240,
    *v24);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    158,
    60,
    v9);
  sub_1D0F04(a1, a3, 86, 67634184);
  sub_1D13F0(a1, a3, 86, v24);
  V_LOCK();
  sub_1C61DC((int)v14, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    "%s core %d reg %04x rdata %08x",
    "serdes_internal_loop_ate_init_rvn",
    *((unsigned __int8 *)v24 + 8),
    86,
    *v24);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    162,
    60,
    v9);
  sub_1D0F04(a1, a3, 64, 256);
  sub_1D0F04(a1, a3, 80, 33423870);
  sub_1D0F04(a1, a3, 81, 832516511);
  sub_1D0F04(a1, a3, 88, -1);
  sub_1D0F04(a1, a3, 86, 201853960);
  V_LOCK();
  sub_1C61DC((int)v16, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v17,
    v16[0],
    v16[1],
    v16[2],
    v16[3],
    v16[4],
    v16[5],
    v16[6],
    v17,
    "%s PHY core %02x sram ext load done",
    "serdes_internal_loop_ate_init_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    172,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x152u, 3);
  serdes_apb_read_rvn(a1, a2, a3, 0x152u);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, 512);
  serdes_apb_read_rvn(a1, a2, a3, 0x6042u);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, 1536);
  serdes_apb_write_rvn(a1, a2, a3, 0x17Du, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, a4 | 0x600);
  serdes_apb_write_rvn(a1, a2, a3, 0x6043u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, a4 << 7);
  serdes_apb_write_rvn(a1, a2, a3, 0x6042u, a4 | 7);
  serdes_apb_write_rvn(a1, a2, a3, 0x6043u, 256);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, (a4 << 7) | 0x8000);
  serdes_apb_write_rvn(a1, a2, a3, 0x500Cu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x500Cu, 4096);
  serdes_apb_write_rvn(a1, a2, a3, 0x12Au, 511);
  serdes_apb_write_rvn(a1, a2, a3, 0x12Bu, 4095);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, (a4 << 7) | 0x8020);
  serdes_apb_write_rvn(a1, a2, a3, 0x6044u, (a4 << 7) | 0x8060);
  serdes_apb_write_rvn(a1, a2, a3, 0x6059u, 0xFFFF);
  serdes_apb_write_rvn(a1, a2, a3, 0x605Au, 65407);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32928);
  if ( a4 == 2 )
    serdes_apb_write_rvn(a1, a2, a3, 0x6056u, 4160);
  else
    serdes_apb_write_rvn(a1, a2, a3, 0x6056u, 4144);
  serdes_apb_write_rvn(a1, a2, a3, 0x605Au, 0xFFFF);
  serdes_apb_write_rvn(a1, a2, a3, 0x6025u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6025u, 20);
  serdes_apb_write_rvn(a1, a2, a3, 0x6030u, 512);
  serdes_apb_write_rvn(a1, a2, a3, 0x6030u, 1876);
  serdes_apb_write_rvn(a1, a2, a3, 0x6026u, 0x4000);
  serdes_apb_write_rvn(a1, a2, a3, 0x6026u, 49172);
  if ( a4 == 2 )
    serdes_apb_write_rvn(a1, a2, a3, 0x6045u, 4);
  else
    serdes_apb_write_rvn(a1, a2, a3, 0x6045u, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x604Cu, 0xFFFF);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 4096);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 12288);
  serdes_apb_write_rvn(a1, a2, a3, 0x6039u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x6039u, 84);
  serdes_apb_write_rvn(a1, a2, a3, 0x5001u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5001u, 35);
  serdes_apb_write_rvn(a1, a2, a3, 0x5020u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x5020u, 8);
  serdes_apb_write_rvn(a1, a2, a3, 0x111u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x128u, 0x3FFF);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3584);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3592);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3584);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3592);
  serdes_apb_write_rvn(a1, a2, a3, 0x1Fu, 24);
  serdes_apb_write_rvn(a1, a2, a3, 0x154u, 341);
  serdes_apb_write_rvn(a1, a2, a3, 0x154u, 1023);
  serdes_apb_write_rvn(a1, a2, a3, 4u, 935);
  serdes_apb_write_rvn(a1, a2, a3, 4u, 999);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3592);
  serdes_apb_write_rvn(a1, a2, a3, 2u, 3848);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3592);
  serdes_apb_write_rvn(a1, a2, a3, 3u, 3848);
  serdes_apb_write_rvn(a1, a2, a3, 5u, 4);
  serdes_apb_write_rvn(a1, a2, a3, 5u, 12);
  serdes_apb_write_rvn(a1, a2, a3, 6u, 4);
  serdes_apb_write_rvn(a1, a2, a3, 6u, 12);
  serdes_apb_write_rvn(a1, a2, a3, 0xCu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0xCu, 16);
  serdes_apb_write_rvn(a1, a2, a3, 0x18u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x18u, 16);
  serdes_apb_write_rvn(a1, a2, a3, 0x10Eu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x10Eu, 10836);
  serdes_apb_write_rvn(a1, a2, a3, 0x104u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x104u, 2);
  if ( a4 == 2 )
    serdes_apb_write_rvn(a1, a2, a3, 0x60F9u, 498);
  else
    serdes_apb_write_rvn(a1, a2, a3, 0x60F9u, 501);
  serdes_apb_write_rvn(a1, a2, a3, 0x5003u, 384);
  serdes_apb_write_rvn(a1, a2, a3, 0x5003u, 1416);
  serdes_apb_write_rvn(a1, a2, a3, 0x5004u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x5004u, 8256);
  serdes_apb_write_rvn(a1, a2, a3, 0x602Fu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x602Fu, 2);
  serdes_apb_write_rvn(a1, a2, a3, 0x603Au, 8194);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 13312);
  serdes_apb_write_rvn(a1, a2, a3, 0x6027u, 15360);
  serdes_apb_write_rvn(a1, a2, a3, 0x603Fu, 8);
  serdes_apb_write_rvn(a1, a2, a3, 0x603Fu, 24);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 2);
  serdes_apb_write_rvn(a1, a2, a3, 0x60CCu, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Cu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x600Cu, 4096);
  serdes_apb_write_rvn(a1, a2, a3, 0x702Eu, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x702Eu, 2);
  serdes_apb_write_rvn(a1, a2, a3, 0x5023u, 65);
  serdes_apb_write_rvn(a1, a2, a3, 0x5023u, 203);
  serdes_apb_write_rvn(a1, a2, a3, 0x7067u, 4);
  serdes_apb_write_rvn(a1, a2, a3, 0x6028u, 10);
  serdes_apb_write_rvn(a1, a2, a3, 0x132u, 7);
  serdes_apb_read_rvn(a1, a2, a3, 0x132u);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32928);
  serdes_apb_read_rvn(a1, a2, a3, 0x6020u);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  serdes_apb_read_rvn(a1, a2, a3, 0x6020u);
  V_LOCK();
  sub_1C61DC((int)v18, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v19,
    v18[0],
    v18[1],
    v18[2],
    v18[3],
    v18[4],
    v18[5],
    v18[6],
    v19,
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    291,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x3014u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x3214u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x3414u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x3614u, 1);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 80);
  serdes_wait_status_rvn(a1, a2, a3, 0x2019u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2219u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2419u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2619u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1012u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1212u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1412u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x1612u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2004u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2204u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2404u, 0);
  serdes_wait_status_rvn(a1, a2, a3, 0x2604u, 0);
  serdes_apb_write_rvn(a1, a2, a3, 0x5071u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x6028u, 14);
  serdes_apb_write_rvn(a1, a2, a3, 0x6028u, 14);
  serdes_apb_write_rvn(a1, a2, a3, 0x714Fu, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x714Fu, 3);
  serdes_apb_write_rvn(a1, a2, a3, 0x714Fu, 7);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32939);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32939);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 93);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 93);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 93);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 93);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  usleep((__useconds_t)&stru_186A0);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 92);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 92);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 92);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 92);
  usleep(0xEA60u);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 49322);
  usleep(0xC350u);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 94);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 94);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 94);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 94);
  if ( a4 == 2 )
  {
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 3);
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 3);
    usleep(0x3E8u);
    serdes_wait_status_rvn(a1, a2, a3, 0x201Au, 1);
    serdes_wait_status_rvn(a1, a2, a3, 0x221Au, 1);
    serdes_wait_status_rvn(a1, a2, a3, 0x241Au, 1);
    serdes_wait_status_rvn(a1, a2, a3, 0x261Au, 1);
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 2);
    serdes_apb_write_rvn(a1, a2, a3, 0x600Au, 2);
    usleep((__useconds_t)&stru_186A0);
    serdes_wait_status_rvn(a1, a2, a3, 0x201Au, 0);
    serdes_wait_status_rvn(a1, a2, a3, 0x221Au, 0);
    serdes_wait_status_rvn(a1, a2, a3, 0x241Au, 0);
    serdes_wait_status_rvn(a1, a2, a3, 0x261Au, 0);
  }
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 32938);
  serdes_apb_write_rvn(a1, a2, a3, 0x6020u, 49322);
  usleep(0xC350u);
  V_LOCK();
  sub_1C61DC((int)v20, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v21,
    v20[0],
    v20[1],
    v20[2],
    v20[3],
    v20[4],
    v20[5],
    v20[6],
    v21,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    375,
    60,
    v9);
  serdes_wait_status_rvn(a1, a2, a3, 0x103Cu, 94);
  serdes_wait_status_rvn(a1, a2, a3, 0x123Cu, 94);
  serdes_wait_status_rvn(a1, a2, a3, 0x143Cu, 94);
  serdes_wait_status_rvn(a1, a2, a3, 0x163Cu, 94);
  V_LOCK();
  sub_1C61DC((int)v22, *(int *)(a1 + 272));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v23,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    380,
    60,
    v9);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 17);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 17);
  serdes_apb_write_rvn(a1, a2, a3, 0x5093u, 1);
  usleep(0x2710u);
  return 0;
}
