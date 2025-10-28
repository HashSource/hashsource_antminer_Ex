int __fastcall serdes_phy_bist_external_phy1tx_phy2rx(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  _DWORD *v11; // r3
  char *v13; // r1
  int v14; // r10
  int v15; // r10
  int v16; // r1
  int v17; // r9
  int v18; // r9
  int v19; // r3
  int v20; // r2
  int v21; // r8
  int v22; // r3
  unsigned __int8 *v23; // r10
  unsigned __int8 v24; // r2
  unsigned __int8 v25; // t1
  unsigned int v27; // r3
  unsigned __int8 v28; // r2
  unsigned __int8 v29; // r3
  unsigned __int8 *i; // r9
  unsigned __int8 v31; // t1
  int v32; // [sp+20h] [bp-104Ch]
  _DWORD *v34; // [sp+30h] [bp-103Ch]
  int v35; // [sp+30h] [bp-103Ch]
  int v36; // [sp+3Ch] [bp-1030h]
  int v37; // [sp+40h] [bp-102Ch]
  _DWORD v38[7]; // [sp+48h] [bp-1024h] BYREF
  int v39; // [sp+64h] [bp-1008h]
  int v40; // [sp+68h] [bp-1004h] BYREF
  char v41; // [sp+6Ch] [bp-1000h] BYREF

  LOWORD(v11) = -14512;
  HIWORD(v11) = (unsigned int)&unk_16B55C >> 16;
  v34 = v11;
  V_LOCK();
  LOWORD(v13) = -7948;
  HIWORD(v13) = (unsigned int)&loc_12D594 >> 16;
  V_INT((int)v38, v13, *(int *)(a1 + 140));
  LOWORD(v14) = -22412;
  HIWORD(v14) = (unsigned int)&unk_139BA4 >> 16;
  v32 = v14;
  v15 = 61458;
  logfmt_raw(
    (char *)&v40,
    0x1000u,
    0,
    v39,
    v38[0],
    v38[1],
    v38[2],
    v38[3],
    v38[4],
    v38[5],
    v38[6],
    v39,
    v32,
    "serdes_phy_bist_external_phy1tx_phy2rx");
  V_UNLOCK();
  LOWORD(v16) = -25512;
  HIWORD(v16) = (unsigned int)"one" >> 16;
  zlog(*v34, v16, 154, "serdes_phy_bist_external_phy1tx_phy2rx", 38, 10425, 60, &v40);
  v17 = 61441;
  if ( a3 != 8 )
  {
    v17 = 1;
    v15 = 18;
  }
  sub_5C158(
    a1,
    a6,
    97,
    (a4 << 28) & 0x70000000
  | (a4 << 24) & 0x7000000
  | a4 & 7
  | (a4 << 20) & 0x700000
  | (a4 << 16) & 0x70000
  | ((_WORD)a4 << 12) & 0x7000
  | ((_WORD)a4 << 8) & 0x700
  | (16 * a4) & 0x70);
  sub_5D8A4(a1, a7, v17, -15);
  sub_5D8A4(a1, a7, v15, (2 * (_BYTE)a4) & 0xE);
  sub_5D8A4(a1, a7, v17, 0);
  if ( a5 )
  {
    v27 = a5 >> 1;
    if ( a5 >> 1 )
    {
      v28 = 0;
      do
      {
        v27 >>= 1;
        ++v28;
      }
      while ( v27 );
      v18 = v28;
      v36 = v28;
    }
    else
    {
      v36 = 0;
      v18 = 0;
    }
  }
  else
  {
    v36 = 1;
    v18 = 1;
  }
  V_LOCK();
  LOWORD(v19) = -22428;
  LOWORD(v20) = -22436;
  if ( a4 )
  {
    HIWORD(v19) = (unsigned int)&unk_139B94 >> 16;
    v21 = v19;
  }
  else
  {
    HIWORD(v20) = (unsigned int)&unk_139B8C >> 16;
    v21 = v20;
  }
  logfmt_raw((char *)&v40, 0x1000u, 0, "test %d %s...", v18, v21);
  V_UNLOCK();
  zlog(
    *v34,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/backend/backend_eth/backend_eth.c",
    154,
    "serdes_phy_bist_external_phy1tx_phy2rx",
    38,
    10449,
    60,
    &v40);
  switch ( a5 )
  {
    case 2u:
      div2_seq_one_lane(a1, a2, a6, a8);
      div2_seq_one_lane(a1, a2, a6, a8);
      break;
    case 4u:
      div4_seq_one_lane(a1, a2, a6, a8);
      div4_seq_one_lane(a1, a2, a6, a8);
      break;
    case 8u:
      div8_seq_one_lane(a1, a2, a6, a8);
      div8_seq_one_lane(a1, a2, a6, a8);
      break;
    default:
      V_LOCK();
      LOWORD(v22) = -22380;
      HIWORD(v22) = (unsigned int)&unk_139BC4 >> 16;
      logfmt_raw((char *)&v40, 0x1000u, 0, v22);
      V_UNLOCK();
      zlog(
        *v34,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_eth/backend_eth.c",
        154,
        "serdes_phy_bist_external_phy1tx_phy2rx",
        38,
        10464,
        60,
        &v40);
      break;
  }
  v40 = 336529925;
  v23 = (unsigned __int8 *)&v40 + 1;
  sub_5C158(a1, a6, 98, 1 << a8);
  v24 = 5;
  v37 = (unsigned __int16)(a9 << 12) | 0x91;
  v35 = (unsigned __int16)(a9 << 12) | 0x77;
  while ( 1 )
  {
    enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v24);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
    read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 0x91, 8);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, -1073741825);
    sub_5D8A4(a1, a7, v35, 0x40000000);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, a6, a8);
    check_bist_rx_running_one_lane(a1, a2, a7, a9);
    usleep(0x493E0u);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 0x91, 0);
    sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
    check_ref_clock_ready(a1, a2, a6);
    check_bist_done_one_lane(a1, a2, a6, a9);
    check_ref_clock_ready(a1, a2, a7);
    check_bist_done_one_lane(a1, a2, a7, a9);
    check_bist_error_one_lane(a1, a2, a7, a9);
    if ( &v41 == (char *)v23 )
      break;
    v25 = *v23++;
    v24 = v25;
  }
  if ( v36 == 4 )
  {
    enable_rx_equalizer_tuning_one_lane(a1, a2, a7, a9);
    v29 = 5;
    for ( i = (unsigned __int8 *)&v40 + 1; ; ++i )
    {
      enable_rxbist_autostop_one_lane(a1, a2, a7, a9, v29);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a6, a8);
      read_rx_debug_reg2_one_lane(a1, a2, (_BYTE *)a7, a9);
      sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
      sub_5D8A4(a1, a7, v37, 8);
      sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, -1073741825);
      sub_5D8A4(a1, a7, v35, 0x40000000);
      sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
      usleep((__useconds_t)&loc_F4240);
      check_bist_tx_running_one_lane(a1, a2, a6, a8);
      check_bist_rx_running_one_lane(a1, a2, a7, a9);
      usleep(0x493E0u);
      sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, -9);
      sub_5D8A4(a1, a7, v37, 0);
      sub_5D8A4(a1, a7, (unsigned __int16)(a9 << 12) | 1, 0);
      check_ref_clock_ready(a1, a2, a6);
      check_bist_done_one_lane(a1, a2, a6, a9);
      check_ref_clock_ready(a1, a2, a7);
      check_bist_done_one_lane(a1, a2, a7, a9);
      check_bist_error_one_lane(a1, a2, a7, a9);
      if ( i == v23 )
        break;
      v31 = *i;
      v29 = v31;
    }
  }
  sub_5C158(a1, a6, 98, 0);
  return 0;
}
