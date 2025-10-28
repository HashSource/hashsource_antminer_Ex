int __fastcall serdes_internal_loop_ate_init_rvn(int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r0
  void *v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  char *v16; // r3
  int v17; // r3
  int rvn; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v25; // [sp+40h] [bp-E8h]
  _BYTE v26[32]; // [sp+48h] [bp-E0h] BYREF
  _BYTE v27[32]; // [sp+68h] [bp-C0h] BYREF
  _BYTE v28[32]; // [sp+88h] [bp-A0h] BYREF
  _BYTE v29[32]; // [sp+A8h] [bp-80h] BYREF
  _BYTE v30[32]; // [sp+C8h] [bp-60h] BYREF
  _BYTE v31[32]; // [sp+E8h] [bp-40h] BYREF
  _BYTE v32[32]; // [sp+108h] [bp-20h] BYREF
  _BYTE v33[4100]; // [sp+128h] [bp+0h] BYREF

  V_LOCK(a1);
  V_INT((int)v26, "chain");
  v25 = a4;
  a4 <<= 7;
  v8 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    151,
    60,
    v33);
  v9 = malloc(0x300u);
  sub_99868(a1, a3, 240, 0x80000000);
  v10 = sub_998BC(a1, (unsigned __int16)a3, 240, v9);
  V_LOCK(v10);
  V_INT((int)v27, "chain");
  v11 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    158,
    60,
    v33);
  sub_99868(a1, a3, 86, 67634184);
  v12 = sub_998BC(a1, (unsigned __int16)a3, 86, v9);
  V_LOCK(v12);
  V_INT((int)v28, "chain");
  v13 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v13);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    162,
    60,
    v33);
  sub_99868(a1, a3, 64, 256);
  sub_99868(a1, a3, 80, 33423870);
  sub_99868(a1, a3, 81, 832516511);
  sub_99868(a1, a3, 88, -1);
  v14 = sub_99868(a1, a3, 86, 201853960);
  V_LOCK(v14);
  V_INT((int)v29, "chain");
  v15 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    172,
    60,
    v33);
  sub_99868(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99868(a1, a3, 78, -2144272046);
  serdes_apb_read_rvn(a1, a2, a3, 338);
  sub_99868(a1, a3, 77, 33554944);
  sub_99868(a1, a3, 78, -2144247742);
  serdes_apb_read_rvn(a1, a2, a3, 24642);
  sub_99868(a1, a3, 77, 100664832);
  sub_99868(a1, a3, 78, -2144247742);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144272003);
  sub_99DE0(a1, a3, 24642, v25 | 0x600);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144247741);
  sub_99DE0(a1, a3, 24644, a4);
  sub_99DE0(a1, a3, 24642, v25 | 7);
  sub_99868(a1, a3, 77, 16777472);
  sub_99868(a1, a3, 78, -2144247741);
  sub_99DE0(a1, a3, 24644, a4 | 0x8000);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144251892);
  sub_99868(a1, a3, 77, 268439552);
  sub_99868(a1, a3, 78, -2144251892);
  sub_99868(a1, a3, 77, 33489407);
  sub_99868(a1, a3, 78, -2144272086);
  sub_99868(a1, a3, 77, 268374015);
  sub_99868(a1, a3, 78, -2144272085);
  sub_99DE0(a1, a3, 24644, a4 | 0x8020);
  sub_99DE0(a1, a3, 24644, a4 | 0x8060);
  sub_99868(a1, a3, 77, -1);
  sub_99868(a1, a3, 78, -2144247719);
  sub_99868(a1, a3, 77, -8388737);
  sub_99868(a1, a3, 78, -2144247718);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144247776);
  sub_99868(a1, a3, 77, -2136964960);
  sub_99868(a1, a3, 78, -2144247776);
  if ( v25 == 2 )
  {
    sub_99868(a1, a3, 77, 272633920);
    sub_99868(a1, a3, 78, -2144247722);
    sub_99868(a1, a3, 77, -1);
    sub_99868(a1, a3, 78, -2144247718);
    sub_99868(a1, a3, 77, 0);
    sub_99868(a1, a3, 78, -2144247771);
    sub_99868(a1, a3, 77, (int)&unk_140014);
    sub_99868(a1, a3, 78, -2144247771);
    sub_99868(a1, a3, 77, 33554944);
    sub_99868(a1, a3, 78, -2144247760);
    sub_99868(a1, a3, 77, 122947412);
    sub_99868(a1, a3, 78, -2144247760);
    sub_99868(a1, a3, 77, 1073758208);
    sub_99868(a1, a3, 78, -2144247770);
    sub_99868(a1, a3, 77, -1072381932);
    sub_99868(a1, a3, 78, -2144247770);
    v16 = (char *)&loc_40004;
  }
  else
  {
    sub_99868(a1, a3, 77, 271585328);
    sub_99868(a1, a3, 78, -2144247722);
    sub_99868(a1, a3, 77, -1);
    sub_99868(a1, a3, 78, -2144247718);
    sub_99868(a1, a3, 77, 0);
    sub_99868(a1, a3, 78, -2144247771);
    sub_99868(a1, a3, 77, (int)&unk_140014);
    sub_99868(a1, a3, 78, -2144247771);
    sub_99868(a1, a3, 77, 33554944);
    sub_99868(a1, a3, 78, -2144247760);
    sub_99868(a1, a3, 77, 122947412);
    sub_99868(a1, a3, 78, -2144247760);
    sub_99868(a1, a3, 77, 1073758208);
    sub_99868(a1, a3, 78, -2144247770);
    sub_99868(a1, a3, 77, -1072381932);
    sub_99868(a1, a3, 78, -2144247770);
    v16 = (char *)&loc_30000 + 3;
  }
  sub_99868(a1, a3, 77, (int)v16);
  sub_99868(a1, a3, 78, -2144247739);
  sub_99868(a1, a3, 77, -1);
  sub_99868(a1, a3, 78, -2144247732);
  sub_99868(a1, a3, 77, 268439552);
  sub_99868(a1, a3, 78, -2144247769);
  sub_99868(a1, a3, 77, 805318656);
  sub_99868(a1, a3, 78, -2144247769);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144247751);
  sub_99868(a1, a3, 77, 5505108);
  sub_99868(a1, a3, 78, -2144247751);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144251903);
  sub_99868(a1, a3, 77, 2293795);
  sub_99868(a1, a3, 78, -2144251903);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144251872);
  sub_99868(a1, a3, 77, (int)&loc_80008);
  sub_99868(a1, a3, 78, -2144251872);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144272111);
  sub_99868(a1, a3, 77, 1073692671);
  sub_99868(a1, a3, 78, -2144272088);
  sub_99868(a1, a3, 77, 234884608);
  sub_99868(a1, a3, 78, -2144272382);
  sub_99868(a1, a3, 77, 235408904);
  sub_99868(a1, a3, 78, -2144272382);
  sub_99868(a1, a3, 77, 234884608);
  sub_99868(a1, a3, 78, -2144272381);
  sub_99868(a1, a3, 77, 235408904);
  sub_99868(a1, a3, 78, -2144272381);
  sub_99868(a1, a3, 77, (int)&unk_180018);
  sub_99868(a1, a3, 78, -2144272353);
  sub_99868(a1, a3, 77, 22348117);
  sub_99868(a1, a3, 78, -2144272044);
  sub_99868(a1, a3, 77, 67044351);
  sub_99868(a1, a3, 78, -2144272044);
  sub_99868(a1, a3, 77, 61277095);
  sub_99868(a1, a3, 78, -2144272380);
  sub_99868(a1, a3, 77, 65471463);
  sub_99868(a1, a3, 78, -2144272380);
  sub_99868(a1, a3, 77, 235408904);
  sub_99868(a1, a3, 78, -2144272382);
  sub_99868(a1, a3, 77, 252186376);
  sub_99868(a1, a3, 78, -2144272382);
  sub_99868(a1, a3, 77, 235408904);
  sub_99868(a1, a3, 78, -2144272381);
  sub_99868(a1, a3, 77, 252186376);
  sub_99868(a1, a3, 78, -2144272381);
  sub_99868(a1, a3, 77, (int)&loc_40004);
  sub_99868(a1, a3, 78, -2144272379);
  sub_99868(a1, a3, 77, (int)&loc_C000C);
  sub_99868(a1, a3, 78, -2144272379);
  sub_99868(a1, a3, 77, (int)&loc_40004);
  sub_99868(a1, a3, 78, -2144272378);
  sub_99868(a1, a3, 77, (int)&loc_C000C);
  sub_99868(a1, a3, 78, -2144272378);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144272372);
  sub_99868(a1, a3, 77, (int)&loc_100010);
  sub_99868(a1, a3, 78, -2144272372);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144272360);
  sub_99868(a1, a3, 77, (int)&loc_100010);
  sub_99868(a1, a3, 78, -2144272360);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144272114);
  sub_99868(a1, a3, 77, 710158932);
  sub_99868(a1, a3, 78, -2144272114);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144272124);
  sub_99868(a1, a3, 77, (int)"h");
  sub_99868(a1, a3, 78, -2144272124);
  if ( v25 == 2 )
    LOWORD(v17) = 498;
  else
    LOWORD(v17) = 501;
  if ( v25 == 2 )
    HIWORD(v17) = 498;
  else
    HIWORD(v17) = 501;
  sub_99868(a1, a3, 77, v17);
  sub_99868(a1, a3, 78, -2144247559);
  sub_99868(a1, a3, 77, 25166208);
  sub_99868(a1, a3, 78, -2144251901);
  sub_99868(a1, a3, 77, 92800392);
  sub_99868(a1, a3, 78, -2144251901);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144251900);
  sub_99868(a1, a3, 77, 541073472);
  sub_99868(a1, a3, 78, -2144251900);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144247761);
  sub_99868(a1, a3, 77, (int)"h");
  sub_99868(a1, a3, 78, -2144247761);
  sub_99868(a1, a3, 77, 537010178);
  sub_99868(a1, a3, 78, -2144247750);
  sub_99868(a1, a3, 77, 872428544);
  sub_99868(a1, a3, 78, -2144247769);
  sub_99868(a1, a3, 77, 1006648320);
  sub_99868(a1, a3, 78, -2144247769);
  sub_99868(a1, a3, 77, (int)&loc_80008);
  sub_99868(a1, a3, 78, -2144247745);
  sub_99868(a1, a3, 77, (int)&unk_180018);
  sub_99868(a1, a3, 78, -2144247745);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144247798);
  sub_99868(a1, a3, 77, (int)"h");
  sub_99868(a1, a3, 78, -2144247798);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144247604);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144247796);
  sub_99868(a1, a3, 77, 268439552);
  sub_99868(a1, a3, 78, -2144247796);
  sub_99868(a1, a3, 77, 0);
  sub_99868(a1, a3, 78, -2144243666);
  sub_99868(a1, a3, 77, (int)"h");
  sub_99868(a1, a3, 78, -2144243666);
  sub_99868(a1, a3, 77, 4259905);
  sub_99868(a1, a3, 78, -2144251869);
  sub_99868(a1, a3, 77, 13304011);
  sub_99868(a1, a3, 78, -2144251869);
  sub_99868(a1, a3, 77, (int)&loc_40004);
  sub_99868(a1, a3, 78, -2144243609);
  sub_99868(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_99868(a1, a3, 78, -2144247768);
  sub_99868(a1, a3, 77, (int)&loc_70004 + 3);
  sub_99868(a1, a3, 78, -2144272078);
  serdes_apb_read_rvn(a1, a2, a3, 306);
  sub_99868(a1, a3, 77, -2136964960);
  sub_99868(a1, a3, 78, -2144247776);
  serdes_apb_read_rvn(a1, a2, a3, 24608);
  sub_99868(a1, a3, 77, -2136309590);
  sub_99868(a1, a3, 78, -2144247776);
  rvn = serdes_apb_read_rvn(a1, a2, a3, 24608);
  V_LOCK(rvn);
  V_INT((int)v30, "chain");
  v19 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    291,
    60,
    v33);
  serdes_wait_status_rvn(a1, a2, a3, 12308, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 12820, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13332, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13844, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144251791);
  sub_99868(a1, a3, 77, (int)&loc_E000C + 2);
  sub_99868(a1, a3, 78, -2144247768);
  sub_99868(a1, a3, 77, (int)&loc_E000C + 2);
  sub_99868(a1, a3, 78, -2144247768);
  sub_99868(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99868(a1, a3, 78, -2144243377);
  sub_99868(a1, a3, 77, (int)&loc_30000 + 3);
  sub_99868(a1, a3, 78, -2144243377);
  sub_99868(a1, a3, 77, (int)&loc_70004 + 3);
  sub_99868(a1, a3, 78, -2144243377);
  sub_99868(a1, a3, 77, -2136244053);
  sub_99868(a1, a3, 78, -2144247776);
  sub_99868(a1, a3, 77, -2136244053);
  sub_99868(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 93);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 93);
  sub_99868(a1, a3, 77, -2136309590);
  sub_99868(a1, a3, 78, -2144247776);
  sub_99868(a1, a3, 77, -2136309590);
  sub_99868(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_1869C.st_value);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 92);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  sub_99868(a1, a3, 77, -1062551382);
  sub_99868(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  if ( v25 == 2 )
  {
    sub_99868(a1, a3, 77, (int)&loc_30000 + 3);
    sub_99868(a1, a3, 78, -2144247798);
    sub_99868(a1, a3, 77, (int)&loc_30000 + 3);
    sub_99868(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 8730, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9242, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9754, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    sub_99868(a1, a3, 77, (int)"h");
    sub_99868(a1, a3, 78, -2144247798);
    sub_99868(a1, a3, 77, (int)"h");
    sub_99868(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&stru_1869C.st_value);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  sub_99868(a1, a3, 77, -2136309590);
  sub_99868(a1, a3, 78, -2144247776);
  sub_99868(a1, a3, 77, -1062551382);
  sub_99868(a1, a3, 78, -2144247776);
  v20 = usleep(0xC350u);
  V_LOCK(v20);
  V_INT((int)v31, "chain");
  v21 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v21);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    375,
    60,
    v33);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  v22 = serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  V_LOCK(v22);
  V_INT((int)v32, "chain");
  v23 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v23);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
    177,
    "serdes_internal_loop_ate_init_rvn",
    33,
    380,
    60,
    v33);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144251757);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144251757);
  sub_99868(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99868(a1, a3, 78, -2144251757);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144251757);
  sub_99868(a1, a3, 77, (int)&loc_110010 + 1);
  sub_99868(a1, a3, 78, -2144251757);
  sub_99868(a1, a3, 77, (int)&dword_10000 + 1);
  sub_99868(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
